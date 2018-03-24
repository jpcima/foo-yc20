/*

Copyright (C) Grame 2015

This library is free software; you can redistribute it and modify it under
the terms of the GNU Library General Public License as published by the
Free Software Foundation version 2 of the License, or any later version.

This library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public License
for more details.

You should have received a copy of the GNU Library General Public License
along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Grame Research Laboratory, 9, rue du Garet 69001 Lyon - France
research@grame.fr

*/

#ifndef __SoundFileReader__
#define __SoundFileReader__

#include <sndfile.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

#ifndef FAUSTFLOAT
#define READ_SAMPLE sf_readf_float
#define FAUSTFLOAT float
#else
#define READ_SAMPLE sf_readf_double
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SoundFileReader {
    FAUSTFLOAT** fBuffer;
    SNDFILE* fSoundFile;
    int fChannels;
    int fFramesNum;
} SoundFileReader;
    
inline static SoundFileReader* createSFR(const char* name)
{
    SoundFileReader* reader = (SoundFileReader*)calloc(1, sizeof(SoundFileReader));
    if (!reader) return NULL;

    {
        SF_INFO	snd_info;
        snd_info.format = 0;
        reader->fSoundFile = sf_open(name, SFM_READ, &snd_info);
        
        if (!reader->fSoundFile) {
            printf("soundfile '%s' cannot be opened\n", name);
            goto error;
        }
        
        reader->fChannels = snd_info.channels;
        reader->fFramesNum = snd_info.frames;

        reader->fBuffer = (FAUSTFLOAT**)malloc(reader->fChannels * sizeof(FAUSTFLOAT*));
        if (!reader) goto error;
        
        for (int i = 0; i < reader->fChannels; i++) {
            reader->fBuffer[i] = (FAUSTFLOAT*)malloc(reader->fFramesNum * sizeof(FAUSTFLOAT));
            if (!reader->fBuffer[i]) goto error;
        }
        
        // Read file in memory
        int nbf, cur_index = 0;
        FAUSTFLOAT buffer[BUFFER_SIZE * reader->fChannels];
        do {
            nbf = READ_SAMPLE(reader->fSoundFile, buffer, BUFFER_SIZE);
            for (int sample = 0; sample < nbf; sample++) {
                for (int chan = 0; chan < reader->fChannels; chan++) {
                    reader->fBuffer[chan][cur_index + sample] = buffer[sample * reader->fChannels + chan];
                }
            }
            cur_index += nbf;
        } while (nbf == BUFFER_SIZE);
        
        return reader;
    }
    
error:
    if (reader->fBuffer) free(reader->fBuffer);
    if (reader) free(reader);
    return NULL;
}

inline static void destroySFR(SoundFileReader* reader)
{
    if (reader) {
        sf_close(reader->fSoundFile);
        for (int i = 0; i < reader->fChannels; i++) {
            free(reader->fBuffer[i]);
        }
        free(reader->fBuffer);
        free(reader);
    }
}

inline static int sizeSFR(SoundFileReader* reader)
{
    return (reader) ? reader->fFramesNum : 1; 
}

inline static int channelsSFR(SoundFileReader* reader)
{
    return (reader) ? reader->fChannels : 1; 
}

inline static FAUSTFLOAT sampleSFR(SoundFileReader* reader, int channel, int index)
{   
    return (reader) ? reader->fBuffer[channel][index] : 0.f;
}

#ifdef __cplusplus
}
#endif

#endif
