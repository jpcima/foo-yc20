/* ------------------------------------------------------------
name: "plugin"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -vec -lv 0 -vs 32 -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

/* link with : "" */
#include "yc20-precalc.h"
#include <cmath>
#include <math.h>

float mydsp_faustpower2_f(float value) {
	return (value * value);
	
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT* fOutput0_ptr;
	FAUSTFLOAT* fOutput1_ptr;
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fRec5_perm[4];
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fRec4_perm[4];
	int iRec6_perm[4];
	float fYec0_perm[4];
	int iRec3_perm[4];
	float fYec1_perm[4];
	int iRec2_perm[4];
	float fConst2;
	float fYec2_perm[4];
	float fRec1_perm[4];
	float fConst3;
	float fConst4;
	float fConst5;
	float fRec0_perm[4];
	float fRec11_perm[4];
	int iRec12_perm[4];
	float fYec3_perm[4];
	int iRec10_perm[4];
	float fYec4_perm[4];
	int iRec9_perm[4];
	float fYec5_perm[4];
	float fRec8_perm[4];
	float fRec7_perm[4];
	float fRec17_perm[4];
	int iRec18_perm[4];
	float fYec6_perm[4];
	int iRec16_perm[4];
	float fYec7_perm[4];
	int iRec15_perm[4];
	float fYec8_perm[4];
	float fRec14_perm[4];
	float fRec13_perm[4];
	float fRec23_perm[4];
	int iRec24_perm[4];
	float fYec9_perm[4];
	int iRec22_perm[4];
	float fYec10_perm[4];
	int iRec21_perm[4];
	float fYec11_perm[4];
	float fRec20_perm[4];
	float fRec19_perm[4];
	float fRec29_perm[4];
	int iRec30_perm[4];
	float fYec12_perm[4];
	int iRec28_perm[4];
	float fYec13_perm[4];
	int iRec27_perm[4];
	float fConst6;
	float fYec14_perm[4];
	float fRec26_perm[4];
	float fRec25_perm[4];
	float fRec35_perm[4];
	int iRec36_perm[4];
	float fYec15_perm[4];
	int iRec34_perm[4];
	float fYec16_perm[4];
	int iRec33_perm[4];
	float fYec17_perm[4];
	float fRec32_perm[4];
	float fRec31_perm[4];
	float fRec41_perm[4];
	int iRec42_perm[4];
	float fYec18_perm[4];
	int iRec40_perm[4];
	float fYec19_perm[4];
	int iRec39_perm[4];
	float fYec20_perm[4];
	float fRec38_perm[4];
	float fRec37_perm[4];
	float fRec47_perm[4];
	int iRec48_perm[4];
	float fYec21_perm[4];
	int iRec46_perm[4];
	float fYec22_perm[4];
	int iRec45_perm[4];
	float fYec23_perm[4];
	float fRec44_perm[4];
	float fRec43_perm[4];
	float fRec53_perm[4];
	int iRec54_perm[4];
	float fYec24_perm[4];
	int iRec52_perm[4];
	float fYec25_perm[4];
	int iRec51_perm[4];
	float fConst7;
	float fYec26_perm[4];
	float fRec50_perm[4];
	float fRec49_perm[4];
	float fRec59_perm[4];
	int iRec60_perm[4];
	float fYec27_perm[4];
	int iRec58_perm[4];
	float fYec28_perm[4];
	int iRec57_perm[4];
	float fYec29_perm[4];
	float fRec56_perm[4];
	float fRec55_perm[4];
	float fRec65_perm[4];
	int iRec66_perm[4];
	float fYec30_perm[4];
	int iRec64_perm[4];
	float fYec31_perm[4];
	int iRec63_perm[4];
	float fYec32_perm[4];
	float fRec62_perm[4];
	float fRec61_perm[4];
	float fRec71_perm[4];
	int iRec72_perm[4];
	float fYec33_perm[4];
	int iRec70_perm[4];
	float fYec34_perm[4];
	int iRec69_perm[4];
	float fYec35_perm[4];
	float fRec68_perm[4];
	float fRec67_perm[4];
	float fConst8;
	float fRec74_perm[4];
	float fRec73_perm[4];
	float fRec76_perm[4];
	float fRec75_perm[4];
	float fRec78_perm[4];
	float fRec77_perm[4];
	float fRec80_perm[4];
	float fRec79_perm[4];
	float fConst9;
	float fRec82_perm[4];
	float fRec81_perm[4];
	float fRec84_perm[4];
	float fRec83_perm[4];
	float fRec86_perm[4];
	float fRec85_perm[4];
	float fRec88_perm[4];
	float fRec87_perm[4];
	float fConst10;
	float fRec90_perm[4];
	float fRec89_perm[4];
	float fRec92_perm[4];
	float fRec91_perm[4];
	float fRec94_perm[4];
	float fRec93_perm[4];
	float fRec96_perm[4];
	float fRec95_perm[4];
	float fConst11;
	float fRec98_perm[4];
	float fRec97_perm[4];
	float fRec100_perm[4];
	float fRec99_perm[4];
	float fRec102_perm[4];
	float fRec101_perm[4];
	float fRec104_perm[4];
	float fRec103_perm[4];
	float fConst12;
	float fRec106_perm[4];
	float fRec105_perm[4];
	float fRec108_perm[4];
	float fRec107_perm[4];
	float fRec110_perm[4];
	float fRec109_perm[4];
	float fRec112_perm[4];
	float fRec111_perm[4];
	float fConst13;
	float fRec114_perm[4];
	float fRec113_perm[4];
	float fRec116_perm[4];
	float fRec115_perm[4];
	float fRec118_perm[4];
	float fRec117_perm[4];
	float fRec120_perm[4];
	float fRec119_perm[4];
	float fConst14;
	float fYec36_perm[4];
	float fRec121_perm[4];
	float fYec37_perm[4];
	float fRec122_perm[4];
	float fYec38_perm[4];
	float fRec123_perm[4];
	float fYec39_perm[4];
	float fRec124_perm[4];
	float fYec40_perm[4];
	float fRec125_perm[4];
	float fYec41_perm[4];
	float fRec126_perm[4];
	float fYec42_perm[4];
	float fRec127_perm[4];
	float fYec43_perm[4];
	float fRec128_perm[4];
	float fYec44_perm[4];
	float fRec129_perm[4];
	float fYec45_perm[4];
	float fRec130_perm[4];
	float fYec46_perm[4];
	float fRec131_perm[4];
	float fYec47_perm[4];
	float fRec132_perm[4];
	float fConst15;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fButton0;
	float fVec0_perm[4];
	FAUSTFLOAT fButton1;
	float fVec1_perm[4];
	FAUSTFLOAT fButton2;
	float fVec2_perm[4];
	FAUSTFLOAT fButton3;
	float fVec3_perm[4];
	FAUSTFLOAT fButton4;
	float fVec4_perm[4];
	FAUSTFLOAT fButton5;
	float fVec5_perm[4];
	FAUSTFLOAT fButton6;
	float fVec6_perm[4];
	FAUSTFLOAT fButton7;
	float fVec7_perm[4];
	FAUSTFLOAT fButton8;
	float fVec8_perm[4];
	FAUSTFLOAT fButton9;
	float fVec9_perm[4];
	FAUSTFLOAT fButton10;
	float fVec10_perm[4];
	FAUSTFLOAT fButton11;
	float fVec11_perm[4];
	FAUSTFLOAT fButton12;
	float fVec12_perm[4];
	FAUSTFLOAT fButton13;
	float fVec13_perm[4];
	FAUSTFLOAT fButton14;
	float fVec14_perm[4];
	FAUSTFLOAT fButton15;
	float fVec15_perm[4];
	FAUSTFLOAT fButton16;
	float fVec16_perm[4];
	FAUSTFLOAT fButton17;
	float fVec17_perm[4];
	FAUSTFLOAT fButton18;
	float fVec18_perm[4];
	FAUSTFLOAT fButton19;
	float fVec19_perm[4];
	FAUSTFLOAT fButton20;
	float fVec20_perm[4];
	FAUSTFLOAT fButton21;
	float fVec21_perm[4];
	FAUSTFLOAT fButton22;
	float fVec22_perm[4];
	FAUSTFLOAT fButton23;
	float fVec23_perm[4];
	FAUSTFLOAT fButton24;
	float fVec24_perm[4];
	FAUSTFLOAT fButton25;
	float fVec25_perm[4];
	FAUSTFLOAT fButton26;
	float fVec26_perm[4];
	FAUSTFLOAT fButton27;
	float fVec27_perm[4];
	FAUSTFLOAT fButton28;
	float fVec28_perm[4];
	FAUSTFLOAT fButton29;
	float fVec29_perm[4];
	FAUSTFLOAT fButton30;
	float fVec30_perm[4];
	FAUSTFLOAT fButton31;
	float fVec31_perm[4];
	FAUSTFLOAT fButton32;
	float fVec32_perm[4];
	FAUSTFLOAT fButton33;
	float fVec33_perm[4];
	FAUSTFLOAT fButton34;
	float fVec34_perm[4];
	FAUSTFLOAT fButton35;
	float fVec35_perm[4];
	FAUSTFLOAT fButton36;
	float fVec36_perm[4];
	FAUSTFLOAT fButton37;
	float fVec37_perm[4];
	FAUSTFLOAT fButton38;
	float fVec38_perm[4];
	FAUSTFLOAT fButton39;
	float fVec39_perm[4];
	FAUSTFLOAT fButton40;
	float fVec40_perm[4];
	FAUSTFLOAT fButton41;
	float fVec41_perm[4];
	FAUSTFLOAT fButton42;
	float fVec42_perm[4];
	FAUSTFLOAT fButton43;
	float fVec43_perm[4];
	FAUSTFLOAT fButton44;
	float fVec44_perm[4];
	FAUSTFLOAT fButton45;
	float fVec45_perm[4];
	FAUSTFLOAT fButton46;
	float fVec46_perm[4];
	FAUSTFLOAT fButton47;
	float fVec47_perm[4];
	FAUSTFLOAT fButton48;
	float fVec48_perm[4];
	FAUSTFLOAT fButton49;
	float fVec49_perm[4];
	FAUSTFLOAT fButton50;
	float fVec50_perm[4];
	FAUSTFLOAT fButton51;
	float fVec51_perm[4];
	FAUSTFLOAT fButton52;
	float fVec52_perm[4];
	FAUSTFLOAT fButton53;
	float fVec53_perm[4];
	FAUSTFLOAT fButton54;
	float fVec54_perm[4];
	FAUSTFLOAT fButton55;
	float fVec55_perm[4];
	FAUSTFLOAT fButton56;
	float fVec56_perm[4];
	FAUSTFLOAT fButton57;
	float fVec57_perm[4];
	FAUSTFLOAT fButton58;
	float fVec58_perm[4];
	FAUSTFLOAT fButton59;
	float fVec59_perm[4];
	FAUSTFLOAT fButton60;
	float fVec60_perm[4];
	float fYec48_perm[4];
	float fRec133_perm[4];
	int iRec136_perm[4];
	float fConst16;
	float fYec49_perm[4];
	float fRec135_perm[4];
	float fRec134_perm[4];
	int iRec139_perm[4];
	float fYec50_perm[4];
	float fRec138_perm[4];
	float fRec137_perm[4];
	int iRec142_perm[4];
	float fYec51_perm[4];
	float fRec141_perm[4];
	float fRec140_perm[4];
	int iRec145_perm[4];
	float fYec52_perm[4];
	float fRec144_perm[4];
	float fRec143_perm[4];
	int iRec148_perm[4];
	float fConst17;
	float fYec53_perm[4];
	float fRec147_perm[4];
	float fRec146_perm[4];
	int iRec151_perm[4];
	float fYec54_perm[4];
	float fRec150_perm[4];
	float fRec149_perm[4];
	int iRec154_perm[4];
	float fYec55_perm[4];
	float fRec153_perm[4];
	float fRec152_perm[4];
	int iRec157_perm[4];
	float fYec56_perm[4];
	float fRec156_perm[4];
	float fRec155_perm[4];
	float fYec57_perm[4];
	float fRec158_perm[4];
	int iRec161_perm[4];
	float fConst18;
	float fYec58_perm[4];
	float fRec160_perm[4];
	float fRec159_perm[4];
	int iRec164_perm[4];
	float fYec59_perm[4];
	float fRec163_perm[4];
	float fRec162_perm[4];
	int iRec167_perm[4];
	float fYec60_perm[4];
	float fRec166_perm[4];
	float fRec165_perm[4];
	int iRec170_perm[4];
	float fYec61_perm[4];
	float fRec169_perm[4];
	float fRec168_perm[4];
	float fYec62_perm[4];
	float fRec171_perm[4];
	int iRec174_perm[4];
	float fConst19;
	float fYec63_perm[4];
	float fRec173_perm[4];
	float fConst20;
	float fRec172_perm[4];
	int iRec177_perm[4];
	float fConst21;
	float fYec64_perm[4];
	float fRec176_perm[4];
	float fRec175_perm[4];
	int iRec180_perm[4];
	float fYec65_perm[4];
	float fRec179_perm[4];
	float fRec178_perm[4];
	int iRec183_perm[4];
	float fYec66_perm[4];
	float fRec182_perm[4];
	float fRec181_perm[4];
	int iRec186_perm[4];
	float fYec67_perm[4];
	float fRec185_perm[4];
	float fRec184_perm[4];
	float fYec68_perm[4];
	float fRec187_perm[4];
	int iRec190_perm[4];
	float fConst22;
	float fYec69_perm[4];
	float fRec189_perm[4];
	float fRec188_perm[4];
	int iRec193_perm[4];
	float fYec70_perm[4];
	float fRec192_perm[4];
	float fRec191_perm[4];
	int iRec196_perm[4];
	float fYec71_perm[4];
	float fRec195_perm[4];
	float fRec194_perm[4];
	int iRec199_perm[4];
	float fYec72_perm[4];
	float fRec198_perm[4];
	float fRec197_perm[4];
	int iRec202_perm[4];
	float fYec73_perm[4];
	float fRec201_perm[4];
	float fRec200_perm[4];
	int iRec205_perm[4];
	float fYec74_perm[4];
	float fRec204_perm[4];
	float fRec203_perm[4];
	int iRec208_perm[4];
	float fYec75_perm[4];
	float fRec207_perm[4];
	float fRec206_perm[4];
	float fYec76_perm[4];
	float fRec209_perm[4];
	int iRec212_perm[4];
	float fConst23;
	float fYec77_perm[4];
	float fRec211_perm[4];
	float fConst24;
	float fRec210_perm[4];
	int iRec215_perm[4];
	float fYec78_perm[4];
	float fRec214_perm[4];
	float fRec213_perm[4];
	int iRec218_perm[4];
	float fYec79_perm[4];
	float fRec217_perm[4];
	float fRec216_perm[4];
	int iRec221_perm[4];
	float fYec80_perm[4];
	float fRec220_perm[4];
	float fRec219_perm[4];
	int iRec224_perm[4];
	float fConst25;
	float fYec81_perm[4];
	float fRec223_perm[4];
	float fRec222_perm[4];
	int iRec227_perm[4];
	float fYec82_perm[4];
	float fRec226_perm[4];
	float fRec225_perm[4];
	int iRec230_perm[4];
	float fYec83_perm[4];
	float fRec229_perm[4];
	float fRec228_perm[4];
	int iRec233_perm[4];
	float fYec84_perm[4];
	float fRec232_perm[4];
	float fRec231_perm[4];
	int iRec236_perm[4];
	float fYec85_perm[4];
	float fRec235_perm[4];
	float fRec234_perm[4];
	int iRec239_perm[4];
	float fYec86_perm[4];
	float fRec238_perm[4];
	float fRec237_perm[4];
	int iRec242_perm[4];
	float fYec87_perm[4];
	float fRec241_perm[4];
	float fRec240_perm[4];
	int iRec245_perm[4];
	float fYec88_perm[4];
	float fRec244_perm[4];
	float fRec243_perm[4];
	float fYec89_perm[4];
	float fRec246_perm[4];
	int iRec249_perm[4];
	float fConst26;
	float fRec248_perm[4];
	float fConst27;
	float fRec247_perm[4];
	int iRec252_perm[4];
	float fRec251_perm[4];
	float fRec250_perm[4];
	int iRec255_perm[4];
	float fRec254_perm[4];
	float fRec253_perm[4];
	int iRec258_perm[4];
	float fRec257_perm[4];
	float fRec256_perm[4];
	int iRec261_perm[4];
	float fRec260_perm[4];
	float fRec259_perm[4];
	int iRec264_perm[4];
	float fRec263_perm[4];
	float fRec262_perm[4];
	int iRec267_perm[4];
	float fRec266_perm[4];
	float fRec265_perm[4];
	int iRec270_perm[4];
	float fRec269_perm[4];
	float fRec268_perm[4];
	int iRec273_perm[4];
	float fRec272_perm[4];
	float fRec271_perm[4];
	int iRec276_perm[4];
	float fRec275_perm[4];
	float fRec274_perm[4];
	int iRec279_perm[4];
	float fRec278_perm[4];
	float fRec277_perm[4];
	int iRec282_perm[4];
	float fRec281_perm[4];
	float fRec280_perm[4];
	float fYec90_perm[4];
	float fRec283_perm[4];
	float fConst28;
	FAUSTFLOAT fVslider0;
	float fYec91_perm[4];
	float fRec285_perm[4];
	float fConst29;
	float fYec92_perm[4];
	float fRec284_perm[4];
	float fConst30;
	FAUSTFLOAT fVslider1;
	float fYec93_perm[4];
	float fRec287_perm[4];
	float fConst31;
	float fYec94_perm[4];
	float fRec286_perm[4];
	float fConst32;
	FAUSTFLOAT fVslider2;
	float fYec95_perm[4];
	float fRec289_perm[4];
	float fConst33;
	float fYec96_perm[4];
	float fRec288_perm[4];
	float fConst34;
	FAUSTFLOAT fVslider3;
	float fYec97_perm[4];
	float fRec291_perm[4];
	float fConst35;
	float fYec98_perm[4];
	float fRec290_perm[4];
	float fRec293_perm[4];
	float fRec292_perm[4];
	float fRec295_perm[4];
	float fRec294_perm[4];
	float fRec297_perm[4];
	float fRec296_perm[4];
	float fRec299_perm[4];
	float fRec298_perm[4];
	int iRec305_perm[4];
	int iConst36;
	float fRec302_perm[4];
	int iRec303_perm[4];
	float fRec304_perm[4];
	float fConst37;
	float fYec99_perm[4];
	float fRec301_perm[4];
	float fConst38;
	float fConst39;
	float fRec300_perm[4];
	float fConst40;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fRec306_perm[4];
	FAUSTFLOAT fVslider6;
	float fRec307_perm[4];
	FAUSTFLOAT fHslider5;
	float fRec308_perm[4];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	FAUSTFLOAT fHslider7;
	float fConst41;
	float fYec100_perm[4];
	float fRec5_tmp[36];
	float fRec4_tmp[36];
	int iRec6_tmp[36];
	float fYec0_tmp[36];
	int iRec3_tmp[36];
	float fYec1_tmp[36];
	int iRec2_tmp[36];
	float fYec2_tmp[36];
	float fRec1_tmp[36];
	float fRec0_tmp[36];
	float fRec11_tmp[36];
	int iRec12_tmp[36];
	float fYec3_tmp[36];
	int iRec10_tmp[36];
	float fYec4_tmp[36];
	int iRec9_tmp[36];
	float fYec5_tmp[36];
	float fRec8_tmp[36];
	float fRec7_tmp[36];
	float fRec17_tmp[36];
	int iRec18_tmp[36];
	float fYec6_tmp[36];
	int iRec16_tmp[36];
	float fYec7_tmp[36];
	int iRec15_tmp[36];
	float fYec8_tmp[36];
	float fRec14_tmp[36];
	float fRec13_tmp[36];
	float fRec23_tmp[36];
	int iRec24_tmp[36];
	float fYec9_tmp[36];
	int iRec22_tmp[36];
	float fYec10_tmp[36];
	int iRec21_tmp[36];
	float fYec11_tmp[36];
	float fRec20_tmp[36];
	float fRec19_tmp[36];
	float fRec29_tmp[36];
	int iRec30_tmp[36];
	float fYec12_tmp[36];
	int iRec28_tmp[36];
	float fYec13_tmp[36];
	int iRec27_tmp[36];
	float fYec14_tmp[36];
	float fRec26_tmp[36];
	float fRec25_tmp[36];
	float fRec35_tmp[36];
	int iRec36_tmp[36];
	float fYec15_tmp[36];
	int iRec34_tmp[36];
	float fYec16_tmp[36];
	int iRec33_tmp[36];
	float fYec17_tmp[36];
	float fRec32_tmp[36];
	float fRec31_tmp[36];
	float fRec41_tmp[36];
	int iRec42_tmp[36];
	float fYec18_tmp[36];
	int iRec40_tmp[36];
	float fYec19_tmp[36];
	int iRec39_tmp[36];
	float fYec20_tmp[36];
	float fRec38_tmp[36];
	float fRec37_tmp[36];
	float fRec47_tmp[36];
	int iRec48_tmp[36];
	float fYec21_tmp[36];
	int iRec46_tmp[36];
	float fYec22_tmp[36];
	int iRec45_tmp[36];
	float fYec23_tmp[36];
	float fRec44_tmp[36];
	float fRec43_tmp[36];
	float fRec53_tmp[36];
	int iRec54_tmp[36];
	float fYec24_tmp[36];
	int iRec52_tmp[36];
	float fYec25_tmp[36];
	int iRec51_tmp[36];
	float fYec26_tmp[36];
	float fRec50_tmp[36];
	float fRec49_tmp[36];
	float fRec59_tmp[36];
	int iRec60_tmp[36];
	float fYec27_tmp[36];
	int iRec58_tmp[36];
	float fYec28_tmp[36];
	int iRec57_tmp[36];
	float fYec29_tmp[36];
	float fRec56_tmp[36];
	float fRec55_tmp[36];
	float fRec65_tmp[36];
	int iRec66_tmp[36];
	float fYec30_tmp[36];
	int iRec64_tmp[36];
	float fYec31_tmp[36];
	int iRec63_tmp[36];
	float fYec32_tmp[36];
	float fRec62_tmp[36];
	float fRec61_tmp[36];
	float fRec71_tmp[36];
	int iRec72_tmp[36];
	float fYec33_tmp[36];
	int iRec70_tmp[36];
	float fYec34_tmp[36];
	int iRec69_tmp[36];
	float fYec35_tmp[36];
	float fRec68_tmp[36];
	float fRec67_tmp[36];
	float fRec74_tmp[36];
	float fRec73_tmp[36];
	float fRec76_tmp[36];
	float fRec75_tmp[36];
	float fRec78_tmp[36];
	float fRec77_tmp[36];
	float fRec80_tmp[36];
	float fRec79_tmp[36];
	float fRec82_tmp[36];
	float fRec81_tmp[36];
	float fRec84_tmp[36];
	float fRec83_tmp[36];
	float fRec86_tmp[36];
	float fRec85_tmp[36];
	float fRec88_tmp[36];
	float fRec87_tmp[36];
	float fRec90_tmp[36];
	float fRec89_tmp[36];
	float fRec92_tmp[36];
	float fRec91_tmp[36];
	float fRec94_tmp[36];
	float fRec93_tmp[36];
	float fRec96_tmp[36];
	float fRec95_tmp[36];
	float fRec98_tmp[36];
	float fRec97_tmp[36];
	float fRec100_tmp[36];
	float fRec99_tmp[36];
	float fRec102_tmp[36];
	float fRec101_tmp[36];
	float fRec104_tmp[36];
	float fRec103_tmp[36];
	float fRec106_tmp[36];
	float fRec105_tmp[36];
	float fRec108_tmp[36];
	float fRec107_tmp[36];
	float fRec110_tmp[36];
	float fRec109_tmp[36];
	float fRec112_tmp[36];
	float fRec111_tmp[36];
	float fRec114_tmp[36];
	float fRec113_tmp[36];
	float fRec116_tmp[36];
	float fRec115_tmp[36];
	float fRec118_tmp[36];
	float fRec117_tmp[36];
	float fRec120_tmp[36];
	float fRec119_tmp[36];
	float fYec36_tmp[36];
	float fRec121_tmp[36];
	float fYec37_tmp[36];
	float fRec122_tmp[36];
	float fYec38_tmp[36];
	float fRec123_tmp[36];
	float fYec39_tmp[36];
	float fRec124_tmp[36];
	float fYec40_tmp[36];
	float fRec125_tmp[36];
	float fYec41_tmp[36];
	float fRec126_tmp[36];
	float fYec42_tmp[36];
	float fRec127_tmp[36];
	float fYec43_tmp[36];
	float fRec128_tmp[36];
	float fYec44_tmp[36];
	float fRec129_tmp[36];
	float fYec45_tmp[36];
	float fRec130_tmp[36];
	float fYec46_tmp[36];
	float fRec131_tmp[36];
	float fYec47_tmp[36];
	float fRec132_tmp[36];
	float fVec0_tmp[36];
	float fVec1_tmp[36];
	float fVec2_tmp[36];
	float fVec3_tmp[36];
	float fVec4_tmp[36];
	float fVec5_tmp[36];
	float fVec6_tmp[36];
	float fVec7_tmp[36];
	float fVec8_tmp[36];
	float fVec9_tmp[36];
	float fVec10_tmp[36];
	float fVec11_tmp[36];
	float fVec12_tmp[36];
	float fVec13_tmp[36];
	float fVec14_tmp[36];
	float fVec15_tmp[36];
	float fVec16_tmp[36];
	float fVec17_tmp[36];
	float fVec18_tmp[36];
	float fVec19_tmp[36];
	float fVec20_tmp[36];
	float fVec21_tmp[36];
	float fVec22_tmp[36];
	float fVec23_tmp[36];
	float fVec24_tmp[36];
	float fVec25_tmp[36];
	float fVec26_tmp[36];
	float fVec27_tmp[36];
	float fVec28_tmp[36];
	float fVec29_tmp[36];
	float fVec30_tmp[36];
	float fVec31_tmp[36];
	float fVec32_tmp[36];
	float fVec33_tmp[36];
	float fVec34_tmp[36];
	float fVec35_tmp[36];
	float fVec36_tmp[36];
	float fVec37_tmp[36];
	float fVec38_tmp[36];
	float fVec39_tmp[36];
	float fVec40_tmp[36];
	float fVec41_tmp[36];
	float fVec42_tmp[36];
	float fVec43_tmp[36];
	float fVec44_tmp[36];
	float fVec45_tmp[36];
	float fVec46_tmp[36];
	float fVec47_tmp[36];
	float fVec48_tmp[36];
	float fVec49_tmp[36];
	float fVec50_tmp[36];
	float fVec51_tmp[36];
	float fVec52_tmp[36];
	float fVec53_tmp[36];
	float fVec54_tmp[36];
	float fVec55_tmp[36];
	float fVec56_tmp[36];
	float fVec57_tmp[36];
	float fVec58_tmp[36];
	float fVec59_tmp[36];
	float fVec60_tmp[36];
	float fYec48_tmp[36];
	float fRec133_tmp[36];
	int iRec136_tmp[36];
	float fYec49_tmp[36];
	float fRec135_tmp[36];
	float fRec134_tmp[36];
	int iRec139_tmp[36];
	float fYec50_tmp[36];
	float fRec138_tmp[36];
	float fRec137_tmp[36];
	int iRec142_tmp[36];
	float fYec51_tmp[36];
	float fRec141_tmp[36];
	float fRec140_tmp[36];
	int iRec145_tmp[36];
	float fYec52_tmp[36];
	float fRec144_tmp[36];
	float fRec143_tmp[36];
	int iRec148_tmp[36];
	float fYec53_tmp[36];
	float fRec147_tmp[36];
	float fRec146_tmp[36];
	int iRec151_tmp[36];
	float fYec54_tmp[36];
	float fRec150_tmp[36];
	float fRec149_tmp[36];
	int iRec154_tmp[36];
	float fYec55_tmp[36];
	float fRec153_tmp[36];
	float fRec152_tmp[36];
	int iRec157_tmp[36];
	float fYec56_tmp[36];
	float fRec156_tmp[36];
	float fRec155_tmp[36];
	float fYec57_tmp[36];
	float fRec158_tmp[36];
	int iRec161_tmp[36];
	float fYec58_tmp[36];
	float fRec160_tmp[36];
	float fRec159_tmp[36];
	int iRec164_tmp[36];
	float fYec59_tmp[36];
	float fRec163_tmp[36];
	float fRec162_tmp[36];
	int iRec167_tmp[36];
	float fYec60_tmp[36];
	float fRec166_tmp[36];
	float fRec165_tmp[36];
	int iRec170_tmp[36];
	float fYec61_tmp[36];
	float fRec169_tmp[36];
	float fRec168_tmp[36];
	float fYec62_tmp[36];
	float fRec171_tmp[36];
	int iRec174_tmp[36];
	float fYec63_tmp[36];
	float fRec173_tmp[36];
	float fRec172_tmp[36];
	int iRec177_tmp[36];
	float fYec64_tmp[36];
	float fRec176_tmp[36];
	float fRec175_tmp[36];
	int iRec180_tmp[36];
	float fYec65_tmp[36];
	float fRec179_tmp[36];
	float fRec178_tmp[36];
	int iRec183_tmp[36];
	float fYec66_tmp[36];
	float fRec182_tmp[36];
	float fRec181_tmp[36];
	int iRec186_tmp[36];
	float fYec67_tmp[36];
	float fRec185_tmp[36];
	float fRec184_tmp[36];
	float fYec68_tmp[36];
	float fRec187_tmp[36];
	int iRec190_tmp[36];
	float fYec69_tmp[36];
	float fRec189_tmp[36];
	float fRec188_tmp[36];
	int iRec193_tmp[36];
	float fYec70_tmp[36];
	float fRec192_tmp[36];
	float fRec191_tmp[36];
	int iRec196_tmp[36];
	float fYec71_tmp[36];
	float fRec195_tmp[36];
	float fRec194_tmp[36];
	int iRec199_tmp[36];
	float fYec72_tmp[36];
	float fRec198_tmp[36];
	float fRec197_tmp[36];
	int iRec202_tmp[36];
	float fYec73_tmp[36];
	float fRec201_tmp[36];
	float fRec200_tmp[36];
	int iRec205_tmp[36];
	float fYec74_tmp[36];
	float fRec204_tmp[36];
	float fRec203_tmp[36];
	int iRec208_tmp[36];
	float fYec75_tmp[36];
	float fRec207_tmp[36];
	float fRec206_tmp[36];
	float fYec76_tmp[36];
	float fRec209_tmp[36];
	int iRec212_tmp[36];
	float fYec77_tmp[36];
	float fRec211_tmp[36];
	float fRec210_tmp[36];
	int iRec215_tmp[36];
	float fYec78_tmp[36];
	float fRec214_tmp[36];
	float fRec213_tmp[36];
	int iRec218_tmp[36];
	float fYec79_tmp[36];
	float fRec217_tmp[36];
	float fRec216_tmp[36];
	int iRec221_tmp[36];
	float fYec80_tmp[36];
	float fRec220_tmp[36];
	float fRec219_tmp[36];
	int iRec224_tmp[36];
	float fYec81_tmp[36];
	float fRec223_tmp[36];
	float fRec222_tmp[36];
	int iRec227_tmp[36];
	float fYec82_tmp[36];
	float fRec226_tmp[36];
	float fRec225_tmp[36];
	int iRec230_tmp[36];
	float fYec83_tmp[36];
	float fRec229_tmp[36];
	float fRec228_tmp[36];
	int iRec233_tmp[36];
	float fYec84_tmp[36];
	float fRec232_tmp[36];
	float fRec231_tmp[36];
	int iRec236_tmp[36];
	float fYec85_tmp[36];
	float fRec235_tmp[36];
	float fRec234_tmp[36];
	int iRec239_tmp[36];
	float fYec86_tmp[36];
	float fRec238_tmp[36];
	float fRec237_tmp[36];
	int iRec242_tmp[36];
	float fYec87_tmp[36];
	float fRec241_tmp[36];
	float fRec240_tmp[36];
	int iRec245_tmp[36];
	float fYec88_tmp[36];
	float fRec244_tmp[36];
	float fRec243_tmp[36];
	float fYec89_tmp[36];
	float fRec246_tmp[36];
	int iRec249_tmp[36];
	float fRec248_tmp[36];
	float fRec247_tmp[36];
	int iRec252_tmp[36];
	float fRec251_tmp[36];
	float fRec250_tmp[36];
	int iRec255_tmp[36];
	float fRec254_tmp[36];
	float fRec253_tmp[36];
	int iRec258_tmp[36];
	float fRec257_tmp[36];
	float fRec256_tmp[36];
	int iRec261_tmp[36];
	float fRec260_tmp[36];
	float fRec259_tmp[36];
	int iRec264_tmp[36];
	float fRec263_tmp[36];
	float fRec262_tmp[36];
	int iRec267_tmp[36];
	float fRec266_tmp[36];
	float fRec265_tmp[36];
	int iRec270_tmp[36];
	float fRec269_tmp[36];
	float fRec268_tmp[36];
	int iRec273_tmp[36];
	float fRec272_tmp[36];
	float fRec271_tmp[36];
	int iRec276_tmp[36];
	float fRec275_tmp[36];
	float fRec274_tmp[36];
	int iRec279_tmp[36];
	float fRec278_tmp[36];
	float fRec277_tmp[36];
	int iRec282_tmp[36];
	float fRec281_tmp[36];
	float fRec280_tmp[36];
	float fYec90_tmp[36];
	float fRec283_tmp[36];
	float fYec91_tmp[36];
	float fRec285_tmp[36];
	float fYec92_tmp[36];
	float fRec284_tmp[36];
	float fYec93_tmp[36];
	float fRec287_tmp[36];
	float fYec94_tmp[36];
	float fRec286_tmp[36];
	float fYec95_tmp[36];
	float fRec289_tmp[36];
	float fYec96_tmp[36];
	float fRec288_tmp[36];
	float fYec97_tmp[36];
	float fRec291_tmp[36];
	float fYec98_tmp[36];
	float fRec290_tmp[36];
	float fRec293_tmp[36];
	float fRec292_tmp[36];
	float fRec295_tmp[36];
	float fRec294_tmp[36];
	float fRec297_tmp[36];
	float fRec296_tmp[36];
	float fRec299_tmp[36];
	float fRec298_tmp[36];
	int iRec305_tmp[36];
	float fRec302_tmp[36];
	int iRec303_tmp[36];
	float fRec304_tmp[36];
	float fYec99_tmp[36];
	float fRec301_tmp[36];
	float fRec300_tmp[36];
	float fRec306_tmp[36];
	float fRec307_tmp[36];
	float fRec308_tmp[36];
	float fYec100_tmp[36];
	float fZec0[32];
	float fZec1[32];
	float fZec2[32];
	float fZec3[32];
	float fZec4[32];
	float fZec5[32];
	float fZec6[32];
	float fZec7[32];
	float fZec8[32];
	float fZec9[32];
	float fZec10[32];
	float fZec11[32];
	float fZec12[32];
	float fZec13[32];
	float fZec14[32];
	float fZec15[32];
	float fZec16[32];
	float fZec17[32];
	float fZec18[32];
	float fZec19[32];
	float fZec20[32];
	float fZec21[32];
	float fZec22[32];
	float fZec23[32];
	float fZec24[32];
	float fZec25[32];
	float fZec26[32];
	float fZec27[32];
	float fZec28[32];
	float fZec29[32];
	float fZec30[32];
	float fZec31[32];
	float fZec32[32];
	float fZec33[32];
	float fZec34[32];
	float fZec35[32];
	float fZec36[32];
	float fZec37[32];
	float fZec38[32];
	float fZec39[32];
	float fZec40[32];
	float fZec41[32];
	float fZec42[32];
	float fZec43[32];
	float fZec44[32];
	float fZec45[32];
	float fZec46[32];
	float fZec47[32];
	float fZec48[32];
	float fZec49[32];
	float fZec50[32];
	float fZec51[32];
	float fZec52[32];
	float fZec53[32];
	float fZec54[32];
	float fZec55[32];
	float fZec56[32];
	float fZec57[32];
	float fZec58[32];
	float fZec59[32];
	float fZec60[32];
	float fZec61[32];
	float fZec62[32];
	float fZec63[32];
	float fZec64[32];
	float fZec65[32];
	float fZec66[32];
	float fZec67[32];
	float fZec68[32];
	float fZec69[32];
	float fZec70[32];
	float fZec71[32];
	float fZec72[32];
	float fZec73[32];
	float fZec74[32];
	float fZec75[32];
	float fZec76[32];
	float fZec77[32];
	float fZec78[32];
	float fZec79[32];
	float fZec80[32];
	float fZec81[32];
	float fZec82[32];
	float fZec83[32];
	float fZec84[32];
	float fZec85[32];
	float fZec86[32];
	float fZec87[32];
	float fZec88[32];
	float fZec89[32];
	float fZec90[32];
	float fZec91[32];
	float fZec92[32];
	float fZec93[32];
	float fZec94[32];
	float fZec95[32];
	float fZec96[32];
	float fZec97[32];
	float fZec98[32];
	float fZec99[32];
	float fZec100[32];
	float fZec101[32];
	float fZec102[32];
	float fZec103[32];
	float fZec104[32];
	float fZec105[32];
	float fZec106[32];
	float fZec107[32];
	float fZec108[32];
	float fZec109[32];
	float fZec110[32];
	float fZec111[32];
	float fZec112[32];
	float fZec113[32];
	float fZec114[32];
	float fZec115[32];
	float fZec116[32];
	float fZec117[32];
	float fZec118[32];
	float fZec119[32];
	float fZec120[32];
	float fZec121[32];
	float fZec122[32];
	float fZec123[32];
	float fZec124[32];
	float fZec125[32];
	float fZec126[32];
	float fZec127[32];
	float fZec128[32];
	float fZec129[32];
	float fZec130[32];
	float fZec131[32];
	float fZec132[32];
	float fZec133[32];
	float fZec134[32];
	float fZec135[32];
	float fZec136[32];
	float fZec137[32];
	float fZec138[32];
	float fZec139[32];
	float fZec140[32];
	float fZec141[32];
	float fZec142[32];
	float fZec143[32];
	float fZec144[32];
	float fZec145[32];
	float fZec146[32];
	float fZec147[32];
	float fZec148[32];
	float fZec149[32];
	float fZec150[32];
	float fZec151[32];
	float fZec152[32];
	float fZec153[32];
	float fZec154[32];
	float fZec155[32];
	float fZec156[32];
	float fZec157[32];
	float fZec158[32];
	float fZec159[32];
	float fZec160[32];
	float fZec161[32];
	float fZec162[32];
	float fZec163[32];
	float fZec164[32];
	float fZec165[32];
	float fZec166[32];
	float fZec167[32];
	float fZec168[32];
	float fZec169[32];
	float fZec170[32];
	float fZec171[32];
	float fZec172[32];
	float fZec173[32];
	float fZec174[32];
	float fZec175[32];
	float fZec176[32];
	float fZec177[32];
	float fZec178[32];
	float fZec179[32];
	float fZec180[32];
	float fZec181[32];
	float fZec182[32];
	float fZec183[32];
	float fZec184[32];
	float fZec185[32];
	float fZec186[32];
	float fZec187[32];
	int iZec188[32];
	float fZec189[32];
	float fZec190[32];
	float fZec191[32];
	float fZec192[32];
	float fZec193[32];
	float fZec194[32];
	float fZec195[32];
	float* fYec0;
	float* fYec1;
	float* fYec2;
	float* fYec3;
	float* fYec4;
	float* fYec5;
	float* fYec6;
	float* fYec7;
	float* fYec8;
	float* fYec9;
	float* fYec10;
	float* fYec11;
	float* fYec12;
	float* fYec13;
	float* fYec14;
	float* fYec15;
	float* fYec16;
	float* fYec17;
	float* fYec18;
	float* fYec19;
	float* fYec20;
	float* fYec21;
	float* fYec22;
	float* fYec23;
	float* fYec24;
	float* fYec25;
	float* fYec26;
	float* fYec27;
	float* fYec28;
	float* fYec29;
	float* fYec30;
	float* fYec31;
	float* fYec32;
	float* fYec33;
	float* fYec34;
	float* fYec35;
	float* fYec36;
	float* fYec37;
	float* fYec38;
	float* fYec39;
	float* fYec40;
	float* fYec41;
	float* fYec42;
	float* fYec43;
	float* fYec44;
	float* fYec45;
	float* fYec46;
	float* fYec47;
	float* fYec48;
	float* fYec49;
	float* fYec50;
	float* fYec51;
	float* fYec52;
	float* fYec53;
	float* fYec54;
	float* fYec55;
	float* fYec56;
	float* fYec57;
	float* fYec58;
	float* fYec59;
	float* fYec60;
	float* fYec61;
	float* fYec62;
	float* fYec63;
	float* fYec64;
	float* fYec65;
	float* fYec66;
	float* fYec67;
	float* fYec68;
	float* fYec69;
	float* fYec70;
	float* fYec71;
	float* fYec72;
	float* fYec73;
	float* fYec74;
	float* fYec75;
	float* fYec76;
	float* fYec77;
	float* fYec78;
	float* fYec79;
	float* fYec80;
	float* fYec81;
	float* fYec82;
	float* fYec83;
	float* fYec84;
	float* fYec85;
	float* fYec86;
	float* fYec87;
	float* fYec88;
	float* fYec89;
	float* fYec90;
	float* fYec91;
	float* fYec92;
	float* fYec93;
	float* fYec94;
	float* fYec95;
	float* fYec96;
	float* fYec97;
	float* fYec98;
	float* fYec99;
	float* fYec100;
	float* fRec5;
	float* fRec4;
	int* iRec6;
	int* iRec3;
	int* iRec2;
	float* fRec1;
	float* fRec0;
	float* fRec11;
	int* iRec12;
	int* iRec10;
	int* iRec9;
	float* fRec8;
	float* fRec7;
	float* fRec17;
	int* iRec18;
	int* iRec16;
	int* iRec15;
	float* fRec14;
	float* fRec13;
	float* fRec23;
	int* iRec24;
	int* iRec22;
	int* iRec21;
	float* fRec20;
	float* fRec19;
	float* fRec29;
	int* iRec30;
	int* iRec28;
	int* iRec27;
	float* fRec26;
	float* fRec25;
	float* fRec35;
	int* iRec36;
	int* iRec34;
	int* iRec33;
	float* fRec32;
	float* fRec31;
	float* fRec41;
	int* iRec42;
	int* iRec40;
	int* iRec39;
	float* fRec38;
	float* fRec37;
	float* fRec47;
	int* iRec48;
	int* iRec46;
	int* iRec45;
	float* fRec44;
	float* fRec43;
	float* fRec53;
	int* iRec54;
	int* iRec52;
	int* iRec51;
	float* fRec50;
	float* fRec49;
	float* fRec59;
	int* iRec60;
	int* iRec58;
	int* iRec57;
	float* fRec56;
	float* fRec55;
	float* fRec65;
	int* iRec66;
	int* iRec64;
	int* iRec63;
	float* fRec62;
	float* fRec61;
	float* fRec71;
	int* iRec72;
	int* iRec70;
	int* iRec69;
	float* fRec68;
	float* fRec67;
	float* fRec74;
	float* fRec73;
	float* fRec76;
	float* fRec75;
	float* fRec78;
	float* fRec77;
	float* fRec80;
	float* fRec79;
	float* fRec82;
	float* fRec81;
	float* fRec84;
	float* fRec83;
	float* fRec86;
	float* fRec85;
	float* fRec88;
	float* fRec87;
	float* fRec90;
	float* fRec89;
	float* fRec92;
	float* fRec91;
	float* fRec94;
	float* fRec93;
	float* fRec96;
	float* fRec95;
	float* fRec98;
	float* fRec97;
	float* fRec100;
	float* fRec99;
	float* fRec102;
	float* fRec101;
	float* fRec104;
	float* fRec103;
	float* fRec106;
	float* fRec105;
	float* fRec108;
	float* fRec107;
	float* fRec110;
	float* fRec109;
	float* fRec112;
	float* fRec111;
	float* fRec114;
	float* fRec113;
	float* fRec116;
	float* fRec115;
	float* fRec118;
	float* fRec117;
	float* fRec120;
	float* fRec119;
	float* fRec121;
	float* fRec122;
	float* fRec123;
	float* fRec124;
	float* fRec125;
	float* fRec126;
	float* fRec127;
	float* fRec128;
	float* fRec129;
	float* fRec130;
	float* fRec131;
	float* fRec132;
	float* fRec133;
	int* iRec136;
	float* fRec135;
	float* fRec134;
	int* iRec139;
	float* fRec138;
	float* fRec137;
	int* iRec142;
	float* fRec141;
	float* fRec140;
	int* iRec145;
	float* fRec144;
	float* fRec143;
	int* iRec148;
	float* fRec147;
	float* fRec146;
	int* iRec151;
	float* fRec150;
	float* fRec149;
	int* iRec154;
	float* fRec153;
	float* fRec152;
	int* iRec157;
	float* fRec156;
	float* fRec155;
	float* fRec158;
	int* iRec161;
	float* fRec160;
	float* fRec159;
	int* iRec164;
	float* fRec163;
	float* fRec162;
	int* iRec167;
	float* fRec166;
	float* fRec165;
	int* iRec170;
	float* fRec169;
	float* fRec168;
	float* fRec171;
	int* iRec174;
	float* fRec173;
	float* fRec172;
	int* iRec177;
	float* fRec176;
	float* fRec175;
	int* iRec180;
	float* fRec179;
	float* fRec178;
	int* iRec183;
	float* fRec182;
	float* fRec181;
	int* iRec186;
	float* fRec185;
	float* fRec184;
	float* fRec187;
	int* iRec190;
	float* fRec189;
	float* fRec188;
	int* iRec193;
	float* fRec192;
	float* fRec191;
	int* iRec196;
	float* fRec195;
	float* fRec194;
	int* iRec199;
	float* fRec198;
	float* fRec197;
	int* iRec202;
	float* fRec201;
	float* fRec200;
	int* iRec205;
	float* fRec204;
	float* fRec203;
	int* iRec208;
	float* fRec207;
	float* fRec206;
	float* fRec209;
	int* iRec212;
	float* fRec211;
	float* fRec210;
	int* iRec215;
	float* fRec214;
	float* fRec213;
	int* iRec218;
	float* fRec217;
	float* fRec216;
	int* iRec221;
	float* fRec220;
	float* fRec219;
	int* iRec224;
	float* fRec223;
	float* fRec222;
	int* iRec227;
	float* fRec226;
	float* fRec225;
	int* iRec230;
	float* fRec229;
	float* fRec228;
	int* iRec233;
	float* fRec232;
	float* fRec231;
	int* iRec236;
	float* fRec235;
	float* fRec234;
	int* iRec239;
	float* fRec238;
	float* fRec237;
	int* iRec242;
	float* fRec241;
	float* fRec240;
	int* iRec245;
	float* fRec244;
	float* fRec243;
	float* fRec246;
	int* iRec249;
	float* fRec248;
	float* fRec247;
	int* iRec252;
	float* fRec251;
	float* fRec250;
	int* iRec255;
	float* fRec254;
	float* fRec253;
	int* iRec258;
	float* fRec257;
	float* fRec256;
	int* iRec261;
	float* fRec260;
	float* fRec259;
	int* iRec264;
	float* fRec263;
	float* fRec262;
	int* iRec267;
	float* fRec266;
	float* fRec265;
	int* iRec270;
	float* fRec269;
	float* fRec268;
	int* iRec273;
	float* fRec272;
	float* fRec271;
	int* iRec276;
	float* fRec275;
	float* fRec274;
	int* iRec279;
	float* fRec278;
	float* fRec277;
	int* iRec282;
	float* fRec281;
	float* fRec280;
	float* fRec283;
	float* fRec285;
	float* fRec284;
	float* fRec287;
	float* fRec286;
	float* fRec289;
	float* fRec288;
	float* fRec291;
	float* fRec290;
	float* fRec293;
	float* fRec292;
	float* fRec295;
	float* fRec294;
	float* fRec297;
	float* fRec296;
	float* fRec299;
	float* fRec298;
	int* iRec305;
	float* fRec302;
	int* iRec303;
	float* fRec304;
	float* fRec301;
	float* fRec300;
	float* fRec306;
	float* fRec307;
	float* fRec308;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("filename", "plugin");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("math.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/version", "1.0");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/version", "1.0");
		m->declare("name", "plugin");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
	}

	virtual int getNumInputs() {
		return 0;
		
	}
	virtual int getNumOutputs() {
		return 2;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = min(192000.0f, max(1.0f, float(fSamplingFreq)));
		fConst1 = (1.0f / fConst0);
		fConst2 = (4545.45459f / fConst0);
		fConst3 = (1.0f / fConst0);
		fConst4 = (fConst3 + 0.00737454556f);
		fConst5 = (0.00737454556f / fConst4);
		fConst6 = (5555.55566f / fConst0);
		fConst7 = (8333.33301f / fConst0);
		fConst8 = (10000.0f / fConst0);
		fConst9 = (12195.1221f / fConst0);
		fConst10 = (17857.1426f / fConst0);
		fConst11 = (21276.5957f / fConst0);
		fConst12 = (25641.0254f / fConst0);
		fConst13 = (37037.0352f / fConst0);
		fConst14 = (1.0f / fConst4);
		fConst15 = (9.99999975e-05f / (fConst3 + 9.99999975e-05f));
		fConst16 = (2564.10254f / fConst0);
		fConst17 = (3703.70361f / fConst0);
		fConst18 = (2127.65967f / fConst0);
		fConst19 = (1470.58826f / fConst0);
		fConst20 = (0.00359645323f / (fConst3 + 0.00359645323f));
		fConst21 = (1785.71423f / fConst0);
		fConst22 = (1219.51221f / fConst0);
		fConst23 = (833.333313f / fConst0);
		fConst24 = (0.00223066402f / (fConst3 + 0.00223066402f));
		fConst25 = (1000.0f / fConst0);
		fConst26 = (666.666687f / fConst0);
		fConst27 = (0.00168498512f / (fConst3 + 0.00168498512f));
		fConst28 = (0.000105300001f / (fConst3 + 0.000105300001f));
		fConst29 = (5.26500007e-05f / (fConst3 + 5.26500007e-05f));
		fConst30 = (0.000183299999f / (fConst3 + 0.000183299999f));
		fConst31 = (9.16499994e-05f / (fConst3 + 9.16499994e-05f));
		fConst32 = (0.000390000001f / (fConst3 + 0.000390000001f));
		fConst33 = (0.000195000001f / (fConst3 + 0.000195000001f));
		fConst34 = (0.000858000014f / (fConst3 + 0.000858000014f));
		fConst35 = (0.000429000007f / (fConst3 + 0.000429000007f));
		iConst36 = int((0.00100000005f * max(22050.0f, min(192000.0f, fConst0))));
		fConst37 = (1.0f / float(iConst36));
		fConst38 = (36.2437592f / fConst0);
		fConst39 = (1.0f - fConst38);
		fConst40 = (3968.25391f / fConst0);
		fConst41 = (0.0275909584f * fConst0);
		fYec0 = &fYec0_tmp[4];
		fYec1 = &fYec1_tmp[4];
		fYec2 = &fYec2_tmp[4];
		fYec3 = &fYec3_tmp[4];
		fYec4 = &fYec4_tmp[4];
		fYec5 = &fYec5_tmp[4];
		fYec6 = &fYec6_tmp[4];
		fYec7 = &fYec7_tmp[4];
		fYec8 = &fYec8_tmp[4];
		fYec9 = &fYec9_tmp[4];
		fYec10 = &fYec10_tmp[4];
		fYec11 = &fYec11_tmp[4];
		fYec12 = &fYec12_tmp[4];
		fYec13 = &fYec13_tmp[4];
		fYec14 = &fYec14_tmp[4];
		fYec15 = &fYec15_tmp[4];
		fYec16 = &fYec16_tmp[4];
		fYec17 = &fYec17_tmp[4];
		fYec18 = &fYec18_tmp[4];
		fYec19 = &fYec19_tmp[4];
		fYec20 = &fYec20_tmp[4];
		fYec21 = &fYec21_tmp[4];
		fYec22 = &fYec22_tmp[4];
		fYec23 = &fYec23_tmp[4];
		fYec24 = &fYec24_tmp[4];
		fYec25 = &fYec25_tmp[4];
		fYec26 = &fYec26_tmp[4];
		fYec27 = &fYec27_tmp[4];
		fYec28 = &fYec28_tmp[4];
		fYec29 = &fYec29_tmp[4];
		fYec30 = &fYec30_tmp[4];
		fYec31 = &fYec31_tmp[4];
		fYec32 = &fYec32_tmp[4];
		fYec33 = &fYec33_tmp[4];
		fYec34 = &fYec34_tmp[4];
		fYec35 = &fYec35_tmp[4];
		fYec36 = &fYec36_tmp[4];
		fYec37 = &fYec37_tmp[4];
		fYec38 = &fYec38_tmp[4];
		fYec39 = &fYec39_tmp[4];
		fYec40 = &fYec40_tmp[4];
		fYec41 = &fYec41_tmp[4];
		fYec42 = &fYec42_tmp[4];
		fYec43 = &fYec43_tmp[4];
		fYec44 = &fYec44_tmp[4];
		fYec45 = &fYec45_tmp[4];
		fYec46 = &fYec46_tmp[4];
		fYec47 = &fYec47_tmp[4];
		fYec48 = &fYec48_tmp[4];
		fYec49 = &fYec49_tmp[4];
		fYec50 = &fYec50_tmp[4];
		fYec51 = &fYec51_tmp[4];
		fYec52 = &fYec52_tmp[4];
		fYec53 = &fYec53_tmp[4];
		fYec54 = &fYec54_tmp[4];
		fYec55 = &fYec55_tmp[4];
		fYec56 = &fYec56_tmp[4];
		fYec57 = &fYec57_tmp[4];
		fYec58 = &fYec58_tmp[4];
		fYec59 = &fYec59_tmp[4];
		fYec60 = &fYec60_tmp[4];
		fYec61 = &fYec61_tmp[4];
		fYec62 = &fYec62_tmp[4];
		fYec63 = &fYec63_tmp[4];
		fYec64 = &fYec64_tmp[4];
		fYec65 = &fYec65_tmp[4];
		fYec66 = &fYec66_tmp[4];
		fYec67 = &fYec67_tmp[4];
		fYec68 = &fYec68_tmp[4];
		fYec69 = &fYec69_tmp[4];
		fYec70 = &fYec70_tmp[4];
		fYec71 = &fYec71_tmp[4];
		fYec72 = &fYec72_tmp[4];
		fYec73 = &fYec73_tmp[4];
		fYec74 = &fYec74_tmp[4];
		fYec75 = &fYec75_tmp[4];
		fYec76 = &fYec76_tmp[4];
		fYec77 = &fYec77_tmp[4];
		fYec78 = &fYec78_tmp[4];
		fYec79 = &fYec79_tmp[4];
		fYec80 = &fYec80_tmp[4];
		fYec81 = &fYec81_tmp[4];
		fYec82 = &fYec82_tmp[4];
		fYec83 = &fYec83_tmp[4];
		fYec84 = &fYec84_tmp[4];
		fYec85 = &fYec85_tmp[4];
		fYec86 = &fYec86_tmp[4];
		fYec87 = &fYec87_tmp[4];
		fYec88 = &fYec88_tmp[4];
		fYec89 = &fYec89_tmp[4];
		fYec90 = &fYec90_tmp[4];
		fYec91 = &fYec91_tmp[4];
		fYec92 = &fYec92_tmp[4];
		fYec93 = &fYec93_tmp[4];
		fYec94 = &fYec94_tmp[4];
		fYec95 = &fYec95_tmp[4];
		fYec96 = &fYec96_tmp[4];
		fYec97 = &fYec97_tmp[4];
		fYec98 = &fYec98_tmp[4];
		fYec99 = &fYec99_tmp[4];
		fYec100 = &fYec100_tmp[4];
		fRec5 = &fRec5_tmp[4];
		fRec4 = &fRec4_tmp[4];
		iRec6 = &iRec6_tmp[4];
		iRec3 = &iRec3_tmp[4];
		iRec2 = &iRec2_tmp[4];
		fRec1 = &fRec1_tmp[4];
		fRec0 = &fRec0_tmp[4];
		fRec11 = &fRec11_tmp[4];
		iRec12 = &iRec12_tmp[4];
		iRec10 = &iRec10_tmp[4];
		iRec9 = &iRec9_tmp[4];
		fRec8 = &fRec8_tmp[4];
		fRec7 = &fRec7_tmp[4];
		fRec17 = &fRec17_tmp[4];
		iRec18 = &iRec18_tmp[4];
		iRec16 = &iRec16_tmp[4];
		iRec15 = &iRec15_tmp[4];
		fRec14 = &fRec14_tmp[4];
		fRec13 = &fRec13_tmp[4];
		fRec23 = &fRec23_tmp[4];
		iRec24 = &iRec24_tmp[4];
		iRec22 = &iRec22_tmp[4];
		iRec21 = &iRec21_tmp[4];
		fRec20 = &fRec20_tmp[4];
		fRec19 = &fRec19_tmp[4];
		fRec29 = &fRec29_tmp[4];
		iRec30 = &iRec30_tmp[4];
		iRec28 = &iRec28_tmp[4];
		iRec27 = &iRec27_tmp[4];
		fRec26 = &fRec26_tmp[4];
		fRec25 = &fRec25_tmp[4];
		fRec35 = &fRec35_tmp[4];
		iRec36 = &iRec36_tmp[4];
		iRec34 = &iRec34_tmp[4];
		iRec33 = &iRec33_tmp[4];
		fRec32 = &fRec32_tmp[4];
		fRec31 = &fRec31_tmp[4];
		fRec41 = &fRec41_tmp[4];
		iRec42 = &iRec42_tmp[4];
		iRec40 = &iRec40_tmp[4];
		iRec39 = &iRec39_tmp[4];
		fRec38 = &fRec38_tmp[4];
		fRec37 = &fRec37_tmp[4];
		fRec47 = &fRec47_tmp[4];
		iRec48 = &iRec48_tmp[4];
		iRec46 = &iRec46_tmp[4];
		iRec45 = &iRec45_tmp[4];
		fRec44 = &fRec44_tmp[4];
		fRec43 = &fRec43_tmp[4];
		fRec53 = &fRec53_tmp[4];
		iRec54 = &iRec54_tmp[4];
		iRec52 = &iRec52_tmp[4];
		iRec51 = &iRec51_tmp[4];
		fRec50 = &fRec50_tmp[4];
		fRec49 = &fRec49_tmp[4];
		fRec59 = &fRec59_tmp[4];
		iRec60 = &iRec60_tmp[4];
		iRec58 = &iRec58_tmp[4];
		iRec57 = &iRec57_tmp[4];
		fRec56 = &fRec56_tmp[4];
		fRec55 = &fRec55_tmp[4];
		fRec65 = &fRec65_tmp[4];
		iRec66 = &iRec66_tmp[4];
		iRec64 = &iRec64_tmp[4];
		iRec63 = &iRec63_tmp[4];
		fRec62 = &fRec62_tmp[4];
		fRec61 = &fRec61_tmp[4];
		fRec71 = &fRec71_tmp[4];
		iRec72 = &iRec72_tmp[4];
		iRec70 = &iRec70_tmp[4];
		iRec69 = &iRec69_tmp[4];
		fRec68 = &fRec68_tmp[4];
		fRec67 = &fRec67_tmp[4];
		fRec74 = &fRec74_tmp[4];
		fRec73 = &fRec73_tmp[4];
		fRec76 = &fRec76_tmp[4];
		fRec75 = &fRec75_tmp[4];
		fRec78 = &fRec78_tmp[4];
		fRec77 = &fRec77_tmp[4];
		fRec80 = &fRec80_tmp[4];
		fRec79 = &fRec79_tmp[4];
		fRec82 = &fRec82_tmp[4];
		fRec81 = &fRec81_tmp[4];
		fRec84 = &fRec84_tmp[4];
		fRec83 = &fRec83_tmp[4];
		fRec86 = &fRec86_tmp[4];
		fRec85 = &fRec85_tmp[4];
		fRec88 = &fRec88_tmp[4];
		fRec87 = &fRec87_tmp[4];
		fRec90 = &fRec90_tmp[4];
		fRec89 = &fRec89_tmp[4];
		fRec92 = &fRec92_tmp[4];
		fRec91 = &fRec91_tmp[4];
		fRec94 = &fRec94_tmp[4];
		fRec93 = &fRec93_tmp[4];
		fRec96 = &fRec96_tmp[4];
		fRec95 = &fRec95_tmp[4];
		fRec98 = &fRec98_tmp[4];
		fRec97 = &fRec97_tmp[4];
		fRec100 = &fRec100_tmp[4];
		fRec99 = &fRec99_tmp[4];
		fRec102 = &fRec102_tmp[4];
		fRec101 = &fRec101_tmp[4];
		fRec104 = &fRec104_tmp[4];
		fRec103 = &fRec103_tmp[4];
		fRec106 = &fRec106_tmp[4];
		fRec105 = &fRec105_tmp[4];
		fRec108 = &fRec108_tmp[4];
		fRec107 = &fRec107_tmp[4];
		fRec110 = &fRec110_tmp[4];
		fRec109 = &fRec109_tmp[4];
		fRec112 = &fRec112_tmp[4];
		fRec111 = &fRec111_tmp[4];
		fRec114 = &fRec114_tmp[4];
		fRec113 = &fRec113_tmp[4];
		fRec116 = &fRec116_tmp[4];
		fRec115 = &fRec115_tmp[4];
		fRec118 = &fRec118_tmp[4];
		fRec117 = &fRec117_tmp[4];
		fRec120 = &fRec120_tmp[4];
		fRec119 = &fRec119_tmp[4];
		fRec121 = &fRec121_tmp[4];
		fRec122 = &fRec122_tmp[4];
		fRec123 = &fRec123_tmp[4];
		fRec124 = &fRec124_tmp[4];
		fRec125 = &fRec125_tmp[4];
		fRec126 = &fRec126_tmp[4];
		fRec127 = &fRec127_tmp[4];
		fRec128 = &fRec128_tmp[4];
		fRec129 = &fRec129_tmp[4];
		fRec130 = &fRec130_tmp[4];
		fRec131 = &fRec131_tmp[4];
		fRec132 = &fRec132_tmp[4];
		fRec133 = &fRec133_tmp[4];
		iRec136 = &iRec136_tmp[4];
		fRec135 = &fRec135_tmp[4];
		fRec134 = &fRec134_tmp[4];
		iRec139 = &iRec139_tmp[4];
		fRec138 = &fRec138_tmp[4];
		fRec137 = &fRec137_tmp[4];
		iRec142 = &iRec142_tmp[4];
		fRec141 = &fRec141_tmp[4];
		fRec140 = &fRec140_tmp[4];
		iRec145 = &iRec145_tmp[4];
		fRec144 = &fRec144_tmp[4];
		fRec143 = &fRec143_tmp[4];
		iRec148 = &iRec148_tmp[4];
		fRec147 = &fRec147_tmp[4];
		fRec146 = &fRec146_tmp[4];
		iRec151 = &iRec151_tmp[4];
		fRec150 = &fRec150_tmp[4];
		fRec149 = &fRec149_tmp[4];
		iRec154 = &iRec154_tmp[4];
		fRec153 = &fRec153_tmp[4];
		fRec152 = &fRec152_tmp[4];
		iRec157 = &iRec157_tmp[4];
		fRec156 = &fRec156_tmp[4];
		fRec155 = &fRec155_tmp[4];
		fRec158 = &fRec158_tmp[4];
		iRec161 = &iRec161_tmp[4];
		fRec160 = &fRec160_tmp[4];
		fRec159 = &fRec159_tmp[4];
		iRec164 = &iRec164_tmp[4];
		fRec163 = &fRec163_tmp[4];
		fRec162 = &fRec162_tmp[4];
		iRec167 = &iRec167_tmp[4];
		fRec166 = &fRec166_tmp[4];
		fRec165 = &fRec165_tmp[4];
		iRec170 = &iRec170_tmp[4];
		fRec169 = &fRec169_tmp[4];
		fRec168 = &fRec168_tmp[4];
		fRec171 = &fRec171_tmp[4];
		iRec174 = &iRec174_tmp[4];
		fRec173 = &fRec173_tmp[4];
		fRec172 = &fRec172_tmp[4];
		iRec177 = &iRec177_tmp[4];
		fRec176 = &fRec176_tmp[4];
		fRec175 = &fRec175_tmp[4];
		iRec180 = &iRec180_tmp[4];
		fRec179 = &fRec179_tmp[4];
		fRec178 = &fRec178_tmp[4];
		iRec183 = &iRec183_tmp[4];
		fRec182 = &fRec182_tmp[4];
		fRec181 = &fRec181_tmp[4];
		iRec186 = &iRec186_tmp[4];
		fRec185 = &fRec185_tmp[4];
		fRec184 = &fRec184_tmp[4];
		fRec187 = &fRec187_tmp[4];
		iRec190 = &iRec190_tmp[4];
		fRec189 = &fRec189_tmp[4];
		fRec188 = &fRec188_tmp[4];
		iRec193 = &iRec193_tmp[4];
		fRec192 = &fRec192_tmp[4];
		fRec191 = &fRec191_tmp[4];
		iRec196 = &iRec196_tmp[4];
		fRec195 = &fRec195_tmp[4];
		fRec194 = &fRec194_tmp[4];
		iRec199 = &iRec199_tmp[4];
		fRec198 = &fRec198_tmp[4];
		fRec197 = &fRec197_tmp[4];
		iRec202 = &iRec202_tmp[4];
		fRec201 = &fRec201_tmp[4];
		fRec200 = &fRec200_tmp[4];
		iRec205 = &iRec205_tmp[4];
		fRec204 = &fRec204_tmp[4];
		fRec203 = &fRec203_tmp[4];
		iRec208 = &iRec208_tmp[4];
		fRec207 = &fRec207_tmp[4];
		fRec206 = &fRec206_tmp[4];
		fRec209 = &fRec209_tmp[4];
		iRec212 = &iRec212_tmp[4];
		fRec211 = &fRec211_tmp[4];
		fRec210 = &fRec210_tmp[4];
		iRec215 = &iRec215_tmp[4];
		fRec214 = &fRec214_tmp[4];
		fRec213 = &fRec213_tmp[4];
		iRec218 = &iRec218_tmp[4];
		fRec217 = &fRec217_tmp[4];
		fRec216 = &fRec216_tmp[4];
		iRec221 = &iRec221_tmp[4];
		fRec220 = &fRec220_tmp[4];
		fRec219 = &fRec219_tmp[4];
		iRec224 = &iRec224_tmp[4];
		fRec223 = &fRec223_tmp[4];
		fRec222 = &fRec222_tmp[4];
		iRec227 = &iRec227_tmp[4];
		fRec226 = &fRec226_tmp[4];
		fRec225 = &fRec225_tmp[4];
		iRec230 = &iRec230_tmp[4];
		fRec229 = &fRec229_tmp[4];
		fRec228 = &fRec228_tmp[4];
		iRec233 = &iRec233_tmp[4];
		fRec232 = &fRec232_tmp[4];
		fRec231 = &fRec231_tmp[4];
		iRec236 = &iRec236_tmp[4];
		fRec235 = &fRec235_tmp[4];
		fRec234 = &fRec234_tmp[4];
		iRec239 = &iRec239_tmp[4];
		fRec238 = &fRec238_tmp[4];
		fRec237 = &fRec237_tmp[4];
		iRec242 = &iRec242_tmp[4];
		fRec241 = &fRec241_tmp[4];
		fRec240 = &fRec240_tmp[4];
		iRec245 = &iRec245_tmp[4];
		fRec244 = &fRec244_tmp[4];
		fRec243 = &fRec243_tmp[4];
		fRec246 = &fRec246_tmp[4];
		iRec249 = &iRec249_tmp[4];
		fRec248 = &fRec248_tmp[4];
		fRec247 = &fRec247_tmp[4];
		iRec252 = &iRec252_tmp[4];
		fRec251 = &fRec251_tmp[4];
		fRec250 = &fRec250_tmp[4];
		iRec255 = &iRec255_tmp[4];
		fRec254 = &fRec254_tmp[4];
		fRec253 = &fRec253_tmp[4];
		iRec258 = &iRec258_tmp[4];
		fRec257 = &fRec257_tmp[4];
		fRec256 = &fRec256_tmp[4];
		iRec261 = &iRec261_tmp[4];
		fRec260 = &fRec260_tmp[4];
		fRec259 = &fRec259_tmp[4];
		iRec264 = &iRec264_tmp[4];
		fRec263 = &fRec263_tmp[4];
		fRec262 = &fRec262_tmp[4];
		iRec267 = &iRec267_tmp[4];
		fRec266 = &fRec266_tmp[4];
		fRec265 = &fRec265_tmp[4];
		iRec270 = &iRec270_tmp[4];
		fRec269 = &fRec269_tmp[4];
		fRec268 = &fRec268_tmp[4];
		iRec273 = &iRec273_tmp[4];
		fRec272 = &fRec272_tmp[4];
		fRec271 = &fRec271_tmp[4];
		iRec276 = &iRec276_tmp[4];
		fRec275 = &fRec275_tmp[4];
		fRec274 = &fRec274_tmp[4];
		iRec279 = &iRec279_tmp[4];
		fRec278 = &fRec278_tmp[4];
		fRec277 = &fRec277_tmp[4];
		iRec282 = &iRec282_tmp[4];
		fRec281 = &fRec281_tmp[4];
		fRec280 = &fRec280_tmp[4];
		fRec283 = &fRec283_tmp[4];
		fRec285 = &fRec285_tmp[4];
		fRec284 = &fRec284_tmp[4];
		fRec287 = &fRec287_tmp[4];
		fRec286 = &fRec286_tmp[4];
		fRec289 = &fRec289_tmp[4];
		fRec288 = &fRec288_tmp[4];
		fRec291 = &fRec291_tmp[4];
		fRec290 = &fRec290_tmp[4];
		fRec293 = &fRec293_tmp[4];
		fRec292 = &fRec292_tmp[4];
		fRec295 = &fRec295_tmp[4];
		fRec294 = &fRec294_tmp[4];
		fRec297 = &fRec297_tmp[4];
		fRec296 = &fRec296_tmp[4];
		fRec299 = &fRec299_tmp[4];
		fRec298 = &fRec298_tmp[4];
		iRec305 = &iRec305_tmp[4];
		fRec302 = &fRec302_tmp[4];
		iRec303 = &iRec303_tmp[4];
		fRec304 = &fRec304_tmp[4];
		fRec301 = &fRec301_tmp[4];
		fRec300 = &fRec300_tmp[4];
		fRec306 = &fRec306_tmp[4];
		fRec307 = &fRec307_tmp[4];
		fRec308 = &fRec308_tmp[4];
		
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(0.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fButton1 = FAUSTFLOAT(0.0f);
		fButton2 = FAUSTFLOAT(0.0f);
		fButton3 = FAUSTFLOAT(0.0f);
		fButton4 = FAUSTFLOAT(0.0f);
		fButton5 = FAUSTFLOAT(0.0f);
		fButton6 = FAUSTFLOAT(0.0f);
		fButton7 = FAUSTFLOAT(0.0f);
		fButton8 = FAUSTFLOAT(0.0f);
		fButton9 = FAUSTFLOAT(0.0f);
		fButton10 = FAUSTFLOAT(0.0f);
		fButton11 = FAUSTFLOAT(0.0f);
		fButton12 = FAUSTFLOAT(0.0f);
		fButton13 = FAUSTFLOAT(0.0f);
		fButton14 = FAUSTFLOAT(0.0f);
		fButton15 = FAUSTFLOAT(0.0f);
		fButton16 = FAUSTFLOAT(0.0f);
		fButton17 = FAUSTFLOAT(0.0f);
		fButton18 = FAUSTFLOAT(0.0f);
		fButton19 = FAUSTFLOAT(0.0f);
		fButton20 = FAUSTFLOAT(0.0f);
		fButton21 = FAUSTFLOAT(0.0f);
		fButton22 = FAUSTFLOAT(0.0f);
		fButton23 = FAUSTFLOAT(0.0f);
		fButton24 = FAUSTFLOAT(0.0f);
		fButton25 = FAUSTFLOAT(0.0f);
		fButton26 = FAUSTFLOAT(0.0f);
		fButton27 = FAUSTFLOAT(0.0f);
		fButton28 = FAUSTFLOAT(0.0f);
		fButton29 = FAUSTFLOAT(0.0f);
		fButton30 = FAUSTFLOAT(0.0f);
		fButton31 = FAUSTFLOAT(0.0f);
		fButton32 = FAUSTFLOAT(0.0f);
		fButton33 = FAUSTFLOAT(0.0f);
		fButton34 = FAUSTFLOAT(0.0f);
		fButton35 = FAUSTFLOAT(0.0f);
		fButton36 = FAUSTFLOAT(0.0f);
		fButton37 = FAUSTFLOAT(0.0f);
		fButton38 = FAUSTFLOAT(0.0f);
		fButton39 = FAUSTFLOAT(0.0f);
		fButton40 = FAUSTFLOAT(0.0f);
		fButton41 = FAUSTFLOAT(0.0f);
		fButton42 = FAUSTFLOAT(0.0f);
		fButton43 = FAUSTFLOAT(0.0f);
		fButton44 = FAUSTFLOAT(0.0f);
		fButton45 = FAUSTFLOAT(0.0f);
		fButton46 = FAUSTFLOAT(0.0f);
		fButton47 = FAUSTFLOAT(0.0f);
		fButton48 = FAUSTFLOAT(0.0f);
		fButton49 = FAUSTFLOAT(0.0f);
		fButton50 = FAUSTFLOAT(0.0f);
		fButton51 = FAUSTFLOAT(0.0f);
		fButton52 = FAUSTFLOAT(0.0f);
		fButton53 = FAUSTFLOAT(0.0f);
		fButton54 = FAUSTFLOAT(0.0f);
		fButton55 = FAUSTFLOAT(0.0f);
		fButton56 = FAUSTFLOAT(0.0f);
		fButton57 = FAUSTFLOAT(0.0f);
		fButton58 = FAUSTFLOAT(0.0f);
		fButton59 = FAUSTFLOAT(0.0f);
		fButton60 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(1.0f);
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(1.0f);
		fHslider5 = FAUSTFLOAT(0.5f);
		fHslider6 = FAUSTFLOAT(1.0f);
		fVslider7 = FAUSTFLOAT(0.5f);
		fVslider8 = FAUSTFLOAT(0.0f);
		fVslider9 = FAUSTFLOAT(1.0f);
		fVslider10 = FAUSTFLOAT(0.5f);
		fVslider11 = FAUSTFLOAT(1.0f);
		fVslider12 = FAUSTFLOAT(1.0f);
		fVslider13 = FAUSTFLOAT(0.5f);
		fVslider14 = FAUSTFLOAT(0.0f);
		fHslider7 = FAUSTFLOAT(1.0f);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 4); l0 = (l0 + 1)) {
			fRec5_perm[l0] = 0.0f;
			
		}
		for (int l1 = 0; (l1 < 4); l1 = (l1 + 1)) {
			fRec4_perm[l1] = 0.0f;
			
		}
		for (int l2 = 0; (l2 < 4); l2 = (l2 + 1)) {
			iRec6_perm[l2] = 0;
			
		}
		for (int l3 = 0; (l3 < 4); l3 = (l3 + 1)) {
			fYec0_perm[l3] = 0.0f;
			
		}
		for (int l4 = 0; (l4 < 4); l4 = (l4 + 1)) {
			iRec3_perm[l4] = 0;
			
		}
		for (int l5 = 0; (l5 < 4); l5 = (l5 + 1)) {
			fYec1_perm[l5] = 0.0f;
			
		}
		for (int l6 = 0; (l6 < 4); l6 = (l6 + 1)) {
			iRec2_perm[l6] = 0;
			
		}
		for (int l7 = 0; (l7 < 4); l7 = (l7 + 1)) {
			fYec2_perm[l7] = 0.0f;
			
		}
		for (int l8 = 0; (l8 < 4); l8 = (l8 + 1)) {
			fRec1_perm[l8] = 0.0f;
			
		}
		for (int l9 = 0; (l9 < 4); l9 = (l9 + 1)) {
			fRec0_perm[l9] = 0.0f;
			
		}
		for (int l10 = 0; (l10 < 4); l10 = (l10 + 1)) {
			fRec11_perm[l10] = 0.0f;
			
		}
		for (int l11 = 0; (l11 < 4); l11 = (l11 + 1)) {
			iRec12_perm[l11] = 0;
			
		}
		for (int l12 = 0; (l12 < 4); l12 = (l12 + 1)) {
			fYec3_perm[l12] = 0.0f;
			
		}
		for (int l13 = 0; (l13 < 4); l13 = (l13 + 1)) {
			iRec10_perm[l13] = 0;
			
		}
		for (int l14 = 0; (l14 < 4); l14 = (l14 + 1)) {
			fYec4_perm[l14] = 0.0f;
			
		}
		for (int l15 = 0; (l15 < 4); l15 = (l15 + 1)) {
			iRec9_perm[l15] = 0;
			
		}
		for (int l16 = 0; (l16 < 4); l16 = (l16 + 1)) {
			fYec5_perm[l16] = 0.0f;
			
		}
		for (int l17 = 0; (l17 < 4); l17 = (l17 + 1)) {
			fRec8_perm[l17] = 0.0f;
			
		}
		for (int l18 = 0; (l18 < 4); l18 = (l18 + 1)) {
			fRec7_perm[l18] = 0.0f;
			
		}
		for (int l19 = 0; (l19 < 4); l19 = (l19 + 1)) {
			fRec17_perm[l19] = 0.0f;
			
		}
		for (int l20 = 0; (l20 < 4); l20 = (l20 + 1)) {
			iRec18_perm[l20] = 0;
			
		}
		for (int l21 = 0; (l21 < 4); l21 = (l21 + 1)) {
			fYec6_perm[l21] = 0.0f;
			
		}
		for (int l22 = 0; (l22 < 4); l22 = (l22 + 1)) {
			iRec16_perm[l22] = 0;
			
		}
		for (int l23 = 0; (l23 < 4); l23 = (l23 + 1)) {
			fYec7_perm[l23] = 0.0f;
			
		}
		for (int l24 = 0; (l24 < 4); l24 = (l24 + 1)) {
			iRec15_perm[l24] = 0;
			
		}
		for (int l25 = 0; (l25 < 4); l25 = (l25 + 1)) {
			fYec8_perm[l25] = 0.0f;
			
		}
		for (int l26 = 0; (l26 < 4); l26 = (l26 + 1)) {
			fRec14_perm[l26] = 0.0f;
			
		}
		for (int l27 = 0; (l27 < 4); l27 = (l27 + 1)) {
			fRec13_perm[l27] = 0.0f;
			
		}
		for (int l28 = 0; (l28 < 4); l28 = (l28 + 1)) {
			fRec23_perm[l28] = 0.0f;
			
		}
		for (int l29 = 0; (l29 < 4); l29 = (l29 + 1)) {
			iRec24_perm[l29] = 0;
			
		}
		for (int l30 = 0; (l30 < 4); l30 = (l30 + 1)) {
			fYec9_perm[l30] = 0.0f;
			
		}
		for (int l31 = 0; (l31 < 4); l31 = (l31 + 1)) {
			iRec22_perm[l31] = 0;
			
		}
		for (int l32 = 0; (l32 < 4); l32 = (l32 + 1)) {
			fYec10_perm[l32] = 0.0f;
			
		}
		for (int l33 = 0; (l33 < 4); l33 = (l33 + 1)) {
			iRec21_perm[l33] = 0;
			
		}
		for (int l34 = 0; (l34 < 4); l34 = (l34 + 1)) {
			fYec11_perm[l34] = 0.0f;
			
		}
		for (int l35 = 0; (l35 < 4); l35 = (l35 + 1)) {
			fRec20_perm[l35] = 0.0f;
			
		}
		for (int l36 = 0; (l36 < 4); l36 = (l36 + 1)) {
			fRec19_perm[l36] = 0.0f;
			
		}
		for (int l37 = 0; (l37 < 4); l37 = (l37 + 1)) {
			fRec29_perm[l37] = 0.0f;
			
		}
		for (int l38 = 0; (l38 < 4); l38 = (l38 + 1)) {
			iRec30_perm[l38] = 0;
			
		}
		for (int l39 = 0; (l39 < 4); l39 = (l39 + 1)) {
			fYec12_perm[l39] = 0.0f;
			
		}
		for (int l40 = 0; (l40 < 4); l40 = (l40 + 1)) {
			iRec28_perm[l40] = 0;
			
		}
		for (int l41 = 0; (l41 < 4); l41 = (l41 + 1)) {
			fYec13_perm[l41] = 0.0f;
			
		}
		for (int l42 = 0; (l42 < 4); l42 = (l42 + 1)) {
			iRec27_perm[l42] = 0;
			
		}
		for (int l43 = 0; (l43 < 4); l43 = (l43 + 1)) {
			fYec14_perm[l43] = 0.0f;
			
		}
		for (int l44 = 0; (l44 < 4); l44 = (l44 + 1)) {
			fRec26_perm[l44] = 0.0f;
			
		}
		for (int l45 = 0; (l45 < 4); l45 = (l45 + 1)) {
			fRec25_perm[l45] = 0.0f;
			
		}
		for (int l46 = 0; (l46 < 4); l46 = (l46 + 1)) {
			fRec35_perm[l46] = 0.0f;
			
		}
		for (int l47 = 0; (l47 < 4); l47 = (l47 + 1)) {
			iRec36_perm[l47] = 0;
			
		}
		for (int l48 = 0; (l48 < 4); l48 = (l48 + 1)) {
			fYec15_perm[l48] = 0.0f;
			
		}
		for (int l49 = 0; (l49 < 4); l49 = (l49 + 1)) {
			iRec34_perm[l49] = 0;
			
		}
		for (int l50 = 0; (l50 < 4); l50 = (l50 + 1)) {
			fYec16_perm[l50] = 0.0f;
			
		}
		for (int l51 = 0; (l51 < 4); l51 = (l51 + 1)) {
			iRec33_perm[l51] = 0;
			
		}
		for (int l52 = 0; (l52 < 4); l52 = (l52 + 1)) {
			fYec17_perm[l52] = 0.0f;
			
		}
		for (int l53 = 0; (l53 < 4); l53 = (l53 + 1)) {
			fRec32_perm[l53] = 0.0f;
			
		}
		for (int l54 = 0; (l54 < 4); l54 = (l54 + 1)) {
			fRec31_perm[l54] = 0.0f;
			
		}
		for (int l55 = 0; (l55 < 4); l55 = (l55 + 1)) {
			fRec41_perm[l55] = 0.0f;
			
		}
		for (int l56 = 0; (l56 < 4); l56 = (l56 + 1)) {
			iRec42_perm[l56] = 0;
			
		}
		for (int l57 = 0; (l57 < 4); l57 = (l57 + 1)) {
			fYec18_perm[l57] = 0.0f;
			
		}
		for (int l58 = 0; (l58 < 4); l58 = (l58 + 1)) {
			iRec40_perm[l58] = 0;
			
		}
		for (int l59 = 0; (l59 < 4); l59 = (l59 + 1)) {
			fYec19_perm[l59] = 0.0f;
			
		}
		for (int l60 = 0; (l60 < 4); l60 = (l60 + 1)) {
			iRec39_perm[l60] = 0;
			
		}
		for (int l61 = 0; (l61 < 4); l61 = (l61 + 1)) {
			fYec20_perm[l61] = 0.0f;
			
		}
		for (int l62 = 0; (l62 < 4); l62 = (l62 + 1)) {
			fRec38_perm[l62] = 0.0f;
			
		}
		for (int l63 = 0; (l63 < 4); l63 = (l63 + 1)) {
			fRec37_perm[l63] = 0.0f;
			
		}
		for (int l64 = 0; (l64 < 4); l64 = (l64 + 1)) {
			fRec47_perm[l64] = 0.0f;
			
		}
		for (int l65 = 0; (l65 < 4); l65 = (l65 + 1)) {
			iRec48_perm[l65] = 0;
			
		}
		for (int l66 = 0; (l66 < 4); l66 = (l66 + 1)) {
			fYec21_perm[l66] = 0.0f;
			
		}
		for (int l67 = 0; (l67 < 4); l67 = (l67 + 1)) {
			iRec46_perm[l67] = 0;
			
		}
		for (int l68 = 0; (l68 < 4); l68 = (l68 + 1)) {
			fYec22_perm[l68] = 0.0f;
			
		}
		for (int l69 = 0; (l69 < 4); l69 = (l69 + 1)) {
			iRec45_perm[l69] = 0;
			
		}
		for (int l70 = 0; (l70 < 4); l70 = (l70 + 1)) {
			fYec23_perm[l70] = 0.0f;
			
		}
		for (int l71 = 0; (l71 < 4); l71 = (l71 + 1)) {
			fRec44_perm[l71] = 0.0f;
			
		}
		for (int l72 = 0; (l72 < 4); l72 = (l72 + 1)) {
			fRec43_perm[l72] = 0.0f;
			
		}
		for (int l73 = 0; (l73 < 4); l73 = (l73 + 1)) {
			fRec53_perm[l73] = 0.0f;
			
		}
		for (int l74 = 0; (l74 < 4); l74 = (l74 + 1)) {
			iRec54_perm[l74] = 0;
			
		}
		for (int l75 = 0; (l75 < 4); l75 = (l75 + 1)) {
			fYec24_perm[l75] = 0.0f;
			
		}
		for (int l76 = 0; (l76 < 4); l76 = (l76 + 1)) {
			iRec52_perm[l76] = 0;
			
		}
		for (int l77 = 0; (l77 < 4); l77 = (l77 + 1)) {
			fYec25_perm[l77] = 0.0f;
			
		}
		for (int l78 = 0; (l78 < 4); l78 = (l78 + 1)) {
			iRec51_perm[l78] = 0;
			
		}
		for (int l79 = 0; (l79 < 4); l79 = (l79 + 1)) {
			fYec26_perm[l79] = 0.0f;
			
		}
		for (int l80 = 0; (l80 < 4); l80 = (l80 + 1)) {
			fRec50_perm[l80] = 0.0f;
			
		}
		for (int l81 = 0; (l81 < 4); l81 = (l81 + 1)) {
			fRec49_perm[l81] = 0.0f;
			
		}
		for (int l82 = 0; (l82 < 4); l82 = (l82 + 1)) {
			fRec59_perm[l82] = 0.0f;
			
		}
		for (int l83 = 0; (l83 < 4); l83 = (l83 + 1)) {
			iRec60_perm[l83] = 0;
			
		}
		for (int l84 = 0; (l84 < 4); l84 = (l84 + 1)) {
			fYec27_perm[l84] = 0.0f;
			
		}
		for (int l85 = 0; (l85 < 4); l85 = (l85 + 1)) {
			iRec58_perm[l85] = 0;
			
		}
		for (int l86 = 0; (l86 < 4); l86 = (l86 + 1)) {
			fYec28_perm[l86] = 0.0f;
			
		}
		for (int l87 = 0; (l87 < 4); l87 = (l87 + 1)) {
			iRec57_perm[l87] = 0;
			
		}
		for (int l88 = 0; (l88 < 4); l88 = (l88 + 1)) {
			fYec29_perm[l88] = 0.0f;
			
		}
		for (int l89 = 0; (l89 < 4); l89 = (l89 + 1)) {
			fRec56_perm[l89] = 0.0f;
			
		}
		for (int l90 = 0; (l90 < 4); l90 = (l90 + 1)) {
			fRec55_perm[l90] = 0.0f;
			
		}
		for (int l91 = 0; (l91 < 4); l91 = (l91 + 1)) {
			fRec65_perm[l91] = 0.0f;
			
		}
		for (int l92 = 0; (l92 < 4); l92 = (l92 + 1)) {
			iRec66_perm[l92] = 0;
			
		}
		for (int l93 = 0; (l93 < 4); l93 = (l93 + 1)) {
			fYec30_perm[l93] = 0.0f;
			
		}
		for (int l94 = 0; (l94 < 4); l94 = (l94 + 1)) {
			iRec64_perm[l94] = 0;
			
		}
		for (int l95 = 0; (l95 < 4); l95 = (l95 + 1)) {
			fYec31_perm[l95] = 0.0f;
			
		}
		for (int l96 = 0; (l96 < 4); l96 = (l96 + 1)) {
			iRec63_perm[l96] = 0;
			
		}
		for (int l97 = 0; (l97 < 4); l97 = (l97 + 1)) {
			fYec32_perm[l97] = 0.0f;
			
		}
		for (int l98 = 0; (l98 < 4); l98 = (l98 + 1)) {
			fRec62_perm[l98] = 0.0f;
			
		}
		for (int l99 = 0; (l99 < 4); l99 = (l99 + 1)) {
			fRec61_perm[l99] = 0.0f;
			
		}
		for (int l100 = 0; (l100 < 4); l100 = (l100 + 1)) {
			fRec71_perm[l100] = 0.0f;
			
		}
		for (int l101 = 0; (l101 < 4); l101 = (l101 + 1)) {
			iRec72_perm[l101] = 0;
			
		}
		for (int l102 = 0; (l102 < 4); l102 = (l102 + 1)) {
			fYec33_perm[l102] = 0.0f;
			
		}
		for (int l103 = 0; (l103 < 4); l103 = (l103 + 1)) {
			iRec70_perm[l103] = 0;
			
		}
		for (int l104 = 0; (l104 < 4); l104 = (l104 + 1)) {
			fYec34_perm[l104] = 0.0f;
			
		}
		for (int l105 = 0; (l105 < 4); l105 = (l105 + 1)) {
			iRec69_perm[l105] = 0;
			
		}
		for (int l106 = 0; (l106 < 4); l106 = (l106 + 1)) {
			fYec35_perm[l106] = 0.0f;
			
		}
		for (int l107 = 0; (l107 < 4); l107 = (l107 + 1)) {
			fRec68_perm[l107] = 0.0f;
			
		}
		for (int l108 = 0; (l108 < 4); l108 = (l108 + 1)) {
			fRec67_perm[l108] = 0.0f;
			
		}
		for (int l109 = 0; (l109 < 4); l109 = (l109 + 1)) {
			fRec74_perm[l109] = 0.0f;
			
		}
		for (int l110 = 0; (l110 < 4); l110 = (l110 + 1)) {
			fRec73_perm[l110] = 0.0f;
			
		}
		for (int l111 = 0; (l111 < 4); l111 = (l111 + 1)) {
			fRec76_perm[l111] = 0.0f;
			
		}
		for (int l112 = 0; (l112 < 4); l112 = (l112 + 1)) {
			fRec75_perm[l112] = 0.0f;
			
		}
		for (int l113 = 0; (l113 < 4); l113 = (l113 + 1)) {
			fRec78_perm[l113] = 0.0f;
			
		}
		for (int l114 = 0; (l114 < 4); l114 = (l114 + 1)) {
			fRec77_perm[l114] = 0.0f;
			
		}
		for (int l115 = 0; (l115 < 4); l115 = (l115 + 1)) {
			fRec80_perm[l115] = 0.0f;
			
		}
		for (int l116 = 0; (l116 < 4); l116 = (l116 + 1)) {
			fRec79_perm[l116] = 0.0f;
			
		}
		for (int l117 = 0; (l117 < 4); l117 = (l117 + 1)) {
			fRec82_perm[l117] = 0.0f;
			
		}
		for (int l118 = 0; (l118 < 4); l118 = (l118 + 1)) {
			fRec81_perm[l118] = 0.0f;
			
		}
		for (int l119 = 0; (l119 < 4); l119 = (l119 + 1)) {
			fRec84_perm[l119] = 0.0f;
			
		}
		for (int l120 = 0; (l120 < 4); l120 = (l120 + 1)) {
			fRec83_perm[l120] = 0.0f;
			
		}
		for (int l121 = 0; (l121 < 4); l121 = (l121 + 1)) {
			fRec86_perm[l121] = 0.0f;
			
		}
		for (int l122 = 0; (l122 < 4); l122 = (l122 + 1)) {
			fRec85_perm[l122] = 0.0f;
			
		}
		for (int l123 = 0; (l123 < 4); l123 = (l123 + 1)) {
			fRec88_perm[l123] = 0.0f;
			
		}
		for (int l124 = 0; (l124 < 4); l124 = (l124 + 1)) {
			fRec87_perm[l124] = 0.0f;
			
		}
		for (int l125 = 0; (l125 < 4); l125 = (l125 + 1)) {
			fRec90_perm[l125] = 0.0f;
			
		}
		for (int l126 = 0; (l126 < 4); l126 = (l126 + 1)) {
			fRec89_perm[l126] = 0.0f;
			
		}
		for (int l127 = 0; (l127 < 4); l127 = (l127 + 1)) {
			fRec92_perm[l127] = 0.0f;
			
		}
		for (int l128 = 0; (l128 < 4); l128 = (l128 + 1)) {
			fRec91_perm[l128] = 0.0f;
			
		}
		for (int l129 = 0; (l129 < 4); l129 = (l129 + 1)) {
			fRec94_perm[l129] = 0.0f;
			
		}
		for (int l130 = 0; (l130 < 4); l130 = (l130 + 1)) {
			fRec93_perm[l130] = 0.0f;
			
		}
		for (int l131 = 0; (l131 < 4); l131 = (l131 + 1)) {
			fRec96_perm[l131] = 0.0f;
			
		}
		for (int l132 = 0; (l132 < 4); l132 = (l132 + 1)) {
			fRec95_perm[l132] = 0.0f;
			
		}
		for (int l133 = 0; (l133 < 4); l133 = (l133 + 1)) {
			fRec98_perm[l133] = 0.0f;
			
		}
		for (int l134 = 0; (l134 < 4); l134 = (l134 + 1)) {
			fRec97_perm[l134] = 0.0f;
			
		}
		for (int l135 = 0; (l135 < 4); l135 = (l135 + 1)) {
			fRec100_perm[l135] = 0.0f;
			
		}
		for (int l136 = 0; (l136 < 4); l136 = (l136 + 1)) {
			fRec99_perm[l136] = 0.0f;
			
		}
		for (int l137 = 0; (l137 < 4); l137 = (l137 + 1)) {
			fRec102_perm[l137] = 0.0f;
			
		}
		for (int l138 = 0; (l138 < 4); l138 = (l138 + 1)) {
			fRec101_perm[l138] = 0.0f;
			
		}
		for (int l139 = 0; (l139 < 4); l139 = (l139 + 1)) {
			fRec104_perm[l139] = 0.0f;
			
		}
		for (int l140 = 0; (l140 < 4); l140 = (l140 + 1)) {
			fRec103_perm[l140] = 0.0f;
			
		}
		for (int l141 = 0; (l141 < 4); l141 = (l141 + 1)) {
			fRec106_perm[l141] = 0.0f;
			
		}
		for (int l142 = 0; (l142 < 4); l142 = (l142 + 1)) {
			fRec105_perm[l142] = 0.0f;
			
		}
		for (int l143 = 0; (l143 < 4); l143 = (l143 + 1)) {
			fRec108_perm[l143] = 0.0f;
			
		}
		for (int l144 = 0; (l144 < 4); l144 = (l144 + 1)) {
			fRec107_perm[l144] = 0.0f;
			
		}
		for (int l145 = 0; (l145 < 4); l145 = (l145 + 1)) {
			fRec110_perm[l145] = 0.0f;
			
		}
		for (int l146 = 0; (l146 < 4); l146 = (l146 + 1)) {
			fRec109_perm[l146] = 0.0f;
			
		}
		for (int l147 = 0; (l147 < 4); l147 = (l147 + 1)) {
			fRec112_perm[l147] = 0.0f;
			
		}
		for (int l148 = 0; (l148 < 4); l148 = (l148 + 1)) {
			fRec111_perm[l148] = 0.0f;
			
		}
		for (int l149 = 0; (l149 < 4); l149 = (l149 + 1)) {
			fRec114_perm[l149] = 0.0f;
			
		}
		for (int l150 = 0; (l150 < 4); l150 = (l150 + 1)) {
			fRec113_perm[l150] = 0.0f;
			
		}
		for (int l151 = 0; (l151 < 4); l151 = (l151 + 1)) {
			fRec116_perm[l151] = 0.0f;
			
		}
		for (int l152 = 0; (l152 < 4); l152 = (l152 + 1)) {
			fRec115_perm[l152] = 0.0f;
			
		}
		for (int l153 = 0; (l153 < 4); l153 = (l153 + 1)) {
			fRec118_perm[l153] = 0.0f;
			
		}
		for (int l154 = 0; (l154 < 4); l154 = (l154 + 1)) {
			fRec117_perm[l154] = 0.0f;
			
		}
		for (int l155 = 0; (l155 < 4); l155 = (l155 + 1)) {
			fRec120_perm[l155] = 0.0f;
			
		}
		for (int l156 = 0; (l156 < 4); l156 = (l156 + 1)) {
			fRec119_perm[l156] = 0.0f;
			
		}
		for (int l157 = 0; (l157 < 4); l157 = (l157 + 1)) {
			fYec36_perm[l157] = 0.0f;
			
		}
		for (int l158 = 0; (l158 < 4); l158 = (l158 + 1)) {
			fRec121_perm[l158] = 0.0f;
			
		}
		for (int l159 = 0; (l159 < 4); l159 = (l159 + 1)) {
			fYec37_perm[l159] = 0.0f;
			
		}
		for (int l160 = 0; (l160 < 4); l160 = (l160 + 1)) {
			fRec122_perm[l160] = 0.0f;
			
		}
		for (int l161 = 0; (l161 < 4); l161 = (l161 + 1)) {
			fYec38_perm[l161] = 0.0f;
			
		}
		for (int l162 = 0; (l162 < 4); l162 = (l162 + 1)) {
			fRec123_perm[l162] = 0.0f;
			
		}
		for (int l163 = 0; (l163 < 4); l163 = (l163 + 1)) {
			fYec39_perm[l163] = 0.0f;
			
		}
		for (int l164 = 0; (l164 < 4); l164 = (l164 + 1)) {
			fRec124_perm[l164] = 0.0f;
			
		}
		for (int l165 = 0; (l165 < 4); l165 = (l165 + 1)) {
			fYec40_perm[l165] = 0.0f;
			
		}
		for (int l166 = 0; (l166 < 4); l166 = (l166 + 1)) {
			fRec125_perm[l166] = 0.0f;
			
		}
		for (int l167 = 0; (l167 < 4); l167 = (l167 + 1)) {
			fYec41_perm[l167] = 0.0f;
			
		}
		for (int l168 = 0; (l168 < 4); l168 = (l168 + 1)) {
			fRec126_perm[l168] = 0.0f;
			
		}
		for (int l169 = 0; (l169 < 4); l169 = (l169 + 1)) {
			fYec42_perm[l169] = 0.0f;
			
		}
		for (int l170 = 0; (l170 < 4); l170 = (l170 + 1)) {
			fRec127_perm[l170] = 0.0f;
			
		}
		for (int l171 = 0; (l171 < 4); l171 = (l171 + 1)) {
			fYec43_perm[l171] = 0.0f;
			
		}
		for (int l172 = 0; (l172 < 4); l172 = (l172 + 1)) {
			fRec128_perm[l172] = 0.0f;
			
		}
		for (int l173 = 0; (l173 < 4); l173 = (l173 + 1)) {
			fYec44_perm[l173] = 0.0f;
			
		}
		for (int l174 = 0; (l174 < 4); l174 = (l174 + 1)) {
			fRec129_perm[l174] = 0.0f;
			
		}
		for (int l175 = 0; (l175 < 4); l175 = (l175 + 1)) {
			fYec45_perm[l175] = 0.0f;
			
		}
		for (int l176 = 0; (l176 < 4); l176 = (l176 + 1)) {
			fRec130_perm[l176] = 0.0f;
			
		}
		for (int l177 = 0; (l177 < 4); l177 = (l177 + 1)) {
			fYec46_perm[l177] = 0.0f;
			
		}
		for (int l178 = 0; (l178 < 4); l178 = (l178 + 1)) {
			fRec131_perm[l178] = 0.0f;
			
		}
		for (int l179 = 0; (l179 < 4); l179 = (l179 + 1)) {
			fYec47_perm[l179] = 0.0f;
			
		}
		for (int l180 = 0; (l180 < 4); l180 = (l180 + 1)) {
			fRec132_perm[l180] = 0.0f;
			
		}
		for (int l181 = 0; (l181 < 4); l181 = (l181 + 1)) {
			fVec0_perm[l181] = 0.0f;
			
		}
		for (int l182 = 0; (l182 < 4); l182 = (l182 + 1)) {
			fVec1_perm[l182] = 0.0f;
			
		}
		for (int l183 = 0; (l183 < 4); l183 = (l183 + 1)) {
			fVec2_perm[l183] = 0.0f;
			
		}
		for (int l184 = 0; (l184 < 4); l184 = (l184 + 1)) {
			fVec3_perm[l184] = 0.0f;
			
		}
		for (int l185 = 0; (l185 < 4); l185 = (l185 + 1)) {
			fVec4_perm[l185] = 0.0f;
			
		}
		for (int l186 = 0; (l186 < 4); l186 = (l186 + 1)) {
			fVec5_perm[l186] = 0.0f;
			
		}
		for (int l187 = 0; (l187 < 4); l187 = (l187 + 1)) {
			fVec6_perm[l187] = 0.0f;
			
		}
		for (int l188 = 0; (l188 < 4); l188 = (l188 + 1)) {
			fVec7_perm[l188] = 0.0f;
			
		}
		for (int l189 = 0; (l189 < 4); l189 = (l189 + 1)) {
			fVec8_perm[l189] = 0.0f;
			
		}
		for (int l190 = 0; (l190 < 4); l190 = (l190 + 1)) {
			fVec9_perm[l190] = 0.0f;
			
		}
		for (int l191 = 0; (l191 < 4); l191 = (l191 + 1)) {
			fVec10_perm[l191] = 0.0f;
			
		}
		for (int l192 = 0; (l192 < 4); l192 = (l192 + 1)) {
			fVec11_perm[l192] = 0.0f;
			
		}
		for (int l193 = 0; (l193 < 4); l193 = (l193 + 1)) {
			fVec12_perm[l193] = 0.0f;
			
		}
		for (int l194 = 0; (l194 < 4); l194 = (l194 + 1)) {
			fVec13_perm[l194] = 0.0f;
			
		}
		for (int l195 = 0; (l195 < 4); l195 = (l195 + 1)) {
			fVec14_perm[l195] = 0.0f;
			
		}
		for (int l196 = 0; (l196 < 4); l196 = (l196 + 1)) {
			fVec15_perm[l196] = 0.0f;
			
		}
		for (int l197 = 0; (l197 < 4); l197 = (l197 + 1)) {
			fVec16_perm[l197] = 0.0f;
			
		}
		for (int l198 = 0; (l198 < 4); l198 = (l198 + 1)) {
			fVec17_perm[l198] = 0.0f;
			
		}
		for (int l199 = 0; (l199 < 4); l199 = (l199 + 1)) {
			fVec18_perm[l199] = 0.0f;
			
		}
		for (int l200 = 0; (l200 < 4); l200 = (l200 + 1)) {
			fVec19_perm[l200] = 0.0f;
			
		}
		for (int l201 = 0; (l201 < 4); l201 = (l201 + 1)) {
			fVec20_perm[l201] = 0.0f;
			
		}
		for (int l202 = 0; (l202 < 4); l202 = (l202 + 1)) {
			fVec21_perm[l202] = 0.0f;
			
		}
		for (int l203 = 0; (l203 < 4); l203 = (l203 + 1)) {
			fVec22_perm[l203] = 0.0f;
			
		}
		for (int l204 = 0; (l204 < 4); l204 = (l204 + 1)) {
			fVec23_perm[l204] = 0.0f;
			
		}
		for (int l205 = 0; (l205 < 4); l205 = (l205 + 1)) {
			fVec24_perm[l205] = 0.0f;
			
		}
		for (int l206 = 0; (l206 < 4); l206 = (l206 + 1)) {
			fVec25_perm[l206] = 0.0f;
			
		}
		for (int l207 = 0; (l207 < 4); l207 = (l207 + 1)) {
			fVec26_perm[l207] = 0.0f;
			
		}
		for (int l208 = 0; (l208 < 4); l208 = (l208 + 1)) {
			fVec27_perm[l208] = 0.0f;
			
		}
		for (int l209 = 0; (l209 < 4); l209 = (l209 + 1)) {
			fVec28_perm[l209] = 0.0f;
			
		}
		for (int l210 = 0; (l210 < 4); l210 = (l210 + 1)) {
			fVec29_perm[l210] = 0.0f;
			
		}
		for (int l211 = 0; (l211 < 4); l211 = (l211 + 1)) {
			fVec30_perm[l211] = 0.0f;
			
		}
		for (int l212 = 0; (l212 < 4); l212 = (l212 + 1)) {
			fVec31_perm[l212] = 0.0f;
			
		}
		for (int l213 = 0; (l213 < 4); l213 = (l213 + 1)) {
			fVec32_perm[l213] = 0.0f;
			
		}
		for (int l214 = 0; (l214 < 4); l214 = (l214 + 1)) {
			fVec33_perm[l214] = 0.0f;
			
		}
		for (int l215 = 0; (l215 < 4); l215 = (l215 + 1)) {
			fVec34_perm[l215] = 0.0f;
			
		}
		for (int l216 = 0; (l216 < 4); l216 = (l216 + 1)) {
			fVec35_perm[l216] = 0.0f;
			
		}
		for (int l217 = 0; (l217 < 4); l217 = (l217 + 1)) {
			fVec36_perm[l217] = 0.0f;
			
		}
		for (int l218 = 0; (l218 < 4); l218 = (l218 + 1)) {
			fVec37_perm[l218] = 0.0f;
			
		}
		for (int l219 = 0; (l219 < 4); l219 = (l219 + 1)) {
			fVec38_perm[l219] = 0.0f;
			
		}
		for (int l220 = 0; (l220 < 4); l220 = (l220 + 1)) {
			fVec39_perm[l220] = 0.0f;
			
		}
		for (int l221 = 0; (l221 < 4); l221 = (l221 + 1)) {
			fVec40_perm[l221] = 0.0f;
			
		}
		for (int l222 = 0; (l222 < 4); l222 = (l222 + 1)) {
			fVec41_perm[l222] = 0.0f;
			
		}
		for (int l223 = 0; (l223 < 4); l223 = (l223 + 1)) {
			fVec42_perm[l223] = 0.0f;
			
		}
		for (int l224 = 0; (l224 < 4); l224 = (l224 + 1)) {
			fVec43_perm[l224] = 0.0f;
			
		}
		for (int l225 = 0; (l225 < 4); l225 = (l225 + 1)) {
			fVec44_perm[l225] = 0.0f;
			
		}
		for (int l226 = 0; (l226 < 4); l226 = (l226 + 1)) {
			fVec45_perm[l226] = 0.0f;
			
		}
		for (int l227 = 0; (l227 < 4); l227 = (l227 + 1)) {
			fVec46_perm[l227] = 0.0f;
			
		}
		for (int l228 = 0; (l228 < 4); l228 = (l228 + 1)) {
			fVec47_perm[l228] = 0.0f;
			
		}
		for (int l229 = 0; (l229 < 4); l229 = (l229 + 1)) {
			fVec48_perm[l229] = 0.0f;
			
		}
		for (int l230 = 0; (l230 < 4); l230 = (l230 + 1)) {
			fVec49_perm[l230] = 0.0f;
			
		}
		for (int l231 = 0; (l231 < 4); l231 = (l231 + 1)) {
			fVec50_perm[l231] = 0.0f;
			
		}
		for (int l232 = 0; (l232 < 4); l232 = (l232 + 1)) {
			fVec51_perm[l232] = 0.0f;
			
		}
		for (int l233 = 0; (l233 < 4); l233 = (l233 + 1)) {
			fVec52_perm[l233] = 0.0f;
			
		}
		for (int l234 = 0; (l234 < 4); l234 = (l234 + 1)) {
			fVec53_perm[l234] = 0.0f;
			
		}
		for (int l235 = 0; (l235 < 4); l235 = (l235 + 1)) {
			fVec54_perm[l235] = 0.0f;
			
		}
		for (int l236 = 0; (l236 < 4); l236 = (l236 + 1)) {
			fVec55_perm[l236] = 0.0f;
			
		}
		for (int l237 = 0; (l237 < 4); l237 = (l237 + 1)) {
			fVec56_perm[l237] = 0.0f;
			
		}
		for (int l238 = 0; (l238 < 4); l238 = (l238 + 1)) {
			fVec57_perm[l238] = 0.0f;
			
		}
		for (int l239 = 0; (l239 < 4); l239 = (l239 + 1)) {
			fVec58_perm[l239] = 0.0f;
			
		}
		for (int l240 = 0; (l240 < 4); l240 = (l240 + 1)) {
			fVec59_perm[l240] = 0.0f;
			
		}
		for (int l241 = 0; (l241 < 4); l241 = (l241 + 1)) {
			fVec60_perm[l241] = 0.0f;
			
		}
		for (int l242 = 0; (l242 < 4); l242 = (l242 + 1)) {
			fYec48_perm[l242] = 0.0f;
			
		}
		for (int l243 = 0; (l243 < 4); l243 = (l243 + 1)) {
			fRec133_perm[l243] = 0.0f;
			
		}
		for (int l244 = 0; (l244 < 4); l244 = (l244 + 1)) {
			iRec136_perm[l244] = 0;
			
		}
		for (int l245 = 0; (l245 < 4); l245 = (l245 + 1)) {
			fYec49_perm[l245] = 0.0f;
			
		}
		for (int l246 = 0; (l246 < 4); l246 = (l246 + 1)) {
			fRec135_perm[l246] = 0.0f;
			
		}
		for (int l247 = 0; (l247 < 4); l247 = (l247 + 1)) {
			fRec134_perm[l247] = 0.0f;
			
		}
		for (int l248 = 0; (l248 < 4); l248 = (l248 + 1)) {
			iRec139_perm[l248] = 0;
			
		}
		for (int l249 = 0; (l249 < 4); l249 = (l249 + 1)) {
			fYec50_perm[l249] = 0.0f;
			
		}
		for (int l250 = 0; (l250 < 4); l250 = (l250 + 1)) {
			fRec138_perm[l250] = 0.0f;
			
		}
		for (int l251 = 0; (l251 < 4); l251 = (l251 + 1)) {
			fRec137_perm[l251] = 0.0f;
			
		}
		for (int l252 = 0; (l252 < 4); l252 = (l252 + 1)) {
			iRec142_perm[l252] = 0;
			
		}
		for (int l253 = 0; (l253 < 4); l253 = (l253 + 1)) {
			fYec51_perm[l253] = 0.0f;
			
		}
		for (int l254 = 0; (l254 < 4); l254 = (l254 + 1)) {
			fRec141_perm[l254] = 0.0f;
			
		}
		for (int l255 = 0; (l255 < 4); l255 = (l255 + 1)) {
			fRec140_perm[l255] = 0.0f;
			
		}
		for (int l256 = 0; (l256 < 4); l256 = (l256 + 1)) {
			iRec145_perm[l256] = 0;
			
		}
		for (int l257 = 0; (l257 < 4); l257 = (l257 + 1)) {
			fYec52_perm[l257] = 0.0f;
			
		}
		for (int l258 = 0; (l258 < 4); l258 = (l258 + 1)) {
			fRec144_perm[l258] = 0.0f;
			
		}
		for (int l259 = 0; (l259 < 4); l259 = (l259 + 1)) {
			fRec143_perm[l259] = 0.0f;
			
		}
		for (int l260 = 0; (l260 < 4); l260 = (l260 + 1)) {
			iRec148_perm[l260] = 0;
			
		}
		for (int l261 = 0; (l261 < 4); l261 = (l261 + 1)) {
			fYec53_perm[l261] = 0.0f;
			
		}
		for (int l262 = 0; (l262 < 4); l262 = (l262 + 1)) {
			fRec147_perm[l262] = 0.0f;
			
		}
		for (int l263 = 0; (l263 < 4); l263 = (l263 + 1)) {
			fRec146_perm[l263] = 0.0f;
			
		}
		for (int l264 = 0; (l264 < 4); l264 = (l264 + 1)) {
			iRec151_perm[l264] = 0;
			
		}
		for (int l265 = 0; (l265 < 4); l265 = (l265 + 1)) {
			fYec54_perm[l265] = 0.0f;
			
		}
		for (int l266 = 0; (l266 < 4); l266 = (l266 + 1)) {
			fRec150_perm[l266] = 0.0f;
			
		}
		for (int l267 = 0; (l267 < 4); l267 = (l267 + 1)) {
			fRec149_perm[l267] = 0.0f;
			
		}
		for (int l268 = 0; (l268 < 4); l268 = (l268 + 1)) {
			iRec154_perm[l268] = 0;
			
		}
		for (int l269 = 0; (l269 < 4); l269 = (l269 + 1)) {
			fYec55_perm[l269] = 0.0f;
			
		}
		for (int l270 = 0; (l270 < 4); l270 = (l270 + 1)) {
			fRec153_perm[l270] = 0.0f;
			
		}
		for (int l271 = 0; (l271 < 4); l271 = (l271 + 1)) {
			fRec152_perm[l271] = 0.0f;
			
		}
		for (int l272 = 0; (l272 < 4); l272 = (l272 + 1)) {
			iRec157_perm[l272] = 0;
			
		}
		for (int l273 = 0; (l273 < 4); l273 = (l273 + 1)) {
			fYec56_perm[l273] = 0.0f;
			
		}
		for (int l274 = 0; (l274 < 4); l274 = (l274 + 1)) {
			fRec156_perm[l274] = 0.0f;
			
		}
		for (int l275 = 0; (l275 < 4); l275 = (l275 + 1)) {
			fRec155_perm[l275] = 0.0f;
			
		}
		for (int l276 = 0; (l276 < 4); l276 = (l276 + 1)) {
			fYec57_perm[l276] = 0.0f;
			
		}
		for (int l277 = 0; (l277 < 4); l277 = (l277 + 1)) {
			fRec158_perm[l277] = 0.0f;
			
		}
		for (int l278 = 0; (l278 < 4); l278 = (l278 + 1)) {
			iRec161_perm[l278] = 0;
			
		}
		for (int l279 = 0; (l279 < 4); l279 = (l279 + 1)) {
			fYec58_perm[l279] = 0.0f;
			
		}
		for (int l280 = 0; (l280 < 4); l280 = (l280 + 1)) {
			fRec160_perm[l280] = 0.0f;
			
		}
		for (int l281 = 0; (l281 < 4); l281 = (l281 + 1)) {
			fRec159_perm[l281] = 0.0f;
			
		}
		for (int l282 = 0; (l282 < 4); l282 = (l282 + 1)) {
			iRec164_perm[l282] = 0;
			
		}
		for (int l283 = 0; (l283 < 4); l283 = (l283 + 1)) {
			fYec59_perm[l283] = 0.0f;
			
		}
		for (int l284 = 0; (l284 < 4); l284 = (l284 + 1)) {
			fRec163_perm[l284] = 0.0f;
			
		}
		for (int l285 = 0; (l285 < 4); l285 = (l285 + 1)) {
			fRec162_perm[l285] = 0.0f;
			
		}
		for (int l286 = 0; (l286 < 4); l286 = (l286 + 1)) {
			iRec167_perm[l286] = 0;
			
		}
		for (int l287 = 0; (l287 < 4); l287 = (l287 + 1)) {
			fYec60_perm[l287] = 0.0f;
			
		}
		for (int l288 = 0; (l288 < 4); l288 = (l288 + 1)) {
			fRec166_perm[l288] = 0.0f;
			
		}
		for (int l289 = 0; (l289 < 4); l289 = (l289 + 1)) {
			fRec165_perm[l289] = 0.0f;
			
		}
		for (int l290 = 0; (l290 < 4); l290 = (l290 + 1)) {
			iRec170_perm[l290] = 0;
			
		}
		for (int l291 = 0; (l291 < 4); l291 = (l291 + 1)) {
			fYec61_perm[l291] = 0.0f;
			
		}
		for (int l292 = 0; (l292 < 4); l292 = (l292 + 1)) {
			fRec169_perm[l292] = 0.0f;
			
		}
		for (int l293 = 0; (l293 < 4); l293 = (l293 + 1)) {
			fRec168_perm[l293] = 0.0f;
			
		}
		for (int l294 = 0; (l294 < 4); l294 = (l294 + 1)) {
			fYec62_perm[l294] = 0.0f;
			
		}
		for (int l295 = 0; (l295 < 4); l295 = (l295 + 1)) {
			fRec171_perm[l295] = 0.0f;
			
		}
		for (int l296 = 0; (l296 < 4); l296 = (l296 + 1)) {
			iRec174_perm[l296] = 0;
			
		}
		for (int l297 = 0; (l297 < 4); l297 = (l297 + 1)) {
			fYec63_perm[l297] = 0.0f;
			
		}
		for (int l298 = 0; (l298 < 4); l298 = (l298 + 1)) {
			fRec173_perm[l298] = 0.0f;
			
		}
		for (int l299 = 0; (l299 < 4); l299 = (l299 + 1)) {
			fRec172_perm[l299] = 0.0f;
			
		}
		for (int l300 = 0; (l300 < 4); l300 = (l300 + 1)) {
			iRec177_perm[l300] = 0;
			
		}
		for (int l301 = 0; (l301 < 4); l301 = (l301 + 1)) {
			fYec64_perm[l301] = 0.0f;
			
		}
		for (int l302 = 0; (l302 < 4); l302 = (l302 + 1)) {
			fRec176_perm[l302] = 0.0f;
			
		}
		for (int l303 = 0; (l303 < 4); l303 = (l303 + 1)) {
			fRec175_perm[l303] = 0.0f;
			
		}
		for (int l304 = 0; (l304 < 4); l304 = (l304 + 1)) {
			iRec180_perm[l304] = 0;
			
		}
		for (int l305 = 0; (l305 < 4); l305 = (l305 + 1)) {
			fYec65_perm[l305] = 0.0f;
			
		}
		for (int l306 = 0; (l306 < 4); l306 = (l306 + 1)) {
			fRec179_perm[l306] = 0.0f;
			
		}
		for (int l307 = 0; (l307 < 4); l307 = (l307 + 1)) {
			fRec178_perm[l307] = 0.0f;
			
		}
		for (int l308 = 0; (l308 < 4); l308 = (l308 + 1)) {
			iRec183_perm[l308] = 0;
			
		}
		for (int l309 = 0; (l309 < 4); l309 = (l309 + 1)) {
			fYec66_perm[l309] = 0.0f;
			
		}
		for (int l310 = 0; (l310 < 4); l310 = (l310 + 1)) {
			fRec182_perm[l310] = 0.0f;
			
		}
		for (int l311 = 0; (l311 < 4); l311 = (l311 + 1)) {
			fRec181_perm[l311] = 0.0f;
			
		}
		for (int l312 = 0; (l312 < 4); l312 = (l312 + 1)) {
			iRec186_perm[l312] = 0;
			
		}
		for (int l313 = 0; (l313 < 4); l313 = (l313 + 1)) {
			fYec67_perm[l313] = 0.0f;
			
		}
		for (int l314 = 0; (l314 < 4); l314 = (l314 + 1)) {
			fRec185_perm[l314] = 0.0f;
			
		}
		for (int l315 = 0; (l315 < 4); l315 = (l315 + 1)) {
			fRec184_perm[l315] = 0.0f;
			
		}
		for (int l316 = 0; (l316 < 4); l316 = (l316 + 1)) {
			fYec68_perm[l316] = 0.0f;
			
		}
		for (int l317 = 0; (l317 < 4); l317 = (l317 + 1)) {
			fRec187_perm[l317] = 0.0f;
			
		}
		for (int l318 = 0; (l318 < 4); l318 = (l318 + 1)) {
			iRec190_perm[l318] = 0;
			
		}
		for (int l319 = 0; (l319 < 4); l319 = (l319 + 1)) {
			fYec69_perm[l319] = 0.0f;
			
		}
		for (int l320 = 0; (l320 < 4); l320 = (l320 + 1)) {
			fRec189_perm[l320] = 0.0f;
			
		}
		for (int l321 = 0; (l321 < 4); l321 = (l321 + 1)) {
			fRec188_perm[l321] = 0.0f;
			
		}
		for (int l322 = 0; (l322 < 4); l322 = (l322 + 1)) {
			iRec193_perm[l322] = 0;
			
		}
		for (int l323 = 0; (l323 < 4); l323 = (l323 + 1)) {
			fYec70_perm[l323] = 0.0f;
			
		}
		for (int l324 = 0; (l324 < 4); l324 = (l324 + 1)) {
			fRec192_perm[l324] = 0.0f;
			
		}
		for (int l325 = 0; (l325 < 4); l325 = (l325 + 1)) {
			fRec191_perm[l325] = 0.0f;
			
		}
		for (int l326 = 0; (l326 < 4); l326 = (l326 + 1)) {
			iRec196_perm[l326] = 0;
			
		}
		for (int l327 = 0; (l327 < 4); l327 = (l327 + 1)) {
			fYec71_perm[l327] = 0.0f;
			
		}
		for (int l328 = 0; (l328 < 4); l328 = (l328 + 1)) {
			fRec195_perm[l328] = 0.0f;
			
		}
		for (int l329 = 0; (l329 < 4); l329 = (l329 + 1)) {
			fRec194_perm[l329] = 0.0f;
			
		}
		for (int l330 = 0; (l330 < 4); l330 = (l330 + 1)) {
			iRec199_perm[l330] = 0;
			
		}
		for (int l331 = 0; (l331 < 4); l331 = (l331 + 1)) {
			fYec72_perm[l331] = 0.0f;
			
		}
		for (int l332 = 0; (l332 < 4); l332 = (l332 + 1)) {
			fRec198_perm[l332] = 0.0f;
			
		}
		for (int l333 = 0; (l333 < 4); l333 = (l333 + 1)) {
			fRec197_perm[l333] = 0.0f;
			
		}
		for (int l334 = 0; (l334 < 4); l334 = (l334 + 1)) {
			iRec202_perm[l334] = 0;
			
		}
		for (int l335 = 0; (l335 < 4); l335 = (l335 + 1)) {
			fYec73_perm[l335] = 0.0f;
			
		}
		for (int l336 = 0; (l336 < 4); l336 = (l336 + 1)) {
			fRec201_perm[l336] = 0.0f;
			
		}
		for (int l337 = 0; (l337 < 4); l337 = (l337 + 1)) {
			fRec200_perm[l337] = 0.0f;
			
		}
		for (int l338 = 0; (l338 < 4); l338 = (l338 + 1)) {
			iRec205_perm[l338] = 0;
			
		}
		for (int l339 = 0; (l339 < 4); l339 = (l339 + 1)) {
			fYec74_perm[l339] = 0.0f;
			
		}
		for (int l340 = 0; (l340 < 4); l340 = (l340 + 1)) {
			fRec204_perm[l340] = 0.0f;
			
		}
		for (int l341 = 0; (l341 < 4); l341 = (l341 + 1)) {
			fRec203_perm[l341] = 0.0f;
			
		}
		for (int l342 = 0; (l342 < 4); l342 = (l342 + 1)) {
			iRec208_perm[l342] = 0;
			
		}
		for (int l343 = 0; (l343 < 4); l343 = (l343 + 1)) {
			fYec75_perm[l343] = 0.0f;
			
		}
		for (int l344 = 0; (l344 < 4); l344 = (l344 + 1)) {
			fRec207_perm[l344] = 0.0f;
			
		}
		for (int l345 = 0; (l345 < 4); l345 = (l345 + 1)) {
			fRec206_perm[l345] = 0.0f;
			
		}
		for (int l346 = 0; (l346 < 4); l346 = (l346 + 1)) {
			fYec76_perm[l346] = 0.0f;
			
		}
		for (int l347 = 0; (l347 < 4); l347 = (l347 + 1)) {
			fRec209_perm[l347] = 0.0f;
			
		}
		for (int l348 = 0; (l348 < 4); l348 = (l348 + 1)) {
			iRec212_perm[l348] = 0;
			
		}
		for (int l349 = 0; (l349 < 4); l349 = (l349 + 1)) {
			fYec77_perm[l349] = 0.0f;
			
		}
		for (int l350 = 0; (l350 < 4); l350 = (l350 + 1)) {
			fRec211_perm[l350] = 0.0f;
			
		}
		for (int l351 = 0; (l351 < 4); l351 = (l351 + 1)) {
			fRec210_perm[l351] = 0.0f;
			
		}
		for (int l352 = 0; (l352 < 4); l352 = (l352 + 1)) {
			iRec215_perm[l352] = 0;
			
		}
		for (int l353 = 0; (l353 < 4); l353 = (l353 + 1)) {
			fYec78_perm[l353] = 0.0f;
			
		}
		for (int l354 = 0; (l354 < 4); l354 = (l354 + 1)) {
			fRec214_perm[l354] = 0.0f;
			
		}
		for (int l355 = 0; (l355 < 4); l355 = (l355 + 1)) {
			fRec213_perm[l355] = 0.0f;
			
		}
		for (int l356 = 0; (l356 < 4); l356 = (l356 + 1)) {
			iRec218_perm[l356] = 0;
			
		}
		for (int l357 = 0; (l357 < 4); l357 = (l357 + 1)) {
			fYec79_perm[l357] = 0.0f;
			
		}
		for (int l358 = 0; (l358 < 4); l358 = (l358 + 1)) {
			fRec217_perm[l358] = 0.0f;
			
		}
		for (int l359 = 0; (l359 < 4); l359 = (l359 + 1)) {
			fRec216_perm[l359] = 0.0f;
			
		}
		for (int l360 = 0; (l360 < 4); l360 = (l360 + 1)) {
			iRec221_perm[l360] = 0;
			
		}
		for (int l361 = 0; (l361 < 4); l361 = (l361 + 1)) {
			fYec80_perm[l361] = 0.0f;
			
		}
		for (int l362 = 0; (l362 < 4); l362 = (l362 + 1)) {
			fRec220_perm[l362] = 0.0f;
			
		}
		for (int l363 = 0; (l363 < 4); l363 = (l363 + 1)) {
			fRec219_perm[l363] = 0.0f;
			
		}
		for (int l364 = 0; (l364 < 4); l364 = (l364 + 1)) {
			iRec224_perm[l364] = 0;
			
		}
		for (int l365 = 0; (l365 < 4); l365 = (l365 + 1)) {
			fYec81_perm[l365] = 0.0f;
			
		}
		for (int l366 = 0; (l366 < 4); l366 = (l366 + 1)) {
			fRec223_perm[l366] = 0.0f;
			
		}
		for (int l367 = 0; (l367 < 4); l367 = (l367 + 1)) {
			fRec222_perm[l367] = 0.0f;
			
		}
		for (int l368 = 0; (l368 < 4); l368 = (l368 + 1)) {
			iRec227_perm[l368] = 0;
			
		}
		for (int l369 = 0; (l369 < 4); l369 = (l369 + 1)) {
			fYec82_perm[l369] = 0.0f;
			
		}
		for (int l370 = 0; (l370 < 4); l370 = (l370 + 1)) {
			fRec226_perm[l370] = 0.0f;
			
		}
		for (int l371 = 0; (l371 < 4); l371 = (l371 + 1)) {
			fRec225_perm[l371] = 0.0f;
			
		}
		for (int l372 = 0; (l372 < 4); l372 = (l372 + 1)) {
			iRec230_perm[l372] = 0;
			
		}
		for (int l373 = 0; (l373 < 4); l373 = (l373 + 1)) {
			fYec83_perm[l373] = 0.0f;
			
		}
		for (int l374 = 0; (l374 < 4); l374 = (l374 + 1)) {
			fRec229_perm[l374] = 0.0f;
			
		}
		for (int l375 = 0; (l375 < 4); l375 = (l375 + 1)) {
			fRec228_perm[l375] = 0.0f;
			
		}
		for (int l376 = 0; (l376 < 4); l376 = (l376 + 1)) {
			iRec233_perm[l376] = 0;
			
		}
		for (int l377 = 0; (l377 < 4); l377 = (l377 + 1)) {
			fYec84_perm[l377] = 0.0f;
			
		}
		for (int l378 = 0; (l378 < 4); l378 = (l378 + 1)) {
			fRec232_perm[l378] = 0.0f;
			
		}
		for (int l379 = 0; (l379 < 4); l379 = (l379 + 1)) {
			fRec231_perm[l379] = 0.0f;
			
		}
		for (int l380 = 0; (l380 < 4); l380 = (l380 + 1)) {
			iRec236_perm[l380] = 0;
			
		}
		for (int l381 = 0; (l381 < 4); l381 = (l381 + 1)) {
			fYec85_perm[l381] = 0.0f;
			
		}
		for (int l382 = 0; (l382 < 4); l382 = (l382 + 1)) {
			fRec235_perm[l382] = 0.0f;
			
		}
		for (int l383 = 0; (l383 < 4); l383 = (l383 + 1)) {
			fRec234_perm[l383] = 0.0f;
			
		}
		for (int l384 = 0; (l384 < 4); l384 = (l384 + 1)) {
			iRec239_perm[l384] = 0;
			
		}
		for (int l385 = 0; (l385 < 4); l385 = (l385 + 1)) {
			fYec86_perm[l385] = 0.0f;
			
		}
		for (int l386 = 0; (l386 < 4); l386 = (l386 + 1)) {
			fRec238_perm[l386] = 0.0f;
			
		}
		for (int l387 = 0; (l387 < 4); l387 = (l387 + 1)) {
			fRec237_perm[l387] = 0.0f;
			
		}
		for (int l388 = 0; (l388 < 4); l388 = (l388 + 1)) {
			iRec242_perm[l388] = 0;
			
		}
		for (int l389 = 0; (l389 < 4); l389 = (l389 + 1)) {
			fYec87_perm[l389] = 0.0f;
			
		}
		for (int l390 = 0; (l390 < 4); l390 = (l390 + 1)) {
			fRec241_perm[l390] = 0.0f;
			
		}
		for (int l391 = 0; (l391 < 4); l391 = (l391 + 1)) {
			fRec240_perm[l391] = 0.0f;
			
		}
		for (int l392 = 0; (l392 < 4); l392 = (l392 + 1)) {
			iRec245_perm[l392] = 0;
			
		}
		for (int l393 = 0; (l393 < 4); l393 = (l393 + 1)) {
			fYec88_perm[l393] = 0.0f;
			
		}
		for (int l394 = 0; (l394 < 4); l394 = (l394 + 1)) {
			fRec244_perm[l394] = 0.0f;
			
		}
		for (int l395 = 0; (l395 < 4); l395 = (l395 + 1)) {
			fRec243_perm[l395] = 0.0f;
			
		}
		for (int l396 = 0; (l396 < 4); l396 = (l396 + 1)) {
			fYec89_perm[l396] = 0.0f;
			
		}
		for (int l397 = 0; (l397 < 4); l397 = (l397 + 1)) {
			fRec246_perm[l397] = 0.0f;
			
		}
		for (int l398 = 0; (l398 < 4); l398 = (l398 + 1)) {
			iRec249_perm[l398] = 0;
			
		}
		for (int l399 = 0; (l399 < 4); l399 = (l399 + 1)) {
			fRec248_perm[l399] = 0.0f;
			
		}
		for (int l400 = 0; (l400 < 4); l400 = (l400 + 1)) {
			fRec247_perm[l400] = 0.0f;
			
		}
		for (int l401 = 0; (l401 < 4); l401 = (l401 + 1)) {
			iRec252_perm[l401] = 0;
			
		}
		for (int l402 = 0; (l402 < 4); l402 = (l402 + 1)) {
			fRec251_perm[l402] = 0.0f;
			
		}
		for (int l403 = 0; (l403 < 4); l403 = (l403 + 1)) {
			fRec250_perm[l403] = 0.0f;
			
		}
		for (int l404 = 0; (l404 < 4); l404 = (l404 + 1)) {
			iRec255_perm[l404] = 0;
			
		}
		for (int l405 = 0; (l405 < 4); l405 = (l405 + 1)) {
			fRec254_perm[l405] = 0.0f;
			
		}
		for (int l406 = 0; (l406 < 4); l406 = (l406 + 1)) {
			fRec253_perm[l406] = 0.0f;
			
		}
		for (int l407 = 0; (l407 < 4); l407 = (l407 + 1)) {
			iRec258_perm[l407] = 0;
			
		}
		for (int l408 = 0; (l408 < 4); l408 = (l408 + 1)) {
			fRec257_perm[l408] = 0.0f;
			
		}
		for (int l409 = 0; (l409 < 4); l409 = (l409 + 1)) {
			fRec256_perm[l409] = 0.0f;
			
		}
		for (int l410 = 0; (l410 < 4); l410 = (l410 + 1)) {
			iRec261_perm[l410] = 0;
			
		}
		for (int l411 = 0; (l411 < 4); l411 = (l411 + 1)) {
			fRec260_perm[l411] = 0.0f;
			
		}
		for (int l412 = 0; (l412 < 4); l412 = (l412 + 1)) {
			fRec259_perm[l412] = 0.0f;
			
		}
		for (int l413 = 0; (l413 < 4); l413 = (l413 + 1)) {
			iRec264_perm[l413] = 0;
			
		}
		for (int l414 = 0; (l414 < 4); l414 = (l414 + 1)) {
			fRec263_perm[l414] = 0.0f;
			
		}
		for (int l415 = 0; (l415 < 4); l415 = (l415 + 1)) {
			fRec262_perm[l415] = 0.0f;
			
		}
		for (int l416 = 0; (l416 < 4); l416 = (l416 + 1)) {
			iRec267_perm[l416] = 0;
			
		}
		for (int l417 = 0; (l417 < 4); l417 = (l417 + 1)) {
			fRec266_perm[l417] = 0.0f;
			
		}
		for (int l418 = 0; (l418 < 4); l418 = (l418 + 1)) {
			fRec265_perm[l418] = 0.0f;
			
		}
		for (int l419 = 0; (l419 < 4); l419 = (l419 + 1)) {
			iRec270_perm[l419] = 0;
			
		}
		for (int l420 = 0; (l420 < 4); l420 = (l420 + 1)) {
			fRec269_perm[l420] = 0.0f;
			
		}
		for (int l421 = 0; (l421 < 4); l421 = (l421 + 1)) {
			fRec268_perm[l421] = 0.0f;
			
		}
		for (int l422 = 0; (l422 < 4); l422 = (l422 + 1)) {
			iRec273_perm[l422] = 0;
			
		}
		for (int l423 = 0; (l423 < 4); l423 = (l423 + 1)) {
			fRec272_perm[l423] = 0.0f;
			
		}
		for (int l424 = 0; (l424 < 4); l424 = (l424 + 1)) {
			fRec271_perm[l424] = 0.0f;
			
		}
		for (int l425 = 0; (l425 < 4); l425 = (l425 + 1)) {
			iRec276_perm[l425] = 0;
			
		}
		for (int l426 = 0; (l426 < 4); l426 = (l426 + 1)) {
			fRec275_perm[l426] = 0.0f;
			
		}
		for (int l427 = 0; (l427 < 4); l427 = (l427 + 1)) {
			fRec274_perm[l427] = 0.0f;
			
		}
		for (int l428 = 0; (l428 < 4); l428 = (l428 + 1)) {
			iRec279_perm[l428] = 0;
			
		}
		for (int l429 = 0; (l429 < 4); l429 = (l429 + 1)) {
			fRec278_perm[l429] = 0.0f;
			
		}
		for (int l430 = 0; (l430 < 4); l430 = (l430 + 1)) {
			fRec277_perm[l430] = 0.0f;
			
		}
		for (int l431 = 0; (l431 < 4); l431 = (l431 + 1)) {
			iRec282_perm[l431] = 0;
			
		}
		for (int l432 = 0; (l432 < 4); l432 = (l432 + 1)) {
			fRec281_perm[l432] = 0.0f;
			
		}
		for (int l433 = 0; (l433 < 4); l433 = (l433 + 1)) {
			fRec280_perm[l433] = 0.0f;
			
		}
		for (int l434 = 0; (l434 < 4); l434 = (l434 + 1)) {
			fYec90_perm[l434] = 0.0f;
			
		}
		for (int l435 = 0; (l435 < 4); l435 = (l435 + 1)) {
			fRec283_perm[l435] = 0.0f;
			
		}
		for (int l436 = 0; (l436 < 4); l436 = (l436 + 1)) {
			fYec91_perm[l436] = 0.0f;
			
		}
		for (int l437 = 0; (l437 < 4); l437 = (l437 + 1)) {
			fRec285_perm[l437] = 0.0f;
			
		}
		for (int l438 = 0; (l438 < 4); l438 = (l438 + 1)) {
			fYec92_perm[l438] = 0.0f;
			
		}
		for (int l439 = 0; (l439 < 4); l439 = (l439 + 1)) {
			fRec284_perm[l439] = 0.0f;
			
		}
		for (int l440 = 0; (l440 < 4); l440 = (l440 + 1)) {
			fYec93_perm[l440] = 0.0f;
			
		}
		for (int l441 = 0; (l441 < 4); l441 = (l441 + 1)) {
			fRec287_perm[l441] = 0.0f;
			
		}
		for (int l442 = 0; (l442 < 4); l442 = (l442 + 1)) {
			fYec94_perm[l442] = 0.0f;
			
		}
		for (int l443 = 0; (l443 < 4); l443 = (l443 + 1)) {
			fRec286_perm[l443] = 0.0f;
			
		}
		for (int l444 = 0; (l444 < 4); l444 = (l444 + 1)) {
			fYec95_perm[l444] = 0.0f;
			
		}
		for (int l445 = 0; (l445 < 4); l445 = (l445 + 1)) {
			fRec289_perm[l445] = 0.0f;
			
		}
		for (int l446 = 0; (l446 < 4); l446 = (l446 + 1)) {
			fYec96_perm[l446] = 0.0f;
			
		}
		for (int l447 = 0; (l447 < 4); l447 = (l447 + 1)) {
			fRec288_perm[l447] = 0.0f;
			
		}
		for (int l448 = 0; (l448 < 4); l448 = (l448 + 1)) {
			fYec97_perm[l448] = 0.0f;
			
		}
		for (int l449 = 0; (l449 < 4); l449 = (l449 + 1)) {
			fRec291_perm[l449] = 0.0f;
			
		}
		for (int l450 = 0; (l450 < 4); l450 = (l450 + 1)) {
			fYec98_perm[l450] = 0.0f;
			
		}
		for (int l451 = 0; (l451 < 4); l451 = (l451 + 1)) {
			fRec290_perm[l451] = 0.0f;
			
		}
		for (int l452 = 0; (l452 < 4); l452 = (l452 + 1)) {
			fRec293_perm[l452] = 0.0f;
			
		}
		for (int l453 = 0; (l453 < 4); l453 = (l453 + 1)) {
			fRec292_perm[l453] = 0.0f;
			
		}
		for (int l454 = 0; (l454 < 4); l454 = (l454 + 1)) {
			fRec295_perm[l454] = 0.0f;
			
		}
		for (int l455 = 0; (l455 < 4); l455 = (l455 + 1)) {
			fRec294_perm[l455] = 0.0f;
			
		}
		for (int l456 = 0; (l456 < 4); l456 = (l456 + 1)) {
			fRec297_perm[l456] = 0.0f;
			
		}
		for (int l457 = 0; (l457 < 4); l457 = (l457 + 1)) {
			fRec296_perm[l457] = 0.0f;
			
		}
		for (int l458 = 0; (l458 < 4); l458 = (l458 + 1)) {
			fRec299_perm[l458] = 0.0f;
			
		}
		for (int l459 = 0; (l459 < 4); l459 = (l459 + 1)) {
			fRec298_perm[l459] = 0.0f;
			
		}
		for (int l460 = 0; (l460 < 4); l460 = (l460 + 1)) {
			iRec305_perm[l460] = 0;
			
		}
		for (int l461 = 0; (l461 < 4); l461 = (l461 + 1)) {
			fRec302_perm[l461] = 0.0f;
			
		}
		for (int l462 = 0; (l462 < 4); l462 = (l462 + 1)) {
			iRec303_perm[l462] = 0;
			
		}
		for (int l463 = 0; (l463 < 4); l463 = (l463 + 1)) {
			fRec304_perm[l463] = 0.0f;
			
		}
		for (int l464 = 0; (l464 < 4); l464 = (l464 + 1)) {
			fYec99_perm[l464] = 0.0f;
			
		}
		for (int l465 = 0; (l465 < 4); l465 = (l465 + 1)) {
			fRec301_perm[l465] = 0.0f;
			
		}
		for (int l466 = 0; (l466 < 4); l466 = (l466 + 1)) {
			fRec300_perm[l466] = 0.0f;
			
		}
		for (int l467 = 0; (l467 < 4); l467 = (l467 + 1)) {
			fRec306_perm[l467] = 0.0f;
			
		}
		for (int l468 = 0; (l468 < 4); l468 = (l468 + 1)) {
			fRec307_perm[l468] = 0.0f;
			
		}
		for (int l469 = 0; (l469 < 4); l469 = (l469 + 1)) {
			fRec308_perm[l469] = 0.0f;
			
		}
		for (int l470 = 0; (l470 < 4); l470 = (l470 + 1)) {
			fYec100_perm[l470] = 0.0f;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("plugin");
		ui_interface->addButton("A0", &fButton10);
		ui_interface->addButton("A1", &fButton22);
		ui_interface->addButton("A2", &fButton34);
		ui_interface->addButton("A3", &fButton46);
		ui_interface->addButton("A4", &fButton58);
		ui_interface->addButton("C0", &fButton1);
		ui_interface->addButton("C1", &fButton13);
		ui_interface->addButton("C2", &fButton25);
		ui_interface->addButton("C3", &fButton37);
		ui_interface->addButton("C4", &fButton49);
		ui_interface->addButton("D0", &fButton3);
		ui_interface->addButton("D1", &fButton15);
		ui_interface->addButton("D2", &fButton27);
		ui_interface->addButton("D3", &fButton39);
		ui_interface->addButton("D4", &fButton51);
		ui_interface->addButton("F0", &fButton6);
		ui_interface->addButton("F1", &fButton18);
		ui_interface->addButton("F2", &fButton30);
		ui_interface->addButton("F3", &fButton42);
		ui_interface->addButton("F4", &fButton54);
		ui_interface->addButton("G0", &fButton8);
		ui_interface->addButton("G1", &fButton20);
		ui_interface->addButton("G2", &fButton32);
		ui_interface->addButton("G3", &fButton44);
		ui_interface->addButton("G4", &fButton56);
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("vibrato");
		ui_interface->declare(&fHslider2, "1", "");
		ui_interface->addHorizontalSlider("depth", &fHslider2, 0.0f, 0.0f, 1.0f, 0.200000003f);
		ui_interface->declare(&fHslider0, "2", "");
		ui_interface->addHorizontalSlider("speed", &fHslider0, 0.0f, 0.0f, 1.0f, 0.200000003f);
		ui_interface->closeBox();
		ui_interface->addButton("a0", &fButton9);
		ui_interface->addButton("a1", &fButton21);
		ui_interface->addButton("a2", &fButton33);
		ui_interface->addButton("a3", &fButton45);
		ui_interface->addButton("a4", &fButton57);
		ui_interface->addButton("b0", &fButton11);
		ui_interface->addButton("b1", &fButton23);
		ui_interface->addButton("b2", &fButton35);
		ui_interface->addButton("b3", &fButton47);
		ui_interface->addButton("b4", &fButton59);
		ui_interface->addHorizontalSlider("balance", &fHslider6, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->openHorizontalBox("bass");
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->addVerticalSlider("16' b", &fVslider5, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider4, "2", "");
		ui_interface->addVerticalSlider("8' b", &fVslider4, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fHslider4, "3", "");
		ui_interface->addHorizontalSlider("bass manual", &fHslider4, 0.0f, 0.0f, 1.0f, 1.0f);
		ui_interface->declare(&fVslider6, "3", "");
		ui_interface->addVerticalSlider("bass volume", &fVslider6, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->addButton("c0", &fButton0);
		ui_interface->addButton("c1", &fButton12);
		ui_interface->addButton("c2", &fButton24);
		ui_interface->addButton("c3", &fButton36);
		ui_interface->addButton("c4", &fButton48);
		ui_interface->addButton("c5", &fButton60);
		ui_interface->addButton("d0", &fButton2);
		ui_interface->addButton("d1", &fButton14);
		ui_interface->addButton("d2", &fButton26);
		ui_interface->addButton("d3", &fButton38);
		ui_interface->addButton("d4", &fButton50);
		ui_interface->addButton("e0", &fButton4);
		ui_interface->addButton("e1", &fButton16);
		ui_interface->addButton("e2", &fButton28);
		ui_interface->addButton("e3", &fButton40);
		ui_interface->addButton("e4", &fButton52);
		ui_interface->addButton("f0", &fButton5);
		ui_interface->addButton("f1", &fButton17);
		ui_interface->addButton("f2", &fButton29);
		ui_interface->addButton("f3", &fButton41);
		ui_interface->addButton("f4", &fButton53);
		ui_interface->addButton("g0", &fButton7);
		ui_interface->addButton("g1", &fButton19);
		ui_interface->addButton("g2", &fButton31);
		ui_interface->addButton("g3", &fButton43);
		ui_interface->addButton("g4", &fButton55);
		ui_interface->openHorizontalBox("i");
		ui_interface->declare(&fVslider13, "1", "");
		ui_interface->addVerticalSlider("16' i", &fVslider13, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider12, "2", "");
		ui_interface->addVerticalSlider("8' i", &fVslider12, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider11, "3", "");
		ui_interface->addVerticalSlider("4' i", &fVslider11, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider10, "4", "");
		ui_interface->addVerticalSlider("2 2/3' i", &fVslider10, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider9, "5", "");
		ui_interface->addVerticalSlider("2' i", &fVslider9, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider8, "6", "");
		ui_interface->addVerticalSlider("1 3/5' i", &fVslider8, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider7, "7", "");
		ui_interface->addVerticalSlider("1' i", &fVslider7, 0.5f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("ii");
		ui_interface->declare(&fVslider14, "1", "");
		ui_interface->addVerticalSlider("bright", &fVslider14, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->addVerticalSlider("16' ii", &fVslider3, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider2, "3", "");
		ui_interface->addVerticalSlider("8' ii", &fVslider2, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider1, "4", "");
		ui_interface->addVerticalSlider("4' ii", &fVslider1, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->declare(&fVslider0, "5", "");
		ui_interface->addVerticalSlider("2' ii", &fVslider0, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("percussive", &fHslider7, 1.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->addHorizontalSlider("pitch", &fHslider1, 0.0f, -1.0f, 1.0f, 0.0500000007f);
		ui_interface->addHorizontalSlider("realism", &fHslider3, 0.0f, 0.0f, 1.0f, 0.25f);
		ui_interface->addHorizontalSlider("volume", &fHslider5, 0.5f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		fOutput0_ptr = outputs[0];
		FAUSTFLOAT* fOutput0 = 0;
		fOutput1_ptr = outputs[1];
		FAUSTFLOAT* fOutput1 = 0;
		float fSlow0 = (fConst1 * ((3.0f * float(fHslider0)) + 5.0f));
		float fSlow1 = (0.0299999993f * float(fHslider1));
		float fSlow2 = ((0.0148999998f * float(fHslider2)) + 9.99999975e-05f);
		float fSlow3 = float(fHslider3);
		int iSlow4 = (fSlow3 > 0.166666672f);
		float fSlow5 = (iSlow4?1.00138295f:1.0f);
		float fSlow6 = (iSlow4?1.00379598f:1.0f);
		float fSlow7 = (iSlow4?0.999484003f:1.0f);
		float fSlow8 = (iSlow4?1.00113499f:1.0f);
		float fSlow9 = (iSlow4?1.00006402f:1.0f);
		float fSlow10 = (iSlow4?0.998889029f:1.0f);
		float fSlow11 = (iSlow4?0.997198999f:1.0f);
		float fSlow12 = (iSlow4?0.997294009f:1.0f);
		float fSlow13 = (iSlow4?1.00056195f:1.0f);
		float fSlow14 = (iSlow4?1.00246406f:1.0f);
		float fSlow15 = (iSlow4?0.996945024f:1.0f);
		float fSlow16 = (iSlow4?1.00311804f:1.0f);
		float fSlow17 = float(fHslider4);
		float fSlow18 = (1.0f - fSlow17);
		float fSlow19 = float(fButton0);
		float* fVec0 = &fVec0_tmp[4];
		float fSlow20 = float(fButton1);
		float* fVec1 = &fVec1_tmp[4];
		float fSlow21 = float(fButton2);
		float* fVec2 = &fVec2_tmp[4];
		float fSlow22 = float(fButton3);
		float* fVec3 = &fVec3_tmp[4];
		float fSlow23 = float(fButton4);
		float* fVec4 = &fVec4_tmp[4];
		float fSlow24 = float(fButton5);
		float* fVec5 = &fVec5_tmp[4];
		float fSlow25 = float(fButton6);
		float* fVec6 = &fVec6_tmp[4];
		float fSlow26 = float(fButton7);
		float* fVec7 = &fVec7_tmp[4];
		float fSlow27 = float(fButton8);
		float* fVec8 = &fVec8_tmp[4];
		float fSlow28 = float(fButton9);
		float* fVec9 = &fVec9_tmp[4];
		float fSlow29 = float(fButton10);
		float* fVec10 = &fVec10_tmp[4];
		float fSlow30 = float(fButton11);
		float* fVec11 = &fVec11_tmp[4];
		float fSlow31 = float(fButton12);
		float* fVec12 = &fVec12_tmp[4];
		float fSlow32 = float(fButton13);
		float* fVec13 = &fVec13_tmp[4];
		float fSlow33 = float(fButton14);
		float* fVec14 = &fVec14_tmp[4];
		float fSlow34 = float(fButton15);
		float* fVec15 = &fVec15_tmp[4];
		float fSlow35 = float(fButton16);
		float* fVec16 = &fVec16_tmp[4];
		float fSlow36 = float(fButton17);
		float* fVec17 = &fVec17_tmp[4];
		float fSlow37 = float(fButton18);
		float* fVec18 = &fVec18_tmp[4];
		float fSlow38 = float(fButton19);
		float* fVec19 = &fVec19_tmp[4];
		float fSlow39 = float(fButton20);
		float* fVec20 = &fVec20_tmp[4];
		float fSlow40 = float(fButton21);
		float* fVec21 = &fVec21_tmp[4];
		float fSlow41 = float(fButton22);
		float* fVec22 = &fVec22_tmp[4];
		float fSlow42 = float(fButton23);
		float* fVec23 = &fVec23_tmp[4];
		float fSlow43 = float(fButton24);
		float* fVec24 = &fVec24_tmp[4];
		float fSlow44 = float(fButton25);
		float* fVec25 = &fVec25_tmp[4];
		float fSlow45 = float(fButton26);
		float* fVec26 = &fVec26_tmp[4];
		float fSlow46 = float(fButton27);
		float* fVec27 = &fVec27_tmp[4];
		float fSlow47 = float(fButton28);
		float* fVec28 = &fVec28_tmp[4];
		float fSlow48 = float(fButton29);
		float* fVec29 = &fVec29_tmp[4];
		float fSlow49 = float(fButton30);
		float* fVec30 = &fVec30_tmp[4];
		float fSlow50 = float(fButton31);
		float* fVec31 = &fVec31_tmp[4];
		float fSlow51 = float(fButton32);
		float* fVec32 = &fVec32_tmp[4];
		float fSlow52 = float(fButton33);
		float* fVec33 = &fVec33_tmp[4];
		float fSlow53 = float(fButton34);
		float* fVec34 = &fVec34_tmp[4];
		float fSlow54 = float(fButton35);
		float* fVec35 = &fVec35_tmp[4];
		float fSlow55 = float(fButton36);
		float* fVec36 = &fVec36_tmp[4];
		float fSlow56 = float(fButton37);
		float* fVec37 = &fVec37_tmp[4];
		float fSlow57 = float(fButton38);
		float* fVec38 = &fVec38_tmp[4];
		float fSlow58 = float(fButton39);
		float* fVec39 = &fVec39_tmp[4];
		float fSlow59 = float(fButton40);
		float* fVec40 = &fVec40_tmp[4];
		float fSlow60 = float(fButton41);
		float* fVec41 = &fVec41_tmp[4];
		float fSlow61 = float(fButton42);
		float* fVec42 = &fVec42_tmp[4];
		float fSlow62 = float(fButton43);
		float* fVec43 = &fVec43_tmp[4];
		float fSlow63 = float(fButton44);
		float* fVec44 = &fVec44_tmp[4];
		float fSlow64 = float(fButton45);
		float* fVec45 = &fVec45_tmp[4];
		float fSlow65 = float(fButton46);
		float* fVec46 = &fVec46_tmp[4];
		float fSlow66 = float(fButton47);
		float* fVec47 = &fVec47_tmp[4];
		float fSlow67 = float(fButton48);
		float* fVec48 = &fVec48_tmp[4];
		float fSlow68 = float(fButton49);
		float* fVec49 = &fVec49_tmp[4];
		float fSlow69 = float(fButton50);
		float* fVec50 = &fVec50_tmp[4];
		float fSlow70 = float(fButton51);
		float* fVec51 = &fVec51_tmp[4];
		float fSlow71 = float(fButton52);
		float* fVec52 = &fVec52_tmp[4];
		float fSlow72 = float(fButton53);
		float* fVec53 = &fVec53_tmp[4];
		float fSlow73 = float(fButton54);
		float* fVec54 = &fVec54_tmp[4];
		float fSlow74 = float(fButton55);
		float* fVec55 = &fVec55_tmp[4];
		float fSlow75 = float(fButton56);
		float* fVec56 = &fVec56_tmp[4];
		float fSlow76 = float(fButton57);
		float* fVec57 = &fVec57_tmp[4];
		float fSlow77 = float(fButton58);
		float* fVec58 = &fVec58_tmp[4];
		float fSlow78 = float(fButton59);
		float* fVec59 = &fVec59_tmp[4];
		float fSlow79 = float(fButton60);
		float* fVec60 = &fVec60_tmp[4];
		float fSlow80 = float(fVslider0);
		float fSlow81 = ((1.0f - (2.80999994f * ((1.0f - fSlow80) * fSlow80))) * fSlow80);
		float fSlow82 = ((fSlow3 >= 0.833333313f)?1.0f:0.0f);
		float fSlow83 = (0.458333343f * fSlow81);
		float fSlow84 = float(fVslider1);
		float fSlow85 = ((1.0f - (2.80999994f * ((1.0f - fSlow84) * fSlow84))) * fSlow84);
		float fSlow86 = (0.458333343f * fSlow85);
		float fSlow87 = float(fVslider2);
		float fSlow88 = ((1.0f - (2.80999994f * ((1.0f - fSlow87) * fSlow87))) * fSlow87);
		float fSlow89 = (0.458333343f * fSlow88);
		float fSlow90 = float(fVslider3);
		float fSlow91 = ((1.0f - (2.80999994f * ((1.0f - fSlow90) * fSlow90))) * fSlow90);
		float fSlow92 = (0.458333343f * fSlow91);
		float fSlow93 = float(fVslider4);
		float fSlow94 = ((1.0f - (2.80999994f * ((1.0f - fSlow93) * fSlow93))) * fSlow93);
		float fSlow95 = float(fVslider5);
		float fSlow96 = ((1.0f - (2.80999994f * ((1.0f - fSlow95) * fSlow95))) * fSlow95);
		float fSlow97 = (0.0199999996f * float(fVslider6));
		float fSlow98 = (0.0199999996f * mydsp_faustpower2_f(float(fHslider5)));
		float fSlow99 = float(fHslider6);
		float fSlow100 = (1.0f - fSlow99);
		float fSlow101 = float(fVslider7);
		float fSlow102 = ((1.0f - (2.80999994f * ((1.0f - fSlow101) * fSlow101))) * fSlow101);
		float fSlow103 = float(fVslider8);
		float fSlow104 = ((1.0f - (2.80999994f * ((1.0f - fSlow103) * fSlow103))) * fSlow103);
		float fSlow105 = float(fVslider9);
		float fSlow106 = ((1.0f - (2.80999994f * ((1.0f - fSlow105) * fSlow105))) * fSlow105);
		float fSlow107 = float(fVslider10);
		float fSlow108 = ((1.0f - (2.80999994f * ((1.0f - fSlow107) * fSlow107))) * fSlow107);
		float fSlow109 = float(fVslider11);
		float fSlow110 = ((1.0f - (2.80999994f * ((1.0f - fSlow109) * fSlow109))) * fSlow109);
		float fSlow111 = float(fVslider12);
		float fSlow112 = ((1.0f - (2.80999994f * ((1.0f - fSlow111) * fSlow111))) * fSlow111);
		float fSlow113 = float(fVslider13);
		float fSlow114 = ((1.0f - (2.80999994f * ((1.0f - fSlow113) * fSlow113))) * fSlow113);
		float fSlow115 = (2.5f * fSlow99);
		float fSlow116 = (0.961538434f * float(fVslider14));
		float fSlow117 = (fSlow116 + 0.0192307699f);
		float fSlow118 = (0.600000024f * (0.980769217f - fSlow116));
		float fSlow119 = (4.5f * float(fHslider7));
		float fSlow120 = ((fSlow3 > 0.5f)?0.0135700004f:0.0f);
		int fullcount = count;
		int index = 0;
		/* Main loop */
		for (index = 0; (index <= (fullcount - 32)); index = (index + 32)) {
			fOutput0 = &fOutput0_ptr[index];
			fOutput1 = &fOutput1_ptr[index];
			int count = 32;
			/* Recursive loop 0 */
			/* Pre code */
			for (int j0 = 0; (j0 < 4); j0 = (j0 + 1)) {
				fRec5_tmp[j0] = fRec5_perm[j0];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec5[i] = (fSlow0 + ((fRec5[(i - 1)] > 1.0f)?(fRec5[(i - 1)] + -1.0f):fRec5[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec5_perm[j] = fRec5_tmp[(count + j)];
				
			}
			/* Recursive loop 1 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec0[i] = (fSlow1 + ((fSlow2 * sinf((6.28318548f * fRec5[i]))) + 1.0f));
				
			}
			/* Recursive loop 2 */
			/* Pre code */
			for (int j1 = 0; (j1 < 4); j1 = (j1 + 1)) {
				fRec4_tmp[j1] = fRec4_perm[j1];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec1[i] = (fRec4[(i - 1)] + (fConst1 * (4186.00928f * (fZec0[i] * fSlow5))));
				fRec4[i] = ((fZec1[i] > 1.0f)?(fZec1[i] + -1.0f):fZec1[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec4_perm[j] = fRec4_tmp[(count + j)];
				
			}
			/* Recursive loop 3 */
			/* Pre code */
			for (int j10 = 0; (j10 < 4); j10 = (j10 + 1)) {
				fRec11_tmp[j10] = fRec11_perm[j10];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec5[i] = (fRec11[(i - 1)] + (fConst1 * (4434.92188f * (fZec0[i] * fSlow6))));
				fRec11[i] = ((fZec5[i] > 1.0f)?(fZec5[i] + -1.0f):fZec5[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec11_perm[j] = fRec11_tmp[(count + j)];
				
			}
			/* Recursive loop 4 */
			/* Pre code */
			for (int j19 = 0; (j19 < 4); j19 = (j19 + 1)) {
				fRec17_tmp[j19] = fRec17_perm[j19];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec9[i] = (fRec17[(i - 1)] + (fConst1 * (4698.63623f * (fZec0[i] * fSlow7))));
				fRec17[i] = ((fZec9[i] > 1.0f)?(fZec9[i] + -1.0f):fZec9[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec17_perm[j] = fRec17_tmp[(count + j)];
				
			}
			/* Recursive loop 5 */
			/* Pre code */
			for (int j28 = 0; (j28 < 4); j28 = (j28 + 1)) {
				fRec23_tmp[j28] = fRec23_perm[j28];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec13[i] = (fRec23[(i - 1)] + (fConst1 * (4978.03174f * (fZec0[i] * fSlow8))));
				fRec23[i] = ((fZec13[i] > 1.0f)?(fZec13[i] + -1.0f):fZec13[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec23_perm[j] = fRec23_tmp[(count + j)];
				
			}
			/* Recursive loop 6 */
			/* Pre code */
			for (int j37 = 0; (j37 < 4); j37 = (j37 + 1)) {
				fRec29_tmp[j37] = fRec29_perm[j37];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec17[i] = (fRec29[(i - 1)] + (fConst1 * (5274.04102f * (fZec0[i] * fSlow9))));
				fRec29[i] = ((fZec17[i] > 1.0f)?(fZec17[i] + -1.0f):fZec17[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec29_perm[j] = fRec29_tmp[(count + j)];
				
			}
			/* Recursive loop 7 */
			/* Pre code */
			for (int j46 = 0; (j46 < 4); j46 = (j46 + 1)) {
				fRec35_tmp[j46] = fRec35_perm[j46];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec21[i] = (fRec35[(i - 1)] + (fConst1 * (5587.65186f * (fZec0[i] * fSlow10))));
				fRec35[i] = ((fZec21[i] > 1.0f)?(fZec21[i] + -1.0f):fZec21[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec35_perm[j] = fRec35_tmp[(count + j)];
				
			}
			/* Recursive loop 8 */
			/* Pre code */
			for (int j55 = 0; (j55 < 4); j55 = (j55 + 1)) {
				fRec41_tmp[j55] = fRec41_perm[j55];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec25[i] = (fRec41[(i - 1)] + (fConst1 * (5919.91064f * (fZec0[i] * fSlow11))));
				fRec41[i] = ((fZec25[i] > 1.0f)?(fZec25[i] + -1.0f):fZec25[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec41_perm[j] = fRec41_tmp[(count + j)];
				
			}
			/* Recursive loop 9 */
			/* Pre code */
			for (int j64 = 0; (j64 < 4); j64 = (j64 + 1)) {
				fRec47_tmp[j64] = fRec47_perm[j64];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec29[i] = (fRec47[(i - 1)] + (fConst1 * (6271.92676f * (fZec0[i] * fSlow12))));
				fRec47[i] = ((fZec29[i] > 1.0f)?(fZec29[i] + -1.0f):fZec29[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec47_perm[j] = fRec47_tmp[(count + j)];
				
			}
			/* Recursive loop 10 */
			/* Pre code */
			for (int j73 = 0; (j73 < 4); j73 = (j73 + 1)) {
				fRec53_tmp[j73] = fRec53_perm[j73];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec33[i] = (fRec53[(i - 1)] + (fConst1 * (6644.875f * (fZec0[i] * fSlow13))));
				fRec53[i] = ((fZec33[i] > 1.0f)?(fZec33[i] + -1.0f):fZec33[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec53_perm[j] = fRec53_tmp[(count + j)];
				
			}
			/* Recursive loop 11 */
			/* Pre code */
			for (int j82 = 0; (j82 < 4); j82 = (j82 + 1)) {
				fRec59_tmp[j82] = fRec59_perm[j82];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec37[i] = (fRec59[(i - 1)] + (fConst1 * (7040.0f * (fZec0[i] * fSlow14))));
				fRec59[i] = ((fZec37[i] > 1.0f)?(fZec37[i] + -1.0f):fZec37[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec59_perm[j] = fRec59_tmp[(count + j)];
				
			}
			/* Recursive loop 12 */
			/* Pre code */
			for (int j91 = 0; (j91 < 4); j91 = (j91 + 1)) {
				fRec65_tmp[j91] = fRec65_perm[j91];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec41[i] = (fRec65[(i - 1)] + (fConst1 * (7458.62012f * (fZec0[i] * fSlow15))));
				fRec65[i] = ((fZec41[i] > 1.0f)?(fZec41[i] + -1.0f):fZec41[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec65_perm[j] = fRec65_tmp[(count + j)];
				
			}
			/* Recursive loop 13 */
			/* Pre code */
			for (int j100 = 0; (j100 < 4); j100 = (j100 + 1)) {
				fRec71_tmp[j100] = fRec71_perm[j100];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec45[i] = (fRec71[(i - 1)] + (fConst1 * (7902.13281f * (fZec0[i] * fSlow16))));
				fRec71[i] = ((fZec45[i] > 1.0f)?(fZec45[i] + -1.0f):fZec45[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec71_perm[j] = fRec71_tmp[(count + j)];
				
			}
			/* Recursive loop 14 */
			/* Pre code */
			for (int j2 = 0; (j2 < 4); j2 = (j2 + 1)) {
				iRec6_tmp[j2] = iRec6_perm[j2];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec6[i] = (((fRec4[i] - fRec4[(i - 1)]) < 0.0f)?(1 - iRec6[(i - 1)]):iRec6[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec6_perm[j] = iRec6_tmp[(count + j)];
				
			}
			/* Recursive loop 15 */
			/* Pre code */
			for (int j11 = 0; (j11 < 4); j11 = (j11 + 1)) {
				iRec12_tmp[j11] = iRec12_perm[j11];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec12[i] = (((fRec11[i] - fRec11[(i - 1)]) < 0.0f)?(1 - iRec12[(i - 1)]):iRec12[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec12_perm[j] = iRec12_tmp[(count + j)];
				
			}
			/* Recursive loop 16 */
			/* Pre code */
			for (int j20 = 0; (j20 < 4); j20 = (j20 + 1)) {
				iRec18_tmp[j20] = iRec18_perm[j20];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec18[i] = (((fRec17[i] - fRec17[(i - 1)]) < 0.0f)?(1 - iRec18[(i - 1)]):iRec18[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec18_perm[j] = iRec18_tmp[(count + j)];
				
			}
			/* Recursive loop 17 */
			/* Pre code */
			for (int j29 = 0; (j29 < 4); j29 = (j29 + 1)) {
				iRec24_tmp[j29] = iRec24_perm[j29];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec24[i] = (((fRec23[i] - fRec23[(i - 1)]) < 0.0f)?(1 - iRec24[(i - 1)]):iRec24[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec24_perm[j] = iRec24_tmp[(count + j)];
				
			}
			/* Recursive loop 18 */
			/* Pre code */
			for (int j38 = 0; (j38 < 4); j38 = (j38 + 1)) {
				iRec30_tmp[j38] = iRec30_perm[j38];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec30[i] = (((fRec29[i] - fRec29[(i - 1)]) < 0.0f)?(1 - iRec30[(i - 1)]):iRec30[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec30_perm[j] = iRec30_tmp[(count + j)];
				
			}
			/* Recursive loop 19 */
			/* Pre code */
			for (int j47 = 0; (j47 < 4); j47 = (j47 + 1)) {
				iRec36_tmp[j47] = iRec36_perm[j47];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec36[i] = (((fRec35[i] - fRec35[(i - 1)]) < 0.0f)?(1 - iRec36[(i - 1)]):iRec36[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec36_perm[j] = iRec36_tmp[(count + j)];
				
			}
			/* Recursive loop 20 */
			/* Pre code */
			for (int j56 = 0; (j56 < 4); j56 = (j56 + 1)) {
				iRec42_tmp[j56] = iRec42_perm[j56];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec42[i] = (((fRec41[i] - fRec41[(i - 1)]) < 0.0f)?(1 - iRec42[(i - 1)]):iRec42[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec42_perm[j] = iRec42_tmp[(count + j)];
				
			}
			/* Recursive loop 21 */
			/* Pre code */
			for (int j65 = 0; (j65 < 4); j65 = (j65 + 1)) {
				iRec48_tmp[j65] = iRec48_perm[j65];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec48[i] = (((fRec47[i] - fRec47[(i - 1)]) < 0.0f)?(1 - iRec48[(i - 1)]):iRec48[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec48_perm[j] = iRec48_tmp[(count + j)];
				
			}
			/* Recursive loop 22 */
			/* Pre code */
			for (int j74 = 0; (j74 < 4); j74 = (j74 + 1)) {
				iRec54_tmp[j74] = iRec54_perm[j74];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec54[i] = (((fRec53[i] - fRec53[(i - 1)]) < 0.0f)?(1 - iRec54[(i - 1)]):iRec54[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec54_perm[j] = iRec54_tmp[(count + j)];
				
			}
			/* Recursive loop 23 */
			/* Pre code */
			for (int j83 = 0; (j83 < 4); j83 = (j83 + 1)) {
				iRec60_tmp[j83] = iRec60_perm[j83];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec60[i] = (((fRec59[i] - fRec59[(i - 1)]) < 0.0f)?(1 - iRec60[(i - 1)]):iRec60[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec60_perm[j] = iRec60_tmp[(count + j)];
				
			}
			/* Recursive loop 24 */
			/* Pre code */
			for (int j92 = 0; (j92 < 4); j92 = (j92 + 1)) {
				iRec66_tmp[j92] = iRec66_perm[j92];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec66[i] = (((fRec65[i] - fRec65[(i - 1)]) < 0.0f)?(1 - iRec66[(i - 1)]):iRec66[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec66_perm[j] = iRec66_tmp[(count + j)];
				
			}
			/* Recursive loop 25 */
			/* Pre code */
			for (int j101 = 0; (j101 < 4); j101 = (j101 + 1)) {
				iRec72_tmp[j101] = iRec72_perm[j101];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec72[i] = (((fRec71[i] - fRec71[(i - 1)]) < 0.0f)?(1 - iRec72[(i - 1)]):iRec72[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec72_perm[j] = iRec72_tmp[(count + j)];
				
			}
			/* Recursive loop 26 */
			/* Pre code */
			for (int j3 = 0; (j3 < 4); j3 = (j3 + 1)) {
				fYec0_tmp[j3] = fYec0_perm[j3];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec0[i] = (fRec4[i] + float(iRec6[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec0_perm[j] = fYec0_tmp[(count + j)];
				
			}
			/* Recursive loop 27 */
			/* Pre code */
			for (int j12 = 0; (j12 < 4); j12 = (j12 + 1)) {
				fYec3_tmp[j12] = fYec3_perm[j12];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec3[i] = (fRec11[i] + float(iRec12[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec3_perm[j] = fYec3_tmp[(count + j)];
				
			}
			/* Recursive loop 28 */
			/* Pre code */
			for (int j21 = 0; (j21 < 4); j21 = (j21 + 1)) {
				fYec6_tmp[j21] = fYec6_perm[j21];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec6[i] = (fRec17[i] + float(iRec18[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec6_perm[j] = fYec6_tmp[(count + j)];
				
			}
			/* Recursive loop 29 */
			/* Pre code */
			for (int j30 = 0; (j30 < 4); j30 = (j30 + 1)) {
				fYec9_tmp[j30] = fYec9_perm[j30];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec9[i] = (fRec23[i] + float(iRec24[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec9_perm[j] = fYec9_tmp[(count + j)];
				
			}
			/* Recursive loop 30 */
			/* Pre code */
			for (int j39 = 0; (j39 < 4); j39 = (j39 + 1)) {
				fYec12_tmp[j39] = fYec12_perm[j39];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec12[i] = (fRec29[i] + float(iRec30[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec12_perm[j] = fYec12_tmp[(count + j)];
				
			}
			/* Recursive loop 31 */
			/* Pre code */
			for (int j48 = 0; (j48 < 4); j48 = (j48 + 1)) {
				fYec15_tmp[j48] = fYec15_perm[j48];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec15[i] = (fRec35[i] + float(iRec36[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec15_perm[j] = fYec15_tmp[(count + j)];
				
			}
			/* Recursive loop 32 */
			/* Pre code */
			for (int j57 = 0; (j57 < 4); j57 = (j57 + 1)) {
				fYec18_tmp[j57] = fYec18_perm[j57];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec18[i] = (fRec41[i] + float(iRec42[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec18_perm[j] = fYec18_tmp[(count + j)];
				
			}
			/* Recursive loop 33 */
			/* Pre code */
			for (int j66 = 0; (j66 < 4); j66 = (j66 + 1)) {
				fYec21_tmp[j66] = fYec21_perm[j66];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec21[i] = (fRec47[i] + float(iRec48[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec21_perm[j] = fYec21_tmp[(count + j)];
				
			}
			/* Recursive loop 34 */
			/* Pre code */
			for (int j75 = 0; (j75 < 4); j75 = (j75 + 1)) {
				fYec24_tmp[j75] = fYec24_perm[j75];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec24[i] = (fRec53[i] + float(iRec54[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec24_perm[j] = fYec24_tmp[(count + j)];
				
			}
			/* Recursive loop 35 */
			/* Pre code */
			for (int j84 = 0; (j84 < 4); j84 = (j84 + 1)) {
				fYec27_tmp[j84] = fYec27_perm[j84];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec27[i] = (fRec59[i] + float(iRec60[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec27_perm[j] = fYec27_tmp[(count + j)];
				
			}
			/* Recursive loop 36 */
			/* Pre code */
			for (int j93 = 0; (j93 < 4); j93 = (j93 + 1)) {
				fYec30_tmp[j93] = fYec30_perm[j93];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec30[i] = (fRec65[i] + float(iRec66[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec30_perm[j] = fYec30_tmp[(count + j)];
				
			}
			/* Recursive loop 37 */
			/* Pre code */
			for (int j102 = 0; (j102 < 4); j102 = (j102 + 1)) {
				fYec33_tmp[j102] = fYec33_perm[j102];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec33[i] = (fRec71[i] + float(iRec72[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec33_perm[j] = fYec33_tmp[(count + j)];
				
			}
			/* Recursive loop 38 */
			/* Pre code */
			for (int j4 = 0; (j4 < 4); j4 = (j4 + 1)) {
				iRec3_tmp[j4] = iRec3_perm[j4];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec3[i] = (((0.5f * (fYec0[i] - fYec0[(i - 1)])) < 0.0f)?(1 - iRec3[(i - 1)]):iRec3[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec3_perm[j] = iRec3_tmp[(count + j)];
				
			}
			/* Recursive loop 39 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec2[i] = (0.5f * fYec0[i]);
				
			}
			/* Recursive loop 40 */
			/* Pre code */
			for (int j13 = 0; (j13 < 4); j13 = (j13 + 1)) {
				iRec10_tmp[j13] = iRec10_perm[j13];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec10[i] = (((0.5f * (fYec3[i] - fYec3[(i - 1)])) < 0.0f)?(1 - iRec10[(i - 1)]):iRec10[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec10_perm[j] = iRec10_tmp[(count + j)];
				
			}
			/* Recursive loop 41 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec6[i] = (0.5f * fYec3[i]);
				
			}
			/* Recursive loop 42 */
			/* Pre code */
			for (int j22 = 0; (j22 < 4); j22 = (j22 + 1)) {
				iRec16_tmp[j22] = iRec16_perm[j22];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec16[i] = (((0.5f * (fYec6[i] - fYec6[(i - 1)])) < 0.0f)?(1 - iRec16[(i - 1)]):iRec16[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec16_perm[j] = iRec16_tmp[(count + j)];
				
			}
			/* Recursive loop 43 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec10[i] = (0.5f * fYec6[i]);
				
			}
			/* Recursive loop 44 */
			/* Pre code */
			for (int j31 = 0; (j31 < 4); j31 = (j31 + 1)) {
				iRec22_tmp[j31] = iRec22_perm[j31];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec22[i] = (((0.5f * (fYec9[i] - fYec9[(i - 1)])) < 0.0f)?(1 - iRec22[(i - 1)]):iRec22[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec22_perm[j] = iRec22_tmp[(count + j)];
				
			}
			/* Recursive loop 45 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec14[i] = (0.5f * fYec9[i]);
				
			}
			/* Recursive loop 46 */
			/* Pre code */
			for (int j40 = 0; (j40 < 4); j40 = (j40 + 1)) {
				iRec28_tmp[j40] = iRec28_perm[j40];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec28[i] = (((0.5f * (fYec12[i] - fYec12[(i - 1)])) < 0.0f)?(1 - iRec28[(i - 1)]):iRec28[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec28_perm[j] = iRec28_tmp[(count + j)];
				
			}
			/* Recursive loop 47 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec18[i] = (0.5f * fYec12[i]);
				
			}
			/* Recursive loop 48 */
			/* Pre code */
			for (int j49 = 0; (j49 < 4); j49 = (j49 + 1)) {
				iRec34_tmp[j49] = iRec34_perm[j49];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec34[i] = (((0.5f * (fYec15[i] - fYec15[(i - 1)])) < 0.0f)?(1 - iRec34[(i - 1)]):iRec34[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec34_perm[j] = iRec34_tmp[(count + j)];
				
			}
			/* Recursive loop 49 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec22[i] = (0.5f * fYec15[i]);
				
			}
			/* Recursive loop 50 */
			/* Pre code */
			for (int j58 = 0; (j58 < 4); j58 = (j58 + 1)) {
				iRec40_tmp[j58] = iRec40_perm[j58];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec40[i] = (((0.5f * (fYec18[i] - fYec18[(i - 1)])) < 0.0f)?(1 - iRec40[(i - 1)]):iRec40[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec40_perm[j] = iRec40_tmp[(count + j)];
				
			}
			/* Recursive loop 51 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec26[i] = (0.5f * fYec18[i]);
				
			}
			/* Recursive loop 52 */
			/* Pre code */
			for (int j67 = 0; (j67 < 4); j67 = (j67 + 1)) {
				iRec46_tmp[j67] = iRec46_perm[j67];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec46[i] = (((0.5f * (fYec21[i] - fYec21[(i - 1)])) < 0.0f)?(1 - iRec46[(i - 1)]):iRec46[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec46_perm[j] = iRec46_tmp[(count + j)];
				
			}
			/* Recursive loop 53 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec30[i] = (0.5f * fYec21[i]);
				
			}
			/* Recursive loop 54 */
			/* Pre code */
			for (int j76 = 0; (j76 < 4); j76 = (j76 + 1)) {
				iRec52_tmp[j76] = iRec52_perm[j76];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec52[i] = (((0.5f * (fYec24[i] - fYec24[(i - 1)])) < 0.0f)?(1 - iRec52[(i - 1)]):iRec52[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec52_perm[j] = iRec52_tmp[(count + j)];
				
			}
			/* Recursive loop 55 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec34[i] = (0.5f * fYec24[i]);
				
			}
			/* Recursive loop 56 */
			/* Pre code */
			for (int j85 = 0; (j85 < 4); j85 = (j85 + 1)) {
				iRec58_tmp[j85] = iRec58_perm[j85];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec58[i] = (((0.5f * (fYec27[i] - fYec27[(i - 1)])) < 0.0f)?(1 - iRec58[(i - 1)]):iRec58[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec58_perm[j] = iRec58_tmp[(count + j)];
				
			}
			/* Recursive loop 57 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec38[i] = (0.5f * fYec27[i]);
				
			}
			/* Recursive loop 58 */
			/* Pre code */
			for (int j94 = 0; (j94 < 4); j94 = (j94 + 1)) {
				iRec64_tmp[j94] = iRec64_perm[j94];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec64[i] = (((0.5f * (fYec30[i] - fYec30[(i - 1)])) < 0.0f)?(1 - iRec64[(i - 1)]):iRec64[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec64_perm[j] = iRec64_tmp[(count + j)];
				
			}
			/* Recursive loop 59 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec42[i] = (0.5f * fYec30[i]);
				
			}
			/* Recursive loop 60 */
			/* Pre code */
			for (int j103 = 0; (j103 < 4); j103 = (j103 + 1)) {
				iRec70_tmp[j103] = iRec70_perm[j103];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec70[i] = (((0.5f * (fYec33[i] - fYec33[(i - 1)])) < 0.0f)?(1 - iRec70[(i - 1)]):iRec70[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec70_perm[j] = iRec70_tmp[(count + j)];
				
			}
			/* Recursive loop 61 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec46[i] = (0.5f * fYec33[i]);
				
			}
			/* Recursive loop 62 */
			/* Pre code */
			for (int j5 = 0; (j5 < 4); j5 = (j5 + 1)) {
				fYec1_tmp[j5] = fYec1_perm[j5];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec1[i] = (float(iRec3[i]) + fZec2[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec1_perm[j] = fYec1_tmp[(count + j)];
				
			}
			/* Recursive loop 63 */
			/* Pre code */
			for (int j14 = 0; (j14 < 4); j14 = (j14 + 1)) {
				fYec4_tmp[j14] = fYec4_perm[j14];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec4[i] = (float(iRec10[i]) + fZec6[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec4_perm[j] = fYec4_tmp[(count + j)];
				
			}
			/* Recursive loop 64 */
			/* Pre code */
			for (int j23 = 0; (j23 < 4); j23 = (j23 + 1)) {
				fYec7_tmp[j23] = fYec7_perm[j23];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec7[i] = (float(iRec16[i]) + fZec10[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec7_perm[j] = fYec7_tmp[(count + j)];
				
			}
			/* Recursive loop 65 */
			/* Pre code */
			for (int j32 = 0; (j32 < 4); j32 = (j32 + 1)) {
				fYec10_tmp[j32] = fYec10_perm[j32];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec10[i] = (float(iRec22[i]) + fZec14[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec10_perm[j] = fYec10_tmp[(count + j)];
				
			}
			/* Recursive loop 66 */
			/* Pre code */
			for (int j41 = 0; (j41 < 4); j41 = (j41 + 1)) {
				fYec13_tmp[j41] = fYec13_perm[j41];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec13[i] = (float(iRec28[i]) + fZec18[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec13_perm[j] = fYec13_tmp[(count + j)];
				
			}
			/* Recursive loop 67 */
			/* Pre code */
			for (int j50 = 0; (j50 < 4); j50 = (j50 + 1)) {
				fYec16_tmp[j50] = fYec16_perm[j50];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec16[i] = (float(iRec34[i]) + fZec22[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec16_perm[j] = fYec16_tmp[(count + j)];
				
			}
			/* Recursive loop 68 */
			/* Pre code */
			for (int j59 = 0; (j59 < 4); j59 = (j59 + 1)) {
				fYec19_tmp[j59] = fYec19_perm[j59];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec19[i] = (float(iRec40[i]) + fZec26[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec19_perm[j] = fYec19_tmp[(count + j)];
				
			}
			/* Recursive loop 69 */
			/* Pre code */
			for (int j68 = 0; (j68 < 4); j68 = (j68 + 1)) {
				fYec22_tmp[j68] = fYec22_perm[j68];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec22[i] = (float(iRec46[i]) + fZec30[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec22_perm[j] = fYec22_tmp[(count + j)];
				
			}
			/* Recursive loop 70 */
			/* Pre code */
			for (int j77 = 0; (j77 < 4); j77 = (j77 + 1)) {
				fYec25_tmp[j77] = fYec25_perm[j77];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec25[i] = (float(iRec52[i]) + fZec34[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec25_perm[j] = fYec25_tmp[(count + j)];
				
			}
			/* Recursive loop 71 */
			/* Pre code */
			for (int j86 = 0; (j86 < 4); j86 = (j86 + 1)) {
				fYec28_tmp[j86] = fYec28_perm[j86];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec28[i] = (float(iRec58[i]) + fZec38[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec28_perm[j] = fYec28_tmp[(count + j)];
				
			}
			/* Recursive loop 72 */
			/* Pre code */
			for (int j95 = 0; (j95 < 4); j95 = (j95 + 1)) {
				fYec31_tmp[j95] = fYec31_perm[j95];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec31[i] = (float(iRec64[i]) + fZec42[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec31_perm[j] = fYec31_tmp[(count + j)];
				
			}
			/* Recursive loop 73 */
			/* Pre code */
			for (int j104 = 0; (j104 < 4); j104 = (j104 + 1)) {
				fYec34_tmp[j104] = fYec34_perm[j104];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec34[i] = (float(iRec70[i]) + fZec46[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec34_perm[j] = fYec34_tmp[(count + j)];
				
			}
			/* Recursive loop 74 */
			/* Pre code */
			for (int j6 = 0; (j6 < 4); j6 = (j6 + 1)) {
				iRec2_tmp[j6] = iRec2_perm[j6];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec2[i] = (((0.5f * (fYec1[i] - fYec1[(i - 1)])) < 0.0f)?(1 - iRec2[(i - 1)]):iRec2[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec2_perm[j] = iRec2_tmp[(count + j)];
				
			}
			/* Recursive loop 75 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec3[i] = (0.5f * fYec1[i]);
				
			}
			/* Recursive loop 76 */
			/* Pre code */
			for (int j15 = 0; (j15 < 4); j15 = (j15 + 1)) {
				iRec9_tmp[j15] = iRec9_perm[j15];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec9[i] = (((0.5f * (fYec4[i] - fYec4[(i - 1)])) < 0.0f)?(1 - iRec9[(i - 1)]):iRec9[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec9_perm[j] = iRec9_tmp[(count + j)];
				
			}
			/* Recursive loop 77 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec7[i] = (0.5f * fYec4[i]);
				
			}
			/* Recursive loop 78 */
			/* Pre code */
			for (int j24 = 0; (j24 < 4); j24 = (j24 + 1)) {
				iRec15_tmp[j24] = iRec15_perm[j24];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec15[i] = (((0.5f * (fYec7[i] - fYec7[(i - 1)])) < 0.0f)?(1 - iRec15[(i - 1)]):iRec15[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec15_perm[j] = iRec15_tmp[(count + j)];
				
			}
			/* Recursive loop 79 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec11[i] = (0.5f * fYec7[i]);
				
			}
			/* Recursive loop 80 */
			/* Pre code */
			for (int j33 = 0; (j33 < 4); j33 = (j33 + 1)) {
				iRec21_tmp[j33] = iRec21_perm[j33];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec21[i] = (((0.5f * (fYec10[i] - fYec10[(i - 1)])) < 0.0f)?(1 - iRec21[(i - 1)]):iRec21[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec21_perm[j] = iRec21_tmp[(count + j)];
				
			}
			/* Recursive loop 81 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec15[i] = (0.5f * fYec10[i]);
				
			}
			/* Recursive loop 82 */
			/* Pre code */
			for (int j42 = 0; (j42 < 4); j42 = (j42 + 1)) {
				iRec27_tmp[j42] = iRec27_perm[j42];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec27[i] = (((0.5f * (fYec13[i] - fYec13[(i - 1)])) < 0.0f)?(1 - iRec27[(i - 1)]):iRec27[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec27_perm[j] = iRec27_tmp[(count + j)];
				
			}
			/* Recursive loop 83 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec19[i] = (0.5f * fYec13[i]);
				
			}
			/* Recursive loop 84 */
			/* Pre code */
			for (int j51 = 0; (j51 < 4); j51 = (j51 + 1)) {
				iRec33_tmp[j51] = iRec33_perm[j51];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec33[i] = (((0.5f * (fYec16[i] - fYec16[(i - 1)])) < 0.0f)?(1 - iRec33[(i - 1)]):iRec33[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec33_perm[j] = iRec33_tmp[(count + j)];
				
			}
			/* Recursive loop 85 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec23[i] = (0.5f * fYec16[i]);
				
			}
			/* Recursive loop 86 */
			/* Pre code */
			for (int j60 = 0; (j60 < 4); j60 = (j60 + 1)) {
				iRec39_tmp[j60] = iRec39_perm[j60];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec39[i] = (((0.5f * (fYec19[i] - fYec19[(i - 1)])) < 0.0f)?(1 - iRec39[(i - 1)]):iRec39[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec39_perm[j] = iRec39_tmp[(count + j)];
				
			}
			/* Recursive loop 87 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec27[i] = (0.5f * fYec19[i]);
				
			}
			/* Recursive loop 88 */
			/* Pre code */
			for (int j69 = 0; (j69 < 4); j69 = (j69 + 1)) {
				iRec45_tmp[j69] = iRec45_perm[j69];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec45[i] = (((0.5f * (fYec22[i] - fYec22[(i - 1)])) < 0.0f)?(1 - iRec45[(i - 1)]):iRec45[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec45_perm[j] = iRec45_tmp[(count + j)];
				
			}
			/* Recursive loop 89 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec31[i] = (0.5f * fYec22[i]);
				
			}
			/* Recursive loop 90 */
			/* Pre code */
			for (int j78 = 0; (j78 < 4); j78 = (j78 + 1)) {
				iRec51_tmp[j78] = iRec51_perm[j78];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec51[i] = (((0.5f * (fYec25[i] - fYec25[(i - 1)])) < 0.0f)?(1 - iRec51[(i - 1)]):iRec51[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec51_perm[j] = iRec51_tmp[(count + j)];
				
			}
			/* Recursive loop 91 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec35[i] = (0.5f * fYec25[i]);
				
			}
			/* Recursive loop 92 */
			/* Pre code */
			for (int j87 = 0; (j87 < 4); j87 = (j87 + 1)) {
				iRec57_tmp[j87] = iRec57_perm[j87];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec57[i] = (((0.5f * (fYec28[i] - fYec28[(i - 1)])) < 0.0f)?(1 - iRec57[(i - 1)]):iRec57[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec57_perm[j] = iRec57_tmp[(count + j)];
				
			}
			/* Recursive loop 93 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec39[i] = (0.5f * fYec28[i]);
				
			}
			/* Recursive loop 94 */
			/* Pre code */
			for (int j96 = 0; (j96 < 4); j96 = (j96 + 1)) {
				iRec63_tmp[j96] = iRec63_perm[j96];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec63[i] = (((0.5f * (fYec31[i] - fYec31[(i - 1)])) < 0.0f)?(1 - iRec63[(i - 1)]):iRec63[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec63_perm[j] = iRec63_tmp[(count + j)];
				
			}
			/* Recursive loop 95 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec43[i] = (0.5f * fYec31[i]);
				
			}
			/* Recursive loop 96 */
			/* Pre code */
			for (int j105 = 0; (j105 < 4); j105 = (j105 + 1)) {
				iRec69_tmp[j105] = iRec69_perm[j105];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec69[i] = (((0.5f * (fYec34[i] - fYec34[(i - 1)])) < 0.0f)?(1 - iRec69[(i - 1)]):iRec69[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec69_perm[j] = iRec69_tmp[(count + j)];
				
			}
			/* Recursive loop 97 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec47[i] = (0.5f * fYec34[i]);
				
			}
			/* Recursive loop 98 */
			/* Pre code */
			for (int j7 = 0; (j7 < 4); j7 = (j7 + 1)) {
				fYec2_tmp[j7] = fYec2_perm[j7];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec2[i] = (float(iRec2[i]) + fZec3[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec2_perm[j] = fYec2_tmp[(count + j)];
				
			}
			/* Recursive loop 99 */
			/* Pre code */
			for (int j16 = 0; (j16 < 4); j16 = (j16 + 1)) {
				fYec5_tmp[j16] = fYec5_perm[j16];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec5[i] = (float(iRec9[i]) + fZec7[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec5_perm[j] = fYec5_tmp[(count + j)];
				
			}
			/* Recursive loop 100 */
			/* Pre code */
			for (int j25 = 0; (j25 < 4); j25 = (j25 + 1)) {
				fYec8_tmp[j25] = fYec8_perm[j25];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec8[i] = (float(iRec15[i]) + fZec11[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec8_perm[j] = fYec8_tmp[(count + j)];
				
			}
			/* Recursive loop 101 */
			/* Pre code */
			for (int j34 = 0; (j34 < 4); j34 = (j34 + 1)) {
				fYec11_tmp[j34] = fYec11_perm[j34];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec11[i] = (float(iRec21[i]) + fZec15[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec11_perm[j] = fYec11_tmp[(count + j)];
				
			}
			/* Recursive loop 102 */
			/* Pre code */
			for (int j43 = 0; (j43 < 4); j43 = (j43 + 1)) {
				fYec14_tmp[j43] = fYec14_perm[j43];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec14[i] = (float(iRec27[i]) + fZec19[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec14_perm[j] = fYec14_tmp[(count + j)];
				
			}
			/* Recursive loop 103 */
			/* Pre code */
			for (int j52 = 0; (j52 < 4); j52 = (j52 + 1)) {
				fYec17_tmp[j52] = fYec17_perm[j52];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec17[i] = (float(iRec33[i]) + fZec23[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec17_perm[j] = fYec17_tmp[(count + j)];
				
			}
			/* Recursive loop 104 */
			/* Pre code */
			for (int j61 = 0; (j61 < 4); j61 = (j61 + 1)) {
				fYec20_tmp[j61] = fYec20_perm[j61];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec20[i] = (float(iRec39[i]) + fZec27[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec20_perm[j] = fYec20_tmp[(count + j)];
				
			}
			/* Recursive loop 105 */
			/* Pre code */
			for (int j70 = 0; (j70 < 4); j70 = (j70 + 1)) {
				fYec23_tmp[j70] = fYec23_perm[j70];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec23[i] = (float(iRec45[i]) + fZec31[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec23_perm[j] = fYec23_tmp[(count + j)];
				
			}
			/* Recursive loop 106 */
			/* Pre code */
			for (int j79 = 0; (j79 < 4); j79 = (j79 + 1)) {
				fYec26_tmp[j79] = fYec26_perm[j79];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec26[i] = (float(iRec51[i]) + fZec35[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec26_perm[j] = fYec26_tmp[(count + j)];
				
			}
			/* Recursive loop 107 */
			/* Pre code */
			for (int j88 = 0; (j88 < 4); j88 = (j88 + 1)) {
				fYec29_tmp[j88] = fYec29_perm[j88];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec29[i] = (float(iRec57[i]) + fZec39[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec29_perm[j] = fYec29_tmp[(count + j)];
				
			}
			/* Recursive loop 108 */
			/* Pre code */
			for (int j97 = 0; (j97 < 4); j97 = (j97 + 1)) {
				fYec32_tmp[j97] = fYec32_perm[j97];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec32[i] = (float(iRec63[i]) + fZec43[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec32_perm[j] = fYec32_tmp[(count + j)];
				
			}
			/* Recursive loop 109 */
			/* Pre code */
			for (int j106 = 0; (j106 < 4); j106 = (j106 + 1)) {
				fYec35_tmp[j106] = fYec35_perm[j106];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec35[i] = (float(iRec69[i]) + fZec47[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec35_perm[j] = fYec35_tmp[(count + j)];
				
			}
			/* Recursive loop 110 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec4[i] = (0.5f * fYec2[i]);
				
			}
			/* Recursive loop 111 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec8[i] = (0.5f * fYec5[i]);
				
			}
			/* Recursive loop 112 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec12[i] = (0.5f * fYec8[i]);
				
			}
			/* Recursive loop 113 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec16[i] = (0.5f * fYec11[i]);
				
			}
			/* Recursive loop 114 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec20[i] = (0.5f * fYec14[i]);
				
			}
			/* Recursive loop 115 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec24[i] = (0.5f * fYec17[i]);
				
			}
			/* Recursive loop 116 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec28[i] = (0.5f * fYec20[i]);
				
			}
			/* Recursive loop 117 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec32[i] = (0.5f * fYec23[i]);
				
			}
			/* Recursive loop 118 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec36[i] = (0.5f * fYec26[i]);
				
			}
			/* Recursive loop 119 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec40[i] = (0.5f * fYec29[i]);
				
			}
			/* Recursive loop 120 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec44[i] = (0.5f * fYec32[i]);
				
			}
			/* Recursive loop 121 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec48[i] = (0.5f * fYec35[i]);
				
			}
			/* Recursive loop 122 */
			/* Pre code */
			for (int j244 = 0; (j244 < 4); j244 = (j244 + 1)) {
				iRec136_tmp[j244] = iRec136_perm[j244];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec136[i] = (((0.5f * (fYec14[i] - fYec14[(i - 1)])) < 0.0f)?(1 - iRec136[(i - 1)]):iRec136[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec136_perm[j] = iRec136_tmp[(count + j)];
				
			}
			/* Recursive loop 123 */
			/* Pre code */
			for (int j248 = 0; (j248 < 4); j248 = (j248 + 1)) {
				iRec139_tmp[j248] = iRec139_perm[j248];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec139[i] = (((0.5f * (fYec17[i] - fYec17[(i - 1)])) < 0.0f)?(1 - iRec139[(i - 1)]):iRec139[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec139_perm[j] = iRec139_tmp[(count + j)];
				
			}
			/* Recursive loop 124 */
			/* Pre code */
			for (int j252 = 0; (j252 < 4); j252 = (j252 + 1)) {
				iRec142_tmp[j252] = iRec142_perm[j252];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec142[i] = (((0.5f * (fYec20[i] - fYec20[(i - 1)])) < 0.0f)?(1 - iRec142[(i - 1)]):iRec142[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec142_perm[j] = iRec142_tmp[(count + j)];
				
			}
			/* Recursive loop 125 */
			/* Pre code */
			for (int j256 = 0; (j256 < 4); j256 = (j256 + 1)) {
				iRec145_tmp[j256] = iRec145_perm[j256];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec145[i] = (((0.5f * (fYec23[i] - fYec23[(i - 1)])) < 0.0f)?(1 - iRec145[(i - 1)]):iRec145[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec145_perm[j] = iRec145_tmp[(count + j)];
				
			}
			/* Recursive loop 126 */
			/* Pre code */
			for (int j260 = 0; (j260 < 4); j260 = (j260 + 1)) {
				iRec148_tmp[j260] = iRec148_perm[j260];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec148[i] = (((0.5f * (fYec26[i] - fYec26[(i - 1)])) < 0.0f)?(1 - iRec148[(i - 1)]):iRec148[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec148_perm[j] = iRec148_tmp[(count + j)];
				
			}
			/* Recursive loop 127 */
			/* Pre code */
			for (int j264 = 0; (j264 < 4); j264 = (j264 + 1)) {
				iRec151_tmp[j264] = iRec151_perm[j264];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec151[i] = (((0.5f * (fYec29[i] - fYec29[(i - 1)])) < 0.0f)?(1 - iRec151[(i - 1)]):iRec151[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec151_perm[j] = iRec151_tmp[(count + j)];
				
			}
			/* Recursive loop 128 */
			/* Pre code */
			for (int j268 = 0; (j268 < 4); j268 = (j268 + 1)) {
				iRec154_tmp[j268] = iRec154_perm[j268];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec154[i] = (((0.5f * (fYec32[i] - fYec32[(i - 1)])) < 0.0f)?(1 - iRec154[(i - 1)]):iRec154[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec154_perm[j] = iRec154_tmp[(count + j)];
				
			}
			/* Recursive loop 129 */
			/* Pre code */
			for (int j272 = 0; (j272 < 4); j272 = (j272 + 1)) {
				iRec157_tmp[j272] = iRec157_perm[j272];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec157[i] = (((0.5f * (fYec35[i] - fYec35[(i - 1)])) < 0.0f)?(1 - iRec157[(i - 1)]):iRec157[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec157_perm[j] = iRec157_tmp[(count + j)];
				
			}
			/* Recursive loop 130 */
			/* Pre code */
			for (int j278 = 0; (j278 < 4); j278 = (j278 + 1)) {
				iRec161_tmp[j278] = iRec161_perm[j278];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec161[i] = (((0.5f * (fYec2[i] - fYec2[(i - 1)])) < 0.0f)?(1 - iRec161[(i - 1)]):iRec161[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec161_perm[j] = iRec161_tmp[(count + j)];
				
			}
			/* Recursive loop 131 */
			/* Pre code */
			for (int j282 = 0; (j282 < 4); j282 = (j282 + 1)) {
				iRec164_tmp[j282] = iRec164_perm[j282];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec164[i] = (((0.5f * (fYec5[i] - fYec5[(i - 1)])) < 0.0f)?(1 - iRec164[(i - 1)]):iRec164[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec164_perm[j] = iRec164_tmp[(count + j)];
				
			}
			/* Recursive loop 132 */
			/* Pre code */
			for (int j286 = 0; (j286 < 4); j286 = (j286 + 1)) {
				iRec167_tmp[j286] = iRec167_perm[j286];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec167[i] = (((0.5f * (fYec8[i] - fYec8[(i - 1)])) < 0.0f)?(1 - iRec167[(i - 1)]):iRec167[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec167_perm[j] = iRec167_tmp[(count + j)];
				
			}
			/* Recursive loop 133 */
			/* Pre code */
			for (int j290 = 0; (j290 < 4); j290 = (j290 + 1)) {
				iRec170_tmp[j290] = iRec170_perm[j290];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec170[i] = (((0.5f * (fYec11[i] - fYec11[(i - 1)])) < 0.0f)?(1 - iRec170[(i - 1)]):iRec170[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec170_perm[j] = iRec170_tmp[(count + j)];
				
			}
			/* Recursive loop 134 */
			/* Pre code */
			for (int j8 = 0; (j8 < 4); j8 = (j8 + 1)) {
				fRec1_tmp[j8] = fRec1_perm[j8];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec1[i] = (fRec1[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec4[i]), 0, 0)) - fRec1[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec1_perm[j] = fRec1_tmp[(count + j)];
				
			}
			/* Recursive loop 135 */
			/* Pre code */
			for (int j17 = 0; (j17 < 4); j17 = (j17 + 1)) {
				fRec8_tmp[j17] = fRec8_perm[j17];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec8[i] = (fRec8[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec8[i]), 1, 0)) - fRec8[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec8_perm[j] = fRec8_tmp[(count + j)];
				
			}
			/* Recursive loop 136 */
			/* Pre code */
			for (int j26 = 0; (j26 < 4); j26 = (j26 + 1)) {
				fRec14_tmp[j26] = fRec14_perm[j26];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec14[i] = (fRec14[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec12[i]), 2, 0)) - fRec14[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec14_perm[j] = fRec14_tmp[(count + j)];
				
			}
			/* Recursive loop 137 */
			/* Pre code */
			for (int j35 = 0; (j35 < 4); j35 = (j35 + 1)) {
				fRec20_tmp[j35] = fRec20_perm[j35];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec20[i] = (fRec20[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec16[i]), 3, 0)) - fRec20[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec20_perm[j] = fRec20_tmp[(count + j)];
				
			}
			/* Recursive loop 138 */
			/* Pre code */
			for (int j44 = 0; (j44 < 4); j44 = (j44 + 1)) {
				fRec26_tmp[j44] = fRec26_perm[j44];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec26[i] = (fRec26[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec20[i]), 4, 0)) - fRec26[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec26_perm[j] = fRec26_tmp[(count + j)];
				
			}
			/* Recursive loop 139 */
			/* Pre code */
			for (int j245 = 0; (j245 < 4); j245 = (j245 + 1)) {
				fYec49_tmp[j245] = fYec49_perm[j245];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec49[i] = (float(iRec136[i]) + fZec20[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec49_perm[j] = fYec49_tmp[(count + j)];
				
			}
			/* Recursive loop 140 */
			/* Pre code */
			for (int j249 = 0; (j249 < 4); j249 = (j249 + 1)) {
				fYec50_tmp[j249] = fYec50_perm[j249];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec50[i] = (float(iRec139[i]) + fZec24[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec50_perm[j] = fYec50_tmp[(count + j)];
				
			}
			/* Recursive loop 141 */
			/* Pre code */
			for (int j253 = 0; (j253 < 4); j253 = (j253 + 1)) {
				fYec51_tmp[j253] = fYec51_perm[j253];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec51[i] = (float(iRec142[i]) + fZec28[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec51_perm[j] = fYec51_tmp[(count + j)];
				
			}
			/* Recursive loop 142 */
			/* Pre code */
			for (int j257 = 0; (j257 < 4); j257 = (j257 + 1)) {
				fYec52_tmp[j257] = fYec52_perm[j257];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec52[i] = (float(iRec145[i]) + fZec32[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec52_perm[j] = fYec52_tmp[(count + j)];
				
			}
			/* Recursive loop 143 */
			/* Pre code */
			for (int j261 = 0; (j261 < 4); j261 = (j261 + 1)) {
				fYec53_tmp[j261] = fYec53_perm[j261];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec53[i] = (float(iRec148[i]) + fZec36[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec53_perm[j] = fYec53_tmp[(count + j)];
				
			}
			/* Recursive loop 144 */
			/* Pre code */
			for (int j265 = 0; (j265 < 4); j265 = (j265 + 1)) {
				fYec54_tmp[j265] = fYec54_perm[j265];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec54[i] = (float(iRec151[i]) + fZec40[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec54_perm[j] = fYec54_tmp[(count + j)];
				
			}
			/* Recursive loop 145 */
			/* Pre code */
			for (int j269 = 0; (j269 < 4); j269 = (j269 + 1)) {
				fYec55_tmp[j269] = fYec55_perm[j269];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec55[i] = (float(iRec154[i]) + fZec44[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec55_perm[j] = fYec55_tmp[(count + j)];
				
			}
			/* Recursive loop 146 */
			/* Pre code */
			for (int j273 = 0; (j273 < 4); j273 = (j273 + 1)) {
				fYec56_tmp[j273] = fYec56_perm[j273];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec56[i] = (float(iRec157[i]) + fZec48[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec56_perm[j] = fYec56_tmp[(count + j)];
				
			}
			/* Recursive loop 147 */
			/* Pre code */
			for (int j279 = 0; (j279 < 4); j279 = (j279 + 1)) {
				fYec58_tmp[j279] = fYec58_perm[j279];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec58[i] = (float(iRec161[i]) + fZec4[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec58_perm[j] = fYec58_tmp[(count + j)];
				
			}
			/* Recursive loop 148 */
			/* Pre code */
			for (int j283 = 0; (j283 < 4); j283 = (j283 + 1)) {
				fYec59_tmp[j283] = fYec59_perm[j283];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec59[i] = (float(iRec164[i]) + fZec8[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec59_perm[j] = fYec59_tmp[(count + j)];
				
			}
			/* Recursive loop 149 */
			/* Pre code */
			for (int j287 = 0; (j287 < 4); j287 = (j287 + 1)) {
				fYec60_tmp[j287] = fYec60_perm[j287];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec60[i] = (float(iRec167[i]) + fZec12[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec60_perm[j] = fYec60_tmp[(count + j)];
				
			}
			/* Recursive loop 150 */
			/* Pre code */
			for (int j291 = 0; (j291 < 4); j291 = (j291 + 1)) {
				fYec61_tmp[j291] = fYec61_perm[j291];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec61[i] = (float(iRec170[i]) + fZec16[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec61_perm[j] = fYec61_tmp[(count + j)];
				
			}
			/* Recursive loop 151 */
			/* Pre code */
			for (int j9 = 0; (j9 < 4); j9 = (j9 + 1)) {
				fRec0_tmp[j9] = fRec0_perm[j9];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec0[i] = (fConst5 * (fRec0[(i - 1)] + (fRec1[i] - fRec1[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec0_perm[j] = fRec0_tmp[(count + j)];
				
			}
			/* Recursive loop 152 */
			/* Pre code */
			for (int j18 = 0; (j18 < 4); j18 = (j18 + 1)) {
				fRec7_tmp[j18] = fRec7_perm[j18];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec7[i] = (fConst5 * (fRec7[(i - 1)] + (fRec8[i] - fRec8[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec7_perm[j] = fRec7_tmp[(count + j)];
				
			}
			/* Recursive loop 153 */
			/* Pre code */
			for (int j27 = 0; (j27 < 4); j27 = (j27 + 1)) {
				fRec13_tmp[j27] = fRec13_perm[j27];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec13[i] = (fConst5 * (fRec13[(i - 1)] + (fRec14[i] - fRec14[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec13_perm[j] = fRec13_tmp[(count + j)];
				
			}
			/* Recursive loop 154 */
			/* Pre code */
			for (int j36 = 0; (j36 < 4); j36 = (j36 + 1)) {
				fRec19_tmp[j36] = fRec19_perm[j36];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec19[i] = (fConst5 * (fRec19[(i - 1)] + (fRec20[i] - fRec20[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec19_perm[j] = fRec19_tmp[(count + j)];
				
			}
			/* Recursive loop 155 */
			/* Pre code */
			for (int j45 = 0; (j45 < 4); j45 = (j45 + 1)) {
				fRec25_tmp[j45] = fRec25_perm[j45];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec25[i] = (fConst5 * (fRec25[(i - 1)] + (fRec26[i] - fRec26[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec25_perm[j] = fRec25_tmp[(count + j)];
				
			}
			/* Recursive loop 156 */
			/* Pre code */
			for (int j53 = 0; (j53 < 4); j53 = (j53 + 1)) {
				fRec32_tmp[j53] = fRec32_perm[j53];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec32[i] = (fRec32[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec24[i]), 5, 0)) - fRec32[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec32_perm[j] = fRec32_tmp[(count + j)];
				
			}
			/* Recursive loop 157 */
			/* Pre code */
			for (int j62 = 0; (j62 < 4); j62 = (j62 + 1)) {
				fRec38_tmp[j62] = fRec38_perm[j62];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec38[i] = (fRec38[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec28[i]), 6, 0)) - fRec38[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec38_perm[j] = fRec38_tmp[(count + j)];
				
			}
			/* Recursive loop 158 */
			/* Pre code */
			for (int j71 = 0; (j71 < 4); j71 = (j71 + 1)) {
				fRec44_tmp[j71] = fRec44_perm[j71];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec44[i] = (fRec44[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec32[i]), 7, 0)) - fRec44[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec44_perm[j] = fRec44_tmp[(count + j)];
				
			}
			/* Recursive loop 159 */
			/* Pre code */
			for (int j80 = 0; (j80 < 4); j80 = (j80 + 1)) {
				fRec50_tmp[j80] = fRec50_perm[j80];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec50[i] = (fRec50[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec36[i]), 8, 0)) - fRec50[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec50_perm[j] = fRec50_tmp[(count + j)];
				
			}
			/* Recursive loop 160 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec130[i] = (0.5f * fYec49[i]);
				
			}
			/* Recursive loop 161 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec131[i] = (0.5f * fYec50[i]);
				
			}
			/* Recursive loop 162 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec132[i] = (0.5f * fYec51[i]);
				
			}
			/* Recursive loop 163 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec133[i] = (0.5f * fYec52[i]);
				
			}
			/* Recursive loop 164 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec134[i] = (0.5f * fYec53[i]);
				
			}
			/* Recursive loop 165 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec135[i] = (0.5f * fYec54[i]);
				
			}
			/* Recursive loop 166 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec136[i] = (0.5f * fYec55[i]);
				
			}
			/* Recursive loop 167 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec137[i] = (0.5f * fYec56[i]);
				
			}
			/* Recursive loop 168 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec140[i] = (0.5f * fYec58[i]);
				
			}
			/* Recursive loop 169 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec141[i] = (0.5f * fYec59[i]);
				
			}
			/* Recursive loop 170 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec142[i] = (0.5f * fYec60[i]);
				
			}
			/* Recursive loop 171 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec143[i] = (0.5f * fYec61[i]);
				
			}
			/* Recursive loop 172 */
			/* Pre code */
			for (int j296 = 0; (j296 < 4); j296 = (j296 + 1)) {
				iRec174_tmp[j296] = iRec174_perm[j296];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec174[i] = (((0.5f * (fYec52[i] - fYec52[(i - 1)])) < 0.0f)?(1 - iRec174[(i - 1)]):iRec174[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec174_perm[j] = iRec174_tmp[(count + j)];
				
			}
			/* Recursive loop 173 */
			/* Pre code */
			for (int j300 = 0; (j300 < 4); j300 = (j300 + 1)) {
				iRec177_tmp[j300] = iRec177_perm[j300];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec177[i] = (((0.5f * (fYec53[i] - fYec53[(i - 1)])) < 0.0f)?(1 - iRec177[(i - 1)]):iRec177[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec177_perm[j] = iRec177_tmp[(count + j)];
				
			}
			/* Recursive loop 174 */
			/* Pre code */
			for (int j304 = 0; (j304 < 4); j304 = (j304 + 1)) {
				iRec180_tmp[j304] = iRec180_perm[j304];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec180[i] = (((0.5f * (fYec54[i] - fYec54[(i - 1)])) < 0.0f)?(1 - iRec180[(i - 1)]):iRec180[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec180_perm[j] = iRec180_tmp[(count + j)];
				
			}
			/* Recursive loop 175 */
			/* Pre code */
			for (int j308 = 0; (j308 < 4); j308 = (j308 + 1)) {
				iRec183_tmp[j308] = iRec183_perm[j308];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec183[i] = (((0.5f * (fYec55[i] - fYec55[(i - 1)])) < 0.0f)?(1 - iRec183[(i - 1)]):iRec183[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec183_perm[j] = iRec183_tmp[(count + j)];
				
			}
			/* Recursive loop 176 */
			/* Pre code */
			for (int j312 = 0; (j312 < 4); j312 = (j312 + 1)) {
				iRec186_tmp[j312] = iRec186_perm[j312];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec186[i] = (((0.5f * (fYec56[i] - fYec56[(i - 1)])) < 0.0f)?(1 - iRec186[(i - 1)]):iRec186[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec186_perm[j] = iRec186_tmp[(count + j)];
				
			}
			/* Recursive loop 177 */
			/* Pre code */
			for (int j318 = 0; (j318 < 4); j318 = (j318 + 1)) {
				iRec190_tmp[j318] = iRec190_perm[j318];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec190[i] = (((0.5f * (fYec58[i] - fYec58[(i - 1)])) < 0.0f)?(1 - iRec190[(i - 1)]):iRec190[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec190_perm[j] = iRec190_tmp[(count + j)];
				
			}
			/* Recursive loop 178 */
			/* Pre code */
			for (int j322 = 0; (j322 < 4); j322 = (j322 + 1)) {
				iRec193_tmp[j322] = iRec193_perm[j322];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec193[i] = (((0.5f * (fYec59[i] - fYec59[(i - 1)])) < 0.0f)?(1 - iRec193[(i - 1)]):iRec193[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec193_perm[j] = iRec193_tmp[(count + j)];
				
			}
			/* Recursive loop 179 */
			/* Pre code */
			for (int j326 = 0; (j326 < 4); j326 = (j326 + 1)) {
				iRec196_tmp[j326] = iRec196_perm[j326];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec196[i] = (((0.5f * (fYec60[i] - fYec60[(i - 1)])) < 0.0f)?(1 - iRec196[(i - 1)]):iRec196[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec196_perm[j] = iRec196_tmp[(count + j)];
				
			}
			/* Recursive loop 180 */
			/* Pre code */
			for (int j330 = 0; (j330 < 4); j330 = (j330 + 1)) {
				iRec199_tmp[j330] = iRec199_perm[j330];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec199[i] = (((0.5f * (fYec61[i] - fYec61[(i - 1)])) < 0.0f)?(1 - iRec199[(i - 1)]):iRec199[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec199_perm[j] = iRec199_tmp[(count + j)];
				
			}
			/* Recursive loop 181 */
			/* Pre code */
			for (int j334 = 0; (j334 < 4); j334 = (j334 + 1)) {
				iRec202_tmp[j334] = iRec202_perm[j334];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec202[i] = (((0.5f * (fYec49[i] - fYec49[(i - 1)])) < 0.0f)?(1 - iRec202[(i - 1)]):iRec202[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec202_perm[j] = iRec202_tmp[(count + j)];
				
			}
			/* Recursive loop 182 */
			/* Pre code */
			for (int j338 = 0; (j338 < 4); j338 = (j338 + 1)) {
				iRec205_tmp[j338] = iRec205_perm[j338];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec205[i] = (((0.5f * (fYec50[i] - fYec50[(i - 1)])) < 0.0f)?(1 - iRec205[(i - 1)]):iRec205[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec205_perm[j] = iRec205_tmp[(count + j)];
				
			}
			/* Recursive loop 183 */
			/* Pre code */
			for (int j342 = 0; (j342 < 4); j342 = (j342 + 1)) {
				iRec208_tmp[j342] = iRec208_perm[j342];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec208[i] = (((0.5f * (fYec51[i] - fYec51[(i - 1)])) < 0.0f)?(1 - iRec208[(i - 1)]):iRec208[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec208_perm[j] = iRec208_tmp[(count + j)];
				
			}
			/* Recursive loop 184 */
			/* Pre code */
			for (int j54 = 0; (j54 < 4); j54 = (j54 + 1)) {
				fRec31_tmp[j54] = fRec31_perm[j54];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec31[i] = (fConst5 * (fRec31[(i - 1)] + (fRec32[i] - fRec32[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec31_perm[j] = fRec31_tmp[(count + j)];
				
			}
			/* Recursive loop 185 */
			/* Pre code */
			for (int j63 = 0; (j63 < 4); j63 = (j63 + 1)) {
				fRec37_tmp[j63] = fRec37_perm[j63];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec37[i] = (fConst5 * (fRec37[(i - 1)] + (fRec38[i] - fRec38[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec37_perm[j] = fRec37_tmp[(count + j)];
				
			}
			/* Recursive loop 186 */
			/* Pre code */
			for (int j72 = 0; (j72 < 4); j72 = (j72 + 1)) {
				fRec43_tmp[j72] = fRec43_perm[j72];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec43[i] = (fConst5 * (fRec43[(i - 1)] + (fRec44[i] - fRec44[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec43_perm[j] = fRec43_tmp[(count + j)];
				
			}
			/* Recursive loop 187 */
			/* Pre code */
			for (int j81 = 0; (j81 < 4); j81 = (j81 + 1)) {
				fRec49_tmp[j81] = fRec49_perm[j81];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec49[i] = (fConst5 * (fRec49[(i - 1)] + (fRec50[i] - fRec50[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec49_perm[j] = fRec49_tmp[(count + j)];
				
			}
			/* Recursive loop 188 */
			/* Pre code */
			for (int j89 = 0; (j89 < 4); j89 = (j89 + 1)) {
				fRec56_tmp[j89] = fRec56_perm[j89];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec56[i] = (fRec56[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec40[i]), 9, 0)) - fRec56[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec56_perm[j] = fRec56_tmp[(count + j)];
				
			}
			/* Recursive loop 189 */
			/* Pre code */
			for (int j98 = 0; (j98 < 4); j98 = (j98 + 1)) {
				fRec62_tmp[j98] = fRec62_perm[j98];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec62[i] = (fRec62[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec44[i]), 10, 0)) - fRec62[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec62_perm[j] = fRec62_tmp[(count + j)];
				
			}
			/* Recursive loop 190 */
			/* Pre code */
			for (int j107 = 0; (j107 < 4); j107 = (j107 + 1)) {
				fRec68_tmp[j107] = fRec68_perm[j107];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec68[i] = (fRec68[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec48[i]), 11, 0)) - fRec68[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec68_perm[j] = fRec68_tmp[(count + j)];
				
			}
			/* Recursive loop 191 */
			/* Pre code */
			for (int j109 = 0; (j109 < 4); j109 = (j109 + 1)) {
				fRec74_tmp[j109] = fRec74_perm[j109];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec74[i] = (fRec74[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec3[i]), 0, 0)) - fRec74[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec74_perm[j] = fRec74_tmp[(count + j)];
				
			}
			/* Recursive loop 192 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec49[i] = (fRec25[i] + (fRec19[i] + (fRec13[i] + (fRec0[i] + fRec7[i]))));
				
			}
			/* Recursive loop 193 */
			/* Pre code */
			for (int j297 = 0; (j297 < 4); j297 = (j297 + 1)) {
				fYec63_tmp[j297] = fYec63_perm[j297];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec63[i] = (float(iRec174[i]) + fZec133[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec63_perm[j] = fYec63_tmp[(count + j)];
				
			}
			/* Recursive loop 194 */
			/* Pre code */
			for (int j301 = 0; (j301 < 4); j301 = (j301 + 1)) {
				fYec64_tmp[j301] = fYec64_perm[j301];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec64[i] = (float(iRec177[i]) + fZec134[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec64_perm[j] = fYec64_tmp[(count + j)];
				
			}
			/* Recursive loop 195 */
			/* Pre code */
			for (int j305 = 0; (j305 < 4); j305 = (j305 + 1)) {
				fYec65_tmp[j305] = fYec65_perm[j305];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec65[i] = (float(iRec180[i]) + fZec135[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec65_perm[j] = fYec65_tmp[(count + j)];
				
			}
			/* Recursive loop 196 */
			/* Pre code */
			for (int j309 = 0; (j309 < 4); j309 = (j309 + 1)) {
				fYec66_tmp[j309] = fYec66_perm[j309];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec66[i] = (float(iRec183[i]) + fZec136[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec66_perm[j] = fYec66_tmp[(count + j)];
				
			}
			/* Recursive loop 197 */
			/* Pre code */
			for (int j313 = 0; (j313 < 4); j313 = (j313 + 1)) {
				fYec67_tmp[j313] = fYec67_perm[j313];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec67[i] = (float(iRec186[i]) + fZec137[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec67_perm[j] = fYec67_tmp[(count + j)];
				
			}
			/* Recursive loop 198 */
			/* Pre code */
			for (int j319 = 0; (j319 < 4); j319 = (j319 + 1)) {
				fYec69_tmp[j319] = fYec69_perm[j319];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec69[i] = (float(iRec190[i]) + fZec140[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec69_perm[j] = fYec69_tmp[(count + j)];
				
			}
			/* Recursive loop 199 */
			/* Pre code */
			for (int j323 = 0; (j323 < 4); j323 = (j323 + 1)) {
				fYec70_tmp[j323] = fYec70_perm[j323];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec70[i] = (float(iRec193[i]) + fZec141[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec70_perm[j] = fYec70_tmp[(count + j)];
				
			}
			/* Recursive loop 200 */
			/* Pre code */
			for (int j327 = 0; (j327 < 4); j327 = (j327 + 1)) {
				fYec71_tmp[j327] = fYec71_perm[j327];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec71[i] = (float(iRec196[i]) + fZec142[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec71_perm[j] = fYec71_tmp[(count + j)];
				
			}
			/* Recursive loop 201 */
			/* Pre code */
			for (int j331 = 0; (j331 < 4); j331 = (j331 + 1)) {
				fYec72_tmp[j331] = fYec72_perm[j331];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec72[i] = (float(iRec199[i]) + fZec143[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec72_perm[j] = fYec72_tmp[(count + j)];
				
			}
			/* Recursive loop 202 */
			/* Pre code */
			for (int j335 = 0; (j335 < 4); j335 = (j335 + 1)) {
				fYec73_tmp[j335] = fYec73_perm[j335];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec73[i] = (float(iRec202[i]) + fZec130[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec73_perm[j] = fYec73_tmp[(count + j)];
				
			}
			/* Recursive loop 203 */
			/* Pre code */
			for (int j339 = 0; (j339 < 4); j339 = (j339 + 1)) {
				fYec74_tmp[j339] = fYec74_perm[j339];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec74[i] = (float(iRec205[i]) + fZec131[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec74_perm[j] = fYec74_tmp[(count + j)];
				
			}
			/* Recursive loop 204 */
			/* Pre code */
			for (int j343 = 0; (j343 < 4); j343 = (j343 + 1)) {
				fYec75_tmp[j343] = fYec75_perm[j343];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec75[i] = (float(iRec208[i]) + fZec132[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec75_perm[j] = fYec75_tmp[(count + j)];
				
			}
			/* Recursive loop 205 */
			/* Pre code */
			for (int j90 = 0; (j90 < 4); j90 = (j90 + 1)) {
				fRec55_tmp[j90] = fRec55_perm[j90];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec55[i] = (fConst5 * (fRec55[(i - 1)] + (fRec56[i] - fRec56[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec55_perm[j] = fRec55_tmp[(count + j)];
				
			}
			/* Recursive loop 206 */
			/* Pre code */
			for (int j99 = 0; (j99 < 4); j99 = (j99 + 1)) {
				fRec61_tmp[j99] = fRec61_perm[j99];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec61[i] = (fConst5 * (fRec61[(i - 1)] + (fRec62[i] - fRec62[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec61_perm[j] = fRec61_tmp[(count + j)];
				
			}
			/* Recursive loop 207 */
			/* Pre code */
			for (int j108 = 0; (j108 < 4); j108 = (j108 + 1)) {
				fRec67_tmp[j108] = fRec67_perm[j108];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec67[i] = (fConst5 * (fRec67[(i - 1)] + (fRec68[i] - fRec68[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec67_perm[j] = fRec67_tmp[(count + j)];
				
			}
			/* Recursive loop 208 */
			/* Pre code */
			for (int j110 = 0; (j110 < 4); j110 = (j110 + 1)) {
				fRec73_tmp[j110] = fRec73_perm[j110];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec73[i] = (fConst5 * (fRec73[(i - 1)] + (fRec74[i] - fRec74[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec73_perm[j] = fRec73_tmp[(count + j)];
				
			}
			/* Recursive loop 209 */
			/* Pre code */
			for (int j111 = 0; (j111 < 4); j111 = (j111 + 1)) {
				fRec76_tmp[j111] = fRec76_perm[j111];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec76[i] = (fRec76[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec7[i]), 1, 0)) - fRec76[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec76_perm[j] = fRec76_tmp[(count + j)];
				
			}
			/* Recursive loop 210 */
			/* Pre code */
			for (int j113 = 0; (j113 < 4); j113 = (j113 + 1)) {
				fRec78_tmp[j113] = fRec78_perm[j113];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec78[i] = (fRec78[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec11[i]), 2, 0)) - fRec78[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec78_perm[j] = fRec78_tmp[(count + j)];
				
			}
			/* Recursive loop 211 */
			/* Pre code */
			for (int j115 = 0; (j115 < 4); j115 = (j115 + 1)) {
				fRec80_tmp[j115] = fRec80_perm[j115];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec80[i] = (fRec80[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec15[i]), 3, 0)) - fRec80[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec80_perm[j] = fRec80_tmp[(count + j)];
				
			}
			/* Recursive loop 212 */
			/* Pre code */
			for (int j117 = 0; (j117 < 4); j117 = (j117 + 1)) {
				fRec82_tmp[j117] = fRec82_perm[j117];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec82[i] = (fRec82[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec19[i]), 4, 0)) - fRec82[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec82_perm[j] = fRec82_tmp[(count + j)];
				
			}
			/* Recursive loop 213 */
			/* Pre code */
			for (int j157 = 0; (j157 < 4); j157 = (j157 + 1)) {
				fYec36_tmp[j157] = fYec36_perm[j157];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec36[i] = float(yc20_get_sample(float(fRec4[i]), 0, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec36_perm[j] = fYec36_tmp[(count + j)];
				
			}
			/* Recursive loop 214 */
			/* Pre code */
			for (int j159 = 0; (j159 < 4); j159 = (j159 + 1)) {
				fYec37_tmp[j159] = fYec37_perm[j159];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec37[i] = float(yc20_get_sample(float(fRec11[i]), 1, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec37_perm[j] = fYec37_tmp[(count + j)];
				
			}
			/* Recursive loop 215 */
			/* Pre code */
			for (int j161 = 0; (j161 < 4); j161 = (j161 + 1)) {
				fYec38_tmp[j161] = fYec38_perm[j161];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec38[i] = float(yc20_get_sample(float(fRec17[i]), 2, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec38_perm[j] = fYec38_tmp[(count + j)];
				
			}
			/* Recursive loop 216 */
			/* Pre code */
			for (int j163 = 0; (j163 < 4); j163 = (j163 + 1)) {
				fYec39_tmp[j163] = fYec39_perm[j163];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec39[i] = float(yc20_get_sample(float(fRec23[i]), 3, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec39_perm[j] = fYec39_tmp[(count + j)];
				
			}
			/* Recursive loop 217 */
			/* Pre code */
			for (int j165 = 0; (j165 < 4); j165 = (j165 + 1)) {
				fYec40_tmp[j165] = fYec40_perm[j165];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec40[i] = float(yc20_get_sample(float(fRec29[i]), 4, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec40_perm[j] = fYec40_tmp[(count + j)];
				
			}
			/* Recursive loop 218 */
			/* Pre code */
			for (int j167 = 0; (j167 < 4); j167 = (j167 + 1)) {
				fYec41_tmp[j167] = fYec41_perm[j167];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec41[i] = float(yc20_get_sample(float(fRec35[i]), 5, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec41_perm[j] = fYec41_tmp[(count + j)];
				
			}
			/* Recursive loop 219 */
			/* Pre code */
			for (int j169 = 0; (j169 < 4); j169 = (j169 + 1)) {
				fYec42_tmp[j169] = fYec42_perm[j169];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec42[i] = float(yc20_get_sample(float(fRec41[i]), 6, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec42_perm[j] = fYec42_tmp[(count + j)];
				
			}
			/* Recursive loop 220 */
			/* Pre code */
			for (int j171 = 0; (j171 < 4); j171 = (j171 + 1)) {
				fYec43_tmp[j171] = fYec43_perm[j171];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec43[i] = float(yc20_get_sample(float(fRec47[i]), 7, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec43_perm[j] = fYec43_tmp[(count + j)];
				
			}
			/* Recursive loop 221 */
			/* Pre code */
			for (int j173 = 0; (j173 < 4); j173 = (j173 + 1)) {
				fYec44_tmp[j173] = fYec44_perm[j173];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec44[i] = float(yc20_get_sample(float(fRec53[i]), 8, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec44_perm[j] = fYec44_tmp[(count + j)];
				
			}
			/* Recursive loop 222 */
			/* Pre code */
			for (int j175 = 0; (j175 < 4); j175 = (j175 + 1)) {
				fYec45_tmp[j175] = fYec45_perm[j175];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec45[i] = float(yc20_get_sample(float(fRec59[i]), 9, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec45_perm[j] = fYec45_tmp[(count + j)];
				
			}
			/* Recursive loop 223 */
			/* Pre code */
			for (int j177 = 0; (j177 < 4); j177 = (j177 + 1)) {
				fYec46_tmp[j177] = fYec46_perm[j177];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec46[i] = float(yc20_get_sample(float(fRec65[i]), 10, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec46_perm[j] = fYec46_tmp[(count + j)];
				
			}
			/* Recursive loop 224 */
			/* Pre code */
			for (int j179 = 0; (j179 < 4); j179 = (j179 + 1)) {
				fYec47_tmp[j179] = fYec47_perm[j179];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec47[i] = float(yc20_get_sample(float(fRec71[i]), 11, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec47_perm[j] = fYec47_tmp[(count + j)];
				
			}
			/* Recursive loop 225 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec50[i] = (fRec49[i] + (fRec43[i] + (fRec37[i] + (fRec31[i] + fZec49[i]))));
				
			}
			/* Recursive loop 226 */
			/* Pre code */
			for (int j229 = 0; (j229 < 4); j229 = (j229 + 1)) {
				fVec48_tmp[j229] = fVec48_perm[j229];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec48[i] = fSlow67;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec48_perm[j] = fVec48_tmp[(count + j)];
				
			}
			/* Recursive loop 227 */
			/* Pre code */
			for (int j230 = 0; (j230 < 4); j230 = (j230 + 1)) {
				fVec49_tmp[j230] = fVec49_perm[j230];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec49[i] = fSlow68;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec49_perm[j] = fVec49_tmp[(count + j)];
				
			}
			/* Recursive loop 228 */
			/* Pre code */
			for (int j231 = 0; (j231 < 4); j231 = (j231 + 1)) {
				fVec50_tmp[j231] = fVec50_perm[j231];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec50[i] = fSlow69;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec50_perm[j] = fVec50_tmp[(count + j)];
				
			}
			/* Recursive loop 229 */
			/* Pre code */
			for (int j232 = 0; (j232 < 4); j232 = (j232 + 1)) {
				fVec51_tmp[j232] = fVec51_perm[j232];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec51[i] = fSlow70;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec51_perm[j] = fVec51_tmp[(count + j)];
				
			}
			/* Recursive loop 230 */
			/* Pre code */
			for (int j233 = 0; (j233 < 4); j233 = (j233 + 1)) {
				fVec52_tmp[j233] = fVec52_perm[j233];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec52[i] = fSlow71;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec52_perm[j] = fVec52_tmp[(count + j)];
				
			}
			/* Recursive loop 231 */
			/* Pre code */
			for (int j234 = 0; (j234 < 4); j234 = (j234 + 1)) {
				fVec53_tmp[j234] = fVec53_perm[j234];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec53[i] = fSlow72;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec53_perm[j] = fVec53_tmp[(count + j)];
				
			}
			/* Recursive loop 232 */
			/* Pre code */
			for (int j235 = 0; (j235 < 4); j235 = (j235 + 1)) {
				fVec54_tmp[j235] = fVec54_perm[j235];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec54[i] = fSlow73;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec54_perm[j] = fVec54_tmp[(count + j)];
				
			}
			/* Recursive loop 233 */
			/* Pre code */
			for (int j236 = 0; (j236 < 4); j236 = (j236 + 1)) {
				fVec55_tmp[j236] = fVec55_perm[j236];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec55[i] = fSlow74;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec55_perm[j] = fVec55_tmp[(count + j)];
				
			}
			/* Recursive loop 234 */
			/* Pre code */
			for (int j237 = 0; (j237 < 4); j237 = (j237 + 1)) {
				fVec56_tmp[j237] = fVec56_perm[j237];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec56[i] = fSlow75;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec56_perm[j] = fVec56_tmp[(count + j)];
				
			}
			/* Recursive loop 235 */
			/* Pre code */
			for (int j238 = 0; (j238 < 4); j238 = (j238 + 1)) {
				fVec57_tmp[j238] = fVec57_perm[j238];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec57[i] = fSlow76;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec57_perm[j] = fVec57_tmp[(count + j)];
				
			}
			/* Recursive loop 236 */
			/* Pre code */
			for (int j239 = 0; (j239 < 4); j239 = (j239 + 1)) {
				fVec58_tmp[j239] = fVec58_perm[j239];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec58[i] = fSlow77;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec58_perm[j] = fVec58_tmp[(count + j)];
				
			}
			/* Recursive loop 237 */
			/* Pre code */
			for (int j240 = 0; (j240 < 4); j240 = (j240 + 1)) {
				fVec59_tmp[j240] = fVec59_perm[j240];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec59[i] = fSlow78;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec59_perm[j] = fVec59_tmp[(count + j)];
				
			}
			/* Recursive loop 238 */
			/* Pre code */
			for (int j241 = 0; (j241 < 4); j241 = (j241 + 1)) {
				fVec60_tmp[j241] = fVec60_perm[j241];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec60[i] = fSlow79;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec60_perm[j] = fVec60_tmp[(count + j)];
				
			}
			/* Recursive loop 239 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec146[i] = (0.5f * fYec63[i]);
				
			}
			/* Recursive loop 240 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec147[i] = (0.5f * fYec64[i]);
				
			}
			/* Recursive loop 241 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec148[i] = (0.5f * fYec65[i]);
				
			}
			/* Recursive loop 242 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec149[i] = (0.5f * fYec66[i]);
				
			}
			/* Recursive loop 243 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec150[i] = (0.5f * fYec67[i]);
				
			}
			/* Recursive loop 244 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec156[i] = (0.5f * fYec69[i]);
				
			}
			/* Recursive loop 245 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec157[i] = (0.5f * fYec70[i]);
				
			}
			/* Recursive loop 246 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec158[i] = (0.5f * fYec71[i]);
				
			}
			/* Recursive loop 247 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec159[i] = (0.5f * fYec72[i]);
				
			}
			/* Recursive loop 248 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec160[i] = (0.5f * fYec73[i]);
				
			}
			/* Recursive loop 249 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec161[i] = (0.5f * fYec74[i]);
				
			}
			/* Recursive loop 250 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec162[i] = (0.5f * fYec75[i]);
				
			}
			/* Recursive loop 251 */
			/* Pre code */
			for (int j348 = 0; (j348 < 4); j348 = (j348 + 1)) {
				iRec212_tmp[j348] = iRec212_perm[j348];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec212[i] = (((0.5f * (fYec69[i] - fYec69[(i - 1)])) < 0.0f)?(1 - iRec212[(i - 1)]):iRec212[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec212_perm[j] = iRec212_tmp[(count + j)];
				
			}
			/* Recursive loop 252 */
			/* Pre code */
			for (int j352 = 0; (j352 < 4); j352 = (j352 + 1)) {
				iRec215_tmp[j352] = iRec215_perm[j352];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec215[i] = (((0.5f * (fYec70[i] - fYec70[(i - 1)])) < 0.0f)?(1 - iRec215[(i - 1)]):iRec215[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec215_perm[j] = iRec215_tmp[(count + j)];
				
			}
			/* Recursive loop 253 */
			/* Pre code */
			for (int j356 = 0; (j356 < 4); j356 = (j356 + 1)) {
				iRec218_tmp[j356] = iRec218_perm[j356];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec218[i] = (((0.5f * (fYec71[i] - fYec71[(i - 1)])) < 0.0f)?(1 - iRec218[(i - 1)]):iRec218[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec218_perm[j] = iRec218_tmp[(count + j)];
				
			}
			/* Recursive loop 254 */
			/* Pre code */
			for (int j360 = 0; (j360 < 4); j360 = (j360 + 1)) {
				iRec221_tmp[j360] = iRec221_perm[j360];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec221[i] = (((0.5f * (fYec72[i] - fYec72[(i - 1)])) < 0.0f)?(1 - iRec221[(i - 1)]):iRec221[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec221_perm[j] = iRec221_tmp[(count + j)];
				
			}
			/* Recursive loop 255 */
			/* Pre code */
			for (int j364 = 0; (j364 < 4); j364 = (j364 + 1)) {
				iRec224_tmp[j364] = iRec224_perm[j364];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec224[i] = (((0.5f * (fYec73[i] - fYec73[(i - 1)])) < 0.0f)?(1 - iRec224[(i - 1)]):iRec224[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec224_perm[j] = iRec224_tmp[(count + j)];
				
			}
			/* Recursive loop 256 */
			/* Pre code */
			for (int j368 = 0; (j368 < 4); j368 = (j368 + 1)) {
				iRec227_tmp[j368] = iRec227_perm[j368];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec227[i] = (((0.5f * (fYec74[i] - fYec74[(i - 1)])) < 0.0f)?(1 - iRec227[(i - 1)]):iRec227[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec227_perm[j] = iRec227_tmp[(count + j)];
				
			}
			/* Recursive loop 257 */
			/* Pre code */
			for (int j372 = 0; (j372 < 4); j372 = (j372 + 1)) {
				iRec230_tmp[j372] = iRec230_perm[j372];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec230[i] = (((0.5f * (fYec75[i] - fYec75[(i - 1)])) < 0.0f)?(1 - iRec230[(i - 1)]):iRec230[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec230_perm[j] = iRec230_tmp[(count + j)];
				
			}
			/* Recursive loop 258 */
			/* Pre code */
			for (int j376 = 0; (j376 < 4); j376 = (j376 + 1)) {
				iRec233_tmp[j376] = iRec233_perm[j376];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec233[i] = (((0.5f * (fYec63[i] - fYec63[(i - 1)])) < 0.0f)?(1 - iRec233[(i - 1)]):iRec233[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec233_perm[j] = iRec233_tmp[(count + j)];
				
			}
			/* Recursive loop 259 */
			/* Pre code */
			for (int j380 = 0; (j380 < 4); j380 = (j380 + 1)) {
				iRec236_tmp[j380] = iRec236_perm[j380];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec236[i] = (((0.5f * (fYec64[i] - fYec64[(i - 1)])) < 0.0f)?(1 - iRec236[(i - 1)]):iRec236[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec236_perm[j] = iRec236_tmp[(count + j)];
				
			}
			/* Recursive loop 260 */
			/* Pre code */
			for (int j384 = 0; (j384 < 4); j384 = (j384 + 1)) {
				iRec239_tmp[j384] = iRec239_perm[j384];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec239[i] = (((0.5f * (fYec65[i] - fYec65[(i - 1)])) < 0.0f)?(1 - iRec239[(i - 1)]):iRec239[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec239_perm[j] = iRec239_tmp[(count + j)];
				
			}
			/* Recursive loop 261 */
			/* Pre code */
			for (int j388 = 0; (j388 < 4); j388 = (j388 + 1)) {
				iRec242_tmp[j388] = iRec242_perm[j388];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec242[i] = (((0.5f * (fYec66[i] - fYec66[(i - 1)])) < 0.0f)?(1 - iRec242[(i - 1)]):iRec242[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec242_perm[j] = iRec242_tmp[(count + j)];
				
			}
			/* Recursive loop 262 */
			/* Pre code */
			for (int j392 = 0; (j392 < 4); j392 = (j392 + 1)) {
				iRec245_tmp[j392] = iRec245_perm[j392];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec245[i] = (((0.5f * (fYec67[i] - fYec67[(i - 1)])) < 0.0f)?(1 - iRec245[(i - 1)]):iRec245[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec245_perm[j] = iRec245_tmp[(count + j)];
				
			}
			/* Recursive loop 263 */
			/* Pre code */
			for (int j112 = 0; (j112 < 4); j112 = (j112 + 1)) {
				fRec75_tmp[j112] = fRec75_perm[j112];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec75[i] = (fConst5 * (fRec75[(i - 1)] + (fRec76[i] - fRec76[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec75_perm[j] = fRec75_tmp[(count + j)];
				
			}
			/* Recursive loop 264 */
			/* Pre code */
			for (int j114 = 0; (j114 < 4); j114 = (j114 + 1)) {
				fRec77_tmp[j114] = fRec77_perm[j114];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec77[i] = (fConst5 * (fRec77[(i - 1)] + (fRec78[i] - fRec78[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec77_perm[j] = fRec77_tmp[(count + j)];
				
			}
			/* Recursive loop 265 */
			/* Pre code */
			for (int j116 = 0; (j116 < 4); j116 = (j116 + 1)) {
				fRec79_tmp[j116] = fRec79_perm[j116];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec79[i] = (fConst5 * (fRec79[(i - 1)] + (fRec80[i] - fRec80[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec79_perm[j] = fRec79_tmp[(count + j)];
				
			}
			/* Recursive loop 266 */
			/* Pre code */
			for (int j118 = 0; (j118 < 4); j118 = (j118 + 1)) {
				fRec81_tmp[j118] = fRec81_perm[j118];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec81[i] = (fConst5 * (fRec81[(i - 1)] + (fRec82[i] - fRec82[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec81_perm[j] = fRec81_tmp[(count + j)];
				
			}
			/* Recursive loop 267 */
			/* Pre code */
			for (int j119 = 0; (j119 < 4); j119 = (j119 + 1)) {
				fRec84_tmp[j119] = fRec84_perm[j119];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec84[i] = (fRec84[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec23[i]), 5, 0)) - fRec84[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec84_perm[j] = fRec84_tmp[(count + j)];
				
			}
			/* Recursive loop 268 */
			/* Pre code */
			for (int j121 = 0; (j121 < 4); j121 = (j121 + 1)) {
				fRec86_tmp[j121] = fRec86_perm[j121];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec86[i] = (fRec86[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec27[i]), 6, 0)) - fRec86[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec86_perm[j] = fRec86_tmp[(count + j)];
				
			}
			/* Recursive loop 269 */
			/* Pre code */
			for (int j123 = 0; (j123 < 4); j123 = (j123 + 1)) {
				fRec88_tmp[j123] = fRec88_perm[j123];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec88[i] = (fRec88[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec31[i]), 7, 0)) - fRec88[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec88_perm[j] = fRec88_tmp[(count + j)];
				
			}
			/* Recursive loop 270 */
			/* Pre code */
			for (int j125 = 0; (j125 < 4); j125 = (j125 + 1)) {
				fRec90_tmp[j125] = fRec90_perm[j125];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec90[i] = (fRec90[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec35[i]), 8, 0)) - fRec90[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec90_perm[j] = fRec90_tmp[(count + j)];
				
			}
			/* Recursive loop 271 */
			/* Pre code */
			for (int j127 = 0; (j127 < 4); j127 = (j127 + 1)) {
				fRec92_tmp[j127] = fRec92_perm[j127];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec92[i] = (fRec92[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec39[i]), 9, 0)) - fRec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec92_perm[j] = fRec92_tmp[(count + j)];
				
			}
			/* Recursive loop 272 */
			/* Pre code */
			for (int j129 = 0; (j129 < 4); j129 = (j129 + 1)) {
				fRec94_tmp[j129] = fRec94_perm[j129];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec94[i] = (fRec94[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec43[i]), 10, 0)) - fRec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec94_perm[j] = fRec94_tmp[(count + j)];
				
			}
			/* Recursive loop 273 */
			/* Pre code */
			for (int j131 = 0; (j131 < 4); j131 = (j131 + 1)) {
				fRec96_tmp[j131] = fRec96_perm[j131];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec96[i] = (fRec96[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec47[i]), 11, 0)) - fRec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec96_perm[j] = fRec96_tmp[(count + j)];
				
			}
			/* Recursive loop 274 */
			/* Pre code */
			for (int j133 = 0; (j133 < 4); j133 = (j133 + 1)) {
				fRec98_tmp[j133] = fRec98_perm[j133];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec98[i] = (fRec98[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec2[i]), 0, 0)) - fRec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec98_perm[j] = fRec98_tmp[(count + j)];
				
			}
			/* Recursive loop 275 */
			/* Pre code */
			for (int j135 = 0; (j135 < 4); j135 = (j135 + 1)) {
				fRec100_tmp[j135] = fRec100_perm[j135];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec100[i] = (fRec100[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec6[i]), 1, 0)) - fRec100[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec100_perm[j] = fRec100_tmp[(count + j)];
				
			}
			/* Recursive loop 276 */
			/* Pre code */
			for (int j137 = 0; (j137 < 4); j137 = (j137 + 1)) {
				fRec102_tmp[j137] = fRec102_perm[j137];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec102[i] = (fRec102[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec10[i]), 2, 0)) - fRec102[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec102_perm[j] = fRec102_tmp[(count + j)];
				
			}
			/* Recursive loop 277 */
			/* Pre code */
			for (int j139 = 0; (j139 < 4); j139 = (j139 + 1)) {
				fRec104_tmp[j139] = fRec104_perm[j139];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec104[i] = (fRec104[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec14[i]), 3, 0)) - fRec104[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec104_perm[j] = fRec104_tmp[(count + j)];
				
			}
			/* Recursive loop 278 */
			/* Pre code */
			for (int j141 = 0; (j141 < 4); j141 = (j141 + 1)) {
				fRec106_tmp[j141] = fRec106_perm[j141];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec106[i] = (fRec106[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec18[i]), 4, 0)) - fRec106[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec106_perm[j] = fRec106_tmp[(count + j)];
				
			}
			/* Recursive loop 279 */
			/* Pre code */
			for (int j143 = 0; (j143 < 4); j143 = (j143 + 1)) {
				fRec108_tmp[j143] = fRec108_perm[j143];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec108[i] = (fRec108[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec22[i]), 5, 0)) - fRec108[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec108_perm[j] = fRec108_tmp[(count + j)];
				
			}
			/* Recursive loop 280 */
			/* Pre code */
			for (int j145 = 0; (j145 < 4); j145 = (j145 + 1)) {
				fRec110_tmp[j145] = fRec110_perm[j145];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec110[i] = (fRec110[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec26[i]), 6, 0)) - fRec110[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec110_perm[j] = fRec110_tmp[(count + j)];
				
			}
			/* Recursive loop 281 */
			/* Pre code */
			for (int j147 = 0; (j147 < 4); j147 = (j147 + 1)) {
				fRec112_tmp[j147] = fRec112_perm[j147];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec112[i] = (fRec112[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec30[i]), 7, 0)) - fRec112[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec112_perm[j] = fRec112_tmp[(count + j)];
				
			}
			/* Recursive loop 282 */
			/* Pre code */
			for (int j149 = 0; (j149 < 4); j149 = (j149 + 1)) {
				fRec114_tmp[j149] = fRec114_perm[j149];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec114[i] = (fRec114[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec34[i]), 8, 0)) - fRec114[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec114_perm[j] = fRec114_tmp[(count + j)];
				
			}
			/* Recursive loop 283 */
			/* Pre code */
			for (int j151 = 0; (j151 < 4); j151 = (j151 + 1)) {
				fRec116_tmp[j151] = fRec116_perm[j151];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec116[i] = (fRec116[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec38[i]), 9, 0)) - fRec116[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec116_perm[j] = fRec116_tmp[(count + j)];
				
			}
			/* Recursive loop 284 */
			/* Pre code */
			for (int j153 = 0; (j153 < 4); j153 = (j153 + 1)) {
				fRec118_tmp[j153] = fRec118_perm[j153];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec118[i] = (fRec118[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec42[i]), 10, 0)) - fRec118[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec118_perm[j] = fRec118_tmp[(count + j)];
				
			}
			/* Recursive loop 285 */
			/* Pre code */
			for (int j155 = 0; (j155 < 4); j155 = (j155 + 1)) {
				fRec120_tmp[j155] = fRec120_perm[j155];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec120[i] = (fRec120[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec46[i]), 11, 0)) - fRec120[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec120_perm[j] = fRec120_tmp[(count + j)];
				
			}
			/* Recursive loop 286 */
			/* Pre code */
			for (int j158 = 0; (j158 < 4); j158 = (j158 + 1)) {
				fRec121_tmp[j158] = fRec121_perm[j158];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec121[i] = (fConst14 * ((0.00737454556f * fRec121[(i - 1)]) + (0.0143803637f * (fYec36[i] - fYec36[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec121_perm[j] = fRec121_tmp[(count + j)];
				
			}
			/* Recursive loop 287 */
			/* Pre code */
			for (int j160 = 0; (j160 < 4); j160 = (j160 + 1)) {
				fRec122_tmp[j160] = fRec122_perm[j160];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec122[i] = (fConst14 * ((0.00737454556f * fRec122[(i - 1)]) + (0.0143803637f * (fYec37[i] - fYec37[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec122_perm[j] = fRec122_tmp[(count + j)];
				
			}
			/* Recursive loop 288 */
			/* Pre code */
			for (int j162 = 0; (j162 < 4); j162 = (j162 + 1)) {
				fRec123_tmp[j162] = fRec123_perm[j162];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec123[i] = (fConst14 * ((0.00737454556f * fRec123[(i - 1)]) + (0.0143803637f * (fYec38[i] - fYec38[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec123_perm[j] = fRec123_tmp[(count + j)];
				
			}
			/* Recursive loop 289 */
			/* Pre code */
			for (int j164 = 0; (j164 < 4); j164 = (j164 + 1)) {
				fRec124_tmp[j164] = fRec124_perm[j164];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec124[i] = (fConst14 * ((0.00737454556f * fRec124[(i - 1)]) + (0.0143803637f * (fYec39[i] - fYec39[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec124_perm[j] = fRec124_tmp[(count + j)];
				
			}
			/* Recursive loop 290 */
			/* Pre code */
			for (int j166 = 0; (j166 < 4); j166 = (j166 + 1)) {
				fRec125_tmp[j166] = fRec125_perm[j166];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec125[i] = (fConst14 * ((0.00737454556f * fRec125[(i - 1)]) + (0.0143803637f * (fYec40[i] - fYec40[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec125_perm[j] = fRec125_tmp[(count + j)];
				
			}
			/* Recursive loop 291 */
			/* Pre code */
			for (int j168 = 0; (j168 < 4); j168 = (j168 + 1)) {
				fRec126_tmp[j168] = fRec126_perm[j168];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec126[i] = (fConst14 * ((0.00737454556f * fRec126[(i - 1)]) + (0.0143803637f * (fYec41[i] - fYec41[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec126_perm[j] = fRec126_tmp[(count + j)];
				
			}
			/* Recursive loop 292 */
			/* Pre code */
			for (int j170 = 0; (j170 < 4); j170 = (j170 + 1)) {
				fRec127_tmp[j170] = fRec127_perm[j170];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec127[i] = (fConst14 * ((0.00737454556f * fRec127[(i - 1)]) + (0.0143803637f * (fYec42[i] - fYec42[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec127_perm[j] = fRec127_tmp[(count + j)];
				
			}
			/* Recursive loop 293 */
			/* Pre code */
			for (int j172 = 0; (j172 < 4); j172 = (j172 + 1)) {
				fRec128_tmp[j172] = fRec128_perm[j172];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec128[i] = (fConst14 * ((0.00737454556f * fRec128[(i - 1)]) + (0.0143803637f * (fYec43[i] - fYec43[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec128_perm[j] = fRec128_tmp[(count + j)];
				
			}
			/* Recursive loop 294 */
			/* Pre code */
			for (int j174 = 0; (j174 < 4); j174 = (j174 + 1)) {
				fRec129_tmp[j174] = fRec129_perm[j174];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec129[i] = (fConst14 * ((0.00737454556f * fRec129[(i - 1)]) + (0.0143803637f * (fYec44[i] - fYec44[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec129_perm[j] = fRec129_tmp[(count + j)];
				
			}
			/* Recursive loop 295 */
			/* Pre code */
			for (int j176 = 0; (j176 < 4); j176 = (j176 + 1)) {
				fRec130_tmp[j176] = fRec130_perm[j176];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec130[i] = (fConst14 * ((0.00737454556f * fRec130[(i - 1)]) + (0.0143803637f * (fYec45[i] - fYec45[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec130_perm[j] = fRec130_tmp[(count + j)];
				
			}
			/* Recursive loop 296 */
			/* Pre code */
			for (int j178 = 0; (j178 < 4); j178 = (j178 + 1)) {
				fRec131_tmp[j178] = fRec131_perm[j178];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec131[i] = (fConst14 * ((0.00737454556f * fRec131[(i - 1)]) + (0.0143803637f * (fYec46[i] - fYec46[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec131_perm[j] = fRec131_tmp[(count + j)];
				
			}
			/* Recursive loop 297 */
			/* Pre code */
			for (int j180 = 0; (j180 < 4); j180 = (j180 + 1)) {
				fRec132_tmp[j180] = fRec132_perm[j180];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec132[i] = (fConst14 * ((0.00737454556f * fRec132[(i - 1)]) + (0.0143803637f * (fYec47[i] - fYec47[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec132_perm[j] = fRec132_tmp[(count + j)];
				
			}
			/* Recursive loop 298 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec51[i] = (fRec73[i] + (fRec67[i] + (fRec61[i] + (fRec55[i] + fZec50[i]))));
				
			}
			/* Recursive loop 299 */
			/* Pre code */
			for (int j181 = 0; (j181 < 4); j181 = (j181 + 1)) {
				fVec0_tmp[j181] = fVec0_perm[j181];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec0[i] = fSlow19;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec0_perm[j] = fVec0_tmp[(count + j)];
				
			}
			/* Recursive loop 300 */
			/* Pre code */
			for (int j182 = 0; (j182 < 4); j182 = (j182 + 1)) {
				fVec1_tmp[j182] = fVec1_perm[j182];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec1[i] = fSlow20;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec1_perm[j] = fVec1_tmp[(count + j)];
				
			}
			/* Recursive loop 301 */
			/* Pre code */
			for (int j183 = 0; (j183 < 4); j183 = (j183 + 1)) {
				fVec2_tmp[j183] = fVec2_perm[j183];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec2[i] = fSlow21;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec2_perm[j] = fVec2_tmp[(count + j)];
				
			}
			/* Recursive loop 302 */
			/* Pre code */
			for (int j184 = 0; (j184 < 4); j184 = (j184 + 1)) {
				fVec3_tmp[j184] = fVec3_perm[j184];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec3[i] = fSlow22;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec3_perm[j] = fVec3_tmp[(count + j)];
				
			}
			/* Recursive loop 303 */
			/* Pre code */
			for (int j185 = 0; (j185 < 4); j185 = (j185 + 1)) {
				fVec4_tmp[j185] = fVec4_perm[j185];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec4[i] = fSlow23;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec4_perm[j] = fVec4_tmp[(count + j)];
				
			}
			/* Recursive loop 304 */
			/* Pre code */
			for (int j186 = 0; (j186 < 4); j186 = (j186 + 1)) {
				fVec5_tmp[j186] = fVec5_perm[j186];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec5[i] = fSlow24;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec5_perm[j] = fVec5_tmp[(count + j)];
				
			}
			/* Recursive loop 305 */
			/* Pre code */
			for (int j187 = 0; (j187 < 4); j187 = (j187 + 1)) {
				fVec6_tmp[j187] = fVec6_perm[j187];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec6[i] = fSlow25;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec6_perm[j] = fVec6_tmp[(count + j)];
				
			}
			/* Recursive loop 306 */
			/* Pre code */
			for (int j188 = 0; (j188 < 4); j188 = (j188 + 1)) {
				fVec7_tmp[j188] = fVec7_perm[j188];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec7[i] = fSlow26;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec7_perm[j] = fVec7_tmp[(count + j)];
				
			}
			/* Recursive loop 307 */
			/* Pre code */
			for (int j189 = 0; (j189 < 4); j189 = (j189 + 1)) {
				fVec8_tmp[j189] = fVec8_perm[j189];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec8[i] = fSlow27;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec8_perm[j] = fVec8_tmp[(count + j)];
				
			}
			/* Recursive loop 308 */
			/* Pre code */
			for (int j190 = 0; (j190 < 4); j190 = (j190 + 1)) {
				fVec9_tmp[j190] = fVec9_perm[j190];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec9[i] = fSlow28;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec9_perm[j] = fVec9_tmp[(count + j)];
				
			}
			/* Recursive loop 309 */
			/* Pre code */
			for (int j191 = 0; (j191 < 4); j191 = (j191 + 1)) {
				fVec10_tmp[j191] = fVec10_perm[j191];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec10[i] = fSlow29;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec10_perm[j] = fVec10_tmp[(count + j)];
				
			}
			/* Recursive loop 310 */
			/* Pre code */
			for (int j192 = 0; (j192 < 4); j192 = (j192 + 1)) {
				fVec11_tmp[j192] = fVec11_perm[j192];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec11[i] = fSlow30;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec11_perm[j] = fVec11_tmp[(count + j)];
				
			}
			/* Recursive loop 311 */
			/* Pre code */
			for (int j193 = 0; (j193 < 4); j193 = (j193 + 1)) {
				fVec12_tmp[j193] = fVec12_perm[j193];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec12[i] = fSlow31;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec12_perm[j] = fVec12_tmp[(count + j)];
				
			}
			/* Recursive loop 312 */
			/* Pre code */
			for (int j194 = 0; (j194 < 4); j194 = (j194 + 1)) {
				fVec13_tmp[j194] = fVec13_perm[j194];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec13[i] = fSlow32;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec13_perm[j] = fVec13_tmp[(count + j)];
				
			}
			/* Recursive loop 313 */
			/* Pre code */
			for (int j195 = 0; (j195 < 4); j195 = (j195 + 1)) {
				fVec14_tmp[j195] = fVec14_perm[j195];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec14[i] = fSlow33;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec14_perm[j] = fVec14_tmp[(count + j)];
				
			}
			/* Recursive loop 314 */
			/* Pre code */
			for (int j196 = 0; (j196 < 4); j196 = (j196 + 1)) {
				fVec15_tmp[j196] = fVec15_perm[j196];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec15[i] = fSlow34;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec15_perm[j] = fVec15_tmp[(count + j)];
				
			}
			/* Recursive loop 315 */
			/* Pre code */
			for (int j197 = 0; (j197 < 4); j197 = (j197 + 1)) {
				fVec16_tmp[j197] = fVec16_perm[j197];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec16[i] = fSlow35;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec16_perm[j] = fVec16_tmp[(count + j)];
				
			}
			/* Recursive loop 316 */
			/* Pre code */
			for (int j198 = 0; (j198 < 4); j198 = (j198 + 1)) {
				fVec17_tmp[j198] = fVec17_perm[j198];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec17[i] = fSlow36;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec17_perm[j] = fVec17_tmp[(count + j)];
				
			}
			/* Recursive loop 317 */
			/* Pre code */
			for (int j199 = 0; (j199 < 4); j199 = (j199 + 1)) {
				fVec18_tmp[j199] = fVec18_perm[j199];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec18[i] = fSlow37;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec18_perm[j] = fVec18_tmp[(count + j)];
				
			}
			/* Recursive loop 318 */
			/* Pre code */
			for (int j200 = 0; (j200 < 4); j200 = (j200 + 1)) {
				fVec19_tmp[j200] = fVec19_perm[j200];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec19[i] = fSlow38;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec19_perm[j] = fVec19_tmp[(count + j)];
				
			}
			/* Recursive loop 319 */
			/* Pre code */
			for (int j201 = 0; (j201 < 4); j201 = (j201 + 1)) {
				fVec20_tmp[j201] = fVec20_perm[j201];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec20[i] = fSlow39;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec20_perm[j] = fVec20_tmp[(count + j)];
				
			}
			/* Recursive loop 320 */
			/* Pre code */
			for (int j202 = 0; (j202 < 4); j202 = (j202 + 1)) {
				fVec21_tmp[j202] = fVec21_perm[j202];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec21[i] = fSlow40;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec21_perm[j] = fVec21_tmp[(count + j)];
				
			}
			/* Recursive loop 321 */
			/* Pre code */
			for (int j203 = 0; (j203 < 4); j203 = (j203 + 1)) {
				fVec22_tmp[j203] = fVec22_perm[j203];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec22[i] = fSlow41;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec22_perm[j] = fVec22_tmp[(count + j)];
				
			}
			/* Recursive loop 322 */
			/* Pre code */
			for (int j204 = 0; (j204 < 4); j204 = (j204 + 1)) {
				fVec23_tmp[j204] = fVec23_perm[j204];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec23[i] = fSlow42;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec23_perm[j] = fVec23_tmp[(count + j)];
				
			}
			/* Recursive loop 323 */
			/* Pre code */
			for (int j205 = 0; (j205 < 4); j205 = (j205 + 1)) {
				fVec24_tmp[j205] = fVec24_perm[j205];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec24[i] = fSlow43;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec24_perm[j] = fVec24_tmp[(count + j)];
				
			}
			/* Recursive loop 324 */
			/* Pre code */
			for (int j206 = 0; (j206 < 4); j206 = (j206 + 1)) {
				fVec25_tmp[j206] = fVec25_perm[j206];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec25[i] = fSlow44;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec25_perm[j] = fVec25_tmp[(count + j)];
				
			}
			/* Recursive loop 325 */
			/* Pre code */
			for (int j207 = 0; (j207 < 4); j207 = (j207 + 1)) {
				fVec26_tmp[j207] = fVec26_perm[j207];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec26[i] = fSlow45;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec26_perm[j] = fVec26_tmp[(count + j)];
				
			}
			/* Recursive loop 326 */
			/* Pre code */
			for (int j208 = 0; (j208 < 4); j208 = (j208 + 1)) {
				fVec27_tmp[j208] = fVec27_perm[j208];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec27[i] = fSlow46;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec27_perm[j] = fVec27_tmp[(count + j)];
				
			}
			/* Recursive loop 327 */
			/* Pre code */
			for (int j209 = 0; (j209 < 4); j209 = (j209 + 1)) {
				fVec28_tmp[j209] = fVec28_perm[j209];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec28[i] = fSlow47;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec28_perm[j] = fVec28_tmp[(count + j)];
				
			}
			/* Recursive loop 328 */
			/* Pre code */
			for (int j210 = 0; (j210 < 4); j210 = (j210 + 1)) {
				fVec29_tmp[j210] = fVec29_perm[j210];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec29[i] = fSlow48;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec29_perm[j] = fVec29_tmp[(count + j)];
				
			}
			/* Recursive loop 329 */
			/* Pre code */
			for (int j211 = 0; (j211 < 4); j211 = (j211 + 1)) {
				fVec30_tmp[j211] = fVec30_perm[j211];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec30[i] = fSlow49;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec30_perm[j] = fVec30_tmp[(count + j)];
				
			}
			/* Recursive loop 330 */
			/* Pre code */
			for (int j212 = 0; (j212 < 4); j212 = (j212 + 1)) {
				fVec31_tmp[j212] = fVec31_perm[j212];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec31[i] = fSlow50;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec31_perm[j] = fVec31_tmp[(count + j)];
				
			}
			/* Recursive loop 331 */
			/* Pre code */
			for (int j213 = 0; (j213 < 4); j213 = (j213 + 1)) {
				fVec32_tmp[j213] = fVec32_perm[j213];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec32[i] = fSlow51;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec32_perm[j] = fVec32_tmp[(count + j)];
				
			}
			/* Recursive loop 332 */
			/* Pre code */
			for (int j214 = 0; (j214 < 4); j214 = (j214 + 1)) {
				fVec33_tmp[j214] = fVec33_perm[j214];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec33[i] = fSlow52;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec33_perm[j] = fVec33_tmp[(count + j)];
				
			}
			/* Recursive loop 333 */
			/* Pre code */
			for (int j215 = 0; (j215 < 4); j215 = (j215 + 1)) {
				fVec34_tmp[j215] = fVec34_perm[j215];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec34[i] = fSlow53;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec34_perm[j] = fVec34_tmp[(count + j)];
				
			}
			/* Recursive loop 334 */
			/* Pre code */
			for (int j216 = 0; (j216 < 4); j216 = (j216 + 1)) {
				fVec35_tmp[j216] = fVec35_perm[j216];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec35[i] = fSlow54;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec35_perm[j] = fVec35_tmp[(count + j)];
				
			}
			/* Recursive loop 335 */
			/* Pre code */
			for (int j217 = 0; (j217 < 4); j217 = (j217 + 1)) {
				fVec36_tmp[j217] = fVec36_perm[j217];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec36[i] = fSlow55;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec36_perm[j] = fVec36_tmp[(count + j)];
				
			}
			/* Recursive loop 336 */
			/* Pre code */
			for (int j218 = 0; (j218 < 4); j218 = (j218 + 1)) {
				fVec37_tmp[j218] = fVec37_perm[j218];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec37[i] = fSlow56;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec37_perm[j] = fVec37_tmp[(count + j)];
				
			}
			/* Recursive loop 337 */
			/* Pre code */
			for (int j219 = 0; (j219 < 4); j219 = (j219 + 1)) {
				fVec38_tmp[j219] = fVec38_perm[j219];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec38[i] = fSlow57;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec38_perm[j] = fVec38_tmp[(count + j)];
				
			}
			/* Recursive loop 338 */
			/* Pre code */
			for (int j220 = 0; (j220 < 4); j220 = (j220 + 1)) {
				fVec39_tmp[j220] = fVec39_perm[j220];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec39[i] = fSlow58;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec39_perm[j] = fVec39_tmp[(count + j)];
				
			}
			/* Recursive loop 339 */
			/* Pre code */
			for (int j221 = 0; (j221 < 4); j221 = (j221 + 1)) {
				fVec40_tmp[j221] = fVec40_perm[j221];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec40[i] = fSlow59;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec40_perm[j] = fVec40_tmp[(count + j)];
				
			}
			/* Recursive loop 340 */
			/* Pre code */
			for (int j222 = 0; (j222 < 4); j222 = (j222 + 1)) {
				fVec41_tmp[j222] = fVec41_perm[j222];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec41[i] = fSlow60;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec41_perm[j] = fVec41_tmp[(count + j)];
				
			}
			/* Recursive loop 341 */
			/* Pre code */
			for (int j223 = 0; (j223 < 4); j223 = (j223 + 1)) {
				fVec42_tmp[j223] = fVec42_perm[j223];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec42[i] = fSlow61;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec42_perm[j] = fVec42_tmp[(count + j)];
				
			}
			/* Recursive loop 342 */
			/* Pre code */
			for (int j224 = 0; (j224 < 4); j224 = (j224 + 1)) {
				fVec43_tmp[j224] = fVec43_perm[j224];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec43[i] = fSlow62;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec43_perm[j] = fVec43_tmp[(count + j)];
				
			}
			/* Recursive loop 343 */
			/* Pre code */
			for (int j225 = 0; (j225 < 4); j225 = (j225 + 1)) {
				fVec44_tmp[j225] = fVec44_perm[j225];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec44[i] = fSlow63;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec44_perm[j] = fVec44_tmp[(count + j)];
				
			}
			/* Recursive loop 344 */
			/* Pre code */
			for (int j226 = 0; (j226 < 4); j226 = (j226 + 1)) {
				fVec45_tmp[j226] = fVec45_perm[j226];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec45[i] = fSlow64;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec45_perm[j] = fVec45_tmp[(count + j)];
				
			}
			/* Recursive loop 345 */
			/* Pre code */
			for (int j227 = 0; (j227 < 4); j227 = (j227 + 1)) {
				fVec46_tmp[j227] = fVec46_perm[j227];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec46[i] = fSlow65;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec46_perm[j] = fVec46_tmp[(count + j)];
				
			}
			/* Recursive loop 346 */
			/* Pre code */
			for (int j228 = 0; (j228 < 4); j228 = (j228 + 1)) {
				fVec47_tmp[j228] = fVec47_perm[j228];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec47[i] = fSlow66;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec47_perm[j] = fVec47_tmp[(count + j)];
				
			}
			/* Recursive loop 347 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec103[i] = (fSlow67 + ((fVec48[(i - 1)] + fVec48[(i - 2)]) + fVec48[(i - 3)]));
				
			}
			/* Recursive loop 348 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec105[i] = (fSlow68 + ((fVec49[(i - 1)] + fVec49[(i - 2)]) + fVec49[(i - 3)]));
				
			}
			/* Recursive loop 349 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec107[i] = (fSlow69 + ((fVec50[(i - 1)] + fVec50[(i - 2)]) + fVec50[(i - 3)]));
				
			}
			/* Recursive loop 350 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec109[i] = (fSlow70 + ((fVec51[(i - 1)] + fVec51[(i - 2)]) + fVec51[(i - 3)]));
				
			}
			/* Recursive loop 351 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec111[i] = (fSlow71 + ((fVec52[(i - 1)] + fVec52[(i - 2)]) + fVec52[(i - 3)]));
				
			}
			/* Recursive loop 352 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec113[i] = (fSlow72 + ((fVec53[(i - 1)] + fVec53[(i - 2)]) + fVec53[(i - 3)]));
				
			}
			/* Recursive loop 353 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec115[i] = (fSlow73 + ((fVec54[(i - 1)] + fVec54[(i - 2)]) + fVec54[(i - 3)]));
				
			}
			/* Recursive loop 354 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec117[i] = (fSlow74 + ((fVec55[(i - 1)] + fVec55[(i - 2)]) + fVec55[(i - 3)]));
				
			}
			/* Recursive loop 355 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec119[i] = (fSlow75 + ((fVec56[(i - 1)] + fVec56[(i - 2)]) + fVec56[(i - 3)]));
				
			}
			/* Recursive loop 356 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec121[i] = (fSlow76 + ((fVec57[(i - 1)] + fVec57[(i - 2)]) + fVec57[(i - 3)]));
				
			}
			/* Recursive loop 357 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec123[i] = (fSlow77 + ((fVec58[(i - 1)] + fVec58[(i - 2)]) + fVec58[(i - 3)]));
				
			}
			/* Recursive loop 358 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec125[i] = (fSlow78 + ((fVec59[(i - 1)] + fVec59[(i - 2)]) + fVec59[(i - 3)]));
				
			}
			/* Recursive loop 359 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec127[i] = (fSlow79 + ((fVec60[(i - 1)] + fVec60[(i - 2)]) + fVec60[(i - 3)]));
				
			}
			/* Recursive loop 360 */
			/* Pre code */
			for (int j349 = 0; (j349 < 4); j349 = (j349 + 1)) {
				fYec77_tmp[j349] = fYec77_perm[j349];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec77[i] = (float(iRec212[i]) + fZec156[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec77_perm[j] = fYec77_tmp[(count + j)];
				
			}
			/* Recursive loop 361 */
			/* Pre code */
			for (int j353 = 0; (j353 < 4); j353 = (j353 + 1)) {
				fYec78_tmp[j353] = fYec78_perm[j353];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec78[i] = (float(iRec215[i]) + fZec157[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec78_perm[j] = fYec78_tmp[(count + j)];
				
			}
			/* Recursive loop 362 */
			/* Pre code */
			for (int j357 = 0; (j357 < 4); j357 = (j357 + 1)) {
				fYec79_tmp[j357] = fYec79_perm[j357];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec79[i] = (float(iRec218[i]) + fZec158[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec79_perm[j] = fYec79_tmp[(count + j)];
				
			}
			/* Recursive loop 363 */
			/* Pre code */
			for (int j361 = 0; (j361 < 4); j361 = (j361 + 1)) {
				fYec80_tmp[j361] = fYec80_perm[j361];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec80[i] = (float(iRec221[i]) + fZec159[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec80_perm[j] = fYec80_tmp[(count + j)];
				
			}
			/* Recursive loop 364 */
			/* Pre code */
			for (int j365 = 0; (j365 < 4); j365 = (j365 + 1)) {
				fYec81_tmp[j365] = fYec81_perm[j365];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec81[i] = (float(iRec224[i]) + fZec160[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec81_perm[j] = fYec81_tmp[(count + j)];
				
			}
			/* Recursive loop 365 */
			/* Pre code */
			for (int j369 = 0; (j369 < 4); j369 = (j369 + 1)) {
				fYec82_tmp[j369] = fYec82_perm[j369];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec82[i] = (float(iRec227[i]) + fZec161[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec82_perm[j] = fYec82_tmp[(count + j)];
				
			}
			/* Recursive loop 366 */
			/* Pre code */
			for (int j373 = 0; (j373 < 4); j373 = (j373 + 1)) {
				fYec83_tmp[j373] = fYec83_perm[j373];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec83[i] = (float(iRec230[i]) + fZec162[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec83_perm[j] = fYec83_tmp[(count + j)];
				
			}
			/* Recursive loop 367 */
			/* Pre code */
			for (int j377 = 0; (j377 < 4); j377 = (j377 + 1)) {
				fYec84_tmp[j377] = fYec84_perm[j377];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec84[i] = (float(iRec233[i]) + fZec146[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec84_perm[j] = fYec84_tmp[(count + j)];
				
			}
			/* Recursive loop 368 */
			/* Pre code */
			for (int j381 = 0; (j381 < 4); j381 = (j381 + 1)) {
				fYec85_tmp[j381] = fYec85_perm[j381];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec85[i] = (float(iRec236[i]) + fZec147[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec85_perm[j] = fYec85_tmp[(count + j)];
				
			}
			/* Recursive loop 369 */
			/* Pre code */
			for (int j385 = 0; (j385 < 4); j385 = (j385 + 1)) {
				fYec86_tmp[j385] = fYec86_perm[j385];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec86[i] = (float(iRec239[i]) + fZec148[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec86_perm[j] = fYec86_tmp[(count + j)];
				
			}
			/* Recursive loop 370 */
			/* Pre code */
			for (int j389 = 0; (j389 < 4); j389 = (j389 + 1)) {
				fYec87_tmp[j389] = fYec87_perm[j389];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec87[i] = (float(iRec242[i]) + fZec149[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec87_perm[j] = fYec87_tmp[(count + j)];
				
			}
			/* Recursive loop 371 */
			/* Pre code */
			for (int j393 = 0; (j393 < 4); j393 = (j393 + 1)) {
				fYec88_tmp[j393] = fYec88_perm[j393];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec88[i] = (float(iRec245[i]) + fZec150[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec88_perm[j] = fYec88_tmp[(count + j)];
				
			}
			/* Recursive loop 372 */
			/* Pre code */
			for (int j120 = 0; (j120 < 4); j120 = (j120 + 1)) {
				fRec83_tmp[j120] = fRec83_perm[j120];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec83[i] = (fConst5 * (fRec83[(i - 1)] + (fRec84[i] - fRec84[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec83_perm[j] = fRec83_tmp[(count + j)];
				
			}
			/* Recursive loop 373 */
			/* Pre code */
			for (int j122 = 0; (j122 < 4); j122 = (j122 + 1)) {
				fRec85_tmp[j122] = fRec85_perm[j122];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec85[i] = (fConst5 * (fRec85[(i - 1)] + (fRec86[i] - fRec86[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec85_perm[j] = fRec85_tmp[(count + j)];
				
			}
			/* Recursive loop 374 */
			/* Pre code */
			for (int j124 = 0; (j124 < 4); j124 = (j124 + 1)) {
				fRec87_tmp[j124] = fRec87_perm[j124];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec87[i] = (fConst5 * (fRec87[(i - 1)] + (fRec88[i] - fRec88[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec87_perm[j] = fRec87_tmp[(count + j)];
				
			}
			/* Recursive loop 375 */
			/* Pre code */
			for (int j126 = 0; (j126 < 4); j126 = (j126 + 1)) {
				fRec89_tmp[j126] = fRec89_perm[j126];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec89[i] = (fConst5 * (fRec89[(i - 1)] + (fRec90[i] - fRec90[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec89_perm[j] = fRec89_tmp[(count + j)];
				
			}
			/* Recursive loop 376 */
			/* Pre code */
			for (int j128 = 0; (j128 < 4); j128 = (j128 + 1)) {
				fRec91_tmp[j128] = fRec91_perm[j128];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec91[i] = (fConst5 * (fRec91[(i - 1)] + (fRec92[i] - fRec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec91_perm[j] = fRec91_tmp[(count + j)];
				
			}
			/* Recursive loop 377 */
			/* Pre code */
			for (int j130 = 0; (j130 < 4); j130 = (j130 + 1)) {
				fRec93_tmp[j130] = fRec93_perm[j130];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec93[i] = (fConst5 * (fRec93[(i - 1)] + (fRec94[i] - fRec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec93_perm[j] = fRec93_tmp[(count + j)];
				
			}
			/* Recursive loop 378 */
			/* Pre code */
			for (int j132 = 0; (j132 < 4); j132 = (j132 + 1)) {
				fRec95_tmp[j132] = fRec95_perm[j132];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec95[i] = (fConst5 * (fRec95[(i - 1)] + (fRec96[i] - fRec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec95_perm[j] = fRec95_tmp[(count + j)];
				
			}
			/* Recursive loop 379 */
			/* Pre code */
			for (int j134 = 0; (j134 < 4); j134 = (j134 + 1)) {
				fRec97_tmp[j134] = fRec97_perm[j134];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec97[i] = (fConst5 * (fRec97[(i - 1)] + (fRec98[i] - fRec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec97_perm[j] = fRec97_tmp[(count + j)];
				
			}
			/* Recursive loop 380 */
			/* Pre code */
			for (int j136 = 0; (j136 < 4); j136 = (j136 + 1)) {
				fRec99_tmp[j136] = fRec99_perm[j136];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec99[i] = (fConst5 * (fRec99[(i - 1)] + (fRec100[i] - fRec100[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec99_perm[j] = fRec99_tmp[(count + j)];
				
			}
			/* Recursive loop 381 */
			/* Pre code */
			for (int j138 = 0; (j138 < 4); j138 = (j138 + 1)) {
				fRec101_tmp[j138] = fRec101_perm[j138];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec101[i] = (fConst5 * (fRec101[(i - 1)] + (fRec102[i] - fRec102[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec101_perm[j] = fRec101_tmp[(count + j)];
				
			}
			/* Recursive loop 382 */
			/* Pre code */
			for (int j140 = 0; (j140 < 4); j140 = (j140 + 1)) {
				fRec103_tmp[j140] = fRec103_perm[j140];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec103[i] = (fConst5 * (fRec103[(i - 1)] + (fRec104[i] - fRec104[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec103_perm[j] = fRec103_tmp[(count + j)];
				
			}
			/* Recursive loop 383 */
			/* Pre code */
			for (int j142 = 0; (j142 < 4); j142 = (j142 + 1)) {
				fRec105_tmp[j142] = fRec105_perm[j142];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec105[i] = (fConst5 * (fRec105[(i - 1)] + (fRec106[i] - fRec106[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec105_perm[j] = fRec105_tmp[(count + j)];
				
			}
			/* Recursive loop 384 */
			/* Pre code */
			for (int j144 = 0; (j144 < 4); j144 = (j144 + 1)) {
				fRec107_tmp[j144] = fRec107_perm[j144];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec107[i] = (fConst5 * (fRec107[(i - 1)] + (fRec108[i] - fRec108[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec107_perm[j] = fRec107_tmp[(count + j)];
				
			}
			/* Recursive loop 385 */
			/* Pre code */
			for (int j146 = 0; (j146 < 4); j146 = (j146 + 1)) {
				fRec109_tmp[j146] = fRec109_perm[j146];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec109[i] = (fConst5 * (fRec109[(i - 1)] + (fRec110[i] - fRec110[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec109_perm[j] = fRec109_tmp[(count + j)];
				
			}
			/* Recursive loop 386 */
			/* Pre code */
			for (int j148 = 0; (j148 < 4); j148 = (j148 + 1)) {
				fRec111_tmp[j148] = fRec111_perm[j148];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec111[i] = (fConst5 * (fRec111[(i - 1)] + (fRec112[i] - fRec112[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec111_perm[j] = fRec111_tmp[(count + j)];
				
			}
			/* Recursive loop 387 */
			/* Pre code */
			for (int j150 = 0; (j150 < 4); j150 = (j150 + 1)) {
				fRec113_tmp[j150] = fRec113_perm[j150];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec113[i] = (fConst5 * (fRec113[(i - 1)] + (fRec114[i] - fRec114[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec113_perm[j] = fRec113_tmp[(count + j)];
				
			}
			/* Recursive loop 388 */
			/* Pre code */
			for (int j152 = 0; (j152 < 4); j152 = (j152 + 1)) {
				fRec115_tmp[j152] = fRec115_perm[j152];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec115[i] = (fConst5 * (fRec115[(i - 1)] + (fRec116[i] - fRec116[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec115_perm[j] = fRec115_tmp[(count + j)];
				
			}
			/* Recursive loop 389 */
			/* Pre code */
			for (int j154 = 0; (j154 < 4); j154 = (j154 + 1)) {
				fRec117_tmp[j154] = fRec117_perm[j154];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec117[i] = (fConst5 * (fRec117[(i - 1)] + (fRec118[i] - fRec118[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec117_perm[j] = fRec117_tmp[(count + j)];
				
			}
			/* Recursive loop 390 */
			/* Pre code */
			for (int j156 = 0; (j156 < 4); j156 = (j156 + 1)) {
				fRec119_tmp[j156] = fRec119_perm[j156];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec119[i] = (fConst5 * (fRec119[(i - 1)] + (fRec120[i] - fRec120[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec119_perm[j] = fRec119_tmp[(count + j)];
				
			}
			/* Recursive loop 391 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec52[i] = (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + fZec51[i]))));
				
			}
			/* Recursive loop 392 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec53[i] = (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec121[i] + fRec122[i]))));
				
			}
			/* Recursive loop 393 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec55[i] = (fSlow19 + ((fVec0[(i - 1)] + fVec0[(i - 2)]) + fVec0[(i - 3)]));
				
			}
			/* Recursive loop 394 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec56[i] = (fSlow20 + ((fVec1[(i - 1)] + fVec1[(i - 2)]) + fVec1[(i - 3)]));
				
			}
			/* Recursive loop 395 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec57[i] = (fSlow21 + ((fVec2[(i - 1)] + fVec2[(i - 2)]) + fVec2[(i - 3)]));
				
			}
			/* Recursive loop 396 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec58[i] = (fSlow22 + ((fVec3[(i - 1)] + fVec3[(i - 2)]) + fVec3[(i - 3)]));
				
			}
			/* Recursive loop 397 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec59[i] = (fSlow23 + ((fVec4[(i - 1)] + fVec4[(i - 2)]) + fVec4[(i - 3)]));
				
			}
			/* Recursive loop 398 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec60[i] = (fSlow24 + ((fVec5[(i - 1)] + fVec5[(i - 2)]) + fVec5[(i - 3)]));
				
			}
			/* Recursive loop 399 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec61[i] = (fSlow25 + ((fVec6[(i - 1)] + fVec6[(i - 2)]) + fVec6[(i - 3)]));
				
			}
			/* Recursive loop 400 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec62[i] = (fSlow26 + ((fVec7[(i - 1)] + fVec7[(i - 2)]) + fVec7[(i - 3)]));
				
			}
			/* Recursive loop 401 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec63[i] = (fSlow27 + ((fVec8[(i - 1)] + fVec8[(i - 2)]) + fVec8[(i - 3)]));
				
			}
			/* Recursive loop 402 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec64[i] = (fSlow28 + ((fVec9[(i - 1)] + fVec9[(i - 2)]) + fVec9[(i - 3)]));
				
			}
			/* Recursive loop 403 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec65[i] = (fSlow29 + ((fVec10[(i - 1)] + fVec10[(i - 2)]) + fVec10[(i - 3)]));
				
			}
			/* Recursive loop 404 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec66[i] = (fSlow30 + ((fVec11[(i - 1)] + fVec11[(i - 2)]) + fVec11[(i - 3)]));
				
			}
			/* Recursive loop 405 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec67[i] = (fSlow31 + ((fVec12[(i - 1)] + fVec12[(i - 2)]) + fVec12[(i - 3)]));
				
			}
			/* Recursive loop 406 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec68[i] = (fSlow32 + ((fVec13[(i - 1)] + fVec13[(i - 2)]) + fVec13[(i - 3)]));
				
			}
			/* Recursive loop 407 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec69[i] = (fSlow33 + ((fVec14[(i - 1)] + fVec14[(i - 2)]) + fVec14[(i - 3)]));
				
			}
			/* Recursive loop 408 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec70[i] = (fSlow34 + ((fVec15[(i - 1)] + fVec15[(i - 2)]) + fVec15[(i - 3)]));
				
			}
			/* Recursive loop 409 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec71[i] = (fSlow35 + ((fVec16[(i - 1)] + fVec16[(i - 2)]) + fVec16[(i - 3)]));
				
			}
			/* Recursive loop 410 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec72[i] = (fSlow36 + ((fVec17[(i - 1)] + fVec17[(i - 2)]) + fVec17[(i - 3)]));
				
			}
			/* Recursive loop 411 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec73[i] = (fSlow37 + ((fVec18[(i - 1)] + fVec18[(i - 2)]) + fVec18[(i - 3)]));
				
			}
			/* Recursive loop 412 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec74[i] = (fSlow38 + ((fVec19[(i - 1)] + fVec19[(i - 2)]) + fVec19[(i - 3)]));
				
			}
			/* Recursive loop 413 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec75[i] = (fSlow39 + ((fVec20[(i - 1)] + fVec20[(i - 2)]) + fVec20[(i - 3)]));
				
			}
			/* Recursive loop 414 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec76[i] = (fSlow40 + ((fVec21[(i - 1)] + fVec21[(i - 2)]) + fVec21[(i - 3)]));
				
			}
			/* Recursive loop 415 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec77[i] = (fSlow41 + ((fVec22[(i - 1)] + fVec22[(i - 2)]) + fVec22[(i - 3)]));
				
			}
			/* Recursive loop 416 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec78[i] = (fSlow42 + ((fVec23[(i - 1)] + fVec23[(i - 2)]) + fVec23[(i - 3)]));
				
			}
			/* Recursive loop 417 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec79[i] = (fSlow43 + ((fVec24[(i - 1)] + fVec24[(i - 2)]) + fVec24[(i - 3)]));
				
			}
			/* Recursive loop 418 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec80[i] = (fSlow44 + ((fVec25[(i - 1)] + fVec25[(i - 2)]) + fVec25[(i - 3)]));
				
			}
			/* Recursive loop 419 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec81[i] = (fSlow45 + ((fVec26[(i - 1)] + fVec26[(i - 2)]) + fVec26[(i - 3)]));
				
			}
			/* Recursive loop 420 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec82[i] = (fSlow46 + ((fVec27[(i - 1)] + fVec27[(i - 2)]) + fVec27[(i - 3)]));
				
			}
			/* Recursive loop 421 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec83[i] = (fSlow47 + ((fVec28[(i - 1)] + fVec28[(i - 2)]) + fVec28[(i - 3)]));
				
			}
			/* Recursive loop 422 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec84[i] = (fSlow48 + ((fVec29[(i - 1)] + fVec29[(i - 2)]) + fVec29[(i - 3)]));
				
			}
			/* Recursive loop 423 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec85[i] = (fSlow49 + ((fVec30[(i - 1)] + fVec30[(i - 2)]) + fVec30[(i - 3)]));
				
			}
			/* Recursive loop 424 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec86[i] = (fSlow50 + ((fVec31[(i - 1)] + fVec31[(i - 2)]) + fVec31[(i - 3)]));
				
			}
			/* Recursive loop 425 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec87[i] = (fSlow51 + ((fVec32[(i - 1)] + fVec32[(i - 2)]) + fVec32[(i - 3)]));
				
			}
			/* Recursive loop 426 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec88[i] = (fSlow52 + ((fVec33[(i - 1)] + fVec33[(i - 2)]) + fVec33[(i - 3)]));
				
			}
			/* Recursive loop 427 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec89[i] = (fSlow53 + ((fVec34[(i - 1)] + fVec34[(i - 2)]) + fVec34[(i - 3)]));
				
			}
			/* Recursive loop 428 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec90[i] = (fSlow54 + ((fVec35[(i - 1)] + fVec35[(i - 2)]) + fVec35[(i - 3)]));
				
			}
			/* Recursive loop 429 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec91[i] = (fSlow55 + ((fVec36[(i - 1)] + fVec36[(i - 2)]) + fVec36[(i - 3)]));
				
			}
			/* Recursive loop 430 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec92[i] = (fSlow56 + ((fVec37[(i - 1)] + fVec37[(i - 2)]) + fVec37[(i - 3)]));
				
			}
			/* Recursive loop 431 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec93[i] = (fSlow57 + ((fVec38[(i - 1)] + fVec38[(i - 2)]) + fVec38[(i - 3)]));
				
			}
			/* Recursive loop 432 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec94[i] = (fSlow58 + ((fVec39[(i - 1)] + fVec39[(i - 2)]) + fVec39[(i - 3)]));
				
			}
			/* Recursive loop 433 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec95[i] = (fSlow59 + ((fVec40[(i - 1)] + fVec40[(i - 2)]) + fVec40[(i - 3)]));
				
			}
			/* Recursive loop 434 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec96[i] = (fSlow60 + ((fVec41[(i - 1)] + fVec41[(i - 2)]) + fVec41[(i - 3)]));
				
			}
			/* Recursive loop 435 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec97[i] = (fSlow61 + ((fVec42[(i - 1)] + fVec42[(i - 2)]) + fVec42[(i - 3)]));
				
			}
			/* Recursive loop 436 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec98[i] = (fSlow62 + ((fVec43[(i - 1)] + fVec43[(i - 2)]) + fVec43[(i - 3)]));
				
			}
			/* Recursive loop 437 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec99[i] = (fSlow63 + ((fVec44[(i - 1)] + fVec44[(i - 2)]) + fVec44[(i - 3)]));
				
			}
			/* Recursive loop 438 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec100[i] = (fSlow64 + ((fVec45[(i - 1)] + fVec45[(i - 2)]) + fVec45[(i - 3)]));
				
			}
			/* Recursive loop 439 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec101[i] = (fSlow65 + ((fVec46[(i - 1)] + fVec46[(i - 2)]) + fVec46[(i - 3)]));
				
			}
			/* Recursive loop 440 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec102[i] = (fSlow66 + ((fVec47[(i - 1)] + fVec47[(i - 2)]) + fVec47[(i - 3)]));
				
			}
			/* Recursive loop 441 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec104[i] = (fRec121[i] * fZec103[i]);
				
			}
			/* Recursive loop 442 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec106[i] = (fRec122[i] * fZec105[i]);
				
			}
			/* Recursive loop 443 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec108[i] = (fRec123[i] * fZec107[i]);
				
			}
			/* Recursive loop 444 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec110[i] = (fRec124[i] * fZec109[i]);
				
			}
			/* Recursive loop 445 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec112[i] = (fRec125[i] * fZec111[i]);
				
			}
			/* Recursive loop 446 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec114[i] = (fRec126[i] * fZec113[i]);
				
			}
			/* Recursive loop 447 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec116[i] = (fRec127[i] * fZec115[i]);
				
			}
			/* Recursive loop 448 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec118[i] = (fRec128[i] * fZec117[i]);
				
			}
			/* Recursive loop 449 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec120[i] = (fRec129[i] * fZec119[i]);
				
			}
			/* Recursive loop 450 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec122[i] = (fRec130[i] * fZec121[i]);
				
			}
			/* Recursive loop 451 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec124[i] = (fRec131[i] * fZec123[i]);
				
			}
			/* Recursive loop 452 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec126[i] = (fRec132[i] * fZec125[i]);
				
			}
			/* Recursive loop 453 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec128[i] = (fRec121[i] * fZec127[i]);
				
			}
			/* Recursive loop 454 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec166[i] = (0.5f * fYec77[i]);
				
			}
			/* Recursive loop 455 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec167[i] = (0.5f * fYec78[i]);
				
			}
			/* Recursive loop 456 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec168[i] = (0.5f * fYec79[i]);
				
			}
			/* Recursive loop 457 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec169[i] = (0.5f * fYec80[i]);
				
			}
			/* Recursive loop 458 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec170[i] = (0.5f * fYec81[i]);
				
			}
			/* Recursive loop 459 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec171[i] = (0.5f * fYec82[i]);
				
			}
			/* Recursive loop 460 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec172[i] = (0.5f * fYec83[i]);
				
			}
			/* Recursive loop 461 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec173[i] = (0.5f * fYec84[i]);
				
			}
			/* Recursive loop 462 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec174[i] = (0.5f * fYec85[i]);
				
			}
			/* Recursive loop 463 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec175[i] = (0.5f * fYec86[i]);
				
			}
			/* Recursive loop 464 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec176[i] = (0.5f * fYec87[i]);
				
			}
			/* Recursive loop 465 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec177[i] = (0.5f * fYec88[i]);
				
			}
			/* Recursive loop 466 */
			/* Pre code */
			for (int j398 = 0; (j398 < 4); j398 = (j398 + 1)) {
				iRec249_tmp[j398] = iRec249_perm[j398];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec249[i] = (((0.5f * (fYec77[i] - fYec77[(i - 1)])) < 0.0f)?(1 - iRec249[(i - 1)]):iRec249[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec249_perm[j] = iRec249_tmp[(count + j)];
				
			}
			/* Recursive loop 467 */
			/* Pre code */
			for (int j401 = 0; (j401 < 4); j401 = (j401 + 1)) {
				iRec252_tmp[j401] = iRec252_perm[j401];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec252[i] = (((0.5f * (fYec78[i] - fYec78[(i - 1)])) < 0.0f)?(1 - iRec252[(i - 1)]):iRec252[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec252_perm[j] = iRec252_tmp[(count + j)];
				
			}
			/* Recursive loop 468 */
			/* Pre code */
			for (int j404 = 0; (j404 < 4); j404 = (j404 + 1)) {
				iRec255_tmp[j404] = iRec255_perm[j404];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec255[i] = (((0.5f * (fYec79[i] - fYec79[(i - 1)])) < 0.0f)?(1 - iRec255[(i - 1)]):iRec255[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec255_perm[j] = iRec255_tmp[(count + j)];
				
			}
			/* Recursive loop 469 */
			/* Pre code */
			for (int j407 = 0; (j407 < 4); j407 = (j407 + 1)) {
				iRec258_tmp[j407] = iRec258_perm[j407];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec258[i] = (((0.5f * (fYec80[i] - fYec80[(i - 1)])) < 0.0f)?(1 - iRec258[(i - 1)]):iRec258[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec258_perm[j] = iRec258_tmp[(count + j)];
				
			}
			/* Recursive loop 470 */
			/* Pre code */
			for (int j410 = 0; (j410 < 4); j410 = (j410 + 1)) {
				iRec261_tmp[j410] = iRec261_perm[j410];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec261[i] = (((0.5f * (fYec81[i] - fYec81[(i - 1)])) < 0.0f)?(1 - iRec261[(i - 1)]):iRec261[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec261_perm[j] = iRec261_tmp[(count + j)];
				
			}
			/* Recursive loop 471 */
			/* Pre code */
			for (int j413 = 0; (j413 < 4); j413 = (j413 + 1)) {
				iRec264_tmp[j413] = iRec264_perm[j413];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec264[i] = (((0.5f * (fYec82[i] - fYec82[(i - 1)])) < 0.0f)?(1 - iRec264[(i - 1)]):iRec264[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec264_perm[j] = iRec264_tmp[(count + j)];
				
			}
			/* Recursive loop 472 */
			/* Pre code */
			for (int j416 = 0; (j416 < 4); j416 = (j416 + 1)) {
				iRec267_tmp[j416] = iRec267_perm[j416];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec267[i] = (((0.5f * (fYec83[i] - fYec83[(i - 1)])) < 0.0f)?(1 - iRec267[(i - 1)]):iRec267[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec267_perm[j] = iRec267_tmp[(count + j)];
				
			}
			/* Recursive loop 473 */
			/* Pre code */
			for (int j419 = 0; (j419 < 4); j419 = (j419 + 1)) {
				iRec270_tmp[j419] = iRec270_perm[j419];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec270[i] = (((0.5f * (fYec84[i] - fYec84[(i - 1)])) < 0.0f)?(1 - iRec270[(i - 1)]):iRec270[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec270_perm[j] = iRec270_tmp[(count + j)];
				
			}
			/* Recursive loop 474 */
			/* Pre code */
			for (int j422 = 0; (j422 < 4); j422 = (j422 + 1)) {
				iRec273_tmp[j422] = iRec273_perm[j422];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec273[i] = (((0.5f * (fYec85[i] - fYec85[(i - 1)])) < 0.0f)?(1 - iRec273[(i - 1)]):iRec273[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec273_perm[j] = iRec273_tmp[(count + j)];
				
			}
			/* Recursive loop 475 */
			/* Pre code */
			for (int j425 = 0; (j425 < 4); j425 = (j425 + 1)) {
				iRec276_tmp[j425] = iRec276_perm[j425];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec276[i] = (((0.5f * (fYec86[i] - fYec86[(i - 1)])) < 0.0f)?(1 - iRec276[(i - 1)]):iRec276[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec276_perm[j] = iRec276_tmp[(count + j)];
				
			}
			/* Recursive loop 476 */
			/* Pre code */
			for (int j428 = 0; (j428 < 4); j428 = (j428 + 1)) {
				iRec279_tmp[j428] = iRec279_perm[j428];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec279[i] = (((0.5f * (fYec87[i] - fYec87[(i - 1)])) < 0.0f)?(1 - iRec279[(i - 1)]):iRec279[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec279_perm[j] = iRec279_tmp[(count + j)];
				
			}
			/* Recursive loop 477 */
			/* Pre code */
			for (int j431 = 0; (j431 < 4); j431 = (j431 + 1)) {
				iRec282_tmp[j431] = iRec282_perm[j431];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec282[i] = (((0.5f * (fYec88[i] - fYec88[(i - 1)])) < 0.0f)?(1 - iRec282[(i - 1)]):iRec282[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec282_perm[j] = iRec282_tmp[(count + j)];
				
			}
			/* Recursive loop 478 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec54[i] = (((fSlow18 * fZec52[i]) + (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec83[i] + fRec85[i])))))))))))))))))))) + (2.0f * (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + fZec53[i])))))))));
				
			}
			/* Recursive loop 479 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec129[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec0[i] * fZec55[i]) + (fRec7[i] * fZec56[i])) + (fRec13[i] * fZec57[i])) + (fRec19[i] * fZec58[i])) + (fRec25[i] * fZec59[i])) + (fRec31[i] * fZec60[i])) + (fRec37[i] * fZec61[i])) + (fRec43[i] * fZec62[i])) + (fRec49[i] * fZec63[i])) + (fRec55[i] * fZec64[i])) + (fRec61[i] * fZec65[i])) + (fRec67[i] * fZec66[i])) + (fRec73[i] * fZec67[i])) + (fRec75[i] * fZec68[i])) + (fRec77[i] * fZec69[i])) + (fRec79[i] * fZec70[i])) + (fRec81[i] * fZec71[i]))) + (fRec83[i] * fZec72[i])) + (fRec85[i] * fZec73[i])) + (fRec87[i] * fZec74[i])) + (fRec89[i] * fZec75[i])) + (fRec91[i] * fZec76[i])) + (fRec93[i] * fZec77[i])) + (fRec95[i] * fZec78[i])) + (fRec97[i] * fZec79[i])) + (fRec99[i] * fZec80[i])) + (fRec101[i] * fZec81[i])) + (fRec103[i] * fZec82[i])) + (fRec105[i] * fZec83[i])) + (fRec107[i] * fZec84[i])) + (fRec109[i] * fZec85[i])) + (fRec111[i] * fZec86[i])) + (fRec113[i] * fZec87[i])) + (fRec115[i] * fZec88[i])) + (fRec117[i] * fZec89[i])) + (fRec119[i] * fZec90[i])) + (fRec121[i] * fZec91[i])) + (fRec122[i] * fZec92[i])) + (fRec123[i] * fZec93[i])) + (fRec124[i] * fZec94[i])) + (fRec125[i] * fZec95[i])) + (fRec126[i] * fZec96[i])) + (fRec127[i] * fZec97[i])) + (fRec128[i] * fZec98[i])) + (fRec129[i] * fZec99[i])) + (fRec130[i] * fZec100[i])) + (fRec131[i] * fZec101[i])) + (fRec132[i] * fZec102[i])) + fZec104[i]) + fZec106[i]) + fZec108[i]) + fZec110[i]) + fZec112[i]) + fZec114[i]) + fZec116[i]) + fZec118[i]) + fZec120[i]) + fZec122[i]) + fZec124[i]) + fZec126[i]) + fZec128[i]));
				
			}
			/* Recursive loop 480 */
			/* Pre code */
			for (int j246 = 0; (j246 < 4); j246 = (j246 + 1)) {
				fRec135_tmp[j246] = fRec135_perm[j246];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec135[i] = (fRec135[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec130[i]), 4, 0)) - fRec135[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec135_perm[j] = fRec135_tmp[(count + j)];
				
			}
			/* Recursive loop 481 */
			/* Pre code */
			for (int j280 = 0; (j280 < 4); j280 = (j280 + 1)) {
				fRec160_tmp[j280] = fRec160_perm[j280];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec160[i] = (fRec160[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec140[i]), 0, 0)) - fRec160[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec160_perm[j] = fRec160_tmp[(count + j)];
				
			}
			/* Recursive loop 482 */
			/* Pre code */
			for (int j284 = 0; (j284 < 4); j284 = (j284 + 1)) {
				fRec163_tmp[j284] = fRec163_perm[j284];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec163[i] = (fRec163[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec141[i]), 1, 0)) - fRec163[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec163_perm[j] = fRec163_tmp[(count + j)];
				
			}
			/* Recursive loop 483 */
			/* Pre code */
			for (int j288 = 0; (j288 < 4); j288 = (j288 + 1)) {
				fRec166_tmp[j288] = fRec166_perm[j288];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec166[i] = (fRec166[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec142[i]), 2, 0)) - fRec166[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec166_perm[j] = fRec166_tmp[(count + j)];
				
			}
			/* Recursive loop 484 */
			/* Pre code */
			for (int j292 = 0; (j292 < 4); j292 = (j292 + 1)) {
				fRec169_tmp[j292] = fRec169_perm[j292];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec169[i] = (fRec169[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec143[i]), 3, 0)) - fRec169[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec169_perm[j] = fRec169_tmp[(count + j)];
				
			}
			/* Recursive loop 485 */
			/* Pre code */
			for (int j298 = 0; (j298 < 4); j298 = (j298 + 1)) {
				fRec173_tmp[j298] = fRec173_perm[j298];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec173[i] = (fRec173[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec146[i]), 7, 0)) - fRec173[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec173_perm[j] = fRec173_tmp[(count + j)];
				
			}
			/* Recursive loop 486 */
			/* Pre code */
			for (int j302 = 0; (j302 < 4); j302 = (j302 + 1)) {
				fRec176_tmp[j302] = fRec176_perm[j302];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec176[i] = (fRec176[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec147[i]), 8, 0)) - fRec176[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec176_perm[j] = fRec176_tmp[(count + j)];
				
			}
			/* Recursive loop 487 */
			/* Pre code */
			for (int j306 = 0; (j306 < 4); j306 = (j306 + 1)) {
				fRec179_tmp[j306] = fRec179_perm[j306];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec179[i] = (fRec179[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec148[i]), 9, 0)) - fRec179[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec179_perm[j] = fRec179_tmp[(count + j)];
				
			}
			/* Recursive loop 488 */
			/* Pre code */
			for (int j310 = 0; (j310 < 4); j310 = (j310 + 1)) {
				fRec182_tmp[j310] = fRec182_perm[j310];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec182[i] = (fRec182[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec149[i]), 10, 0)) - fRec182[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec182_perm[j] = fRec182_tmp[(count + j)];
				
			}
			/* Recursive loop 489 */
			/* Pre code */
			for (int j314 = 0; (j314 < 4); j314 = (j314 + 1)) {
				fRec185_tmp[j314] = fRec185_perm[j314];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec185[i] = (fRec185[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec150[i]), 11, 0)) - fRec185[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec185_perm[j] = fRec185_tmp[(count + j)];
				
			}
			/* Recursive loop 490 */
			/* Pre code */
			for (int j320 = 0; (j320 < 4); j320 = (j320 + 1)) {
				fRec189_tmp[j320] = fRec189_perm[j320];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec189[i] = (fRec189[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec156[i]), 0, 0)) - fRec189[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec189_perm[j] = fRec189_tmp[(count + j)];
				
			}
			/* Recursive loop 491 */
			/* Pre code */
			for (int j324 = 0; (j324 < 4); j324 = (j324 + 1)) {
				fRec192_tmp[j324] = fRec192_perm[j324];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec192[i] = (fRec192[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec157[i]), 1, 0)) - fRec192[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec192_perm[j] = fRec192_tmp[(count + j)];
				
			}
			/* Recursive loop 492 */
			/* Pre code */
			for (int j328 = 0; (j328 < 4); j328 = (j328 + 1)) {
				fRec195_tmp[j328] = fRec195_perm[j328];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec195[i] = (fRec195[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec158[i]), 2, 0)) - fRec195[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec195_perm[j] = fRec195_tmp[(count + j)];
				
			}
			/* Recursive loop 493 */
			/* Pre code */
			for (int j332 = 0; (j332 < 4); j332 = (j332 + 1)) {
				fRec198_tmp[j332] = fRec198_perm[j332];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec198[i] = (fRec198[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec159[i]), 3, 0)) - fRec198[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec198_perm[j] = fRec198_tmp[(count + j)];
				
			}
			/* Recursive loop 494 */
			/* Pre code */
			for (int j336 = 0; (j336 < 4); j336 = (j336 + 1)) {
				fRec201_tmp[j336] = fRec201_perm[j336];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec201[i] = (fRec201[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec160[i]), 4, 0)) - fRec201[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec201_perm[j] = fRec201_tmp[(count + j)];
				
			}
			/* Recursive loop 495 */
			/* Pre code */
			for (int j340 = 0; (j340 < 4); j340 = (j340 + 1)) {
				fRec204_tmp[j340] = fRec204_perm[j340];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec204[i] = (fRec204[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec161[i]), 5, 0)) - fRec204[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec204_perm[j] = fRec204_tmp[(count + j)];
				
			}
			/* Recursive loop 496 */
			/* Pre code */
			for (int j344 = 0; (j344 < 4); j344 = (j344 + 1)) {
				fRec207_tmp[j344] = fRec207_perm[j344];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec207[i] = (fRec207[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec162[i]), 6, 0)) - fRec207[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec207_perm[j] = fRec207_tmp[(count + j)];
				
			}
			/* Recursive loop 497 */
			/* Pre code */
			for (int j350 = 0; (j350 < 4); j350 = (j350 + 1)) {
				fRec211_tmp[j350] = fRec211_perm[j350];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec211[i] = (fRec211[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec166[i]), 0, 0)) - fRec211[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec211_perm[j] = fRec211_tmp[(count + j)];
				
			}
			/* Recursive loop 498 */
			/* Pre code */
			for (int j354 = 0; (j354 < 4); j354 = (j354 + 1)) {
				fRec214_tmp[j354] = fRec214_perm[j354];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec214[i] = (fRec214[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec167[i]), 1, 0)) - fRec214[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec214_perm[j] = fRec214_tmp[(count + j)];
				
			}
			/* Recursive loop 499 */
			/* Pre code */
			for (int j358 = 0; (j358 < 4); j358 = (j358 + 1)) {
				fRec217_tmp[j358] = fRec217_perm[j358];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec217[i] = (fRec217[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec168[i]), 2, 0)) - fRec217[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec217_perm[j] = fRec217_tmp[(count + j)];
				
			}
			/* Recursive loop 500 */
			/* Pre code */
			for (int j362 = 0; (j362 < 4); j362 = (j362 + 1)) {
				fRec220_tmp[j362] = fRec220_perm[j362];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec220[i] = (fRec220[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec169[i]), 3, 0)) - fRec220[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec220_perm[j] = fRec220_tmp[(count + j)];
				
			}
			/* Recursive loop 501 */
			/* Pre code */
			for (int j366 = 0; (j366 < 4); j366 = (j366 + 1)) {
				fRec223_tmp[j366] = fRec223_perm[j366];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec223[i] = (fRec223[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec170[i]), 4, 0)) - fRec223[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec223_perm[j] = fRec223_tmp[(count + j)];
				
			}
			/* Recursive loop 502 */
			/* Pre code */
			for (int j370 = 0; (j370 < 4); j370 = (j370 + 1)) {
				fRec226_tmp[j370] = fRec226_perm[j370];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec226[i] = (fRec226[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec171[i]), 5, 0)) - fRec226[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec226_perm[j] = fRec226_tmp[(count + j)];
				
			}
			/* Recursive loop 503 */
			/* Pre code */
			for (int j374 = 0; (j374 < 4); j374 = (j374 + 1)) {
				fRec229_tmp[j374] = fRec229_perm[j374];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec229[i] = (fRec229[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec172[i]), 6, 0)) - fRec229[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec229_perm[j] = fRec229_tmp[(count + j)];
				
			}
			/* Recursive loop 504 */
			/* Pre code */
			for (int j378 = 0; (j378 < 4); j378 = (j378 + 1)) {
				fRec232_tmp[j378] = fRec232_perm[j378];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec232[i] = (fRec232[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec173[i]), 7, 0)) - fRec232[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec232_perm[j] = fRec232_tmp[(count + j)];
				
			}
			/* Recursive loop 505 */
			/* Pre code */
			for (int j382 = 0; (j382 < 4); j382 = (j382 + 1)) {
				fRec235_tmp[j382] = fRec235_perm[j382];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec235[i] = (fRec235[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec174[i]), 8, 0)) - fRec235[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec235_perm[j] = fRec235_tmp[(count + j)];
				
			}
			/* Recursive loop 506 */
			/* Pre code */
			for (int j386 = 0; (j386 < 4); j386 = (j386 + 1)) {
				fRec238_tmp[j386] = fRec238_perm[j386];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec238[i] = (fRec238[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec175[i]), 9, 0)) - fRec238[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec238_perm[j] = fRec238_tmp[(count + j)];
				
			}
			/* Recursive loop 507 */
			/* Pre code */
			for (int j390 = 0; (j390 < 4); j390 = (j390 + 1)) {
				fRec241_tmp[j390] = fRec241_perm[j390];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec241[i] = (fRec241[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec176[i]), 10, 0)) - fRec241[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec241_perm[j] = fRec241_tmp[(count + j)];
				
			}
			/* Recursive loop 508 */
			/* Pre code */
			for (int j394 = 0; (j394 < 4); j394 = (j394 + 1)) {
				fRec244_tmp[j394] = fRec244_perm[j394];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec244[i] = (fRec244[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec177[i]), 11, 0)) - fRec244[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec244_perm[j] = fRec244_tmp[(count + j)];
				
			}
			/* Recursive loop 509 */
			/* Pre code */
			for (int j399 = 0; (j399 < 4); j399 = (j399 + 1)) {
				fRec248_tmp[j399] = fRec248_perm[j399];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec248[i] = (fRec248[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec249[i]) + fZec166[i]))), 0, 0)) - fRec248[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec248_perm[j] = fRec248_tmp[(count + j)];
				
			}
			/* Recursive loop 510 */
			/* Pre code */
			for (int j402 = 0; (j402 < 4); j402 = (j402 + 1)) {
				fRec251_tmp[j402] = fRec251_perm[j402];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec251[i] = (fRec251[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec252[i]) + fZec167[i]))), 1, 0)) - fRec251[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec251_perm[j] = fRec251_tmp[(count + j)];
				
			}
			/* Recursive loop 511 */
			/* Pre code */
			for (int j405 = 0; (j405 < 4); j405 = (j405 + 1)) {
				fRec254_tmp[j405] = fRec254_perm[j405];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec254[i] = (fRec254[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec255[i]) + fZec168[i]))), 2, 0)) - fRec254[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec254_perm[j] = fRec254_tmp[(count + j)];
				
			}
			/* Recursive loop 512 */
			/* Pre code */
			for (int j408 = 0; (j408 < 4); j408 = (j408 + 1)) {
				fRec257_tmp[j408] = fRec257_perm[j408];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec257[i] = (fRec257[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec258[i]) + fZec169[i]))), 3, 0)) - fRec257[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec257_perm[j] = fRec257_tmp[(count + j)];
				
			}
			/* Recursive loop 513 */
			/* Pre code */
			for (int j411 = 0; (j411 < 4); j411 = (j411 + 1)) {
				fRec260_tmp[j411] = fRec260_perm[j411];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec260[i] = (fRec260[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec261[i]) + fZec170[i]))), 4, 0)) - fRec260[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec260_perm[j] = fRec260_tmp[(count + j)];
				
			}
			/* Recursive loop 514 */
			/* Pre code */
			for (int j414 = 0; (j414 < 4); j414 = (j414 + 1)) {
				fRec263_tmp[j414] = fRec263_perm[j414];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec263[i] = (fRec263[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec264[i]) + fZec171[i]))), 5, 0)) - fRec263[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec263_perm[j] = fRec263_tmp[(count + j)];
				
			}
			/* Recursive loop 515 */
			/* Pre code */
			for (int j417 = 0; (j417 < 4); j417 = (j417 + 1)) {
				fRec266_tmp[j417] = fRec266_perm[j417];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec266[i] = (fRec266[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec267[i]) + fZec172[i]))), 6, 0)) - fRec266[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec266_perm[j] = fRec266_tmp[(count + j)];
				
			}
			/* Recursive loop 516 */
			/* Pre code */
			for (int j420 = 0; (j420 < 4); j420 = (j420 + 1)) {
				fRec269_tmp[j420] = fRec269_perm[j420];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec269[i] = (fRec269[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec270[i]) + fZec173[i]))), 7, 0)) - fRec269[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec269_perm[j] = fRec269_tmp[(count + j)];
				
			}
			/* Recursive loop 517 */
			/* Pre code */
			for (int j423 = 0; (j423 < 4); j423 = (j423 + 1)) {
				fRec272_tmp[j423] = fRec272_perm[j423];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec272[i] = (fRec272[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec273[i]) + fZec174[i]))), 8, 0)) - fRec272[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec272_perm[j] = fRec272_tmp[(count + j)];
				
			}
			/* Recursive loop 518 */
			/* Pre code */
			for (int j426 = 0; (j426 < 4); j426 = (j426 + 1)) {
				fRec275_tmp[j426] = fRec275_perm[j426];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec275[i] = (fRec275[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec276[i]) + fZec175[i]))), 9, 0)) - fRec275[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec275_perm[j] = fRec275_tmp[(count + j)];
				
			}
			/* Recursive loop 519 */
			/* Pre code */
			for (int j429 = 0; (j429 < 4); j429 = (j429 + 1)) {
				fRec278_tmp[j429] = fRec278_perm[j429];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec278[i] = (fRec278[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec279[i]) + fZec176[i]))), 10, 0)) - fRec278[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec278_perm[j] = fRec278_tmp[(count + j)];
				
			}
			/* Recursive loop 520 */
			/* Pre code */
			for (int j432 = 0; (j432 < 4); j432 = (j432 + 1)) {
				fRec281_tmp[j432] = fRec281_perm[j432];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec281[i] = (fRec281[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec282[i]) + fZec177[i]))), 11, 0)) - fRec281[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec281_perm[j] = fRec281_tmp[(count + j)];
				
			}
			/* Recursive loop 521 */
			/* Pre code */
			for (int j242 = 0; (j242 < 4); j242 = (j242 + 1)) {
				fYec48_tmp[j242] = fYec48_perm[j242];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec48[i] = (fZec54[i] - fZec129[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec48_perm[j] = fYec48_tmp[(count + j)];
				
			}
			/* Recursive loop 522 */
			/* Pre code */
			for (int j247 = 0; (j247 < 4); j247 = (j247 + 1)) {
				fRec134_tmp[j247] = fRec134_perm[j247];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec134[i] = (fConst5 * (fRec134[(i - 1)] + (fRec135[i] - fRec135[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec134_perm[j] = fRec134_tmp[(count + j)];
				
			}
			/* Recursive loop 523 */
			/* Pre code */
			for (int j250 = 0; (j250 < 4); j250 = (j250 + 1)) {
				fRec138_tmp[j250] = fRec138_perm[j250];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec138[i] = (fRec138[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec131[i]), 5, 0)) - fRec138[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec138_perm[j] = fRec138_tmp[(count + j)];
				
			}
			/* Recursive loop 524 */
			/* Pre code */
			for (int j254 = 0; (j254 < 4); j254 = (j254 + 1)) {
				fRec141_tmp[j254] = fRec141_perm[j254];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec141[i] = (fRec141[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec132[i]), 6, 0)) - fRec141[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec141_perm[j] = fRec141_tmp[(count + j)];
				
			}
			/* Recursive loop 525 */
			/* Pre code */
			for (int j258 = 0; (j258 < 4); j258 = (j258 + 1)) {
				fRec144_tmp[j258] = fRec144_perm[j258];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec144[i] = (fRec144[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec133[i]), 7, 0)) - fRec144[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec144_perm[j] = fRec144_tmp[(count + j)];
				
			}
			/* Recursive loop 526 */
			/* Pre code */
			for (int j262 = 0; (j262 < 4); j262 = (j262 + 1)) {
				fRec147_tmp[j262] = fRec147_perm[j262];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec147[i] = (fRec147[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec134[i]), 8, 0)) - fRec147[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec147_perm[j] = fRec147_tmp[(count + j)];
				
			}
			/* Recursive loop 527 */
			/* Pre code */
			for (int j266 = 0; (j266 < 4); j266 = (j266 + 1)) {
				fRec150_tmp[j266] = fRec150_perm[j266];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec150[i] = (fRec150[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec135[i]), 9, 0)) - fRec150[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec150_perm[j] = fRec150_tmp[(count + j)];
				
			}
			/* Recursive loop 528 */
			/* Pre code */
			for (int j270 = 0; (j270 < 4); j270 = (j270 + 1)) {
				fRec153_tmp[j270] = fRec153_perm[j270];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec153[i] = (fRec153[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec136[i]), 10, 0)) - fRec153[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec153_perm[j] = fRec153_tmp[(count + j)];
				
			}
			/* Recursive loop 529 */
			/* Pre code */
			for (int j274 = 0; (j274 < 4); j274 = (j274 + 1)) {
				fRec156_tmp[j274] = fRec156_perm[j274];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec156[i] = (fRec156[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec137[i]), 11, 0)) - fRec156[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec156_perm[j] = fRec156_tmp[(count + j)];
				
			}
			/* Recursive loop 530 */
			/* Pre code */
			for (int j281 = 0; (j281 < 4); j281 = (j281 + 1)) {
				fRec159_tmp[j281] = fRec159_perm[j281];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec159[i] = (fConst5 * (fRec159[(i - 1)] + (fRec160[i] - fRec160[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec159_perm[j] = fRec159_tmp[(count + j)];
				
			}
			/* Recursive loop 531 */
			/* Pre code */
			for (int j285 = 0; (j285 < 4); j285 = (j285 + 1)) {
				fRec162_tmp[j285] = fRec162_perm[j285];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec162[i] = (fConst5 * (fRec162[(i - 1)] + (fRec163[i] - fRec163[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec162_perm[j] = fRec162_tmp[(count + j)];
				
			}
			/* Recursive loop 532 */
			/* Pre code */
			for (int j289 = 0; (j289 < 4); j289 = (j289 + 1)) {
				fRec165_tmp[j289] = fRec165_perm[j289];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec165[i] = (fConst5 * (fRec165[(i - 1)] + (fRec166[i] - fRec166[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec165_perm[j] = fRec165_tmp[(count + j)];
				
			}
			/* Recursive loop 533 */
			/* Pre code */
			for (int j293 = 0; (j293 < 4); j293 = (j293 + 1)) {
				fRec168_tmp[j293] = fRec168_perm[j293];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec168[i] = (fConst5 * (fRec168[(i - 1)] + (fRec169[i] - fRec169[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec168_perm[j] = fRec168_tmp[(count + j)];
				
			}
			/* Recursive loop 534 */
			/* Pre code */
			for (int j299 = 0; (j299 < 4); j299 = (j299 + 1)) {
				fRec172_tmp[j299] = fRec172_perm[j299];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec172[i] = (fConst20 * (fRec172[(i - 1)] + (fRec173[i] - fRec173[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec172_perm[j] = fRec172_tmp[(count + j)];
				
			}
			/* Recursive loop 535 */
			/* Pre code */
			for (int j303 = 0; (j303 < 4); j303 = (j303 + 1)) {
				fRec175_tmp[j303] = fRec175_perm[j303];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec175[i] = (fConst20 * (fRec175[(i - 1)] + (fRec176[i] - fRec176[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec175_perm[j] = fRec175_tmp[(count + j)];
				
			}
			/* Recursive loop 536 */
			/* Pre code */
			for (int j307 = 0; (j307 < 4); j307 = (j307 + 1)) {
				fRec178_tmp[j307] = fRec178_perm[j307];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec178[i] = (fConst20 * (fRec178[(i - 1)] + (fRec179[i] - fRec179[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec178_perm[j] = fRec178_tmp[(count + j)];
				
			}
			/* Recursive loop 537 */
			/* Pre code */
			for (int j311 = 0; (j311 < 4); j311 = (j311 + 1)) {
				fRec181_tmp[j311] = fRec181_perm[j311];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec181[i] = (fConst20 * (fRec181[(i - 1)] + (fRec182[i] - fRec182[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec181_perm[j] = fRec181_tmp[(count + j)];
				
			}
			/* Recursive loop 538 */
			/* Pre code */
			for (int j315 = 0; (j315 < 4); j315 = (j315 + 1)) {
				fRec184_tmp[j315] = fRec184_perm[j315];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec184[i] = (fConst20 * (fRec184[(i - 1)] + (fRec185[i] - fRec185[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec184_perm[j] = fRec184_tmp[(count + j)];
				
			}
			/* Recursive loop 539 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec151[i] = (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + fZec52[i]))))))));
				
			}
			/* Recursive loop 540 */
			/* Pre code */
			for (int j321 = 0; (j321 < 4); j321 = (j321 + 1)) {
				fRec188_tmp[j321] = fRec188_perm[j321];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec188[i] = (fConst20 * (fRec188[(i - 1)] + (fRec189[i] - fRec189[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec188_perm[j] = fRec188_tmp[(count + j)];
				
			}
			/* Recursive loop 541 */
			/* Pre code */
			for (int j325 = 0; (j325 < 4); j325 = (j325 + 1)) {
				fRec191_tmp[j325] = fRec191_perm[j325];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec191[i] = (fConst20 * (fRec191[(i - 1)] + (fRec192[i] - fRec192[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec191_perm[j] = fRec191_tmp[(count + j)];
				
			}
			/* Recursive loop 542 */
			/* Pre code */
			for (int j329 = 0; (j329 < 4); j329 = (j329 + 1)) {
				fRec194_tmp[j329] = fRec194_perm[j329];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec194[i] = (fConst20 * (fRec194[(i - 1)] + (fRec195[i] - fRec195[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec194_perm[j] = fRec194_tmp[(count + j)];
				
			}
			/* Recursive loop 543 */
			/* Pre code */
			for (int j333 = 0; (j333 < 4); j333 = (j333 + 1)) {
				fRec197_tmp[j333] = fRec197_perm[j333];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec197[i] = (fConst20 * (fRec197[(i - 1)] + (fRec198[i] - fRec198[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec197_perm[j] = fRec197_tmp[(count + j)];
				
			}
			/* Recursive loop 544 */
			/* Pre code */
			for (int j337 = 0; (j337 < 4); j337 = (j337 + 1)) {
				fRec200_tmp[j337] = fRec200_perm[j337];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec200[i] = (fConst20 * (fRec200[(i - 1)] + (fRec201[i] - fRec201[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec200_perm[j] = fRec200_tmp[(count + j)];
				
			}
			/* Recursive loop 545 */
			/* Pre code */
			for (int j341 = 0; (j341 < 4); j341 = (j341 + 1)) {
				fRec203_tmp[j341] = fRec203_perm[j341];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec203[i] = (fConst20 * (fRec203[(i - 1)] + (fRec204[i] - fRec204[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec203_perm[j] = fRec203_tmp[(count + j)];
				
			}
			/* Recursive loop 546 */
			/* Pre code */
			for (int j345 = 0; (j345 < 4); j345 = (j345 + 1)) {
				fRec206_tmp[j345] = fRec206_perm[j345];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec206[i] = (fConst20 * (fRec206[(i - 1)] + (fRec207[i] - fRec207[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec206_perm[j] = fRec206_tmp[(count + j)];
				
			}
			/* Recursive loop 547 */
			/* Pre code */
			for (int j351 = 0; (j351 < 4); j351 = (j351 + 1)) {
				fRec210_tmp[j351] = fRec210_perm[j351];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec210[i] = (fConst24 * (fRec210[(i - 1)] + (fRec211[i] - fRec211[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec210_perm[j] = fRec210_tmp[(count + j)];
				
			}
			/* Recursive loop 548 */
			/* Pre code */
			for (int j355 = 0; (j355 < 4); j355 = (j355 + 1)) {
				fRec213_tmp[j355] = fRec213_perm[j355];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec213[i] = (fConst24 * (fRec213[(i - 1)] + (fRec214[i] - fRec214[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec213_perm[j] = fRec213_tmp[(count + j)];
				
			}
			/* Recursive loop 549 */
			/* Pre code */
			for (int j359 = 0; (j359 < 4); j359 = (j359 + 1)) {
				fRec216_tmp[j359] = fRec216_perm[j359];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec216[i] = (fConst24 * (fRec216[(i - 1)] + (fRec217[i] - fRec217[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec216_perm[j] = fRec216_tmp[(count + j)];
				
			}
			/* Recursive loop 550 */
			/* Pre code */
			for (int j363 = 0; (j363 < 4); j363 = (j363 + 1)) {
				fRec219_tmp[j363] = fRec219_perm[j363];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec219[i] = (fConst24 * (fRec219[(i - 1)] + (fRec220[i] - fRec220[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec219_perm[j] = fRec219_tmp[(count + j)];
				
			}
			/* Recursive loop 551 */
			/* Pre code */
			for (int j367 = 0; (j367 < 4); j367 = (j367 + 1)) {
				fRec222_tmp[j367] = fRec222_perm[j367];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec222[i] = (fConst24 * (fRec222[(i - 1)] + (fRec223[i] - fRec223[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec222_perm[j] = fRec222_tmp[(count + j)];
				
			}
			/* Recursive loop 552 */
			/* Pre code */
			for (int j371 = 0; (j371 < 4); j371 = (j371 + 1)) {
				fRec225_tmp[j371] = fRec225_perm[j371];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec225[i] = (fConst24 * (fRec225[(i - 1)] + (fRec226[i] - fRec226[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec225_perm[j] = fRec225_tmp[(count + j)];
				
			}
			/* Recursive loop 553 */
			/* Pre code */
			for (int j375 = 0; (j375 < 4); j375 = (j375 + 1)) {
				fRec228_tmp[j375] = fRec228_perm[j375];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec228[i] = (fConst24 * (fRec228[(i - 1)] + (fRec229[i] - fRec229[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec228_perm[j] = fRec228_tmp[(count + j)];
				
			}
			/* Recursive loop 554 */
			/* Pre code */
			for (int j379 = 0; (j379 < 4); j379 = (j379 + 1)) {
				fRec231_tmp[j379] = fRec231_perm[j379];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec231[i] = (fConst24 * (fRec231[(i - 1)] + (fRec232[i] - fRec232[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec231_perm[j] = fRec231_tmp[(count + j)];
				
			}
			/* Recursive loop 555 */
			/* Pre code */
			for (int j383 = 0; (j383 < 4); j383 = (j383 + 1)) {
				fRec234_tmp[j383] = fRec234_perm[j383];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec234[i] = (fConst24 * (fRec234[(i - 1)] + (fRec235[i] - fRec235[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec234_perm[j] = fRec234_tmp[(count + j)];
				
			}
			/* Recursive loop 556 */
			/* Pre code */
			for (int j387 = 0; (j387 < 4); j387 = (j387 + 1)) {
				fRec237_tmp[j387] = fRec237_perm[j387];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec237[i] = (fConst24 * (fRec237[(i - 1)] + (fRec238[i] - fRec238[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec237_perm[j] = fRec237_tmp[(count + j)];
				
			}
			/* Recursive loop 557 */
			/* Pre code */
			for (int j391 = 0; (j391 < 4); j391 = (j391 + 1)) {
				fRec240_tmp[j391] = fRec240_perm[j391];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec240[i] = (fConst24 * (fRec240[(i - 1)] + (fRec241[i] - fRec241[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec240_perm[j] = fRec240_tmp[(count + j)];
				
			}
			/* Recursive loop 558 */
			/* Pre code */
			for (int j395 = 0; (j395 < 4); j395 = (j395 + 1)) {
				fRec243_tmp[j395] = fRec243_perm[j395];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec243[i] = (fConst24 * (fRec243[(i - 1)] + (fRec244[i] - fRec244[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec243_perm[j] = fRec243_tmp[(count + j)];
				
			}
			/* Recursive loop 559 */
			/* Pre code */
			for (int j400 = 0; (j400 < 4); j400 = (j400 + 1)) {
				fRec247_tmp[j400] = fRec247_perm[j400];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec247[i] = (fConst27 * (fRec247[(i - 1)] + (fRec248[i] - fRec248[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec247_perm[j] = fRec247_tmp[(count + j)];
				
			}
			/* Recursive loop 560 */
			/* Pre code */
			for (int j403 = 0; (j403 < 4); j403 = (j403 + 1)) {
				fRec250_tmp[j403] = fRec250_perm[j403];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec250[i] = (fConst27 * (fRec250[(i - 1)] + (fRec251[i] - fRec251[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec250_perm[j] = fRec250_tmp[(count + j)];
				
			}
			/* Recursive loop 561 */
			/* Pre code */
			for (int j406 = 0; (j406 < 4); j406 = (j406 + 1)) {
				fRec253_tmp[j406] = fRec253_perm[j406];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec253[i] = (fConst27 * (fRec253[(i - 1)] + (fRec254[i] - fRec254[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec253_perm[j] = fRec253_tmp[(count + j)];
				
			}
			/* Recursive loop 562 */
			/* Pre code */
			for (int j409 = 0; (j409 < 4); j409 = (j409 + 1)) {
				fRec256_tmp[j409] = fRec256_perm[j409];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec256[i] = (fConst27 * (fRec256[(i - 1)] + (fRec257[i] - fRec257[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec256_perm[j] = fRec256_tmp[(count + j)];
				
			}
			/* Recursive loop 563 */
			/* Pre code */
			for (int j412 = 0; (j412 < 4); j412 = (j412 + 1)) {
				fRec259_tmp[j412] = fRec259_perm[j412];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec259[i] = (fConst27 * (fRec259[(i - 1)] + (fRec260[i] - fRec260[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec259_perm[j] = fRec259_tmp[(count + j)];
				
			}
			/* Recursive loop 564 */
			/* Pre code */
			for (int j415 = 0; (j415 < 4); j415 = (j415 + 1)) {
				fRec262_tmp[j415] = fRec262_perm[j415];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec262[i] = (fConst27 * (fRec262[(i - 1)] + (fRec263[i] - fRec263[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec262_perm[j] = fRec262_tmp[(count + j)];
				
			}
			/* Recursive loop 565 */
			/* Pre code */
			for (int j418 = 0; (j418 < 4); j418 = (j418 + 1)) {
				fRec265_tmp[j418] = fRec265_perm[j418];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec265[i] = (fConst27 * (fRec265[(i - 1)] + (fRec266[i] - fRec266[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec265_perm[j] = fRec265_tmp[(count + j)];
				
			}
			/* Recursive loop 566 */
			/* Pre code */
			for (int j421 = 0; (j421 < 4); j421 = (j421 + 1)) {
				fRec268_tmp[j421] = fRec268_perm[j421];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec268[i] = (fConst27 * (fRec268[(i - 1)] + (fRec269[i] - fRec269[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec268_perm[j] = fRec268_tmp[(count + j)];
				
			}
			/* Recursive loop 567 */
			/* Pre code */
			for (int j424 = 0; (j424 < 4); j424 = (j424 + 1)) {
				fRec271_tmp[j424] = fRec271_perm[j424];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec271[i] = (fConst27 * (fRec271[(i - 1)] + (fRec272[i] - fRec272[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec271_perm[j] = fRec271_tmp[(count + j)];
				
			}
			/* Recursive loop 568 */
			/* Pre code */
			for (int j427 = 0; (j427 < 4); j427 = (j427 + 1)) {
				fRec274_tmp[j427] = fRec274_perm[j427];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec274[i] = (fConst27 * (fRec274[(i - 1)] + (fRec275[i] - fRec275[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec274_perm[j] = fRec274_tmp[(count + j)];
				
			}
			/* Recursive loop 569 */
			/* Pre code */
			for (int j430 = 0; (j430 < 4); j430 = (j430 + 1)) {
				fRec277_tmp[j430] = fRec277_perm[j430];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec277[i] = (fConst27 * (fRec277[(i - 1)] + (fRec278[i] - fRec278[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec277_perm[j] = fRec277_tmp[(count + j)];
				
			}
			/* Recursive loop 570 */
			/* Pre code */
			for (int j433 = 0; (j433 < 4); j433 = (j433 + 1)) {
				fRec280_tmp[j433] = fRec280_perm[j433];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec280[i] = (fConst27 * (fRec280[(i - 1)] + (fRec281[i] - fRec281[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec280_perm[j] = fRec280_tmp[(count + j)];
				
			}
			/* Recursive loop 571 */
			/* Pre code */
			for (int j243 = 0; (j243 < 4); j243 = (j243 + 1)) {
				fRec133_tmp[j243] = fRec133_perm[j243];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec133[i] = (fConst15 * (fRec133[(i - 1)] + (fZec54[i] - (fZec129[i] + fYec48[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec133_perm[j] = fRec133_tmp[(count + j)];
				
			}
			/* Recursive loop 572 */
			/* Pre code */
			for (int j251 = 0; (j251 < 4); j251 = (j251 + 1)) {
				fRec137_tmp[j251] = fRec137_perm[j251];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec137[i] = (fConst5 * (fRec137[(i - 1)] + (fRec138[i] - fRec138[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec137_perm[j] = fRec137_tmp[(count + j)];
				
			}
			/* Recursive loop 573 */
			/* Pre code */
			for (int j255 = 0; (j255 < 4); j255 = (j255 + 1)) {
				fRec140_tmp[j255] = fRec140_perm[j255];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec140[i] = (fConst5 * (fRec140[(i - 1)] + (fRec141[i] - fRec141[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec140_perm[j] = fRec140_tmp[(count + j)];
				
			}
			/* Recursive loop 574 */
			/* Pre code */
			for (int j259 = 0; (j259 < 4); j259 = (j259 + 1)) {
				fRec143_tmp[j259] = fRec143_perm[j259];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec143[i] = (fConst5 * (fRec143[(i - 1)] + (fRec144[i] - fRec144[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec143_perm[j] = fRec143_tmp[(count + j)];
				
			}
			/* Recursive loop 575 */
			/* Pre code */
			for (int j263 = 0; (j263 < 4); j263 = (j263 + 1)) {
				fRec146_tmp[j263] = fRec146_perm[j263];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec146[i] = (fConst5 * (fRec146[(i - 1)] + (fRec147[i] - fRec147[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec146_perm[j] = fRec146_tmp[(count + j)];
				
			}
			/* Recursive loop 576 */
			/* Pre code */
			for (int j267 = 0; (j267 < 4); j267 = (j267 + 1)) {
				fRec149_tmp[j267] = fRec149_perm[j267];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec149[i] = (fConst5 * (fRec149[(i - 1)] + (fRec150[i] - fRec150[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec149_perm[j] = fRec149_tmp[(count + j)];
				
			}
			/* Recursive loop 577 */
			/* Pre code */
			for (int j271 = 0; (j271 < 4); j271 = (j271 + 1)) {
				fRec152_tmp[j271] = fRec152_perm[j271];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec152[i] = (fConst5 * (fRec152[(i - 1)] + (fRec153[i] - fRec153[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec152_perm[j] = fRec152_tmp[(count + j)];
				
			}
			/* Recursive loop 578 */
			/* Pre code */
			for (int j275 = 0; (j275 < 4); j275 = (j275 + 1)) {
				fRec155_tmp[j275] = fRec155_perm[j275];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec155[i] = (fConst5 * (fRec155[(i - 1)] + (fRec156[i] - fRec156[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec155_perm[j] = fRec155_tmp[(count + j)];
				
			}
			/* Recursive loop 579 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec152[i] = (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + fZec151[i]))))))))))));
				
			}
			/* Recursive loop 580 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec164[i] = (((((((((((((((((fRec188[i] * fZec55[i]) + (fRec191[i] * fZec56[i])) + (fRec194[i] * fZec57[i])) + (fRec197[i] * fZec58[i])) + (fRec200[i] * fZec59[i])) + (fRec203[i] * fZec60[i])) + (fRec206[i] * fZec61[i])) + (fRec172[i] * fZec62[i])) + (fRec175[i] * fZec63[i])) + (fRec178[i] * fZec64[i])) + (fRec181[i] * fZec65[i])) + (fRec184[i] * fZec66[i])) + (fRec159[i] * fZec67[i])) + (fRec162[i] * fZec68[i])) + (fRec165[i] * fZec69[i])) + (fRec168[i] * fZec70[i])) + (fRec134[i] * fZec71[i]));
				
			}
			/* Recursive loop 581 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec179[i] = (((((((((((((((((fRec210[i] * fZec55[i]) + (fRec213[i] * fZec56[i])) + (fRec216[i] * fZec57[i])) + (fRec219[i] * fZec58[i])) + (fRec222[i] * fZec59[i])) + (fRec225[i] * fZec60[i])) + (fRec228[i] * fZec61[i])) + (fRec231[i] * fZec62[i])) + (fRec234[i] * fZec63[i])) + (fRec237[i] * fZec64[i])) + (fRec240[i] * fZec65[i])) + (fRec243[i] * fZec66[i])) + (fRec188[i] * fZec67[i])) + (fRec191[i] * fZec68[i])) + (fRec194[i] * fZec69[i])) + (fRec197[i] * fZec70[i])) + (fRec200[i] * fZec71[i]));
				
			}
			/* Recursive loop 582 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec182[i] = (((((((((((((((((fRec247[i] * fZec55[i]) + (fRec250[i] * fZec56[i])) + (fRec253[i] * fZec57[i])) + (fRec256[i] * fZec58[i])) + (fRec259[i] * fZec59[i])) + (fRec262[i] * fZec60[i])) + (fRec265[i] * fZec61[i])) + (fRec268[i] * fZec62[i])) + (fRec271[i] * fZec63[i])) + (fRec274[i] * fZec64[i])) + (fRec277[i] * fZec65[i])) + (fRec280[i] * fZec66[i])) + (fRec210[i] * fZec67[i])) + (fRec213[i] * fZec68[i])) + (fRec216[i] * fZec69[i])) + (fRec219[i] * fZec70[i])) + (fRec222[i] * fZec71[i]));
				
			}
			/* Recursive loop 583 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec144[i] = ((fSlow18 * (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec49[i]))))))))))))) + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec122[i] + ((2.0f * fRec121[i]) + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + (fRec73[i] + (fRec67[i] + (fRec61[i] + (fRec55[i] + (fRec49[i] + (fRec43[i] + (fRec31[i] + fRec37[i])))))))))))))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 584 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec145[i] = (0.25f * (fZec128[i] + (fZec126[i] + (fZec124[i] + (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + ((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec159[i] * fZec55[i]) + (fRec162[i] * fZec56[i])) + (fRec165[i] * fZec57[i])) + (fRec168[i] * fZec58[i])) + (fRec134[i] * fZec59[i])) + (fRec137[i] * fZec60[i])) + (fRec140[i] * fZec61[i])) + (fRec143[i] * fZec62[i])) + (fRec146[i] * fZec63[i])) + (fRec149[i] * fZec64[i])) + (fRec152[i] * fZec65[i])) + (fRec155[i] * fZec66[i])) + (fRec0[i] * fZec67[i])) + (fRec7[i] * fZec68[i])) + (fRec13[i] * fZec69[i])) + (fRec19[i] * fZec70[i])) + (fRec25[i] * fZec71[i]))) + (fRec31[i] * fZec72[i])) + (fRec37[i] * fZec73[i])) + (fRec43[i] * fZec74[i])) + (fRec49[i] * fZec75[i])) + (fRec55[i] * fZec76[i])) + (fRec61[i] * fZec77[i])) + (fRec67[i] * fZec78[i])) + (fRec73[i] * fZec79[i])) + (fRec75[i] * fZec80[i])) + (fRec77[i] * fZec81[i])) + (fRec79[i] * fZec82[i])) + (fRec81[i] * fZec83[i])) + (fRec83[i] * fZec84[i])) + (fRec85[i] * fZec85[i])) + (fRec87[i] * fZec86[i])) + (fRec89[i] * fZec87[i])) + (fRec91[i] * fZec88[i])) + (fRec93[i] * fZec89[i])) + (fRec95[i] * fZec90[i])) + (fRec97[i] * fZec91[i])) + (fRec99[i] * fZec92[i])) + (fRec101[i] * fZec93[i])) + (fRec103[i] * fZec94[i])) + (fRec105[i] * fZec95[i])) + (fRec107[i] * fZec96[i])) + (fRec109[i] * fZec97[i])) + (fRec111[i] * fZec98[i])) + (fRec113[i] * fZec99[i])) + (fRec115[i] * fZec100[i])) + (fRec117[i] * fZec101[i])) + (fRec119[i] * fZec102[i]))))))))))))))));
				
			}
			/* Recursive loop 585 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec163[i] = ((fSlow18 * (fRec206[i] + (fRec203[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec191[i] + (fRec188[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec134[i] + fRec159[i]))))))))))))))))) + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + fZec152[i]))))))));
				
			}
			/* Recursive loop 586 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec165[i] = (0.25f * (fZec128[i] + ((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec164[i]) + (fRec137[i] * fZec72[i])) + (fRec140[i] * fZec73[i])) + (fRec143[i] * fZec74[i])) + (fRec146[i] * fZec75[i])) + (fRec149[i] * fZec76[i])) + (fRec152[i] * fZec77[i])) + (fRec155[i] * fZec78[i])) + (fRec0[i] * fZec79[i])) + (fRec7[i] * fZec80[i])) + (fRec13[i] * fZec81[i])) + (fRec19[i] * fZec82[i])) + (fRec25[i] * fZec83[i])) + (fRec31[i] * fZec84[i])) + (fRec37[i] * fZec85[i])) + (fRec43[i] * fZec86[i])) + (fRec49[i] * fZec87[i])) + (fRec55[i] * fZec88[i])) + (fRec61[i] * fZec89[i])) + (fRec67[i] * fZec90[i])) + (fRec73[i] * fZec91[i])) + (fRec75[i] * fZec92[i])) + (fRec77[i] * fZec93[i])) + (fRec79[i] * fZec94[i])) + (fRec81[i] * fZec95[i])) + (fRec83[i] * fZec96[i])) + (fRec85[i] * fZec97[i])) + (fRec87[i] * fZec98[i])) + (fRec89[i] * fZec99[i])) + (fRec91[i] * fZec100[i])) + (fRec93[i] * fZec101[i])) + (fRec95[i] * fZec102[i])) + (fRec97[i] * fZec103[i])) + (fRec99[i] * fZec105[i])) + (fRec101[i] * fZec107[i])) + (fRec103[i] * fZec109[i])) + (fRec105[i] * fZec111[i])) + (fRec107[i] * fZec113[i])) + (fRec109[i] * fZec115[i])) + (fRec111[i] * fZec117[i])) + (fRec113[i] * fZec119[i])) + (fRec115[i] * fZec121[i])) + (fRec117[i] * fZec123[i])) + (fRec119[i] * fZec125[i]))));
				
			}
			/* Recursive loop 587 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec178[i] = ((fSlow18 * (fRec243[i] + (fRec240[i] + (fRec237[i] + (fRec234[i] + (fRec231[i] + (fRec228[i] + (fRec225[i] + (fRec222[i] + (fRec219[i] + (fRec216[i] + (fRec213[i] + (fRec210[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec188[i] + fRec191[i]))))))))))))))))) + (fRec206[i] + (fRec203[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec151[i]))))))))))))))))))));
				
			}
			/* Recursive loop 588 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec180[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec179[i]) + (fRec203[i] * fZec72[i])) + (fRec206[i] * fZec73[i])) + (fRec172[i] * fZec74[i])) + (fRec175[i] * fZec75[i])) + (fRec178[i] * fZec76[i])) + (fRec181[i] * fZec77[i])) + (fRec184[i] * fZec78[i])) + (fRec159[i] * fZec79[i])) + (fRec162[i] * fZec80[i])) + (fRec165[i] * fZec81[i])) + (fRec168[i] * fZec82[i])) + (fRec134[i] * fZec83[i])) + (fRec137[i] * fZec84[i])) + (fRec140[i] * fZec85[i])) + (fRec143[i] * fZec86[i])) + (fRec146[i] * fZec87[i])) + (fRec149[i] * fZec88[i])) + (fRec152[i] * fZec89[i])) + (fRec155[i] * fZec90[i])) + (fRec0[i] * fZec91[i])) + (fRec7[i] * fZec92[i])) + (fRec13[i] * fZec93[i])) + (fRec19[i] * fZec94[i])) + (fRec25[i] * fZec95[i])) + (fRec31[i] * fZec96[i])) + (fRec37[i] * fZec97[i])) + (fRec43[i] * fZec98[i])) + (fRec49[i] * fZec99[i])) + (fRec55[i] * fZec100[i])) + (fRec61[i] * fZec101[i])) + (fRec67[i] * fZec102[i])) + (fRec73[i] * fZec103[i])) + (fRec75[i] * fZec105[i])) + (fRec77[i] * fZec107[i])) + (fRec79[i] * fZec109[i])) + (fRec81[i] * fZec111[i])) + (fRec83[i] * fZec113[i])) + (fRec85[i] * fZec115[i])) + (fRec87[i] * fZec117[i])) + (fRec89[i] * fZec119[i])) + (fRec91[i] * fZec121[i])) + (fRec93[i] * fZec123[i])) + (fRec95[i] * fZec125[i])) + (fRec97[i] * fZec127[i])));
				
			}
			/* Recursive loop 589 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec181[i] = (1.67900002f * ((fSlow18 * (fRec280[i] + (fRec277[i] + (fRec274[i] + (fRec271[i] + (fRec268[i] + (fRec265[i] + (fRec262[i] + (fRec259[i] + (fRec256[i] + (fRec253[i] + (fRec250[i] + (fRec247[i] + (fRec222[i] + (fRec219[i] + (fRec216[i] + (fRec210[i] + fRec213[i]))))))))))))))))) + (fRec243[i] + (fRec240[i] + (fRec237[i] + (fRec234[i] + (fRec231[i] + (fRec228[i] + (fRec225[i] + (fRec206[i] + (fRec203[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec191[i] + (fRec188[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec51[i])))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 590 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec183[i] = (0.419750005f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec182[i]) + (fRec225[i] * fZec72[i])) + (fRec228[i] * fZec73[i])) + (fRec231[i] * fZec74[i])) + (fRec234[i] * fZec75[i])) + (fRec237[i] * fZec76[i])) + (fRec240[i] * fZec77[i])) + (fRec243[i] * fZec78[i])) + (fRec188[i] * fZec79[i])) + (fRec191[i] * fZec80[i])) + (fRec194[i] * fZec81[i])) + (fRec197[i] * fZec82[i])) + (fRec200[i] * fZec83[i])) + (fRec203[i] * fZec84[i])) + (fRec206[i] * fZec85[i])) + (fRec172[i] * fZec86[i])) + (fRec175[i] * fZec87[i])) + (fRec178[i] * fZec88[i])) + (fRec181[i] * fZec89[i])) + (fRec184[i] * fZec90[i])) + (fRec159[i] * fZec91[i])) + (fRec162[i] * fZec92[i])) + (fRec165[i] * fZec93[i])) + (fRec168[i] * fZec94[i])) + (fRec134[i] * fZec95[i])) + (fRec137[i] * fZec96[i])) + (fRec140[i] * fZec97[i])) + (fRec143[i] * fZec98[i])) + (fRec146[i] * fZec99[i])) + (fRec149[i] * fZec100[i])) + (fRec152[i] * fZec101[i])) + (fRec155[i] * fZec102[i])) + (fRec0[i] * fZec103[i])) + (fRec7[i] * fZec105[i])) + (fRec13[i] * fZec107[i])) + (fRec19[i] * fZec109[i])) + (fRec25[i] * fZec111[i])) + (fRec31[i] * fZec113[i])) + (fRec37[i] * fZec115[i])) + (fRec43[i] * fZec117[i])) + (fRec49[i] * fZec119[i])) + (fRec55[i] * fZec121[i])) + (fRec61[i] * fZec123[i])) + (fRec67[i] * fZec125[i])) + (fRec73[i] * fZec127[i])));
				
			}
			/* Recursive loop 591 */
			/* Pre code */
			for (int j460 = 0; (j460 < 4); j460 = (j460 + 1)) {
				iRec305_tmp[j460] = iRec305_perm[j460];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec305[i] = ((1103515245 * iRec305[(i - 1)]) + 12345);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec305_perm[j] = iRec305_tmp[(count + j)];
				
			}
			/* Recursive loop 592 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec189[i] = (0.00200000009f * (fRec133[i] * fSlow82));
				
			}
			/* Recursive loop 593 */
			/* Pre code */
			for (int j294 = 0; (j294 < 4); j294 = (j294 + 1)) {
				fYec62_tmp[j294] = fYec62_perm[j294];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec62[i] = (fZec144[i] - fZec145[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec62_perm[j] = fYec62_tmp[(count + j)];
				
			}
			/* Recursive loop 594 */
			/* Pre code */
			for (int j346 = 0; (j346 < 4); j346 = (j346 + 1)) {
				fYec76_tmp[j346] = fYec76_perm[j346];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec76[i] = (fZec163[i] - fZec165[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec76_perm[j] = fYec76_tmp[(count + j)];
				
			}
			/* Recursive loop 595 */
			/* Pre code */
			for (int j396 = 0; (j396 < 4); j396 = (j396 + 1)) {
				fYec89_tmp[j396] = fYec89_perm[j396];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec89[i] = (fZec178[i] - fZec180[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec89_perm[j] = fYec89_tmp[(count + j)];
				
			}
			/* Recursive loop 596 */
			/* Pre code */
			for (int j434 = 0; (j434 < 4); j434 = (j434 + 1)) {
				fYec90_tmp[j434] = fYec90_perm[j434];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec90[i] = (fZec181[i] - fZec183[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec90_perm[j] = fYec90_tmp[(count + j)];
				
			}
			/* Recursive loop 597 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec190[i] = mydsp_faustpower2_f(min(1.0f, max(-1.0f, (fZec189[i] + (fZec129[i] + (4.65661286e-16f * float(iRec305[i])))))));
				
			}
			/* Recursive loop 598 */
			/* Pre code */
			for (int j295 = 0; (j295 < 4); j295 = (j295 + 1)) {
				fRec171_tmp[j295] = fRec171_perm[j295];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec171[i] = (fConst15 * (fRec171[(i - 1)] + (fZec144[i] - (fZec145[i] + fYec62[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec171_perm[j] = fRec171_tmp[(count + j)];
				
			}
			/* Recursive loop 599 */
			/* Pre code */
			for (int j347 = 0; (j347 < 4); j347 = (j347 + 1)) {
				fRec209_tmp[j347] = fRec209_perm[j347];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec209[i] = (fConst15 * (fRec209[(i - 1)] + (fZec163[i] - (fZec165[i] + fYec76[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec209_perm[j] = fRec209_tmp[(count + j)];
				
			}
			/* Recursive loop 600 */
			/* Pre code */
			for (int j397 = 0; (j397 < 4); j397 = (j397 + 1)) {
				fRec246_tmp[j397] = fRec246_perm[j397];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec246[i] = (fConst15 * (fRec246[(i - 1)] + (fZec178[i] - (fZec180[i] + fYec89[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec246_perm[j] = fRec246_tmp[(count + j)];
				
			}
			/* Recursive loop 601 */
			/* Pre code */
			for (int j435 = 0; (j435 < 4); j435 = (j435 + 1)) {
				fRec283_tmp[j435] = fRec283_perm[j435];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec283[i] = (fConst15 * (fRec283[(i - 1)] + (fZec181[i] - (fZec183[i] + fYec90[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec283_perm[j] = fRec283_tmp[(count + j)];
				
			}
			/* Recursive loop 602 */
			/* Pre code */
			for (int j461 = 0; (j461 < 4); j461 = (j461 + 1)) {
				fRec302_tmp[j461] = fRec302_perm[j461];
				
			}
			for (int j462 = 0; (j462 < 4); j462 = (j462 + 1)) {
				iRec303_tmp[j462] = iRec303_perm[j462];
				
			}
			for (int j463 = 0; (j463 < 4); j463 = (j463 + 1)) {
				fRec304_tmp[j463] = fRec304_perm[j463];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iZec188[i] = (iRec303[(i - 1)] < iConst36);
				fRec302[i] = (iZec188[i]?(fZec190[i] + fRec302[(i - 1)]):fZec190[i]);
				iRec303[i] = (iZec188[i]?(iRec303[(i - 1)] + 1):1);
				fRec304[i] = (iZec188[i]?fRec304[(i - 1)]:fRec302[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec302_perm[j] = fRec302_tmp[(count + j)];
				
			}
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec303_perm[j] = iRec303_tmp[(count + j)];
				
			}
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec304_perm[j] = fRec304_tmp[(count + j)];
				
			}
			/* Recursive loop 603 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec154[i] = (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec172[i] * fZec55[i]) + (fRec175[i] * fZec56[i])) + (fRec178[i] * fZec57[i])) + (fRec181[i] * fZec58[i])) + (fRec184[i] * fZec59[i])) + (fRec159[i] * fZec60[i])) + (fRec162[i] * fZec61[i])) + (fRec165[i] * fZec62[i])) + (fRec168[i] * fZec63[i])) + (fRec134[i] * fZec64[i])) + (fRec137[i] * fZec65[i])) + (fRec140[i] * fZec66[i])) + (fRec143[i] * fZec67[i])) + (fRec146[i] * fZec68[i])) + (fRec149[i] * fZec69[i])) + (fRec152[i] * fZec70[i])) + (fRec155[i] * fZec71[i]))) + (fRec0[i] * fZec72[i])) + (fRec7[i] * fZec73[i])) + (fRec13[i] * fZec74[i])) + (fRec19[i] * fZec75[i])) + (fRec25[i] * fZec76[i])) + (fRec31[i] * fZec77[i])) + (fRec37[i] * fZec78[i])) + (fRec43[i] * fZec79[i])) + (fRec49[i] * fZec80[i])) + (fRec55[i] * fZec81[i])) + (fRec61[i] * fZec82[i])) + (fRec67[i] * fZec83[i])) + (fRec73[i] * fZec84[i])) + (fRec75[i] * fZec85[i])) + (fRec77[i] * fZec86[i])) + (fRec79[i] * fZec87[i])) + (fRec81[i] * fZec88[i])) + (fRec83[i] * fZec89[i])) + (fRec85[i] * fZec90[i])) + (fRec87[i] * fZec91[i])) + (fRec89[i] * fZec92[i])) + (fRec91[i] * fZec93[i])) + (fRec93[i] * fZec94[i])) + (fRec95[i] * fZec95[i])) + (fRec97[i] * fZec96[i])) + (fRec99[i] * fZec97[i])) + (fRec101[i] * fZec98[i])) + (fRec103[i] * fZec99[i])) + (fRec105[i] * fZec100[i])) + (fRec107[i] * fZec101[i])) + (fRec109[i] * fZec102[i])) + (fRec111[i] * fZec103[i])) + (fRec113[i] * fZec105[i])) + (fRec115[i] * fZec107[i])) + (fRec117[i] * fZec109[i])) + (fRec119[i] * fZec111[i])) + (fRec121[i] * fZec113[i])) + (fRec122[i] * fZec115[i])) + (fRec123[i] * fZec117[i])) + (fRec124[i] * fZec119[i])) + (fRec125[i] * fZec121[i])) + (fRec126[i] * fZec123[i])) + (fRec127[i] * fZec125[i])) + (fRec128[i] * fZec127[i]));
				
			}
			/* Recursive loop 604 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec184[i] = (fZec145[i] + (0.00200000009f * (fRec171[i] * fSlow82)));
				
			}
			/* Recursive loop 605 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec185[i] = (fZec165[i] + (0.00200000009f * (fRec209[i] * fSlow82)));
				
			}
			/* Recursive loop 606 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec186[i] = (fZec180[i] + (0.00200000009f * (fRec246[i] * fSlow82)));
				
			}
			/* Recursive loop 607 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec187[i] = (fZec183[i] + (0.00200000009f * (fRec283[i] * fSlow82)));
				
			}
			/* Recursive loop 608 */
			/* Pre code */
			for (int j464 = 0; (j464 < 4); j464 = (j464 + 1)) {
				fYec99_tmp[j464] = fYec99_perm[j464];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec99[i] = log10f(sqrtf((fConst37 * fRec304[i])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec99_perm[j] = fYec99_tmp[(count + j)];
				
			}
			/* Recursive loop 609 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec153[i] = ((fSlow18 * (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec134[i] + fRec137[i]))))))))))))))))) + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec122[i] + fZec152[i]))))))));
				
			}
			/* Recursive loop 610 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec155[i] = (0.25f * fZec154[i]);
				
			}
			/* Recursive loop 611 */
			/* Pre code */
			for (int j436 = 0; (j436 < 4); j436 = (j436 + 1)) {
				fYec91_tmp[j436] = fYec91_perm[j436];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec91[i] = (fSlow81 * fZec184[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec91_perm[j] = fYec91_tmp[(count + j)];
				
			}
			/* Recursive loop 612 */
			/* Pre code */
			for (int j440 = 0; (j440 < 4); j440 = (j440 + 1)) {
				fYec93_tmp[j440] = fYec93_perm[j440];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec93[i] = (fSlow85 * fZec185[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec93_perm[j] = fYec93_tmp[(count + j)];
				
			}
			/* Recursive loop 613 */
			/* Pre code */
			for (int j444 = 0; (j444 < 4); j444 = (j444 + 1)) {
				fYec95_tmp[j444] = fYec95_perm[j444];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec95[i] = (fSlow88 * fZec186[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec95_perm[j] = fYec95_tmp[(count + j)];
				
			}
			/* Recursive loop 614 */
			/* Pre code */
			for (int j448 = 0; (j448 < 4); j448 = (j448 + 1)) {
				fYec97_tmp[j448] = fYec97_perm[j448];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec97[i] = (fSlow91 * fZec187[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec97_perm[j] = fYec97_tmp[(count + j)];
				
			}
			/* Recursive loop 615 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec191[i] = (20.0f * fYec99[i]);
				
			}
			/* Recursive loop 616 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec192[i] = (20.0f * fYec99[(i - 1)]);
				
			}
			/* Recursive loop 617 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec138[i] = ((fSlow18 * (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec50[i]))))))))) + ((2.0f * fZec53[i]) + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + (fRec73[i] + (fRec67[i] + (fRec55[i] + fRec61[i])))))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 618 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec139[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec134[i] * fZec55[i]) + (fRec137[i] * fZec56[i])) + (fRec140[i] * fZec57[i])) + (fRec143[i] * fZec58[i])) + (fRec146[i] * fZec59[i])) + (fRec149[i] * fZec60[i])) + (fRec152[i] * fZec61[i])) + (fRec155[i] * fZec62[i])) + (fRec0[i] * fZec63[i])) + (fRec7[i] * fZec64[i])) + (fRec13[i] * fZec65[i])) + (fRec19[i] * fZec66[i])) + (fRec25[i] * fZec67[i])) + (fRec31[i] * fZec68[i])) + (fRec37[i] * fZec69[i])) + (fRec43[i] * fZec70[i])) + (fRec49[i] * fZec71[i]))) + (fRec55[i] * fZec72[i])) + (fRec61[i] * fZec73[i])) + (fRec67[i] * fZec74[i])) + (fRec73[i] * fZec75[i])) + (fRec75[i] * fZec76[i])) + (fRec77[i] * fZec77[i])) + (fRec79[i] * fZec78[i])) + (fRec81[i] * fZec79[i])) + (fRec83[i] * fZec80[i])) + (fRec85[i] * fZec81[i])) + (fRec87[i] * fZec82[i])) + (fRec89[i] * fZec83[i])) + (fRec91[i] * fZec84[i])) + (fRec93[i] * fZec85[i])) + (fRec95[i] * fZec86[i])) + (fRec97[i] * fZec87[i])) + (fRec99[i] * fZec88[i])) + (fRec101[i] * fZec89[i])) + (fRec103[i] * fZec90[i])) + (fRec105[i] * fZec91[i])) + (fRec107[i] * fZec92[i])) + (fRec109[i] * fZec93[i])) + (fRec111[i] * fZec94[i])) + (fRec113[i] * fZec95[i])) + (fRec115[i] * fZec96[i])) + (fRec117[i] * fZec97[i])) + (fRec119[i] * fZec98[i])) + (fRec121[i] * fZec99[i])) + (fRec122[i] * fZec100[i])) + (fRec123[i] * fZec101[i])) + (fRec124[i] * fZec102[i])) + (fRec125[i] * fZec103[i])) + (fRec126[i] * fZec105[i])) + (fRec127[i] * fZec107[i])) + (fRec128[i] * fZec109[i])) + (fRec129[i] * fZec111[i])) + (fRec130[i] * fZec113[i])) + (fRec131[i] * fZec115[i])) + (fRec132[i] * fZec117[i])) + (fRec121[i] * fZec119[i])) + (fRec122[i] * fZec121[i])) + (fRec123[i] * fZec123[i])) + (fRec124[i] * fZec125[i])) + (fRec125[i] * fZec127[i])));
				
			}
			/* Recursive loop 619 */
			/* Pre code */
			for (int j316 = 0; (j316 < 4); j316 = (j316 + 1)) {
				fYec68_tmp[j316] = fYec68_perm[j316];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec68[i] = (fZec153[i] - fZec155[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec68_perm[j] = fYec68_tmp[(count + j)];
				
			}
			/* Recursive loop 620 */
			/* Pre code */
			for (int j437 = 0; (j437 < 4); j437 = (j437 + 1)) {
				fRec285_tmp[j437] = fRec285_perm[j437];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec285[i] = (fConst28 * (fRec285[(i - 1)] + (fYec91[i] - fYec91[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec285_perm[j] = fRec285_tmp[(count + j)];
				
			}
			/* Recursive loop 621 */
			/* Pre code */
			for (int j441 = 0; (j441 < 4); j441 = (j441 + 1)) {
				fRec287_tmp[j441] = fRec287_perm[j441];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec287[i] = (fConst30 * (fRec287[(i - 1)] + (fYec93[i] - fYec93[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec287_perm[j] = fRec287_tmp[(count + j)];
				
			}
			/* Recursive loop 622 */
			/* Pre code */
			for (int j445 = 0; (j445 < 4); j445 = (j445 + 1)) {
				fRec289_tmp[j445] = fRec289_perm[j445];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec289[i] = (fConst32 * (fRec289[(i - 1)] + (fYec95[i] - fYec95[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec289_perm[j] = fRec289_tmp[(count + j)];
				
			}
			/* Recursive loop 623 */
			/* Pre code */
			for (int j449 = 0; (j449 < 4); j449 = (j449 + 1)) {
				fRec291_tmp[j449] = fRec291_perm[j449];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec291[i] = (fConst34 * (fRec291[(i - 1)] + (fYec97[i] - fYec97[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec291_perm[j] = fRec291_tmp[(count + j)];
				
			}
			/* Recursive loop 624 */
			/* Pre code */
			for (int j465 = 0; (j465 < 4); j465 = (j465 + 1)) {
				fRec301_tmp[j465] = fRec301_perm[j465];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec301[i] = min(1.0f, max(0.0f, ((fRec301[(i - 1)] + ((fZec191[i] > -25.0f)?((fZec192[i] < -25.0f)?1.0f:0.0f):0.0f)) - ((fZec192[i] > -35.0f)?((fZec191[i] < -35.0f)?1.0f:0.0f):0.0f))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec301_perm[j] = fRec301_tmp[(count + j)];
				
			}
			/* Recursive loop 625 */
			/* Pre code */
			for (int j276 = 0; (j276 < 4); j276 = (j276 + 1)) {
				fYec57_tmp[j276] = fYec57_perm[j276];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec57[i] = (fZec138[i] - fZec139[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec57_perm[j] = fYec57_tmp[(count + j)];
				
			}
			/* Recursive loop 626 */
			/* Pre code */
			for (int j317 = 0; (j317 < 4); j317 = (j317 + 1)) {
				fRec187_tmp[j317] = fRec187_perm[j317];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec187[i] = (fConst15 * (fRec187[(i - 1)] + (fZec153[i] - (fZec155[i] + fYec68[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec187_perm[j] = fRec187_tmp[(count + j)];
				
			}
			/* Recursive loop 627 */
			/* Pre code */
			for (int j438 = 0; (j438 < 4); j438 = (j438 + 1)) {
				fYec92_tmp[j438] = fYec92_perm[j438];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec92[i] = ((0.541666687f * fRec285[i]) + (fSlow83 * fZec184[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec92_perm[j] = fYec92_tmp[(count + j)];
				
			}
			/* Recursive loop 628 */
			/* Pre code */
			for (int j442 = 0; (j442 < 4); j442 = (j442 + 1)) {
				fYec94_tmp[j442] = fYec94_perm[j442];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec94[i] = ((0.541666687f * fRec287[i]) + (fSlow86 * fZec185[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec94_perm[j] = fYec94_tmp[(count + j)];
				
			}
			/* Recursive loop 629 */
			/* Pre code */
			for (int j446 = 0; (j446 < 4); j446 = (j446 + 1)) {
				fYec96_tmp[j446] = fYec96_perm[j446];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec96[i] = ((0.541666687f * fRec289[i]) + (fSlow89 * fZec186[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec96_perm[j] = fYec96_tmp[(count + j)];
				
			}
			/* Recursive loop 630 */
			/* Pre code */
			for (int j450 = 0; (j450 < 4); j450 = (j450 + 1)) {
				fYec98_tmp[j450] = fYec98_perm[j450];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec98[i] = ((0.541666687f * fRec291[i]) + (fSlow92 * fZec187[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec98_perm[j] = fYec98_tmp[(count + j)];
				
			}
			/* Recursive loop 631 */
			/* Pre code */
			for (int j452 = 0; (j452 < 4); j452 = (j452 + 1)) {
				fRec293_tmp[j452] = fRec293_perm[j452];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec293[i] = (fRec293[(i - 1)] + (fConst11 * (fYec91[i] - fRec293[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec293_perm[j] = fRec293_tmp[(count + j)];
				
			}
			/* Recursive loop 632 */
			/* Pre code */
			for (int j454 = 0; (j454 < 4); j454 = (j454 + 1)) {
				fRec295_tmp[j454] = fRec295_perm[j454];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec295[i] = (fRec295[(i - 1)] + (fConst8 * (fYec93[i] - fRec295[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec295_perm[j] = fRec295_tmp[(count + j)];
				
			}
			/* Recursive loop 633 */
			/* Pre code */
			for (int j456 = 0; (j456 < 4); j456 = (j456 + 1)) {
				fRec297_tmp[j456] = fRec297_perm[j456];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec297[i] = (fRec297[(i - 1)] + (fConst2 * (fYec95[i] - fRec297[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec297_perm[j] = fRec297_tmp[(count + j)];
				
			}
			/* Recursive loop 634 */
			/* Pre code */
			for (int j458 = 0; (j458 < 4); j458 = (j458 + 1)) {
				fRec299_tmp[j458] = fRec299_perm[j458];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec299[i] = (fRec299[(i - 1)] + (fConst16 * (fYec97[i] - fRec299[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec299_perm[j] = fRec299_tmp[(count + j)];
				
			}
			/* Recursive loop 635 */
			/* Pre code */
			for (int j466 = 0; (j466 < 4); j466 = (j466 + 1)) {
				fRec300_tmp[j466] = fRec300_perm[j466];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec300[i] = ((fConst39 * fRec300[(i - 1)]) + (fConst38 * ((fRec301[i] > 0.5f)?((fRec301[(i - 1)] < 0.5f)?1.0f:0.0f):0.0f)));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec300_perm[j] = fRec300_tmp[(count + j)];
				
			}
			/* Recursive loop 636 */
			/* Pre code */
			for (int j277 = 0; (j277 < 4); j277 = (j277 + 1)) {
				fRec158_tmp[j277] = fRec158_perm[j277];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec158[i] = (fConst15 * (fRec158[(i - 1)] + (fZec138[i] - (fZec139[i] + fYec57[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec158_perm[j] = fRec158_tmp[(count + j)];
				
			}
			/* Recursive loop 637 */
			/* Pre code */
			for (int j439 = 0; (j439 < 4); j439 = (j439 + 1)) {
				fRec284_tmp[j439] = fRec284_perm[j439];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec284[i] = (fConst29 * (fRec284[(i - 1)] + (fYec92[i] - fYec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec284_perm[j] = fRec284_tmp[(count + j)];
				
			}
			/* Recursive loop 638 */
			/* Pre code */
			for (int j443 = 0; (j443 < 4); j443 = (j443 + 1)) {
				fRec286_tmp[j443] = fRec286_perm[j443];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec286[i] = (fConst31 * (fRec286[(i - 1)] + (fYec94[i] - fYec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec286_perm[j] = fRec286_tmp[(count + j)];
				
			}
			/* Recursive loop 639 */
			/* Pre code */
			for (int j447 = 0; (j447 < 4); j447 = (j447 + 1)) {
				fRec288_tmp[j447] = fRec288_perm[j447];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec288[i] = (fConst33 * (fRec288[(i - 1)] + (fYec96[i] - fYec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec288_perm[j] = fRec288_tmp[(count + j)];
				
			}
			/* Recursive loop 640 */
			/* Pre code */
			for (int j451 = 0; (j451 < 4); j451 = (j451 + 1)) {
				fRec290_tmp[j451] = fRec290_perm[j451];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec290[i] = (fConst35 * (fRec290[(i - 1)] + (fYec98[i] - fYec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec290_perm[j] = fRec290_tmp[(count + j)];
				
			}
			/* Recursive loop 641 */
			/* Pre code */
			for (int j453 = 0; (j453 < 4); j453 = (j453 + 1)) {
				fRec292_tmp[j453] = fRec292_perm[j453];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec292[i] = (fRec292[(i - 1)] + (fConst11 * (fRec293[i] - fRec292[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec292_perm[j] = fRec292_tmp[(count + j)];
				
			}
			/* Recursive loop 642 */
			/* Pre code */
			for (int j455 = 0; (j455 < 4); j455 = (j455 + 1)) {
				fRec294_tmp[j455] = fRec294_perm[j455];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec294[i] = (fRec294[(i - 1)] + (fConst8 * (fRec295[i] - fRec294[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec294_perm[j] = fRec294_tmp[(count + j)];
				
			}
			/* Recursive loop 643 */
			/* Pre code */
			for (int j457 = 0; (j457 < 4); j457 = (j457 + 1)) {
				fRec296_tmp[j457] = fRec296_perm[j457];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec296[i] = (fRec296[(i - 1)] + (fConst2 * (fRec297[i] - fRec296[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec296_perm[j] = fRec296_tmp[(count + j)];
				
			}
			/* Recursive loop 644 */
			/* Pre code */
			for (int j459 = 0; (j459 < 4); j459 = (j459 + 1)) {
				fRec298_tmp[j459] = fRec298_perm[j459];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec298[i] = (fRec298[(i - 1)] + (fConst16 * (fRec299[i] - fRec298[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec298_perm[j] = fRec298_tmp[(count + j)];
				
			}
			/* Recursive loop 645 */
			/* Pre code */
			for (int j467 = 0; (j467 < 4); j467 = (j467 + 1)) {
				fRec306_tmp[j467] = fRec306_perm[j467];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec306[i] = (fRec306[(i - 1)] + (fConst40 * ((fSlow17 * ((fSlow94 * ((0.25f * fZec179[i]) + (0.125f * fZec164[i]))) + (fSlow96 * (((0.25f * fZec182[i]) + (0.125f * fZec179[i])) + (0.0625f * fZec164[i]))))) - fRec306[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec306_perm[j] = fRec306_tmp[(count + j)];
				
			}
			/* Recursive loop 646 */
			/* Pre code */
			for (int j468 = 0; (j468 < 4); j468 = (j468 + 1)) {
				fRec307_tmp[j468] = fRec307_perm[j468];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec307[i] = (fSlow97 + (0.980000019f * fRec307[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec307_perm[j] = fRec307_tmp[(count + j)];
				
			}
			/* Recursive loop 647 */
			/* Pre code */
			for (int j469 = 0; (j469 < 4); j469 = (j469 + 1)) {
				fRec308_tmp[j469] = fRec308_perm[j469];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec308[i] = (fSlow98 + (0.980000019f * fRec308[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec308_perm[j] = fRec308_tmp[(count + j)];
				
			}
			/* Recursive loop 648 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec193[i] = (fZec129[i] + fZec189[i]);
				
			}
			/* Recursive loop 649 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec194[i] = (0.00200000009f * (fRec187[i] * fSlow82));
				
			}
			/* Recursive loop 650 */
			/* Pre code */
			for (int j470 = 0; (j470 < 4); j470 = (j470 + 1)) {
				fYec100_tmp[j470] = fYec100_perm[j470];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec100[i] = min(1.0f, (fConst41 * fRec300[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec100_perm[j] = fYec100_tmp[(count + j)];
				
			}
			/* Recursive loop 651 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec195[i] = (((((fSlow100 * (((((((fSlow102 * fZec193[i]) + (fSlow104 * (fZec139[i] + (0.00200000009f * (fRec158[i] * fSlow82))))) + (fSlow106 * fZec184[i])) + (fSlow108 * (fZec155[i] + fZec194[i]))) + (fSlow110 * fZec185[i])) + (fSlow112 * fZec186[i])) + (fSlow114 * fZec187[i]))) + (fSlow115 * ((fSlow117 * (((fRec284[i] + fRec286[i]) + fRec288[i]) + fRec290[i])) + (fSlow118 * (((fRec292[i] + fRec294[i]) + fRec296[i]) + fRec298[i]))))) + (fSlow119 * (((0.25f * (fZec193[i] + fZec154[i])) + (fZec194[i] + (0.5f * fZec187[i]))) * max(fSlow120, (0.25f * (((fYec100[i] + fYec100[(i - 2)]) + fYec100[(i - 3)]) + fYec100[(i - 4)])))))) + (fRec306[i] * ((4.5f * fRec307[i]) + 0.5f))) * ((0.0500000007f * fRec308[i]) + 0.00100000005f));
				
			}
			/* Vectorizable loop 652 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fOutput0[i] = FAUSTFLOAT(fZec195[i]);
				
			}
			/* Vectorizable loop 653 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fOutput1[i] = FAUSTFLOAT(fZec195[i]);
				
			}
			
		}
		/* Remaining frames */
		if (index < fullcount) {
			fOutput0 = &fOutput0_ptr[index];
			fOutput1 = &fOutput1_ptr[index];
			int count = (fullcount - index);
			/* Recursive loop 0 */
			/* Pre code */
			for (int j0 = 0; (j0 < 4); j0 = (j0 + 1)) {
				fRec5_tmp[j0] = fRec5_perm[j0];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec5[i] = (fSlow0 + ((fRec5[(i - 1)] > 1.0f)?(fRec5[(i - 1)] + -1.0f):fRec5[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec5_perm[j] = fRec5_tmp[(count + j)];
				
			}
			/* Recursive loop 1 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec0[i] = (fSlow1 + ((fSlow2 * sinf((6.28318548f * fRec5[i]))) + 1.0f));
				
			}
			/* Recursive loop 2 */
			/* Pre code */
			for (int j1 = 0; (j1 < 4); j1 = (j1 + 1)) {
				fRec4_tmp[j1] = fRec4_perm[j1];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec1[i] = (fRec4[(i - 1)] + (fConst1 * (4186.00928f * (fZec0[i] * fSlow5))));
				fRec4[i] = ((fZec1[i] > 1.0f)?(fZec1[i] + -1.0f):fZec1[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec4_perm[j] = fRec4_tmp[(count + j)];
				
			}
			/* Recursive loop 3 */
			/* Pre code */
			for (int j10 = 0; (j10 < 4); j10 = (j10 + 1)) {
				fRec11_tmp[j10] = fRec11_perm[j10];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec5[i] = (fRec11[(i - 1)] + (fConst1 * (4434.92188f * (fZec0[i] * fSlow6))));
				fRec11[i] = ((fZec5[i] > 1.0f)?(fZec5[i] + -1.0f):fZec5[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec11_perm[j] = fRec11_tmp[(count + j)];
				
			}
			/* Recursive loop 4 */
			/* Pre code */
			for (int j19 = 0; (j19 < 4); j19 = (j19 + 1)) {
				fRec17_tmp[j19] = fRec17_perm[j19];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec9[i] = (fRec17[(i - 1)] + (fConst1 * (4698.63623f * (fZec0[i] * fSlow7))));
				fRec17[i] = ((fZec9[i] > 1.0f)?(fZec9[i] + -1.0f):fZec9[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec17_perm[j] = fRec17_tmp[(count + j)];
				
			}
			/* Recursive loop 5 */
			/* Pre code */
			for (int j28 = 0; (j28 < 4); j28 = (j28 + 1)) {
				fRec23_tmp[j28] = fRec23_perm[j28];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec13[i] = (fRec23[(i - 1)] + (fConst1 * (4978.03174f * (fZec0[i] * fSlow8))));
				fRec23[i] = ((fZec13[i] > 1.0f)?(fZec13[i] + -1.0f):fZec13[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec23_perm[j] = fRec23_tmp[(count + j)];
				
			}
			/* Recursive loop 6 */
			/* Pre code */
			for (int j37 = 0; (j37 < 4); j37 = (j37 + 1)) {
				fRec29_tmp[j37] = fRec29_perm[j37];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec17[i] = (fRec29[(i - 1)] + (fConst1 * (5274.04102f * (fZec0[i] * fSlow9))));
				fRec29[i] = ((fZec17[i] > 1.0f)?(fZec17[i] + -1.0f):fZec17[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec29_perm[j] = fRec29_tmp[(count + j)];
				
			}
			/* Recursive loop 7 */
			/* Pre code */
			for (int j46 = 0; (j46 < 4); j46 = (j46 + 1)) {
				fRec35_tmp[j46] = fRec35_perm[j46];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec21[i] = (fRec35[(i - 1)] + (fConst1 * (5587.65186f * (fZec0[i] * fSlow10))));
				fRec35[i] = ((fZec21[i] > 1.0f)?(fZec21[i] + -1.0f):fZec21[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec35_perm[j] = fRec35_tmp[(count + j)];
				
			}
			/* Recursive loop 8 */
			/* Pre code */
			for (int j55 = 0; (j55 < 4); j55 = (j55 + 1)) {
				fRec41_tmp[j55] = fRec41_perm[j55];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec25[i] = (fRec41[(i - 1)] + (fConst1 * (5919.91064f * (fZec0[i] * fSlow11))));
				fRec41[i] = ((fZec25[i] > 1.0f)?(fZec25[i] + -1.0f):fZec25[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec41_perm[j] = fRec41_tmp[(count + j)];
				
			}
			/* Recursive loop 9 */
			/* Pre code */
			for (int j64 = 0; (j64 < 4); j64 = (j64 + 1)) {
				fRec47_tmp[j64] = fRec47_perm[j64];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec29[i] = (fRec47[(i - 1)] + (fConst1 * (6271.92676f * (fZec0[i] * fSlow12))));
				fRec47[i] = ((fZec29[i] > 1.0f)?(fZec29[i] + -1.0f):fZec29[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec47_perm[j] = fRec47_tmp[(count + j)];
				
			}
			/* Recursive loop 10 */
			/* Pre code */
			for (int j73 = 0; (j73 < 4); j73 = (j73 + 1)) {
				fRec53_tmp[j73] = fRec53_perm[j73];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec33[i] = (fRec53[(i - 1)] + (fConst1 * (6644.875f * (fZec0[i] * fSlow13))));
				fRec53[i] = ((fZec33[i] > 1.0f)?(fZec33[i] + -1.0f):fZec33[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec53_perm[j] = fRec53_tmp[(count + j)];
				
			}
			/* Recursive loop 11 */
			/* Pre code */
			for (int j82 = 0; (j82 < 4); j82 = (j82 + 1)) {
				fRec59_tmp[j82] = fRec59_perm[j82];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec37[i] = (fRec59[(i - 1)] + (fConst1 * (7040.0f * (fZec0[i] * fSlow14))));
				fRec59[i] = ((fZec37[i] > 1.0f)?(fZec37[i] + -1.0f):fZec37[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec59_perm[j] = fRec59_tmp[(count + j)];
				
			}
			/* Recursive loop 12 */
			/* Pre code */
			for (int j91 = 0; (j91 < 4); j91 = (j91 + 1)) {
				fRec65_tmp[j91] = fRec65_perm[j91];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec41[i] = (fRec65[(i - 1)] + (fConst1 * (7458.62012f * (fZec0[i] * fSlow15))));
				fRec65[i] = ((fZec41[i] > 1.0f)?(fZec41[i] + -1.0f):fZec41[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec65_perm[j] = fRec65_tmp[(count + j)];
				
			}
			/* Recursive loop 13 */
			/* Pre code */
			for (int j100 = 0; (j100 < 4); j100 = (j100 + 1)) {
				fRec71_tmp[j100] = fRec71_perm[j100];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec45[i] = (fRec71[(i - 1)] + (fConst1 * (7902.13281f * (fZec0[i] * fSlow16))));
				fRec71[i] = ((fZec45[i] > 1.0f)?(fZec45[i] + -1.0f):fZec45[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec71_perm[j] = fRec71_tmp[(count + j)];
				
			}
			/* Recursive loop 14 */
			/* Pre code */
			for (int j2 = 0; (j2 < 4); j2 = (j2 + 1)) {
				iRec6_tmp[j2] = iRec6_perm[j2];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec6[i] = (((fRec4[i] - fRec4[(i - 1)]) < 0.0f)?(1 - iRec6[(i - 1)]):iRec6[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec6_perm[j] = iRec6_tmp[(count + j)];
				
			}
			/* Recursive loop 15 */
			/* Pre code */
			for (int j11 = 0; (j11 < 4); j11 = (j11 + 1)) {
				iRec12_tmp[j11] = iRec12_perm[j11];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec12[i] = (((fRec11[i] - fRec11[(i - 1)]) < 0.0f)?(1 - iRec12[(i - 1)]):iRec12[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec12_perm[j] = iRec12_tmp[(count + j)];
				
			}
			/* Recursive loop 16 */
			/* Pre code */
			for (int j20 = 0; (j20 < 4); j20 = (j20 + 1)) {
				iRec18_tmp[j20] = iRec18_perm[j20];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec18[i] = (((fRec17[i] - fRec17[(i - 1)]) < 0.0f)?(1 - iRec18[(i - 1)]):iRec18[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec18_perm[j] = iRec18_tmp[(count + j)];
				
			}
			/* Recursive loop 17 */
			/* Pre code */
			for (int j29 = 0; (j29 < 4); j29 = (j29 + 1)) {
				iRec24_tmp[j29] = iRec24_perm[j29];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec24[i] = (((fRec23[i] - fRec23[(i - 1)]) < 0.0f)?(1 - iRec24[(i - 1)]):iRec24[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec24_perm[j] = iRec24_tmp[(count + j)];
				
			}
			/* Recursive loop 18 */
			/* Pre code */
			for (int j38 = 0; (j38 < 4); j38 = (j38 + 1)) {
				iRec30_tmp[j38] = iRec30_perm[j38];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec30[i] = (((fRec29[i] - fRec29[(i - 1)]) < 0.0f)?(1 - iRec30[(i - 1)]):iRec30[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec30_perm[j] = iRec30_tmp[(count + j)];
				
			}
			/* Recursive loop 19 */
			/* Pre code */
			for (int j47 = 0; (j47 < 4); j47 = (j47 + 1)) {
				iRec36_tmp[j47] = iRec36_perm[j47];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec36[i] = (((fRec35[i] - fRec35[(i - 1)]) < 0.0f)?(1 - iRec36[(i - 1)]):iRec36[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec36_perm[j] = iRec36_tmp[(count + j)];
				
			}
			/* Recursive loop 20 */
			/* Pre code */
			for (int j56 = 0; (j56 < 4); j56 = (j56 + 1)) {
				iRec42_tmp[j56] = iRec42_perm[j56];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec42[i] = (((fRec41[i] - fRec41[(i - 1)]) < 0.0f)?(1 - iRec42[(i - 1)]):iRec42[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec42_perm[j] = iRec42_tmp[(count + j)];
				
			}
			/* Recursive loop 21 */
			/* Pre code */
			for (int j65 = 0; (j65 < 4); j65 = (j65 + 1)) {
				iRec48_tmp[j65] = iRec48_perm[j65];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec48[i] = (((fRec47[i] - fRec47[(i - 1)]) < 0.0f)?(1 - iRec48[(i - 1)]):iRec48[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec48_perm[j] = iRec48_tmp[(count + j)];
				
			}
			/* Recursive loop 22 */
			/* Pre code */
			for (int j74 = 0; (j74 < 4); j74 = (j74 + 1)) {
				iRec54_tmp[j74] = iRec54_perm[j74];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec54[i] = (((fRec53[i] - fRec53[(i - 1)]) < 0.0f)?(1 - iRec54[(i - 1)]):iRec54[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec54_perm[j] = iRec54_tmp[(count + j)];
				
			}
			/* Recursive loop 23 */
			/* Pre code */
			for (int j83 = 0; (j83 < 4); j83 = (j83 + 1)) {
				iRec60_tmp[j83] = iRec60_perm[j83];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec60[i] = (((fRec59[i] - fRec59[(i - 1)]) < 0.0f)?(1 - iRec60[(i - 1)]):iRec60[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec60_perm[j] = iRec60_tmp[(count + j)];
				
			}
			/* Recursive loop 24 */
			/* Pre code */
			for (int j92 = 0; (j92 < 4); j92 = (j92 + 1)) {
				iRec66_tmp[j92] = iRec66_perm[j92];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec66[i] = (((fRec65[i] - fRec65[(i - 1)]) < 0.0f)?(1 - iRec66[(i - 1)]):iRec66[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec66_perm[j] = iRec66_tmp[(count + j)];
				
			}
			/* Recursive loop 25 */
			/* Pre code */
			for (int j101 = 0; (j101 < 4); j101 = (j101 + 1)) {
				iRec72_tmp[j101] = iRec72_perm[j101];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec72[i] = (((fRec71[i] - fRec71[(i - 1)]) < 0.0f)?(1 - iRec72[(i - 1)]):iRec72[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec72_perm[j] = iRec72_tmp[(count + j)];
				
			}
			/* Recursive loop 26 */
			/* Pre code */
			for (int j3 = 0; (j3 < 4); j3 = (j3 + 1)) {
				fYec0_tmp[j3] = fYec0_perm[j3];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec0[i] = (fRec4[i] + float(iRec6[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec0_perm[j] = fYec0_tmp[(count + j)];
				
			}
			/* Recursive loop 27 */
			/* Pre code */
			for (int j12 = 0; (j12 < 4); j12 = (j12 + 1)) {
				fYec3_tmp[j12] = fYec3_perm[j12];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec3[i] = (fRec11[i] + float(iRec12[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec3_perm[j] = fYec3_tmp[(count + j)];
				
			}
			/* Recursive loop 28 */
			/* Pre code */
			for (int j21 = 0; (j21 < 4); j21 = (j21 + 1)) {
				fYec6_tmp[j21] = fYec6_perm[j21];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec6[i] = (fRec17[i] + float(iRec18[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec6_perm[j] = fYec6_tmp[(count + j)];
				
			}
			/* Recursive loop 29 */
			/* Pre code */
			for (int j30 = 0; (j30 < 4); j30 = (j30 + 1)) {
				fYec9_tmp[j30] = fYec9_perm[j30];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec9[i] = (fRec23[i] + float(iRec24[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec9_perm[j] = fYec9_tmp[(count + j)];
				
			}
			/* Recursive loop 30 */
			/* Pre code */
			for (int j39 = 0; (j39 < 4); j39 = (j39 + 1)) {
				fYec12_tmp[j39] = fYec12_perm[j39];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec12[i] = (fRec29[i] + float(iRec30[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec12_perm[j] = fYec12_tmp[(count + j)];
				
			}
			/* Recursive loop 31 */
			/* Pre code */
			for (int j48 = 0; (j48 < 4); j48 = (j48 + 1)) {
				fYec15_tmp[j48] = fYec15_perm[j48];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec15[i] = (fRec35[i] + float(iRec36[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec15_perm[j] = fYec15_tmp[(count + j)];
				
			}
			/* Recursive loop 32 */
			/* Pre code */
			for (int j57 = 0; (j57 < 4); j57 = (j57 + 1)) {
				fYec18_tmp[j57] = fYec18_perm[j57];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec18[i] = (fRec41[i] + float(iRec42[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec18_perm[j] = fYec18_tmp[(count + j)];
				
			}
			/* Recursive loop 33 */
			/* Pre code */
			for (int j66 = 0; (j66 < 4); j66 = (j66 + 1)) {
				fYec21_tmp[j66] = fYec21_perm[j66];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec21[i] = (fRec47[i] + float(iRec48[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec21_perm[j] = fYec21_tmp[(count + j)];
				
			}
			/* Recursive loop 34 */
			/* Pre code */
			for (int j75 = 0; (j75 < 4); j75 = (j75 + 1)) {
				fYec24_tmp[j75] = fYec24_perm[j75];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec24[i] = (fRec53[i] + float(iRec54[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec24_perm[j] = fYec24_tmp[(count + j)];
				
			}
			/* Recursive loop 35 */
			/* Pre code */
			for (int j84 = 0; (j84 < 4); j84 = (j84 + 1)) {
				fYec27_tmp[j84] = fYec27_perm[j84];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec27[i] = (fRec59[i] + float(iRec60[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec27_perm[j] = fYec27_tmp[(count + j)];
				
			}
			/* Recursive loop 36 */
			/* Pre code */
			for (int j93 = 0; (j93 < 4); j93 = (j93 + 1)) {
				fYec30_tmp[j93] = fYec30_perm[j93];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec30[i] = (fRec65[i] + float(iRec66[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec30_perm[j] = fYec30_tmp[(count + j)];
				
			}
			/* Recursive loop 37 */
			/* Pre code */
			for (int j102 = 0; (j102 < 4); j102 = (j102 + 1)) {
				fYec33_tmp[j102] = fYec33_perm[j102];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec33[i] = (fRec71[i] + float(iRec72[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec33_perm[j] = fYec33_tmp[(count + j)];
				
			}
			/* Recursive loop 38 */
			/* Pre code */
			for (int j4 = 0; (j4 < 4); j4 = (j4 + 1)) {
				iRec3_tmp[j4] = iRec3_perm[j4];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec3[i] = (((0.5f * (fYec0[i] - fYec0[(i - 1)])) < 0.0f)?(1 - iRec3[(i - 1)]):iRec3[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec3_perm[j] = iRec3_tmp[(count + j)];
				
			}
			/* Recursive loop 39 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec2[i] = (0.5f * fYec0[i]);
				
			}
			/* Recursive loop 40 */
			/* Pre code */
			for (int j13 = 0; (j13 < 4); j13 = (j13 + 1)) {
				iRec10_tmp[j13] = iRec10_perm[j13];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec10[i] = (((0.5f * (fYec3[i] - fYec3[(i - 1)])) < 0.0f)?(1 - iRec10[(i - 1)]):iRec10[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec10_perm[j] = iRec10_tmp[(count + j)];
				
			}
			/* Recursive loop 41 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec6[i] = (0.5f * fYec3[i]);
				
			}
			/* Recursive loop 42 */
			/* Pre code */
			for (int j22 = 0; (j22 < 4); j22 = (j22 + 1)) {
				iRec16_tmp[j22] = iRec16_perm[j22];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec16[i] = (((0.5f * (fYec6[i] - fYec6[(i - 1)])) < 0.0f)?(1 - iRec16[(i - 1)]):iRec16[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec16_perm[j] = iRec16_tmp[(count + j)];
				
			}
			/* Recursive loop 43 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec10[i] = (0.5f * fYec6[i]);
				
			}
			/* Recursive loop 44 */
			/* Pre code */
			for (int j31 = 0; (j31 < 4); j31 = (j31 + 1)) {
				iRec22_tmp[j31] = iRec22_perm[j31];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec22[i] = (((0.5f * (fYec9[i] - fYec9[(i - 1)])) < 0.0f)?(1 - iRec22[(i - 1)]):iRec22[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec22_perm[j] = iRec22_tmp[(count + j)];
				
			}
			/* Recursive loop 45 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec14[i] = (0.5f * fYec9[i]);
				
			}
			/* Recursive loop 46 */
			/* Pre code */
			for (int j40 = 0; (j40 < 4); j40 = (j40 + 1)) {
				iRec28_tmp[j40] = iRec28_perm[j40];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec28[i] = (((0.5f * (fYec12[i] - fYec12[(i - 1)])) < 0.0f)?(1 - iRec28[(i - 1)]):iRec28[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec28_perm[j] = iRec28_tmp[(count + j)];
				
			}
			/* Recursive loop 47 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec18[i] = (0.5f * fYec12[i]);
				
			}
			/* Recursive loop 48 */
			/* Pre code */
			for (int j49 = 0; (j49 < 4); j49 = (j49 + 1)) {
				iRec34_tmp[j49] = iRec34_perm[j49];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec34[i] = (((0.5f * (fYec15[i] - fYec15[(i - 1)])) < 0.0f)?(1 - iRec34[(i - 1)]):iRec34[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec34_perm[j] = iRec34_tmp[(count + j)];
				
			}
			/* Recursive loop 49 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec22[i] = (0.5f * fYec15[i]);
				
			}
			/* Recursive loop 50 */
			/* Pre code */
			for (int j58 = 0; (j58 < 4); j58 = (j58 + 1)) {
				iRec40_tmp[j58] = iRec40_perm[j58];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec40[i] = (((0.5f * (fYec18[i] - fYec18[(i - 1)])) < 0.0f)?(1 - iRec40[(i - 1)]):iRec40[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec40_perm[j] = iRec40_tmp[(count + j)];
				
			}
			/* Recursive loop 51 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec26[i] = (0.5f * fYec18[i]);
				
			}
			/* Recursive loop 52 */
			/* Pre code */
			for (int j67 = 0; (j67 < 4); j67 = (j67 + 1)) {
				iRec46_tmp[j67] = iRec46_perm[j67];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec46[i] = (((0.5f * (fYec21[i] - fYec21[(i - 1)])) < 0.0f)?(1 - iRec46[(i - 1)]):iRec46[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec46_perm[j] = iRec46_tmp[(count + j)];
				
			}
			/* Recursive loop 53 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec30[i] = (0.5f * fYec21[i]);
				
			}
			/* Recursive loop 54 */
			/* Pre code */
			for (int j76 = 0; (j76 < 4); j76 = (j76 + 1)) {
				iRec52_tmp[j76] = iRec52_perm[j76];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec52[i] = (((0.5f * (fYec24[i] - fYec24[(i - 1)])) < 0.0f)?(1 - iRec52[(i - 1)]):iRec52[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec52_perm[j] = iRec52_tmp[(count + j)];
				
			}
			/* Recursive loop 55 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec34[i] = (0.5f * fYec24[i]);
				
			}
			/* Recursive loop 56 */
			/* Pre code */
			for (int j85 = 0; (j85 < 4); j85 = (j85 + 1)) {
				iRec58_tmp[j85] = iRec58_perm[j85];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec58[i] = (((0.5f * (fYec27[i] - fYec27[(i - 1)])) < 0.0f)?(1 - iRec58[(i - 1)]):iRec58[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec58_perm[j] = iRec58_tmp[(count + j)];
				
			}
			/* Recursive loop 57 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec38[i] = (0.5f * fYec27[i]);
				
			}
			/* Recursive loop 58 */
			/* Pre code */
			for (int j94 = 0; (j94 < 4); j94 = (j94 + 1)) {
				iRec64_tmp[j94] = iRec64_perm[j94];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec64[i] = (((0.5f * (fYec30[i] - fYec30[(i - 1)])) < 0.0f)?(1 - iRec64[(i - 1)]):iRec64[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec64_perm[j] = iRec64_tmp[(count + j)];
				
			}
			/* Recursive loop 59 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec42[i] = (0.5f * fYec30[i]);
				
			}
			/* Recursive loop 60 */
			/* Pre code */
			for (int j103 = 0; (j103 < 4); j103 = (j103 + 1)) {
				iRec70_tmp[j103] = iRec70_perm[j103];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec70[i] = (((0.5f * (fYec33[i] - fYec33[(i - 1)])) < 0.0f)?(1 - iRec70[(i - 1)]):iRec70[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec70_perm[j] = iRec70_tmp[(count + j)];
				
			}
			/* Recursive loop 61 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec46[i] = (0.5f * fYec33[i]);
				
			}
			/* Recursive loop 62 */
			/* Pre code */
			for (int j5 = 0; (j5 < 4); j5 = (j5 + 1)) {
				fYec1_tmp[j5] = fYec1_perm[j5];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec1[i] = (float(iRec3[i]) + fZec2[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec1_perm[j] = fYec1_tmp[(count + j)];
				
			}
			/* Recursive loop 63 */
			/* Pre code */
			for (int j14 = 0; (j14 < 4); j14 = (j14 + 1)) {
				fYec4_tmp[j14] = fYec4_perm[j14];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec4[i] = (float(iRec10[i]) + fZec6[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec4_perm[j] = fYec4_tmp[(count + j)];
				
			}
			/* Recursive loop 64 */
			/* Pre code */
			for (int j23 = 0; (j23 < 4); j23 = (j23 + 1)) {
				fYec7_tmp[j23] = fYec7_perm[j23];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec7[i] = (float(iRec16[i]) + fZec10[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec7_perm[j] = fYec7_tmp[(count + j)];
				
			}
			/* Recursive loop 65 */
			/* Pre code */
			for (int j32 = 0; (j32 < 4); j32 = (j32 + 1)) {
				fYec10_tmp[j32] = fYec10_perm[j32];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec10[i] = (float(iRec22[i]) + fZec14[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec10_perm[j] = fYec10_tmp[(count + j)];
				
			}
			/* Recursive loop 66 */
			/* Pre code */
			for (int j41 = 0; (j41 < 4); j41 = (j41 + 1)) {
				fYec13_tmp[j41] = fYec13_perm[j41];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec13[i] = (float(iRec28[i]) + fZec18[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec13_perm[j] = fYec13_tmp[(count + j)];
				
			}
			/* Recursive loop 67 */
			/* Pre code */
			for (int j50 = 0; (j50 < 4); j50 = (j50 + 1)) {
				fYec16_tmp[j50] = fYec16_perm[j50];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec16[i] = (float(iRec34[i]) + fZec22[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec16_perm[j] = fYec16_tmp[(count + j)];
				
			}
			/* Recursive loop 68 */
			/* Pre code */
			for (int j59 = 0; (j59 < 4); j59 = (j59 + 1)) {
				fYec19_tmp[j59] = fYec19_perm[j59];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec19[i] = (float(iRec40[i]) + fZec26[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec19_perm[j] = fYec19_tmp[(count + j)];
				
			}
			/* Recursive loop 69 */
			/* Pre code */
			for (int j68 = 0; (j68 < 4); j68 = (j68 + 1)) {
				fYec22_tmp[j68] = fYec22_perm[j68];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec22[i] = (float(iRec46[i]) + fZec30[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec22_perm[j] = fYec22_tmp[(count + j)];
				
			}
			/* Recursive loop 70 */
			/* Pre code */
			for (int j77 = 0; (j77 < 4); j77 = (j77 + 1)) {
				fYec25_tmp[j77] = fYec25_perm[j77];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec25[i] = (float(iRec52[i]) + fZec34[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec25_perm[j] = fYec25_tmp[(count + j)];
				
			}
			/* Recursive loop 71 */
			/* Pre code */
			for (int j86 = 0; (j86 < 4); j86 = (j86 + 1)) {
				fYec28_tmp[j86] = fYec28_perm[j86];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec28[i] = (float(iRec58[i]) + fZec38[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec28_perm[j] = fYec28_tmp[(count + j)];
				
			}
			/* Recursive loop 72 */
			/* Pre code */
			for (int j95 = 0; (j95 < 4); j95 = (j95 + 1)) {
				fYec31_tmp[j95] = fYec31_perm[j95];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec31[i] = (float(iRec64[i]) + fZec42[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec31_perm[j] = fYec31_tmp[(count + j)];
				
			}
			/* Recursive loop 73 */
			/* Pre code */
			for (int j104 = 0; (j104 < 4); j104 = (j104 + 1)) {
				fYec34_tmp[j104] = fYec34_perm[j104];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec34[i] = (float(iRec70[i]) + fZec46[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec34_perm[j] = fYec34_tmp[(count + j)];
				
			}
			/* Recursive loop 74 */
			/* Pre code */
			for (int j6 = 0; (j6 < 4); j6 = (j6 + 1)) {
				iRec2_tmp[j6] = iRec2_perm[j6];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec2[i] = (((0.5f * (fYec1[i] - fYec1[(i - 1)])) < 0.0f)?(1 - iRec2[(i - 1)]):iRec2[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec2_perm[j] = iRec2_tmp[(count + j)];
				
			}
			/* Recursive loop 75 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec3[i] = (0.5f * fYec1[i]);
				
			}
			/* Recursive loop 76 */
			/* Pre code */
			for (int j15 = 0; (j15 < 4); j15 = (j15 + 1)) {
				iRec9_tmp[j15] = iRec9_perm[j15];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec9[i] = (((0.5f * (fYec4[i] - fYec4[(i - 1)])) < 0.0f)?(1 - iRec9[(i - 1)]):iRec9[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec9_perm[j] = iRec9_tmp[(count + j)];
				
			}
			/* Recursive loop 77 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec7[i] = (0.5f * fYec4[i]);
				
			}
			/* Recursive loop 78 */
			/* Pre code */
			for (int j24 = 0; (j24 < 4); j24 = (j24 + 1)) {
				iRec15_tmp[j24] = iRec15_perm[j24];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec15[i] = (((0.5f * (fYec7[i] - fYec7[(i - 1)])) < 0.0f)?(1 - iRec15[(i - 1)]):iRec15[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec15_perm[j] = iRec15_tmp[(count + j)];
				
			}
			/* Recursive loop 79 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec11[i] = (0.5f * fYec7[i]);
				
			}
			/* Recursive loop 80 */
			/* Pre code */
			for (int j33 = 0; (j33 < 4); j33 = (j33 + 1)) {
				iRec21_tmp[j33] = iRec21_perm[j33];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec21[i] = (((0.5f * (fYec10[i] - fYec10[(i - 1)])) < 0.0f)?(1 - iRec21[(i - 1)]):iRec21[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec21_perm[j] = iRec21_tmp[(count + j)];
				
			}
			/* Recursive loop 81 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec15[i] = (0.5f * fYec10[i]);
				
			}
			/* Recursive loop 82 */
			/* Pre code */
			for (int j42 = 0; (j42 < 4); j42 = (j42 + 1)) {
				iRec27_tmp[j42] = iRec27_perm[j42];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec27[i] = (((0.5f * (fYec13[i] - fYec13[(i - 1)])) < 0.0f)?(1 - iRec27[(i - 1)]):iRec27[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec27_perm[j] = iRec27_tmp[(count + j)];
				
			}
			/* Recursive loop 83 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec19[i] = (0.5f * fYec13[i]);
				
			}
			/* Recursive loop 84 */
			/* Pre code */
			for (int j51 = 0; (j51 < 4); j51 = (j51 + 1)) {
				iRec33_tmp[j51] = iRec33_perm[j51];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec33[i] = (((0.5f * (fYec16[i] - fYec16[(i - 1)])) < 0.0f)?(1 - iRec33[(i - 1)]):iRec33[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec33_perm[j] = iRec33_tmp[(count + j)];
				
			}
			/* Recursive loop 85 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec23[i] = (0.5f * fYec16[i]);
				
			}
			/* Recursive loop 86 */
			/* Pre code */
			for (int j60 = 0; (j60 < 4); j60 = (j60 + 1)) {
				iRec39_tmp[j60] = iRec39_perm[j60];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec39[i] = (((0.5f * (fYec19[i] - fYec19[(i - 1)])) < 0.0f)?(1 - iRec39[(i - 1)]):iRec39[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec39_perm[j] = iRec39_tmp[(count + j)];
				
			}
			/* Recursive loop 87 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec27[i] = (0.5f * fYec19[i]);
				
			}
			/* Recursive loop 88 */
			/* Pre code */
			for (int j69 = 0; (j69 < 4); j69 = (j69 + 1)) {
				iRec45_tmp[j69] = iRec45_perm[j69];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec45[i] = (((0.5f * (fYec22[i] - fYec22[(i - 1)])) < 0.0f)?(1 - iRec45[(i - 1)]):iRec45[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec45_perm[j] = iRec45_tmp[(count + j)];
				
			}
			/* Recursive loop 89 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec31[i] = (0.5f * fYec22[i]);
				
			}
			/* Recursive loop 90 */
			/* Pre code */
			for (int j78 = 0; (j78 < 4); j78 = (j78 + 1)) {
				iRec51_tmp[j78] = iRec51_perm[j78];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec51[i] = (((0.5f * (fYec25[i] - fYec25[(i - 1)])) < 0.0f)?(1 - iRec51[(i - 1)]):iRec51[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec51_perm[j] = iRec51_tmp[(count + j)];
				
			}
			/* Recursive loop 91 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec35[i] = (0.5f * fYec25[i]);
				
			}
			/* Recursive loop 92 */
			/* Pre code */
			for (int j87 = 0; (j87 < 4); j87 = (j87 + 1)) {
				iRec57_tmp[j87] = iRec57_perm[j87];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec57[i] = (((0.5f * (fYec28[i] - fYec28[(i - 1)])) < 0.0f)?(1 - iRec57[(i - 1)]):iRec57[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec57_perm[j] = iRec57_tmp[(count + j)];
				
			}
			/* Recursive loop 93 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec39[i] = (0.5f * fYec28[i]);
				
			}
			/* Recursive loop 94 */
			/* Pre code */
			for (int j96 = 0; (j96 < 4); j96 = (j96 + 1)) {
				iRec63_tmp[j96] = iRec63_perm[j96];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec63[i] = (((0.5f * (fYec31[i] - fYec31[(i - 1)])) < 0.0f)?(1 - iRec63[(i - 1)]):iRec63[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec63_perm[j] = iRec63_tmp[(count + j)];
				
			}
			/* Recursive loop 95 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec43[i] = (0.5f * fYec31[i]);
				
			}
			/* Recursive loop 96 */
			/* Pre code */
			for (int j105 = 0; (j105 < 4); j105 = (j105 + 1)) {
				iRec69_tmp[j105] = iRec69_perm[j105];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec69[i] = (((0.5f * (fYec34[i] - fYec34[(i - 1)])) < 0.0f)?(1 - iRec69[(i - 1)]):iRec69[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec69_perm[j] = iRec69_tmp[(count + j)];
				
			}
			/* Recursive loop 97 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec47[i] = (0.5f * fYec34[i]);
				
			}
			/* Recursive loop 98 */
			/* Pre code */
			for (int j7 = 0; (j7 < 4); j7 = (j7 + 1)) {
				fYec2_tmp[j7] = fYec2_perm[j7];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec2[i] = (float(iRec2[i]) + fZec3[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec2_perm[j] = fYec2_tmp[(count + j)];
				
			}
			/* Recursive loop 99 */
			/* Pre code */
			for (int j16 = 0; (j16 < 4); j16 = (j16 + 1)) {
				fYec5_tmp[j16] = fYec5_perm[j16];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec5[i] = (float(iRec9[i]) + fZec7[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec5_perm[j] = fYec5_tmp[(count + j)];
				
			}
			/* Recursive loop 100 */
			/* Pre code */
			for (int j25 = 0; (j25 < 4); j25 = (j25 + 1)) {
				fYec8_tmp[j25] = fYec8_perm[j25];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec8[i] = (float(iRec15[i]) + fZec11[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec8_perm[j] = fYec8_tmp[(count + j)];
				
			}
			/* Recursive loop 101 */
			/* Pre code */
			for (int j34 = 0; (j34 < 4); j34 = (j34 + 1)) {
				fYec11_tmp[j34] = fYec11_perm[j34];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec11[i] = (float(iRec21[i]) + fZec15[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec11_perm[j] = fYec11_tmp[(count + j)];
				
			}
			/* Recursive loop 102 */
			/* Pre code */
			for (int j43 = 0; (j43 < 4); j43 = (j43 + 1)) {
				fYec14_tmp[j43] = fYec14_perm[j43];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec14[i] = (float(iRec27[i]) + fZec19[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec14_perm[j] = fYec14_tmp[(count + j)];
				
			}
			/* Recursive loop 103 */
			/* Pre code */
			for (int j52 = 0; (j52 < 4); j52 = (j52 + 1)) {
				fYec17_tmp[j52] = fYec17_perm[j52];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec17[i] = (float(iRec33[i]) + fZec23[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec17_perm[j] = fYec17_tmp[(count + j)];
				
			}
			/* Recursive loop 104 */
			/* Pre code */
			for (int j61 = 0; (j61 < 4); j61 = (j61 + 1)) {
				fYec20_tmp[j61] = fYec20_perm[j61];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec20[i] = (float(iRec39[i]) + fZec27[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec20_perm[j] = fYec20_tmp[(count + j)];
				
			}
			/* Recursive loop 105 */
			/* Pre code */
			for (int j70 = 0; (j70 < 4); j70 = (j70 + 1)) {
				fYec23_tmp[j70] = fYec23_perm[j70];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec23[i] = (float(iRec45[i]) + fZec31[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec23_perm[j] = fYec23_tmp[(count + j)];
				
			}
			/* Recursive loop 106 */
			/* Pre code */
			for (int j79 = 0; (j79 < 4); j79 = (j79 + 1)) {
				fYec26_tmp[j79] = fYec26_perm[j79];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec26[i] = (float(iRec51[i]) + fZec35[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec26_perm[j] = fYec26_tmp[(count + j)];
				
			}
			/* Recursive loop 107 */
			/* Pre code */
			for (int j88 = 0; (j88 < 4); j88 = (j88 + 1)) {
				fYec29_tmp[j88] = fYec29_perm[j88];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec29[i] = (float(iRec57[i]) + fZec39[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec29_perm[j] = fYec29_tmp[(count + j)];
				
			}
			/* Recursive loop 108 */
			/* Pre code */
			for (int j97 = 0; (j97 < 4); j97 = (j97 + 1)) {
				fYec32_tmp[j97] = fYec32_perm[j97];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec32[i] = (float(iRec63[i]) + fZec43[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec32_perm[j] = fYec32_tmp[(count + j)];
				
			}
			/* Recursive loop 109 */
			/* Pre code */
			for (int j106 = 0; (j106 < 4); j106 = (j106 + 1)) {
				fYec35_tmp[j106] = fYec35_perm[j106];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec35[i] = (float(iRec69[i]) + fZec47[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec35_perm[j] = fYec35_tmp[(count + j)];
				
			}
			/* Recursive loop 110 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec4[i] = (0.5f * fYec2[i]);
				
			}
			/* Recursive loop 111 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec8[i] = (0.5f * fYec5[i]);
				
			}
			/* Recursive loop 112 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec12[i] = (0.5f * fYec8[i]);
				
			}
			/* Recursive loop 113 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec16[i] = (0.5f * fYec11[i]);
				
			}
			/* Recursive loop 114 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec20[i] = (0.5f * fYec14[i]);
				
			}
			/* Recursive loop 115 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec24[i] = (0.5f * fYec17[i]);
				
			}
			/* Recursive loop 116 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec28[i] = (0.5f * fYec20[i]);
				
			}
			/* Recursive loop 117 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec32[i] = (0.5f * fYec23[i]);
				
			}
			/* Recursive loop 118 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec36[i] = (0.5f * fYec26[i]);
				
			}
			/* Recursive loop 119 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec40[i] = (0.5f * fYec29[i]);
				
			}
			/* Recursive loop 120 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec44[i] = (0.5f * fYec32[i]);
				
			}
			/* Recursive loop 121 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec48[i] = (0.5f * fYec35[i]);
				
			}
			/* Recursive loop 122 */
			/* Pre code */
			for (int j244 = 0; (j244 < 4); j244 = (j244 + 1)) {
				iRec136_tmp[j244] = iRec136_perm[j244];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec136[i] = (((0.5f * (fYec14[i] - fYec14[(i - 1)])) < 0.0f)?(1 - iRec136[(i - 1)]):iRec136[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec136_perm[j] = iRec136_tmp[(count + j)];
				
			}
			/* Recursive loop 123 */
			/* Pre code */
			for (int j248 = 0; (j248 < 4); j248 = (j248 + 1)) {
				iRec139_tmp[j248] = iRec139_perm[j248];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec139[i] = (((0.5f * (fYec17[i] - fYec17[(i - 1)])) < 0.0f)?(1 - iRec139[(i - 1)]):iRec139[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec139_perm[j] = iRec139_tmp[(count + j)];
				
			}
			/* Recursive loop 124 */
			/* Pre code */
			for (int j252 = 0; (j252 < 4); j252 = (j252 + 1)) {
				iRec142_tmp[j252] = iRec142_perm[j252];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec142[i] = (((0.5f * (fYec20[i] - fYec20[(i - 1)])) < 0.0f)?(1 - iRec142[(i - 1)]):iRec142[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec142_perm[j] = iRec142_tmp[(count + j)];
				
			}
			/* Recursive loop 125 */
			/* Pre code */
			for (int j256 = 0; (j256 < 4); j256 = (j256 + 1)) {
				iRec145_tmp[j256] = iRec145_perm[j256];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec145[i] = (((0.5f * (fYec23[i] - fYec23[(i - 1)])) < 0.0f)?(1 - iRec145[(i - 1)]):iRec145[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec145_perm[j] = iRec145_tmp[(count + j)];
				
			}
			/* Recursive loop 126 */
			/* Pre code */
			for (int j260 = 0; (j260 < 4); j260 = (j260 + 1)) {
				iRec148_tmp[j260] = iRec148_perm[j260];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec148[i] = (((0.5f * (fYec26[i] - fYec26[(i - 1)])) < 0.0f)?(1 - iRec148[(i - 1)]):iRec148[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec148_perm[j] = iRec148_tmp[(count + j)];
				
			}
			/* Recursive loop 127 */
			/* Pre code */
			for (int j264 = 0; (j264 < 4); j264 = (j264 + 1)) {
				iRec151_tmp[j264] = iRec151_perm[j264];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec151[i] = (((0.5f * (fYec29[i] - fYec29[(i - 1)])) < 0.0f)?(1 - iRec151[(i - 1)]):iRec151[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec151_perm[j] = iRec151_tmp[(count + j)];
				
			}
			/* Recursive loop 128 */
			/* Pre code */
			for (int j268 = 0; (j268 < 4); j268 = (j268 + 1)) {
				iRec154_tmp[j268] = iRec154_perm[j268];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec154[i] = (((0.5f * (fYec32[i] - fYec32[(i - 1)])) < 0.0f)?(1 - iRec154[(i - 1)]):iRec154[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec154_perm[j] = iRec154_tmp[(count + j)];
				
			}
			/* Recursive loop 129 */
			/* Pre code */
			for (int j272 = 0; (j272 < 4); j272 = (j272 + 1)) {
				iRec157_tmp[j272] = iRec157_perm[j272];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec157[i] = (((0.5f * (fYec35[i] - fYec35[(i - 1)])) < 0.0f)?(1 - iRec157[(i - 1)]):iRec157[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec157_perm[j] = iRec157_tmp[(count + j)];
				
			}
			/* Recursive loop 130 */
			/* Pre code */
			for (int j278 = 0; (j278 < 4); j278 = (j278 + 1)) {
				iRec161_tmp[j278] = iRec161_perm[j278];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec161[i] = (((0.5f * (fYec2[i] - fYec2[(i - 1)])) < 0.0f)?(1 - iRec161[(i - 1)]):iRec161[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec161_perm[j] = iRec161_tmp[(count + j)];
				
			}
			/* Recursive loop 131 */
			/* Pre code */
			for (int j282 = 0; (j282 < 4); j282 = (j282 + 1)) {
				iRec164_tmp[j282] = iRec164_perm[j282];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec164[i] = (((0.5f * (fYec5[i] - fYec5[(i - 1)])) < 0.0f)?(1 - iRec164[(i - 1)]):iRec164[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec164_perm[j] = iRec164_tmp[(count + j)];
				
			}
			/* Recursive loop 132 */
			/* Pre code */
			for (int j286 = 0; (j286 < 4); j286 = (j286 + 1)) {
				iRec167_tmp[j286] = iRec167_perm[j286];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec167[i] = (((0.5f * (fYec8[i] - fYec8[(i - 1)])) < 0.0f)?(1 - iRec167[(i - 1)]):iRec167[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec167_perm[j] = iRec167_tmp[(count + j)];
				
			}
			/* Recursive loop 133 */
			/* Pre code */
			for (int j290 = 0; (j290 < 4); j290 = (j290 + 1)) {
				iRec170_tmp[j290] = iRec170_perm[j290];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec170[i] = (((0.5f * (fYec11[i] - fYec11[(i - 1)])) < 0.0f)?(1 - iRec170[(i - 1)]):iRec170[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec170_perm[j] = iRec170_tmp[(count + j)];
				
			}
			/* Recursive loop 134 */
			/* Pre code */
			for (int j8 = 0; (j8 < 4); j8 = (j8 + 1)) {
				fRec1_tmp[j8] = fRec1_perm[j8];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec1[i] = (fRec1[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec4[i]), 0, 0)) - fRec1[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec1_perm[j] = fRec1_tmp[(count + j)];
				
			}
			/* Recursive loop 135 */
			/* Pre code */
			for (int j17 = 0; (j17 < 4); j17 = (j17 + 1)) {
				fRec8_tmp[j17] = fRec8_perm[j17];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec8[i] = (fRec8[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec8[i]), 1, 0)) - fRec8[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec8_perm[j] = fRec8_tmp[(count + j)];
				
			}
			/* Recursive loop 136 */
			/* Pre code */
			for (int j26 = 0; (j26 < 4); j26 = (j26 + 1)) {
				fRec14_tmp[j26] = fRec14_perm[j26];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec14[i] = (fRec14[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec12[i]), 2, 0)) - fRec14[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec14_perm[j] = fRec14_tmp[(count + j)];
				
			}
			/* Recursive loop 137 */
			/* Pre code */
			for (int j35 = 0; (j35 < 4); j35 = (j35 + 1)) {
				fRec20_tmp[j35] = fRec20_perm[j35];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec20[i] = (fRec20[(i - 1)] + (fConst2 * (float(yc20_get_sample(float(fZec16[i]), 3, 0)) - fRec20[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec20_perm[j] = fRec20_tmp[(count + j)];
				
			}
			/* Recursive loop 138 */
			/* Pre code */
			for (int j44 = 0; (j44 < 4); j44 = (j44 + 1)) {
				fRec26_tmp[j44] = fRec26_perm[j44];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec26[i] = (fRec26[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec20[i]), 4, 0)) - fRec26[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec26_perm[j] = fRec26_tmp[(count + j)];
				
			}
			/* Recursive loop 139 */
			/* Pre code */
			for (int j245 = 0; (j245 < 4); j245 = (j245 + 1)) {
				fYec49_tmp[j245] = fYec49_perm[j245];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec49[i] = (float(iRec136[i]) + fZec20[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec49_perm[j] = fYec49_tmp[(count + j)];
				
			}
			/* Recursive loop 140 */
			/* Pre code */
			for (int j249 = 0; (j249 < 4); j249 = (j249 + 1)) {
				fYec50_tmp[j249] = fYec50_perm[j249];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec50[i] = (float(iRec139[i]) + fZec24[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec50_perm[j] = fYec50_tmp[(count + j)];
				
			}
			/* Recursive loop 141 */
			/* Pre code */
			for (int j253 = 0; (j253 < 4); j253 = (j253 + 1)) {
				fYec51_tmp[j253] = fYec51_perm[j253];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec51[i] = (float(iRec142[i]) + fZec28[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec51_perm[j] = fYec51_tmp[(count + j)];
				
			}
			/* Recursive loop 142 */
			/* Pre code */
			for (int j257 = 0; (j257 < 4); j257 = (j257 + 1)) {
				fYec52_tmp[j257] = fYec52_perm[j257];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec52[i] = (float(iRec145[i]) + fZec32[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec52_perm[j] = fYec52_tmp[(count + j)];
				
			}
			/* Recursive loop 143 */
			/* Pre code */
			for (int j261 = 0; (j261 < 4); j261 = (j261 + 1)) {
				fYec53_tmp[j261] = fYec53_perm[j261];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec53[i] = (float(iRec148[i]) + fZec36[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec53_perm[j] = fYec53_tmp[(count + j)];
				
			}
			/* Recursive loop 144 */
			/* Pre code */
			for (int j265 = 0; (j265 < 4); j265 = (j265 + 1)) {
				fYec54_tmp[j265] = fYec54_perm[j265];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec54[i] = (float(iRec151[i]) + fZec40[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec54_perm[j] = fYec54_tmp[(count + j)];
				
			}
			/* Recursive loop 145 */
			/* Pre code */
			for (int j269 = 0; (j269 < 4); j269 = (j269 + 1)) {
				fYec55_tmp[j269] = fYec55_perm[j269];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec55[i] = (float(iRec154[i]) + fZec44[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec55_perm[j] = fYec55_tmp[(count + j)];
				
			}
			/* Recursive loop 146 */
			/* Pre code */
			for (int j273 = 0; (j273 < 4); j273 = (j273 + 1)) {
				fYec56_tmp[j273] = fYec56_perm[j273];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec56[i] = (float(iRec157[i]) + fZec48[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec56_perm[j] = fYec56_tmp[(count + j)];
				
			}
			/* Recursive loop 147 */
			/* Pre code */
			for (int j279 = 0; (j279 < 4); j279 = (j279 + 1)) {
				fYec58_tmp[j279] = fYec58_perm[j279];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec58[i] = (float(iRec161[i]) + fZec4[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec58_perm[j] = fYec58_tmp[(count + j)];
				
			}
			/* Recursive loop 148 */
			/* Pre code */
			for (int j283 = 0; (j283 < 4); j283 = (j283 + 1)) {
				fYec59_tmp[j283] = fYec59_perm[j283];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec59[i] = (float(iRec164[i]) + fZec8[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec59_perm[j] = fYec59_tmp[(count + j)];
				
			}
			/* Recursive loop 149 */
			/* Pre code */
			for (int j287 = 0; (j287 < 4); j287 = (j287 + 1)) {
				fYec60_tmp[j287] = fYec60_perm[j287];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec60[i] = (float(iRec167[i]) + fZec12[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec60_perm[j] = fYec60_tmp[(count + j)];
				
			}
			/* Recursive loop 150 */
			/* Pre code */
			for (int j291 = 0; (j291 < 4); j291 = (j291 + 1)) {
				fYec61_tmp[j291] = fYec61_perm[j291];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec61[i] = (float(iRec170[i]) + fZec16[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec61_perm[j] = fYec61_tmp[(count + j)];
				
			}
			/* Recursive loop 151 */
			/* Pre code */
			for (int j9 = 0; (j9 < 4); j9 = (j9 + 1)) {
				fRec0_tmp[j9] = fRec0_perm[j9];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec0[i] = (fConst5 * (fRec0[(i - 1)] + (fRec1[i] - fRec1[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec0_perm[j] = fRec0_tmp[(count + j)];
				
			}
			/* Recursive loop 152 */
			/* Pre code */
			for (int j18 = 0; (j18 < 4); j18 = (j18 + 1)) {
				fRec7_tmp[j18] = fRec7_perm[j18];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec7[i] = (fConst5 * (fRec7[(i - 1)] + (fRec8[i] - fRec8[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec7_perm[j] = fRec7_tmp[(count + j)];
				
			}
			/* Recursive loop 153 */
			/* Pre code */
			for (int j27 = 0; (j27 < 4); j27 = (j27 + 1)) {
				fRec13_tmp[j27] = fRec13_perm[j27];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec13[i] = (fConst5 * (fRec13[(i - 1)] + (fRec14[i] - fRec14[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec13_perm[j] = fRec13_tmp[(count + j)];
				
			}
			/* Recursive loop 154 */
			/* Pre code */
			for (int j36 = 0; (j36 < 4); j36 = (j36 + 1)) {
				fRec19_tmp[j36] = fRec19_perm[j36];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec19[i] = (fConst5 * (fRec19[(i - 1)] + (fRec20[i] - fRec20[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec19_perm[j] = fRec19_tmp[(count + j)];
				
			}
			/* Recursive loop 155 */
			/* Pre code */
			for (int j45 = 0; (j45 < 4); j45 = (j45 + 1)) {
				fRec25_tmp[j45] = fRec25_perm[j45];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec25[i] = (fConst5 * (fRec25[(i - 1)] + (fRec26[i] - fRec26[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec25_perm[j] = fRec25_tmp[(count + j)];
				
			}
			/* Recursive loop 156 */
			/* Pre code */
			for (int j53 = 0; (j53 < 4); j53 = (j53 + 1)) {
				fRec32_tmp[j53] = fRec32_perm[j53];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec32[i] = (fRec32[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec24[i]), 5, 0)) - fRec32[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec32_perm[j] = fRec32_tmp[(count + j)];
				
			}
			/* Recursive loop 157 */
			/* Pre code */
			for (int j62 = 0; (j62 < 4); j62 = (j62 + 1)) {
				fRec38_tmp[j62] = fRec38_perm[j62];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec38[i] = (fRec38[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec28[i]), 6, 0)) - fRec38[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec38_perm[j] = fRec38_tmp[(count + j)];
				
			}
			/* Recursive loop 158 */
			/* Pre code */
			for (int j71 = 0; (j71 < 4); j71 = (j71 + 1)) {
				fRec44_tmp[j71] = fRec44_perm[j71];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec44[i] = (fRec44[(i - 1)] + (fConst6 * (float(yc20_get_sample(float(fZec32[i]), 7, 0)) - fRec44[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec44_perm[j] = fRec44_tmp[(count + j)];
				
			}
			/* Recursive loop 159 */
			/* Pre code */
			for (int j80 = 0; (j80 < 4); j80 = (j80 + 1)) {
				fRec50_tmp[j80] = fRec50_perm[j80];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec50[i] = (fRec50[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec36[i]), 8, 0)) - fRec50[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec50_perm[j] = fRec50_tmp[(count + j)];
				
			}
			/* Recursive loop 160 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec130[i] = (0.5f * fYec49[i]);
				
			}
			/* Recursive loop 161 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec131[i] = (0.5f * fYec50[i]);
				
			}
			/* Recursive loop 162 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec132[i] = (0.5f * fYec51[i]);
				
			}
			/* Recursive loop 163 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec133[i] = (0.5f * fYec52[i]);
				
			}
			/* Recursive loop 164 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec134[i] = (0.5f * fYec53[i]);
				
			}
			/* Recursive loop 165 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec135[i] = (0.5f * fYec54[i]);
				
			}
			/* Recursive loop 166 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec136[i] = (0.5f * fYec55[i]);
				
			}
			/* Recursive loop 167 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec137[i] = (0.5f * fYec56[i]);
				
			}
			/* Recursive loop 168 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec140[i] = (0.5f * fYec58[i]);
				
			}
			/* Recursive loop 169 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec141[i] = (0.5f * fYec59[i]);
				
			}
			/* Recursive loop 170 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec142[i] = (0.5f * fYec60[i]);
				
			}
			/* Recursive loop 171 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec143[i] = (0.5f * fYec61[i]);
				
			}
			/* Recursive loop 172 */
			/* Pre code */
			for (int j296 = 0; (j296 < 4); j296 = (j296 + 1)) {
				iRec174_tmp[j296] = iRec174_perm[j296];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec174[i] = (((0.5f * (fYec52[i] - fYec52[(i - 1)])) < 0.0f)?(1 - iRec174[(i - 1)]):iRec174[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec174_perm[j] = iRec174_tmp[(count + j)];
				
			}
			/* Recursive loop 173 */
			/* Pre code */
			for (int j300 = 0; (j300 < 4); j300 = (j300 + 1)) {
				iRec177_tmp[j300] = iRec177_perm[j300];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec177[i] = (((0.5f * (fYec53[i] - fYec53[(i - 1)])) < 0.0f)?(1 - iRec177[(i - 1)]):iRec177[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec177_perm[j] = iRec177_tmp[(count + j)];
				
			}
			/* Recursive loop 174 */
			/* Pre code */
			for (int j304 = 0; (j304 < 4); j304 = (j304 + 1)) {
				iRec180_tmp[j304] = iRec180_perm[j304];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec180[i] = (((0.5f * (fYec54[i] - fYec54[(i - 1)])) < 0.0f)?(1 - iRec180[(i - 1)]):iRec180[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec180_perm[j] = iRec180_tmp[(count + j)];
				
			}
			/* Recursive loop 175 */
			/* Pre code */
			for (int j308 = 0; (j308 < 4); j308 = (j308 + 1)) {
				iRec183_tmp[j308] = iRec183_perm[j308];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec183[i] = (((0.5f * (fYec55[i] - fYec55[(i - 1)])) < 0.0f)?(1 - iRec183[(i - 1)]):iRec183[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec183_perm[j] = iRec183_tmp[(count + j)];
				
			}
			/* Recursive loop 176 */
			/* Pre code */
			for (int j312 = 0; (j312 < 4); j312 = (j312 + 1)) {
				iRec186_tmp[j312] = iRec186_perm[j312];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec186[i] = (((0.5f * (fYec56[i] - fYec56[(i - 1)])) < 0.0f)?(1 - iRec186[(i - 1)]):iRec186[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec186_perm[j] = iRec186_tmp[(count + j)];
				
			}
			/* Recursive loop 177 */
			/* Pre code */
			for (int j318 = 0; (j318 < 4); j318 = (j318 + 1)) {
				iRec190_tmp[j318] = iRec190_perm[j318];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec190[i] = (((0.5f * (fYec58[i] - fYec58[(i - 1)])) < 0.0f)?(1 - iRec190[(i - 1)]):iRec190[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec190_perm[j] = iRec190_tmp[(count + j)];
				
			}
			/* Recursive loop 178 */
			/* Pre code */
			for (int j322 = 0; (j322 < 4); j322 = (j322 + 1)) {
				iRec193_tmp[j322] = iRec193_perm[j322];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec193[i] = (((0.5f * (fYec59[i] - fYec59[(i - 1)])) < 0.0f)?(1 - iRec193[(i - 1)]):iRec193[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec193_perm[j] = iRec193_tmp[(count + j)];
				
			}
			/* Recursive loop 179 */
			/* Pre code */
			for (int j326 = 0; (j326 < 4); j326 = (j326 + 1)) {
				iRec196_tmp[j326] = iRec196_perm[j326];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec196[i] = (((0.5f * (fYec60[i] - fYec60[(i - 1)])) < 0.0f)?(1 - iRec196[(i - 1)]):iRec196[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec196_perm[j] = iRec196_tmp[(count + j)];
				
			}
			/* Recursive loop 180 */
			/* Pre code */
			for (int j330 = 0; (j330 < 4); j330 = (j330 + 1)) {
				iRec199_tmp[j330] = iRec199_perm[j330];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec199[i] = (((0.5f * (fYec61[i] - fYec61[(i - 1)])) < 0.0f)?(1 - iRec199[(i - 1)]):iRec199[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec199_perm[j] = iRec199_tmp[(count + j)];
				
			}
			/* Recursive loop 181 */
			/* Pre code */
			for (int j334 = 0; (j334 < 4); j334 = (j334 + 1)) {
				iRec202_tmp[j334] = iRec202_perm[j334];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec202[i] = (((0.5f * (fYec49[i] - fYec49[(i - 1)])) < 0.0f)?(1 - iRec202[(i - 1)]):iRec202[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec202_perm[j] = iRec202_tmp[(count + j)];
				
			}
			/* Recursive loop 182 */
			/* Pre code */
			for (int j338 = 0; (j338 < 4); j338 = (j338 + 1)) {
				iRec205_tmp[j338] = iRec205_perm[j338];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec205[i] = (((0.5f * (fYec50[i] - fYec50[(i - 1)])) < 0.0f)?(1 - iRec205[(i - 1)]):iRec205[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec205_perm[j] = iRec205_tmp[(count + j)];
				
			}
			/* Recursive loop 183 */
			/* Pre code */
			for (int j342 = 0; (j342 < 4); j342 = (j342 + 1)) {
				iRec208_tmp[j342] = iRec208_perm[j342];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec208[i] = (((0.5f * (fYec51[i] - fYec51[(i - 1)])) < 0.0f)?(1 - iRec208[(i - 1)]):iRec208[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec208_perm[j] = iRec208_tmp[(count + j)];
				
			}
			/* Recursive loop 184 */
			/* Pre code */
			for (int j54 = 0; (j54 < 4); j54 = (j54 + 1)) {
				fRec31_tmp[j54] = fRec31_perm[j54];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec31[i] = (fConst5 * (fRec31[(i - 1)] + (fRec32[i] - fRec32[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec31_perm[j] = fRec31_tmp[(count + j)];
				
			}
			/* Recursive loop 185 */
			/* Pre code */
			for (int j63 = 0; (j63 < 4); j63 = (j63 + 1)) {
				fRec37_tmp[j63] = fRec37_perm[j63];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec37[i] = (fConst5 * (fRec37[(i - 1)] + (fRec38[i] - fRec38[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec37_perm[j] = fRec37_tmp[(count + j)];
				
			}
			/* Recursive loop 186 */
			/* Pre code */
			for (int j72 = 0; (j72 < 4); j72 = (j72 + 1)) {
				fRec43_tmp[j72] = fRec43_perm[j72];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec43[i] = (fConst5 * (fRec43[(i - 1)] + (fRec44[i] - fRec44[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec43_perm[j] = fRec43_tmp[(count + j)];
				
			}
			/* Recursive loop 187 */
			/* Pre code */
			for (int j81 = 0; (j81 < 4); j81 = (j81 + 1)) {
				fRec49_tmp[j81] = fRec49_perm[j81];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec49[i] = (fConst5 * (fRec49[(i - 1)] + (fRec50[i] - fRec50[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec49_perm[j] = fRec49_tmp[(count + j)];
				
			}
			/* Recursive loop 188 */
			/* Pre code */
			for (int j89 = 0; (j89 < 4); j89 = (j89 + 1)) {
				fRec56_tmp[j89] = fRec56_perm[j89];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec56[i] = (fRec56[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec40[i]), 9, 0)) - fRec56[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec56_perm[j] = fRec56_tmp[(count + j)];
				
			}
			/* Recursive loop 189 */
			/* Pre code */
			for (int j98 = 0; (j98 < 4); j98 = (j98 + 1)) {
				fRec62_tmp[j98] = fRec62_perm[j98];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec62[i] = (fRec62[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec44[i]), 10, 0)) - fRec62[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec62_perm[j] = fRec62_tmp[(count + j)];
				
			}
			/* Recursive loop 190 */
			/* Pre code */
			for (int j107 = 0; (j107 < 4); j107 = (j107 + 1)) {
				fRec68_tmp[j107] = fRec68_perm[j107];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec68[i] = (fRec68[(i - 1)] + (fConst7 * (float(yc20_get_sample(float(fZec48[i]), 11, 0)) - fRec68[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec68_perm[j] = fRec68_tmp[(count + j)];
				
			}
			/* Recursive loop 191 */
			/* Pre code */
			for (int j109 = 0; (j109 < 4); j109 = (j109 + 1)) {
				fRec74_tmp[j109] = fRec74_perm[j109];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec74[i] = (fRec74[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec3[i]), 0, 0)) - fRec74[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec74_perm[j] = fRec74_tmp[(count + j)];
				
			}
			/* Recursive loop 192 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec49[i] = (fRec25[i] + (fRec19[i] + (fRec13[i] + (fRec0[i] + fRec7[i]))));
				
			}
			/* Recursive loop 193 */
			/* Pre code */
			for (int j297 = 0; (j297 < 4); j297 = (j297 + 1)) {
				fYec63_tmp[j297] = fYec63_perm[j297];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec63[i] = (float(iRec174[i]) + fZec133[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec63_perm[j] = fYec63_tmp[(count + j)];
				
			}
			/* Recursive loop 194 */
			/* Pre code */
			for (int j301 = 0; (j301 < 4); j301 = (j301 + 1)) {
				fYec64_tmp[j301] = fYec64_perm[j301];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec64[i] = (float(iRec177[i]) + fZec134[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec64_perm[j] = fYec64_tmp[(count + j)];
				
			}
			/* Recursive loop 195 */
			/* Pre code */
			for (int j305 = 0; (j305 < 4); j305 = (j305 + 1)) {
				fYec65_tmp[j305] = fYec65_perm[j305];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec65[i] = (float(iRec180[i]) + fZec135[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec65_perm[j] = fYec65_tmp[(count + j)];
				
			}
			/* Recursive loop 196 */
			/* Pre code */
			for (int j309 = 0; (j309 < 4); j309 = (j309 + 1)) {
				fYec66_tmp[j309] = fYec66_perm[j309];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec66[i] = (float(iRec183[i]) + fZec136[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec66_perm[j] = fYec66_tmp[(count + j)];
				
			}
			/* Recursive loop 197 */
			/* Pre code */
			for (int j313 = 0; (j313 < 4); j313 = (j313 + 1)) {
				fYec67_tmp[j313] = fYec67_perm[j313];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec67[i] = (float(iRec186[i]) + fZec137[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec67_perm[j] = fYec67_tmp[(count + j)];
				
			}
			/* Recursive loop 198 */
			/* Pre code */
			for (int j319 = 0; (j319 < 4); j319 = (j319 + 1)) {
				fYec69_tmp[j319] = fYec69_perm[j319];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec69[i] = (float(iRec190[i]) + fZec140[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec69_perm[j] = fYec69_tmp[(count + j)];
				
			}
			/* Recursive loop 199 */
			/* Pre code */
			for (int j323 = 0; (j323 < 4); j323 = (j323 + 1)) {
				fYec70_tmp[j323] = fYec70_perm[j323];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec70[i] = (float(iRec193[i]) + fZec141[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec70_perm[j] = fYec70_tmp[(count + j)];
				
			}
			/* Recursive loop 200 */
			/* Pre code */
			for (int j327 = 0; (j327 < 4); j327 = (j327 + 1)) {
				fYec71_tmp[j327] = fYec71_perm[j327];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec71[i] = (float(iRec196[i]) + fZec142[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec71_perm[j] = fYec71_tmp[(count + j)];
				
			}
			/* Recursive loop 201 */
			/* Pre code */
			for (int j331 = 0; (j331 < 4); j331 = (j331 + 1)) {
				fYec72_tmp[j331] = fYec72_perm[j331];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec72[i] = (float(iRec199[i]) + fZec143[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec72_perm[j] = fYec72_tmp[(count + j)];
				
			}
			/* Recursive loop 202 */
			/* Pre code */
			for (int j335 = 0; (j335 < 4); j335 = (j335 + 1)) {
				fYec73_tmp[j335] = fYec73_perm[j335];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec73[i] = (float(iRec202[i]) + fZec130[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec73_perm[j] = fYec73_tmp[(count + j)];
				
			}
			/* Recursive loop 203 */
			/* Pre code */
			for (int j339 = 0; (j339 < 4); j339 = (j339 + 1)) {
				fYec74_tmp[j339] = fYec74_perm[j339];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec74[i] = (float(iRec205[i]) + fZec131[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec74_perm[j] = fYec74_tmp[(count + j)];
				
			}
			/* Recursive loop 204 */
			/* Pre code */
			for (int j343 = 0; (j343 < 4); j343 = (j343 + 1)) {
				fYec75_tmp[j343] = fYec75_perm[j343];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec75[i] = (float(iRec208[i]) + fZec132[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec75_perm[j] = fYec75_tmp[(count + j)];
				
			}
			/* Recursive loop 205 */
			/* Pre code */
			for (int j90 = 0; (j90 < 4); j90 = (j90 + 1)) {
				fRec55_tmp[j90] = fRec55_perm[j90];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec55[i] = (fConst5 * (fRec55[(i - 1)] + (fRec56[i] - fRec56[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec55_perm[j] = fRec55_tmp[(count + j)];
				
			}
			/* Recursive loop 206 */
			/* Pre code */
			for (int j99 = 0; (j99 < 4); j99 = (j99 + 1)) {
				fRec61_tmp[j99] = fRec61_perm[j99];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec61[i] = (fConst5 * (fRec61[(i - 1)] + (fRec62[i] - fRec62[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec61_perm[j] = fRec61_tmp[(count + j)];
				
			}
			/* Recursive loop 207 */
			/* Pre code */
			for (int j108 = 0; (j108 < 4); j108 = (j108 + 1)) {
				fRec67_tmp[j108] = fRec67_perm[j108];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec67[i] = (fConst5 * (fRec67[(i - 1)] + (fRec68[i] - fRec68[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec67_perm[j] = fRec67_tmp[(count + j)];
				
			}
			/* Recursive loop 208 */
			/* Pre code */
			for (int j110 = 0; (j110 < 4); j110 = (j110 + 1)) {
				fRec73_tmp[j110] = fRec73_perm[j110];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec73[i] = (fConst5 * (fRec73[(i - 1)] + (fRec74[i] - fRec74[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec73_perm[j] = fRec73_tmp[(count + j)];
				
			}
			/* Recursive loop 209 */
			/* Pre code */
			for (int j111 = 0; (j111 < 4); j111 = (j111 + 1)) {
				fRec76_tmp[j111] = fRec76_perm[j111];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec76[i] = (fRec76[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec7[i]), 1, 0)) - fRec76[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec76_perm[j] = fRec76_tmp[(count + j)];
				
			}
			/* Recursive loop 210 */
			/* Pre code */
			for (int j113 = 0; (j113 < 4); j113 = (j113 + 1)) {
				fRec78_tmp[j113] = fRec78_perm[j113];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec78[i] = (fRec78[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec11[i]), 2, 0)) - fRec78[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec78_perm[j] = fRec78_tmp[(count + j)];
				
			}
			/* Recursive loop 211 */
			/* Pre code */
			for (int j115 = 0; (j115 < 4); j115 = (j115 + 1)) {
				fRec80_tmp[j115] = fRec80_perm[j115];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec80[i] = (fRec80[(i - 1)] + (fConst8 * (float(yc20_get_sample(float(fZec15[i]), 3, 0)) - fRec80[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec80_perm[j] = fRec80_tmp[(count + j)];
				
			}
			/* Recursive loop 212 */
			/* Pre code */
			for (int j117 = 0; (j117 < 4); j117 = (j117 + 1)) {
				fRec82_tmp[j117] = fRec82_perm[j117];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec82[i] = (fRec82[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec19[i]), 4, 0)) - fRec82[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec82_perm[j] = fRec82_tmp[(count + j)];
				
			}
			/* Recursive loop 213 */
			/* Pre code */
			for (int j157 = 0; (j157 < 4); j157 = (j157 + 1)) {
				fYec36_tmp[j157] = fYec36_perm[j157];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec36[i] = float(yc20_get_sample(float(fRec4[i]), 0, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec36_perm[j] = fYec36_tmp[(count + j)];
				
			}
			/* Recursive loop 214 */
			/* Pre code */
			for (int j159 = 0; (j159 < 4); j159 = (j159 + 1)) {
				fYec37_tmp[j159] = fYec37_perm[j159];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec37[i] = float(yc20_get_sample(float(fRec11[i]), 1, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec37_perm[j] = fYec37_tmp[(count + j)];
				
			}
			/* Recursive loop 215 */
			/* Pre code */
			for (int j161 = 0; (j161 < 4); j161 = (j161 + 1)) {
				fYec38_tmp[j161] = fYec38_perm[j161];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec38[i] = float(yc20_get_sample(float(fRec17[i]), 2, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec38_perm[j] = fYec38_tmp[(count + j)];
				
			}
			/* Recursive loop 216 */
			/* Pre code */
			for (int j163 = 0; (j163 < 4); j163 = (j163 + 1)) {
				fYec39_tmp[j163] = fYec39_perm[j163];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec39[i] = float(yc20_get_sample(float(fRec23[i]), 3, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec39_perm[j] = fYec39_tmp[(count + j)];
				
			}
			/* Recursive loop 217 */
			/* Pre code */
			for (int j165 = 0; (j165 < 4); j165 = (j165 + 1)) {
				fYec40_tmp[j165] = fYec40_perm[j165];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec40[i] = float(yc20_get_sample(float(fRec29[i]), 4, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec40_perm[j] = fYec40_tmp[(count + j)];
				
			}
			/* Recursive loop 218 */
			/* Pre code */
			for (int j167 = 0; (j167 < 4); j167 = (j167 + 1)) {
				fYec41_tmp[j167] = fYec41_perm[j167];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec41[i] = float(yc20_get_sample(float(fRec35[i]), 5, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec41_perm[j] = fYec41_tmp[(count + j)];
				
			}
			/* Recursive loop 219 */
			/* Pre code */
			for (int j169 = 0; (j169 < 4); j169 = (j169 + 1)) {
				fYec42_tmp[j169] = fYec42_perm[j169];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec42[i] = float(yc20_get_sample(float(fRec41[i]), 6, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec42_perm[j] = fYec42_tmp[(count + j)];
				
			}
			/* Recursive loop 220 */
			/* Pre code */
			for (int j171 = 0; (j171 < 4); j171 = (j171 + 1)) {
				fYec43_tmp[j171] = fYec43_perm[j171];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec43[i] = float(yc20_get_sample(float(fRec47[i]), 7, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec43_perm[j] = fYec43_tmp[(count + j)];
				
			}
			/* Recursive loop 221 */
			/* Pre code */
			for (int j173 = 0; (j173 < 4); j173 = (j173 + 1)) {
				fYec44_tmp[j173] = fYec44_perm[j173];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec44[i] = float(yc20_get_sample(float(fRec53[i]), 8, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec44_perm[j] = fYec44_tmp[(count + j)];
				
			}
			/* Recursive loop 222 */
			/* Pre code */
			for (int j175 = 0; (j175 < 4); j175 = (j175 + 1)) {
				fYec45_tmp[j175] = fYec45_perm[j175];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec45[i] = float(yc20_get_sample(float(fRec59[i]), 9, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec45_perm[j] = fYec45_tmp[(count + j)];
				
			}
			/* Recursive loop 223 */
			/* Pre code */
			for (int j177 = 0; (j177 < 4); j177 = (j177 + 1)) {
				fYec46_tmp[j177] = fYec46_perm[j177];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec46[i] = float(yc20_get_sample(float(fRec65[i]), 10, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec46_perm[j] = fYec46_tmp[(count + j)];
				
			}
			/* Recursive loop 224 */
			/* Pre code */
			for (int j179 = 0; (j179 < 4); j179 = (j179 + 1)) {
				fYec47_tmp[j179] = fYec47_perm[j179];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec47[i] = float(yc20_get_sample(float(fRec71[i]), 11, 0));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec47_perm[j] = fYec47_tmp[(count + j)];
				
			}
			/* Recursive loop 225 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec50[i] = (fRec49[i] + (fRec43[i] + (fRec37[i] + (fRec31[i] + fZec49[i]))));
				
			}
			/* Recursive loop 226 */
			/* Pre code */
			for (int j229 = 0; (j229 < 4); j229 = (j229 + 1)) {
				fVec48_tmp[j229] = fVec48_perm[j229];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec48[i] = fSlow67;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec48_perm[j] = fVec48_tmp[(count + j)];
				
			}
			/* Recursive loop 227 */
			/* Pre code */
			for (int j230 = 0; (j230 < 4); j230 = (j230 + 1)) {
				fVec49_tmp[j230] = fVec49_perm[j230];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec49[i] = fSlow68;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec49_perm[j] = fVec49_tmp[(count + j)];
				
			}
			/* Recursive loop 228 */
			/* Pre code */
			for (int j231 = 0; (j231 < 4); j231 = (j231 + 1)) {
				fVec50_tmp[j231] = fVec50_perm[j231];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec50[i] = fSlow69;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec50_perm[j] = fVec50_tmp[(count + j)];
				
			}
			/* Recursive loop 229 */
			/* Pre code */
			for (int j232 = 0; (j232 < 4); j232 = (j232 + 1)) {
				fVec51_tmp[j232] = fVec51_perm[j232];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec51[i] = fSlow70;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec51_perm[j] = fVec51_tmp[(count + j)];
				
			}
			/* Recursive loop 230 */
			/* Pre code */
			for (int j233 = 0; (j233 < 4); j233 = (j233 + 1)) {
				fVec52_tmp[j233] = fVec52_perm[j233];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec52[i] = fSlow71;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec52_perm[j] = fVec52_tmp[(count + j)];
				
			}
			/* Recursive loop 231 */
			/* Pre code */
			for (int j234 = 0; (j234 < 4); j234 = (j234 + 1)) {
				fVec53_tmp[j234] = fVec53_perm[j234];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec53[i] = fSlow72;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec53_perm[j] = fVec53_tmp[(count + j)];
				
			}
			/* Recursive loop 232 */
			/* Pre code */
			for (int j235 = 0; (j235 < 4); j235 = (j235 + 1)) {
				fVec54_tmp[j235] = fVec54_perm[j235];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec54[i] = fSlow73;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec54_perm[j] = fVec54_tmp[(count + j)];
				
			}
			/* Recursive loop 233 */
			/* Pre code */
			for (int j236 = 0; (j236 < 4); j236 = (j236 + 1)) {
				fVec55_tmp[j236] = fVec55_perm[j236];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec55[i] = fSlow74;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec55_perm[j] = fVec55_tmp[(count + j)];
				
			}
			/* Recursive loop 234 */
			/* Pre code */
			for (int j237 = 0; (j237 < 4); j237 = (j237 + 1)) {
				fVec56_tmp[j237] = fVec56_perm[j237];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec56[i] = fSlow75;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec56_perm[j] = fVec56_tmp[(count + j)];
				
			}
			/* Recursive loop 235 */
			/* Pre code */
			for (int j238 = 0; (j238 < 4); j238 = (j238 + 1)) {
				fVec57_tmp[j238] = fVec57_perm[j238];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec57[i] = fSlow76;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec57_perm[j] = fVec57_tmp[(count + j)];
				
			}
			/* Recursive loop 236 */
			/* Pre code */
			for (int j239 = 0; (j239 < 4); j239 = (j239 + 1)) {
				fVec58_tmp[j239] = fVec58_perm[j239];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec58[i] = fSlow77;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec58_perm[j] = fVec58_tmp[(count + j)];
				
			}
			/* Recursive loop 237 */
			/* Pre code */
			for (int j240 = 0; (j240 < 4); j240 = (j240 + 1)) {
				fVec59_tmp[j240] = fVec59_perm[j240];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec59[i] = fSlow78;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec59_perm[j] = fVec59_tmp[(count + j)];
				
			}
			/* Recursive loop 238 */
			/* Pre code */
			for (int j241 = 0; (j241 < 4); j241 = (j241 + 1)) {
				fVec60_tmp[j241] = fVec60_perm[j241];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec60[i] = fSlow79;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec60_perm[j] = fVec60_tmp[(count + j)];
				
			}
			/* Recursive loop 239 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec146[i] = (0.5f * fYec63[i]);
				
			}
			/* Recursive loop 240 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec147[i] = (0.5f * fYec64[i]);
				
			}
			/* Recursive loop 241 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec148[i] = (0.5f * fYec65[i]);
				
			}
			/* Recursive loop 242 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec149[i] = (0.5f * fYec66[i]);
				
			}
			/* Recursive loop 243 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec150[i] = (0.5f * fYec67[i]);
				
			}
			/* Recursive loop 244 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec156[i] = (0.5f * fYec69[i]);
				
			}
			/* Recursive loop 245 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec157[i] = (0.5f * fYec70[i]);
				
			}
			/* Recursive loop 246 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec158[i] = (0.5f * fYec71[i]);
				
			}
			/* Recursive loop 247 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec159[i] = (0.5f * fYec72[i]);
				
			}
			/* Recursive loop 248 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec160[i] = (0.5f * fYec73[i]);
				
			}
			/* Recursive loop 249 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec161[i] = (0.5f * fYec74[i]);
				
			}
			/* Recursive loop 250 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec162[i] = (0.5f * fYec75[i]);
				
			}
			/* Recursive loop 251 */
			/* Pre code */
			for (int j348 = 0; (j348 < 4); j348 = (j348 + 1)) {
				iRec212_tmp[j348] = iRec212_perm[j348];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec212[i] = (((0.5f * (fYec69[i] - fYec69[(i - 1)])) < 0.0f)?(1 - iRec212[(i - 1)]):iRec212[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec212_perm[j] = iRec212_tmp[(count + j)];
				
			}
			/* Recursive loop 252 */
			/* Pre code */
			for (int j352 = 0; (j352 < 4); j352 = (j352 + 1)) {
				iRec215_tmp[j352] = iRec215_perm[j352];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec215[i] = (((0.5f * (fYec70[i] - fYec70[(i - 1)])) < 0.0f)?(1 - iRec215[(i - 1)]):iRec215[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec215_perm[j] = iRec215_tmp[(count + j)];
				
			}
			/* Recursive loop 253 */
			/* Pre code */
			for (int j356 = 0; (j356 < 4); j356 = (j356 + 1)) {
				iRec218_tmp[j356] = iRec218_perm[j356];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec218[i] = (((0.5f * (fYec71[i] - fYec71[(i - 1)])) < 0.0f)?(1 - iRec218[(i - 1)]):iRec218[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec218_perm[j] = iRec218_tmp[(count + j)];
				
			}
			/* Recursive loop 254 */
			/* Pre code */
			for (int j360 = 0; (j360 < 4); j360 = (j360 + 1)) {
				iRec221_tmp[j360] = iRec221_perm[j360];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec221[i] = (((0.5f * (fYec72[i] - fYec72[(i - 1)])) < 0.0f)?(1 - iRec221[(i - 1)]):iRec221[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec221_perm[j] = iRec221_tmp[(count + j)];
				
			}
			/* Recursive loop 255 */
			/* Pre code */
			for (int j364 = 0; (j364 < 4); j364 = (j364 + 1)) {
				iRec224_tmp[j364] = iRec224_perm[j364];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec224[i] = (((0.5f * (fYec73[i] - fYec73[(i - 1)])) < 0.0f)?(1 - iRec224[(i - 1)]):iRec224[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec224_perm[j] = iRec224_tmp[(count + j)];
				
			}
			/* Recursive loop 256 */
			/* Pre code */
			for (int j368 = 0; (j368 < 4); j368 = (j368 + 1)) {
				iRec227_tmp[j368] = iRec227_perm[j368];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec227[i] = (((0.5f * (fYec74[i] - fYec74[(i - 1)])) < 0.0f)?(1 - iRec227[(i - 1)]):iRec227[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec227_perm[j] = iRec227_tmp[(count + j)];
				
			}
			/* Recursive loop 257 */
			/* Pre code */
			for (int j372 = 0; (j372 < 4); j372 = (j372 + 1)) {
				iRec230_tmp[j372] = iRec230_perm[j372];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec230[i] = (((0.5f * (fYec75[i] - fYec75[(i - 1)])) < 0.0f)?(1 - iRec230[(i - 1)]):iRec230[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec230_perm[j] = iRec230_tmp[(count + j)];
				
			}
			/* Recursive loop 258 */
			/* Pre code */
			for (int j376 = 0; (j376 < 4); j376 = (j376 + 1)) {
				iRec233_tmp[j376] = iRec233_perm[j376];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec233[i] = (((0.5f * (fYec63[i] - fYec63[(i - 1)])) < 0.0f)?(1 - iRec233[(i - 1)]):iRec233[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec233_perm[j] = iRec233_tmp[(count + j)];
				
			}
			/* Recursive loop 259 */
			/* Pre code */
			for (int j380 = 0; (j380 < 4); j380 = (j380 + 1)) {
				iRec236_tmp[j380] = iRec236_perm[j380];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec236[i] = (((0.5f * (fYec64[i] - fYec64[(i - 1)])) < 0.0f)?(1 - iRec236[(i - 1)]):iRec236[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec236_perm[j] = iRec236_tmp[(count + j)];
				
			}
			/* Recursive loop 260 */
			/* Pre code */
			for (int j384 = 0; (j384 < 4); j384 = (j384 + 1)) {
				iRec239_tmp[j384] = iRec239_perm[j384];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec239[i] = (((0.5f * (fYec65[i] - fYec65[(i - 1)])) < 0.0f)?(1 - iRec239[(i - 1)]):iRec239[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec239_perm[j] = iRec239_tmp[(count + j)];
				
			}
			/* Recursive loop 261 */
			/* Pre code */
			for (int j388 = 0; (j388 < 4); j388 = (j388 + 1)) {
				iRec242_tmp[j388] = iRec242_perm[j388];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec242[i] = (((0.5f * (fYec66[i] - fYec66[(i - 1)])) < 0.0f)?(1 - iRec242[(i - 1)]):iRec242[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec242_perm[j] = iRec242_tmp[(count + j)];
				
			}
			/* Recursive loop 262 */
			/* Pre code */
			for (int j392 = 0; (j392 < 4); j392 = (j392 + 1)) {
				iRec245_tmp[j392] = iRec245_perm[j392];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec245[i] = (((0.5f * (fYec67[i] - fYec67[(i - 1)])) < 0.0f)?(1 - iRec245[(i - 1)]):iRec245[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec245_perm[j] = iRec245_tmp[(count + j)];
				
			}
			/* Recursive loop 263 */
			/* Pre code */
			for (int j112 = 0; (j112 < 4); j112 = (j112 + 1)) {
				fRec75_tmp[j112] = fRec75_perm[j112];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec75[i] = (fConst5 * (fRec75[(i - 1)] + (fRec76[i] - fRec76[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec75_perm[j] = fRec75_tmp[(count + j)];
				
			}
			/* Recursive loop 264 */
			/* Pre code */
			for (int j114 = 0; (j114 < 4); j114 = (j114 + 1)) {
				fRec77_tmp[j114] = fRec77_perm[j114];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec77[i] = (fConst5 * (fRec77[(i - 1)] + (fRec78[i] - fRec78[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec77_perm[j] = fRec77_tmp[(count + j)];
				
			}
			/* Recursive loop 265 */
			/* Pre code */
			for (int j116 = 0; (j116 < 4); j116 = (j116 + 1)) {
				fRec79_tmp[j116] = fRec79_perm[j116];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec79[i] = (fConst5 * (fRec79[(i - 1)] + (fRec80[i] - fRec80[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec79_perm[j] = fRec79_tmp[(count + j)];
				
			}
			/* Recursive loop 266 */
			/* Pre code */
			for (int j118 = 0; (j118 < 4); j118 = (j118 + 1)) {
				fRec81_tmp[j118] = fRec81_perm[j118];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec81[i] = (fConst5 * (fRec81[(i - 1)] + (fRec82[i] - fRec82[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec81_perm[j] = fRec81_tmp[(count + j)];
				
			}
			/* Recursive loop 267 */
			/* Pre code */
			for (int j119 = 0; (j119 < 4); j119 = (j119 + 1)) {
				fRec84_tmp[j119] = fRec84_perm[j119];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec84[i] = (fRec84[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec23[i]), 5, 0)) - fRec84[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec84_perm[j] = fRec84_tmp[(count + j)];
				
			}
			/* Recursive loop 268 */
			/* Pre code */
			for (int j121 = 0; (j121 < 4); j121 = (j121 + 1)) {
				fRec86_tmp[j121] = fRec86_perm[j121];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec86[i] = (fRec86[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec27[i]), 6, 0)) - fRec86[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec86_perm[j] = fRec86_tmp[(count + j)];
				
			}
			/* Recursive loop 269 */
			/* Pre code */
			for (int j123 = 0; (j123 < 4); j123 = (j123 + 1)) {
				fRec88_tmp[j123] = fRec88_perm[j123];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec88[i] = (fRec88[(i - 1)] + (fConst9 * (float(yc20_get_sample(float(fZec31[i]), 7, 0)) - fRec88[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec88_perm[j] = fRec88_tmp[(count + j)];
				
			}
			/* Recursive loop 270 */
			/* Pre code */
			for (int j125 = 0; (j125 < 4); j125 = (j125 + 1)) {
				fRec90_tmp[j125] = fRec90_perm[j125];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec90[i] = (fRec90[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec35[i]), 8, 0)) - fRec90[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec90_perm[j] = fRec90_tmp[(count + j)];
				
			}
			/* Recursive loop 271 */
			/* Pre code */
			for (int j127 = 0; (j127 < 4); j127 = (j127 + 1)) {
				fRec92_tmp[j127] = fRec92_perm[j127];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec92[i] = (fRec92[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec39[i]), 9, 0)) - fRec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec92_perm[j] = fRec92_tmp[(count + j)];
				
			}
			/* Recursive loop 272 */
			/* Pre code */
			for (int j129 = 0; (j129 < 4); j129 = (j129 + 1)) {
				fRec94_tmp[j129] = fRec94_perm[j129];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec94[i] = (fRec94[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec43[i]), 10, 0)) - fRec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec94_perm[j] = fRec94_tmp[(count + j)];
				
			}
			/* Recursive loop 273 */
			/* Pre code */
			for (int j131 = 0; (j131 < 4); j131 = (j131 + 1)) {
				fRec96_tmp[j131] = fRec96_perm[j131];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec96[i] = (fRec96[(i - 1)] + (fConst10 * (float(yc20_get_sample(float(fZec47[i]), 11, 0)) - fRec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec96_perm[j] = fRec96_tmp[(count + j)];
				
			}
			/* Recursive loop 274 */
			/* Pre code */
			for (int j133 = 0; (j133 < 4); j133 = (j133 + 1)) {
				fRec98_tmp[j133] = fRec98_perm[j133];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec98[i] = (fRec98[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec2[i]), 0, 0)) - fRec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec98_perm[j] = fRec98_tmp[(count + j)];
				
			}
			/* Recursive loop 275 */
			/* Pre code */
			for (int j135 = 0; (j135 < 4); j135 = (j135 + 1)) {
				fRec100_tmp[j135] = fRec100_perm[j135];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec100[i] = (fRec100[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec6[i]), 1, 0)) - fRec100[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec100_perm[j] = fRec100_tmp[(count + j)];
				
			}
			/* Recursive loop 276 */
			/* Pre code */
			for (int j137 = 0; (j137 < 4); j137 = (j137 + 1)) {
				fRec102_tmp[j137] = fRec102_perm[j137];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec102[i] = (fRec102[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec10[i]), 2, 0)) - fRec102[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec102_perm[j] = fRec102_tmp[(count + j)];
				
			}
			/* Recursive loop 277 */
			/* Pre code */
			for (int j139 = 0; (j139 < 4); j139 = (j139 + 1)) {
				fRec104_tmp[j139] = fRec104_perm[j139];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec104[i] = (fRec104[(i - 1)] + (fConst11 * (float(yc20_get_sample(float(fZec14[i]), 3, 0)) - fRec104[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec104_perm[j] = fRec104_tmp[(count + j)];
				
			}
			/* Recursive loop 278 */
			/* Pre code */
			for (int j141 = 0; (j141 < 4); j141 = (j141 + 1)) {
				fRec106_tmp[j141] = fRec106_perm[j141];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec106[i] = (fRec106[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec18[i]), 4, 0)) - fRec106[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec106_perm[j] = fRec106_tmp[(count + j)];
				
			}
			/* Recursive loop 279 */
			/* Pre code */
			for (int j143 = 0; (j143 < 4); j143 = (j143 + 1)) {
				fRec108_tmp[j143] = fRec108_perm[j143];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec108[i] = (fRec108[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec22[i]), 5, 0)) - fRec108[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec108_perm[j] = fRec108_tmp[(count + j)];
				
			}
			/* Recursive loop 280 */
			/* Pre code */
			for (int j145 = 0; (j145 < 4); j145 = (j145 + 1)) {
				fRec110_tmp[j145] = fRec110_perm[j145];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec110[i] = (fRec110[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec26[i]), 6, 0)) - fRec110[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec110_perm[j] = fRec110_tmp[(count + j)];
				
			}
			/* Recursive loop 281 */
			/* Pre code */
			for (int j147 = 0; (j147 < 4); j147 = (j147 + 1)) {
				fRec112_tmp[j147] = fRec112_perm[j147];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec112[i] = (fRec112[(i - 1)] + (fConst12 * (float(yc20_get_sample(float(fZec30[i]), 7, 0)) - fRec112[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec112_perm[j] = fRec112_tmp[(count + j)];
				
			}
			/* Recursive loop 282 */
			/* Pre code */
			for (int j149 = 0; (j149 < 4); j149 = (j149 + 1)) {
				fRec114_tmp[j149] = fRec114_perm[j149];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec114[i] = (fRec114[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec34[i]), 8, 0)) - fRec114[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec114_perm[j] = fRec114_tmp[(count + j)];
				
			}
			/* Recursive loop 283 */
			/* Pre code */
			for (int j151 = 0; (j151 < 4); j151 = (j151 + 1)) {
				fRec116_tmp[j151] = fRec116_perm[j151];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec116[i] = (fRec116[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec38[i]), 9, 0)) - fRec116[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec116_perm[j] = fRec116_tmp[(count + j)];
				
			}
			/* Recursive loop 284 */
			/* Pre code */
			for (int j153 = 0; (j153 < 4); j153 = (j153 + 1)) {
				fRec118_tmp[j153] = fRec118_perm[j153];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec118[i] = (fRec118[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec42[i]), 10, 0)) - fRec118[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec118_perm[j] = fRec118_tmp[(count + j)];
				
			}
			/* Recursive loop 285 */
			/* Pre code */
			for (int j155 = 0; (j155 < 4); j155 = (j155 + 1)) {
				fRec120_tmp[j155] = fRec120_perm[j155];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec120[i] = (fRec120[(i - 1)] + (fConst13 * (float(yc20_get_sample(float(fZec46[i]), 11, 0)) - fRec120[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec120_perm[j] = fRec120_tmp[(count + j)];
				
			}
			/* Recursive loop 286 */
			/* Pre code */
			for (int j158 = 0; (j158 < 4); j158 = (j158 + 1)) {
				fRec121_tmp[j158] = fRec121_perm[j158];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec121[i] = (fConst14 * ((0.00737454556f * fRec121[(i - 1)]) + (0.0143803637f * (fYec36[i] - fYec36[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec121_perm[j] = fRec121_tmp[(count + j)];
				
			}
			/* Recursive loop 287 */
			/* Pre code */
			for (int j160 = 0; (j160 < 4); j160 = (j160 + 1)) {
				fRec122_tmp[j160] = fRec122_perm[j160];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec122[i] = (fConst14 * ((0.00737454556f * fRec122[(i - 1)]) + (0.0143803637f * (fYec37[i] - fYec37[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec122_perm[j] = fRec122_tmp[(count + j)];
				
			}
			/* Recursive loop 288 */
			/* Pre code */
			for (int j162 = 0; (j162 < 4); j162 = (j162 + 1)) {
				fRec123_tmp[j162] = fRec123_perm[j162];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec123[i] = (fConst14 * ((0.00737454556f * fRec123[(i - 1)]) + (0.0143803637f * (fYec38[i] - fYec38[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec123_perm[j] = fRec123_tmp[(count + j)];
				
			}
			/* Recursive loop 289 */
			/* Pre code */
			for (int j164 = 0; (j164 < 4); j164 = (j164 + 1)) {
				fRec124_tmp[j164] = fRec124_perm[j164];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec124[i] = (fConst14 * ((0.00737454556f * fRec124[(i - 1)]) + (0.0143803637f * (fYec39[i] - fYec39[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec124_perm[j] = fRec124_tmp[(count + j)];
				
			}
			/* Recursive loop 290 */
			/* Pre code */
			for (int j166 = 0; (j166 < 4); j166 = (j166 + 1)) {
				fRec125_tmp[j166] = fRec125_perm[j166];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec125[i] = (fConst14 * ((0.00737454556f * fRec125[(i - 1)]) + (0.0143803637f * (fYec40[i] - fYec40[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec125_perm[j] = fRec125_tmp[(count + j)];
				
			}
			/* Recursive loop 291 */
			/* Pre code */
			for (int j168 = 0; (j168 < 4); j168 = (j168 + 1)) {
				fRec126_tmp[j168] = fRec126_perm[j168];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec126[i] = (fConst14 * ((0.00737454556f * fRec126[(i - 1)]) + (0.0143803637f * (fYec41[i] - fYec41[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec126_perm[j] = fRec126_tmp[(count + j)];
				
			}
			/* Recursive loop 292 */
			/* Pre code */
			for (int j170 = 0; (j170 < 4); j170 = (j170 + 1)) {
				fRec127_tmp[j170] = fRec127_perm[j170];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec127[i] = (fConst14 * ((0.00737454556f * fRec127[(i - 1)]) + (0.0143803637f * (fYec42[i] - fYec42[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec127_perm[j] = fRec127_tmp[(count + j)];
				
			}
			/* Recursive loop 293 */
			/* Pre code */
			for (int j172 = 0; (j172 < 4); j172 = (j172 + 1)) {
				fRec128_tmp[j172] = fRec128_perm[j172];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec128[i] = (fConst14 * ((0.00737454556f * fRec128[(i - 1)]) + (0.0143803637f * (fYec43[i] - fYec43[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec128_perm[j] = fRec128_tmp[(count + j)];
				
			}
			/* Recursive loop 294 */
			/* Pre code */
			for (int j174 = 0; (j174 < 4); j174 = (j174 + 1)) {
				fRec129_tmp[j174] = fRec129_perm[j174];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec129[i] = (fConst14 * ((0.00737454556f * fRec129[(i - 1)]) + (0.0143803637f * (fYec44[i] - fYec44[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec129_perm[j] = fRec129_tmp[(count + j)];
				
			}
			/* Recursive loop 295 */
			/* Pre code */
			for (int j176 = 0; (j176 < 4); j176 = (j176 + 1)) {
				fRec130_tmp[j176] = fRec130_perm[j176];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec130[i] = (fConst14 * ((0.00737454556f * fRec130[(i - 1)]) + (0.0143803637f * (fYec45[i] - fYec45[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec130_perm[j] = fRec130_tmp[(count + j)];
				
			}
			/* Recursive loop 296 */
			/* Pre code */
			for (int j178 = 0; (j178 < 4); j178 = (j178 + 1)) {
				fRec131_tmp[j178] = fRec131_perm[j178];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec131[i] = (fConst14 * ((0.00737454556f * fRec131[(i - 1)]) + (0.0143803637f * (fYec46[i] - fYec46[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec131_perm[j] = fRec131_tmp[(count + j)];
				
			}
			/* Recursive loop 297 */
			/* Pre code */
			for (int j180 = 0; (j180 < 4); j180 = (j180 + 1)) {
				fRec132_tmp[j180] = fRec132_perm[j180];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec132[i] = (fConst14 * ((0.00737454556f * fRec132[(i - 1)]) + (0.0143803637f * (fYec47[i] - fYec47[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec132_perm[j] = fRec132_tmp[(count + j)];
				
			}
			/* Recursive loop 298 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec51[i] = (fRec73[i] + (fRec67[i] + (fRec61[i] + (fRec55[i] + fZec50[i]))));
				
			}
			/* Recursive loop 299 */
			/* Pre code */
			for (int j181 = 0; (j181 < 4); j181 = (j181 + 1)) {
				fVec0_tmp[j181] = fVec0_perm[j181];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec0[i] = fSlow19;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec0_perm[j] = fVec0_tmp[(count + j)];
				
			}
			/* Recursive loop 300 */
			/* Pre code */
			for (int j182 = 0; (j182 < 4); j182 = (j182 + 1)) {
				fVec1_tmp[j182] = fVec1_perm[j182];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec1[i] = fSlow20;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec1_perm[j] = fVec1_tmp[(count + j)];
				
			}
			/* Recursive loop 301 */
			/* Pre code */
			for (int j183 = 0; (j183 < 4); j183 = (j183 + 1)) {
				fVec2_tmp[j183] = fVec2_perm[j183];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec2[i] = fSlow21;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec2_perm[j] = fVec2_tmp[(count + j)];
				
			}
			/* Recursive loop 302 */
			/* Pre code */
			for (int j184 = 0; (j184 < 4); j184 = (j184 + 1)) {
				fVec3_tmp[j184] = fVec3_perm[j184];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec3[i] = fSlow22;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec3_perm[j] = fVec3_tmp[(count + j)];
				
			}
			/* Recursive loop 303 */
			/* Pre code */
			for (int j185 = 0; (j185 < 4); j185 = (j185 + 1)) {
				fVec4_tmp[j185] = fVec4_perm[j185];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec4[i] = fSlow23;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec4_perm[j] = fVec4_tmp[(count + j)];
				
			}
			/* Recursive loop 304 */
			/* Pre code */
			for (int j186 = 0; (j186 < 4); j186 = (j186 + 1)) {
				fVec5_tmp[j186] = fVec5_perm[j186];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec5[i] = fSlow24;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec5_perm[j] = fVec5_tmp[(count + j)];
				
			}
			/* Recursive loop 305 */
			/* Pre code */
			for (int j187 = 0; (j187 < 4); j187 = (j187 + 1)) {
				fVec6_tmp[j187] = fVec6_perm[j187];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec6[i] = fSlow25;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec6_perm[j] = fVec6_tmp[(count + j)];
				
			}
			/* Recursive loop 306 */
			/* Pre code */
			for (int j188 = 0; (j188 < 4); j188 = (j188 + 1)) {
				fVec7_tmp[j188] = fVec7_perm[j188];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec7[i] = fSlow26;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec7_perm[j] = fVec7_tmp[(count + j)];
				
			}
			/* Recursive loop 307 */
			/* Pre code */
			for (int j189 = 0; (j189 < 4); j189 = (j189 + 1)) {
				fVec8_tmp[j189] = fVec8_perm[j189];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec8[i] = fSlow27;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec8_perm[j] = fVec8_tmp[(count + j)];
				
			}
			/* Recursive loop 308 */
			/* Pre code */
			for (int j190 = 0; (j190 < 4); j190 = (j190 + 1)) {
				fVec9_tmp[j190] = fVec9_perm[j190];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec9[i] = fSlow28;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec9_perm[j] = fVec9_tmp[(count + j)];
				
			}
			/* Recursive loop 309 */
			/* Pre code */
			for (int j191 = 0; (j191 < 4); j191 = (j191 + 1)) {
				fVec10_tmp[j191] = fVec10_perm[j191];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec10[i] = fSlow29;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec10_perm[j] = fVec10_tmp[(count + j)];
				
			}
			/* Recursive loop 310 */
			/* Pre code */
			for (int j192 = 0; (j192 < 4); j192 = (j192 + 1)) {
				fVec11_tmp[j192] = fVec11_perm[j192];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec11[i] = fSlow30;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec11_perm[j] = fVec11_tmp[(count + j)];
				
			}
			/* Recursive loop 311 */
			/* Pre code */
			for (int j193 = 0; (j193 < 4); j193 = (j193 + 1)) {
				fVec12_tmp[j193] = fVec12_perm[j193];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec12[i] = fSlow31;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec12_perm[j] = fVec12_tmp[(count + j)];
				
			}
			/* Recursive loop 312 */
			/* Pre code */
			for (int j194 = 0; (j194 < 4); j194 = (j194 + 1)) {
				fVec13_tmp[j194] = fVec13_perm[j194];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec13[i] = fSlow32;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec13_perm[j] = fVec13_tmp[(count + j)];
				
			}
			/* Recursive loop 313 */
			/* Pre code */
			for (int j195 = 0; (j195 < 4); j195 = (j195 + 1)) {
				fVec14_tmp[j195] = fVec14_perm[j195];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec14[i] = fSlow33;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec14_perm[j] = fVec14_tmp[(count + j)];
				
			}
			/* Recursive loop 314 */
			/* Pre code */
			for (int j196 = 0; (j196 < 4); j196 = (j196 + 1)) {
				fVec15_tmp[j196] = fVec15_perm[j196];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec15[i] = fSlow34;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec15_perm[j] = fVec15_tmp[(count + j)];
				
			}
			/* Recursive loop 315 */
			/* Pre code */
			for (int j197 = 0; (j197 < 4); j197 = (j197 + 1)) {
				fVec16_tmp[j197] = fVec16_perm[j197];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec16[i] = fSlow35;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec16_perm[j] = fVec16_tmp[(count + j)];
				
			}
			/* Recursive loop 316 */
			/* Pre code */
			for (int j198 = 0; (j198 < 4); j198 = (j198 + 1)) {
				fVec17_tmp[j198] = fVec17_perm[j198];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec17[i] = fSlow36;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec17_perm[j] = fVec17_tmp[(count + j)];
				
			}
			/* Recursive loop 317 */
			/* Pre code */
			for (int j199 = 0; (j199 < 4); j199 = (j199 + 1)) {
				fVec18_tmp[j199] = fVec18_perm[j199];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec18[i] = fSlow37;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec18_perm[j] = fVec18_tmp[(count + j)];
				
			}
			/* Recursive loop 318 */
			/* Pre code */
			for (int j200 = 0; (j200 < 4); j200 = (j200 + 1)) {
				fVec19_tmp[j200] = fVec19_perm[j200];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec19[i] = fSlow38;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec19_perm[j] = fVec19_tmp[(count + j)];
				
			}
			/* Recursive loop 319 */
			/* Pre code */
			for (int j201 = 0; (j201 < 4); j201 = (j201 + 1)) {
				fVec20_tmp[j201] = fVec20_perm[j201];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec20[i] = fSlow39;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec20_perm[j] = fVec20_tmp[(count + j)];
				
			}
			/* Recursive loop 320 */
			/* Pre code */
			for (int j202 = 0; (j202 < 4); j202 = (j202 + 1)) {
				fVec21_tmp[j202] = fVec21_perm[j202];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec21[i] = fSlow40;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec21_perm[j] = fVec21_tmp[(count + j)];
				
			}
			/* Recursive loop 321 */
			/* Pre code */
			for (int j203 = 0; (j203 < 4); j203 = (j203 + 1)) {
				fVec22_tmp[j203] = fVec22_perm[j203];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec22[i] = fSlow41;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec22_perm[j] = fVec22_tmp[(count + j)];
				
			}
			/* Recursive loop 322 */
			/* Pre code */
			for (int j204 = 0; (j204 < 4); j204 = (j204 + 1)) {
				fVec23_tmp[j204] = fVec23_perm[j204];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec23[i] = fSlow42;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec23_perm[j] = fVec23_tmp[(count + j)];
				
			}
			/* Recursive loop 323 */
			/* Pre code */
			for (int j205 = 0; (j205 < 4); j205 = (j205 + 1)) {
				fVec24_tmp[j205] = fVec24_perm[j205];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec24[i] = fSlow43;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec24_perm[j] = fVec24_tmp[(count + j)];
				
			}
			/* Recursive loop 324 */
			/* Pre code */
			for (int j206 = 0; (j206 < 4); j206 = (j206 + 1)) {
				fVec25_tmp[j206] = fVec25_perm[j206];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec25[i] = fSlow44;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec25_perm[j] = fVec25_tmp[(count + j)];
				
			}
			/* Recursive loop 325 */
			/* Pre code */
			for (int j207 = 0; (j207 < 4); j207 = (j207 + 1)) {
				fVec26_tmp[j207] = fVec26_perm[j207];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec26[i] = fSlow45;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec26_perm[j] = fVec26_tmp[(count + j)];
				
			}
			/* Recursive loop 326 */
			/* Pre code */
			for (int j208 = 0; (j208 < 4); j208 = (j208 + 1)) {
				fVec27_tmp[j208] = fVec27_perm[j208];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec27[i] = fSlow46;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec27_perm[j] = fVec27_tmp[(count + j)];
				
			}
			/* Recursive loop 327 */
			/* Pre code */
			for (int j209 = 0; (j209 < 4); j209 = (j209 + 1)) {
				fVec28_tmp[j209] = fVec28_perm[j209];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec28[i] = fSlow47;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec28_perm[j] = fVec28_tmp[(count + j)];
				
			}
			/* Recursive loop 328 */
			/* Pre code */
			for (int j210 = 0; (j210 < 4); j210 = (j210 + 1)) {
				fVec29_tmp[j210] = fVec29_perm[j210];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec29[i] = fSlow48;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec29_perm[j] = fVec29_tmp[(count + j)];
				
			}
			/* Recursive loop 329 */
			/* Pre code */
			for (int j211 = 0; (j211 < 4); j211 = (j211 + 1)) {
				fVec30_tmp[j211] = fVec30_perm[j211];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec30[i] = fSlow49;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec30_perm[j] = fVec30_tmp[(count + j)];
				
			}
			/* Recursive loop 330 */
			/* Pre code */
			for (int j212 = 0; (j212 < 4); j212 = (j212 + 1)) {
				fVec31_tmp[j212] = fVec31_perm[j212];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec31[i] = fSlow50;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec31_perm[j] = fVec31_tmp[(count + j)];
				
			}
			/* Recursive loop 331 */
			/* Pre code */
			for (int j213 = 0; (j213 < 4); j213 = (j213 + 1)) {
				fVec32_tmp[j213] = fVec32_perm[j213];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec32[i] = fSlow51;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec32_perm[j] = fVec32_tmp[(count + j)];
				
			}
			/* Recursive loop 332 */
			/* Pre code */
			for (int j214 = 0; (j214 < 4); j214 = (j214 + 1)) {
				fVec33_tmp[j214] = fVec33_perm[j214];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec33[i] = fSlow52;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec33_perm[j] = fVec33_tmp[(count + j)];
				
			}
			/* Recursive loop 333 */
			/* Pre code */
			for (int j215 = 0; (j215 < 4); j215 = (j215 + 1)) {
				fVec34_tmp[j215] = fVec34_perm[j215];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec34[i] = fSlow53;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec34_perm[j] = fVec34_tmp[(count + j)];
				
			}
			/* Recursive loop 334 */
			/* Pre code */
			for (int j216 = 0; (j216 < 4); j216 = (j216 + 1)) {
				fVec35_tmp[j216] = fVec35_perm[j216];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec35[i] = fSlow54;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec35_perm[j] = fVec35_tmp[(count + j)];
				
			}
			/* Recursive loop 335 */
			/* Pre code */
			for (int j217 = 0; (j217 < 4); j217 = (j217 + 1)) {
				fVec36_tmp[j217] = fVec36_perm[j217];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec36[i] = fSlow55;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec36_perm[j] = fVec36_tmp[(count + j)];
				
			}
			/* Recursive loop 336 */
			/* Pre code */
			for (int j218 = 0; (j218 < 4); j218 = (j218 + 1)) {
				fVec37_tmp[j218] = fVec37_perm[j218];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec37[i] = fSlow56;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec37_perm[j] = fVec37_tmp[(count + j)];
				
			}
			/* Recursive loop 337 */
			/* Pre code */
			for (int j219 = 0; (j219 < 4); j219 = (j219 + 1)) {
				fVec38_tmp[j219] = fVec38_perm[j219];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec38[i] = fSlow57;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec38_perm[j] = fVec38_tmp[(count + j)];
				
			}
			/* Recursive loop 338 */
			/* Pre code */
			for (int j220 = 0; (j220 < 4); j220 = (j220 + 1)) {
				fVec39_tmp[j220] = fVec39_perm[j220];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec39[i] = fSlow58;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec39_perm[j] = fVec39_tmp[(count + j)];
				
			}
			/* Recursive loop 339 */
			/* Pre code */
			for (int j221 = 0; (j221 < 4); j221 = (j221 + 1)) {
				fVec40_tmp[j221] = fVec40_perm[j221];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec40[i] = fSlow59;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec40_perm[j] = fVec40_tmp[(count + j)];
				
			}
			/* Recursive loop 340 */
			/* Pre code */
			for (int j222 = 0; (j222 < 4); j222 = (j222 + 1)) {
				fVec41_tmp[j222] = fVec41_perm[j222];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec41[i] = fSlow60;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec41_perm[j] = fVec41_tmp[(count + j)];
				
			}
			/* Recursive loop 341 */
			/* Pre code */
			for (int j223 = 0; (j223 < 4); j223 = (j223 + 1)) {
				fVec42_tmp[j223] = fVec42_perm[j223];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec42[i] = fSlow61;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec42_perm[j] = fVec42_tmp[(count + j)];
				
			}
			/* Recursive loop 342 */
			/* Pre code */
			for (int j224 = 0; (j224 < 4); j224 = (j224 + 1)) {
				fVec43_tmp[j224] = fVec43_perm[j224];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec43[i] = fSlow62;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec43_perm[j] = fVec43_tmp[(count + j)];
				
			}
			/* Recursive loop 343 */
			/* Pre code */
			for (int j225 = 0; (j225 < 4); j225 = (j225 + 1)) {
				fVec44_tmp[j225] = fVec44_perm[j225];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec44[i] = fSlow63;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec44_perm[j] = fVec44_tmp[(count + j)];
				
			}
			/* Recursive loop 344 */
			/* Pre code */
			for (int j226 = 0; (j226 < 4); j226 = (j226 + 1)) {
				fVec45_tmp[j226] = fVec45_perm[j226];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec45[i] = fSlow64;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec45_perm[j] = fVec45_tmp[(count + j)];
				
			}
			/* Recursive loop 345 */
			/* Pre code */
			for (int j227 = 0; (j227 < 4); j227 = (j227 + 1)) {
				fVec46_tmp[j227] = fVec46_perm[j227];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec46[i] = fSlow65;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec46_perm[j] = fVec46_tmp[(count + j)];
				
			}
			/* Recursive loop 346 */
			/* Pre code */
			for (int j228 = 0; (j228 < 4); j228 = (j228 + 1)) {
				fVec47_tmp[j228] = fVec47_perm[j228];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fVec47[i] = fSlow66;
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fVec47_perm[j] = fVec47_tmp[(count + j)];
				
			}
			/* Recursive loop 347 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec103[i] = (fSlow67 + ((fVec48[(i - 1)] + fVec48[(i - 2)]) + fVec48[(i - 3)]));
				
			}
			/* Recursive loop 348 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec105[i] = (fSlow68 + ((fVec49[(i - 1)] + fVec49[(i - 2)]) + fVec49[(i - 3)]));
				
			}
			/* Recursive loop 349 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec107[i] = (fSlow69 + ((fVec50[(i - 1)] + fVec50[(i - 2)]) + fVec50[(i - 3)]));
				
			}
			/* Recursive loop 350 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec109[i] = (fSlow70 + ((fVec51[(i - 1)] + fVec51[(i - 2)]) + fVec51[(i - 3)]));
				
			}
			/* Recursive loop 351 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec111[i] = (fSlow71 + ((fVec52[(i - 1)] + fVec52[(i - 2)]) + fVec52[(i - 3)]));
				
			}
			/* Recursive loop 352 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec113[i] = (fSlow72 + ((fVec53[(i - 1)] + fVec53[(i - 2)]) + fVec53[(i - 3)]));
				
			}
			/* Recursive loop 353 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec115[i] = (fSlow73 + ((fVec54[(i - 1)] + fVec54[(i - 2)]) + fVec54[(i - 3)]));
				
			}
			/* Recursive loop 354 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec117[i] = (fSlow74 + ((fVec55[(i - 1)] + fVec55[(i - 2)]) + fVec55[(i - 3)]));
				
			}
			/* Recursive loop 355 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec119[i] = (fSlow75 + ((fVec56[(i - 1)] + fVec56[(i - 2)]) + fVec56[(i - 3)]));
				
			}
			/* Recursive loop 356 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec121[i] = (fSlow76 + ((fVec57[(i - 1)] + fVec57[(i - 2)]) + fVec57[(i - 3)]));
				
			}
			/* Recursive loop 357 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec123[i] = (fSlow77 + ((fVec58[(i - 1)] + fVec58[(i - 2)]) + fVec58[(i - 3)]));
				
			}
			/* Recursive loop 358 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec125[i] = (fSlow78 + ((fVec59[(i - 1)] + fVec59[(i - 2)]) + fVec59[(i - 3)]));
				
			}
			/* Recursive loop 359 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec127[i] = (fSlow79 + ((fVec60[(i - 1)] + fVec60[(i - 2)]) + fVec60[(i - 3)]));
				
			}
			/* Recursive loop 360 */
			/* Pre code */
			for (int j349 = 0; (j349 < 4); j349 = (j349 + 1)) {
				fYec77_tmp[j349] = fYec77_perm[j349];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec77[i] = (float(iRec212[i]) + fZec156[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec77_perm[j] = fYec77_tmp[(count + j)];
				
			}
			/* Recursive loop 361 */
			/* Pre code */
			for (int j353 = 0; (j353 < 4); j353 = (j353 + 1)) {
				fYec78_tmp[j353] = fYec78_perm[j353];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec78[i] = (float(iRec215[i]) + fZec157[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec78_perm[j] = fYec78_tmp[(count + j)];
				
			}
			/* Recursive loop 362 */
			/* Pre code */
			for (int j357 = 0; (j357 < 4); j357 = (j357 + 1)) {
				fYec79_tmp[j357] = fYec79_perm[j357];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec79[i] = (float(iRec218[i]) + fZec158[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec79_perm[j] = fYec79_tmp[(count + j)];
				
			}
			/* Recursive loop 363 */
			/* Pre code */
			for (int j361 = 0; (j361 < 4); j361 = (j361 + 1)) {
				fYec80_tmp[j361] = fYec80_perm[j361];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec80[i] = (float(iRec221[i]) + fZec159[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec80_perm[j] = fYec80_tmp[(count + j)];
				
			}
			/* Recursive loop 364 */
			/* Pre code */
			for (int j365 = 0; (j365 < 4); j365 = (j365 + 1)) {
				fYec81_tmp[j365] = fYec81_perm[j365];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec81[i] = (float(iRec224[i]) + fZec160[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec81_perm[j] = fYec81_tmp[(count + j)];
				
			}
			/* Recursive loop 365 */
			/* Pre code */
			for (int j369 = 0; (j369 < 4); j369 = (j369 + 1)) {
				fYec82_tmp[j369] = fYec82_perm[j369];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec82[i] = (float(iRec227[i]) + fZec161[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec82_perm[j] = fYec82_tmp[(count + j)];
				
			}
			/* Recursive loop 366 */
			/* Pre code */
			for (int j373 = 0; (j373 < 4); j373 = (j373 + 1)) {
				fYec83_tmp[j373] = fYec83_perm[j373];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec83[i] = (float(iRec230[i]) + fZec162[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec83_perm[j] = fYec83_tmp[(count + j)];
				
			}
			/* Recursive loop 367 */
			/* Pre code */
			for (int j377 = 0; (j377 < 4); j377 = (j377 + 1)) {
				fYec84_tmp[j377] = fYec84_perm[j377];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec84[i] = (float(iRec233[i]) + fZec146[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec84_perm[j] = fYec84_tmp[(count + j)];
				
			}
			/* Recursive loop 368 */
			/* Pre code */
			for (int j381 = 0; (j381 < 4); j381 = (j381 + 1)) {
				fYec85_tmp[j381] = fYec85_perm[j381];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec85[i] = (float(iRec236[i]) + fZec147[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec85_perm[j] = fYec85_tmp[(count + j)];
				
			}
			/* Recursive loop 369 */
			/* Pre code */
			for (int j385 = 0; (j385 < 4); j385 = (j385 + 1)) {
				fYec86_tmp[j385] = fYec86_perm[j385];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec86[i] = (float(iRec239[i]) + fZec148[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec86_perm[j] = fYec86_tmp[(count + j)];
				
			}
			/* Recursive loop 370 */
			/* Pre code */
			for (int j389 = 0; (j389 < 4); j389 = (j389 + 1)) {
				fYec87_tmp[j389] = fYec87_perm[j389];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec87[i] = (float(iRec242[i]) + fZec149[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec87_perm[j] = fYec87_tmp[(count + j)];
				
			}
			/* Recursive loop 371 */
			/* Pre code */
			for (int j393 = 0; (j393 < 4); j393 = (j393 + 1)) {
				fYec88_tmp[j393] = fYec88_perm[j393];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec88[i] = (float(iRec245[i]) + fZec150[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec88_perm[j] = fYec88_tmp[(count + j)];
				
			}
			/* Recursive loop 372 */
			/* Pre code */
			for (int j120 = 0; (j120 < 4); j120 = (j120 + 1)) {
				fRec83_tmp[j120] = fRec83_perm[j120];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec83[i] = (fConst5 * (fRec83[(i - 1)] + (fRec84[i] - fRec84[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec83_perm[j] = fRec83_tmp[(count + j)];
				
			}
			/* Recursive loop 373 */
			/* Pre code */
			for (int j122 = 0; (j122 < 4); j122 = (j122 + 1)) {
				fRec85_tmp[j122] = fRec85_perm[j122];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec85[i] = (fConst5 * (fRec85[(i - 1)] + (fRec86[i] - fRec86[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec85_perm[j] = fRec85_tmp[(count + j)];
				
			}
			/* Recursive loop 374 */
			/* Pre code */
			for (int j124 = 0; (j124 < 4); j124 = (j124 + 1)) {
				fRec87_tmp[j124] = fRec87_perm[j124];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec87[i] = (fConst5 * (fRec87[(i - 1)] + (fRec88[i] - fRec88[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec87_perm[j] = fRec87_tmp[(count + j)];
				
			}
			/* Recursive loop 375 */
			/* Pre code */
			for (int j126 = 0; (j126 < 4); j126 = (j126 + 1)) {
				fRec89_tmp[j126] = fRec89_perm[j126];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec89[i] = (fConst5 * (fRec89[(i - 1)] + (fRec90[i] - fRec90[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec89_perm[j] = fRec89_tmp[(count + j)];
				
			}
			/* Recursive loop 376 */
			/* Pre code */
			for (int j128 = 0; (j128 < 4); j128 = (j128 + 1)) {
				fRec91_tmp[j128] = fRec91_perm[j128];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec91[i] = (fConst5 * (fRec91[(i - 1)] + (fRec92[i] - fRec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec91_perm[j] = fRec91_tmp[(count + j)];
				
			}
			/* Recursive loop 377 */
			/* Pre code */
			for (int j130 = 0; (j130 < 4); j130 = (j130 + 1)) {
				fRec93_tmp[j130] = fRec93_perm[j130];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec93[i] = (fConst5 * (fRec93[(i - 1)] + (fRec94[i] - fRec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec93_perm[j] = fRec93_tmp[(count + j)];
				
			}
			/* Recursive loop 378 */
			/* Pre code */
			for (int j132 = 0; (j132 < 4); j132 = (j132 + 1)) {
				fRec95_tmp[j132] = fRec95_perm[j132];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec95[i] = (fConst5 * (fRec95[(i - 1)] + (fRec96[i] - fRec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec95_perm[j] = fRec95_tmp[(count + j)];
				
			}
			/* Recursive loop 379 */
			/* Pre code */
			for (int j134 = 0; (j134 < 4); j134 = (j134 + 1)) {
				fRec97_tmp[j134] = fRec97_perm[j134];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec97[i] = (fConst5 * (fRec97[(i - 1)] + (fRec98[i] - fRec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec97_perm[j] = fRec97_tmp[(count + j)];
				
			}
			/* Recursive loop 380 */
			/* Pre code */
			for (int j136 = 0; (j136 < 4); j136 = (j136 + 1)) {
				fRec99_tmp[j136] = fRec99_perm[j136];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec99[i] = (fConst5 * (fRec99[(i - 1)] + (fRec100[i] - fRec100[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec99_perm[j] = fRec99_tmp[(count + j)];
				
			}
			/* Recursive loop 381 */
			/* Pre code */
			for (int j138 = 0; (j138 < 4); j138 = (j138 + 1)) {
				fRec101_tmp[j138] = fRec101_perm[j138];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec101[i] = (fConst5 * (fRec101[(i - 1)] + (fRec102[i] - fRec102[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec101_perm[j] = fRec101_tmp[(count + j)];
				
			}
			/* Recursive loop 382 */
			/* Pre code */
			for (int j140 = 0; (j140 < 4); j140 = (j140 + 1)) {
				fRec103_tmp[j140] = fRec103_perm[j140];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec103[i] = (fConst5 * (fRec103[(i - 1)] + (fRec104[i] - fRec104[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec103_perm[j] = fRec103_tmp[(count + j)];
				
			}
			/* Recursive loop 383 */
			/* Pre code */
			for (int j142 = 0; (j142 < 4); j142 = (j142 + 1)) {
				fRec105_tmp[j142] = fRec105_perm[j142];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec105[i] = (fConst5 * (fRec105[(i - 1)] + (fRec106[i] - fRec106[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec105_perm[j] = fRec105_tmp[(count + j)];
				
			}
			/* Recursive loop 384 */
			/* Pre code */
			for (int j144 = 0; (j144 < 4); j144 = (j144 + 1)) {
				fRec107_tmp[j144] = fRec107_perm[j144];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec107[i] = (fConst5 * (fRec107[(i - 1)] + (fRec108[i] - fRec108[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec107_perm[j] = fRec107_tmp[(count + j)];
				
			}
			/* Recursive loop 385 */
			/* Pre code */
			for (int j146 = 0; (j146 < 4); j146 = (j146 + 1)) {
				fRec109_tmp[j146] = fRec109_perm[j146];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec109[i] = (fConst5 * (fRec109[(i - 1)] + (fRec110[i] - fRec110[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec109_perm[j] = fRec109_tmp[(count + j)];
				
			}
			/* Recursive loop 386 */
			/* Pre code */
			for (int j148 = 0; (j148 < 4); j148 = (j148 + 1)) {
				fRec111_tmp[j148] = fRec111_perm[j148];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec111[i] = (fConst5 * (fRec111[(i - 1)] + (fRec112[i] - fRec112[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec111_perm[j] = fRec111_tmp[(count + j)];
				
			}
			/* Recursive loop 387 */
			/* Pre code */
			for (int j150 = 0; (j150 < 4); j150 = (j150 + 1)) {
				fRec113_tmp[j150] = fRec113_perm[j150];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec113[i] = (fConst5 * (fRec113[(i - 1)] + (fRec114[i] - fRec114[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec113_perm[j] = fRec113_tmp[(count + j)];
				
			}
			/* Recursive loop 388 */
			/* Pre code */
			for (int j152 = 0; (j152 < 4); j152 = (j152 + 1)) {
				fRec115_tmp[j152] = fRec115_perm[j152];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec115[i] = (fConst5 * (fRec115[(i - 1)] + (fRec116[i] - fRec116[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec115_perm[j] = fRec115_tmp[(count + j)];
				
			}
			/* Recursive loop 389 */
			/* Pre code */
			for (int j154 = 0; (j154 < 4); j154 = (j154 + 1)) {
				fRec117_tmp[j154] = fRec117_perm[j154];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec117[i] = (fConst5 * (fRec117[(i - 1)] + (fRec118[i] - fRec118[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec117_perm[j] = fRec117_tmp[(count + j)];
				
			}
			/* Recursive loop 390 */
			/* Pre code */
			for (int j156 = 0; (j156 < 4); j156 = (j156 + 1)) {
				fRec119_tmp[j156] = fRec119_perm[j156];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec119[i] = (fConst5 * (fRec119[(i - 1)] + (fRec120[i] - fRec120[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec119_perm[j] = fRec119_tmp[(count + j)];
				
			}
			/* Recursive loop 391 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec52[i] = (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + fZec51[i]))));
				
			}
			/* Recursive loop 392 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec53[i] = (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec121[i] + fRec122[i]))));
				
			}
			/* Recursive loop 393 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec55[i] = (fSlow19 + ((fVec0[(i - 1)] + fVec0[(i - 2)]) + fVec0[(i - 3)]));
				
			}
			/* Recursive loop 394 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec56[i] = (fSlow20 + ((fVec1[(i - 1)] + fVec1[(i - 2)]) + fVec1[(i - 3)]));
				
			}
			/* Recursive loop 395 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec57[i] = (fSlow21 + ((fVec2[(i - 1)] + fVec2[(i - 2)]) + fVec2[(i - 3)]));
				
			}
			/* Recursive loop 396 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec58[i] = (fSlow22 + ((fVec3[(i - 1)] + fVec3[(i - 2)]) + fVec3[(i - 3)]));
				
			}
			/* Recursive loop 397 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec59[i] = (fSlow23 + ((fVec4[(i - 1)] + fVec4[(i - 2)]) + fVec4[(i - 3)]));
				
			}
			/* Recursive loop 398 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec60[i] = (fSlow24 + ((fVec5[(i - 1)] + fVec5[(i - 2)]) + fVec5[(i - 3)]));
				
			}
			/* Recursive loop 399 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec61[i] = (fSlow25 + ((fVec6[(i - 1)] + fVec6[(i - 2)]) + fVec6[(i - 3)]));
				
			}
			/* Recursive loop 400 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec62[i] = (fSlow26 + ((fVec7[(i - 1)] + fVec7[(i - 2)]) + fVec7[(i - 3)]));
				
			}
			/* Recursive loop 401 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec63[i] = (fSlow27 + ((fVec8[(i - 1)] + fVec8[(i - 2)]) + fVec8[(i - 3)]));
				
			}
			/* Recursive loop 402 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec64[i] = (fSlow28 + ((fVec9[(i - 1)] + fVec9[(i - 2)]) + fVec9[(i - 3)]));
				
			}
			/* Recursive loop 403 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec65[i] = (fSlow29 + ((fVec10[(i - 1)] + fVec10[(i - 2)]) + fVec10[(i - 3)]));
				
			}
			/* Recursive loop 404 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec66[i] = (fSlow30 + ((fVec11[(i - 1)] + fVec11[(i - 2)]) + fVec11[(i - 3)]));
				
			}
			/* Recursive loop 405 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec67[i] = (fSlow31 + ((fVec12[(i - 1)] + fVec12[(i - 2)]) + fVec12[(i - 3)]));
				
			}
			/* Recursive loop 406 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec68[i] = (fSlow32 + ((fVec13[(i - 1)] + fVec13[(i - 2)]) + fVec13[(i - 3)]));
				
			}
			/* Recursive loop 407 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec69[i] = (fSlow33 + ((fVec14[(i - 1)] + fVec14[(i - 2)]) + fVec14[(i - 3)]));
				
			}
			/* Recursive loop 408 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec70[i] = (fSlow34 + ((fVec15[(i - 1)] + fVec15[(i - 2)]) + fVec15[(i - 3)]));
				
			}
			/* Recursive loop 409 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec71[i] = (fSlow35 + ((fVec16[(i - 1)] + fVec16[(i - 2)]) + fVec16[(i - 3)]));
				
			}
			/* Recursive loop 410 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec72[i] = (fSlow36 + ((fVec17[(i - 1)] + fVec17[(i - 2)]) + fVec17[(i - 3)]));
				
			}
			/* Recursive loop 411 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec73[i] = (fSlow37 + ((fVec18[(i - 1)] + fVec18[(i - 2)]) + fVec18[(i - 3)]));
				
			}
			/* Recursive loop 412 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec74[i] = (fSlow38 + ((fVec19[(i - 1)] + fVec19[(i - 2)]) + fVec19[(i - 3)]));
				
			}
			/* Recursive loop 413 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec75[i] = (fSlow39 + ((fVec20[(i - 1)] + fVec20[(i - 2)]) + fVec20[(i - 3)]));
				
			}
			/* Recursive loop 414 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec76[i] = (fSlow40 + ((fVec21[(i - 1)] + fVec21[(i - 2)]) + fVec21[(i - 3)]));
				
			}
			/* Recursive loop 415 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec77[i] = (fSlow41 + ((fVec22[(i - 1)] + fVec22[(i - 2)]) + fVec22[(i - 3)]));
				
			}
			/* Recursive loop 416 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec78[i] = (fSlow42 + ((fVec23[(i - 1)] + fVec23[(i - 2)]) + fVec23[(i - 3)]));
				
			}
			/* Recursive loop 417 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec79[i] = (fSlow43 + ((fVec24[(i - 1)] + fVec24[(i - 2)]) + fVec24[(i - 3)]));
				
			}
			/* Recursive loop 418 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec80[i] = (fSlow44 + ((fVec25[(i - 1)] + fVec25[(i - 2)]) + fVec25[(i - 3)]));
				
			}
			/* Recursive loop 419 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec81[i] = (fSlow45 + ((fVec26[(i - 1)] + fVec26[(i - 2)]) + fVec26[(i - 3)]));
				
			}
			/* Recursive loop 420 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec82[i] = (fSlow46 + ((fVec27[(i - 1)] + fVec27[(i - 2)]) + fVec27[(i - 3)]));
				
			}
			/* Recursive loop 421 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec83[i] = (fSlow47 + ((fVec28[(i - 1)] + fVec28[(i - 2)]) + fVec28[(i - 3)]));
				
			}
			/* Recursive loop 422 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec84[i] = (fSlow48 + ((fVec29[(i - 1)] + fVec29[(i - 2)]) + fVec29[(i - 3)]));
				
			}
			/* Recursive loop 423 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec85[i] = (fSlow49 + ((fVec30[(i - 1)] + fVec30[(i - 2)]) + fVec30[(i - 3)]));
				
			}
			/* Recursive loop 424 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec86[i] = (fSlow50 + ((fVec31[(i - 1)] + fVec31[(i - 2)]) + fVec31[(i - 3)]));
				
			}
			/* Recursive loop 425 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec87[i] = (fSlow51 + ((fVec32[(i - 1)] + fVec32[(i - 2)]) + fVec32[(i - 3)]));
				
			}
			/* Recursive loop 426 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec88[i] = (fSlow52 + ((fVec33[(i - 1)] + fVec33[(i - 2)]) + fVec33[(i - 3)]));
				
			}
			/* Recursive loop 427 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec89[i] = (fSlow53 + ((fVec34[(i - 1)] + fVec34[(i - 2)]) + fVec34[(i - 3)]));
				
			}
			/* Recursive loop 428 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec90[i] = (fSlow54 + ((fVec35[(i - 1)] + fVec35[(i - 2)]) + fVec35[(i - 3)]));
				
			}
			/* Recursive loop 429 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec91[i] = (fSlow55 + ((fVec36[(i - 1)] + fVec36[(i - 2)]) + fVec36[(i - 3)]));
				
			}
			/* Recursive loop 430 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec92[i] = (fSlow56 + ((fVec37[(i - 1)] + fVec37[(i - 2)]) + fVec37[(i - 3)]));
				
			}
			/* Recursive loop 431 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec93[i] = (fSlow57 + ((fVec38[(i - 1)] + fVec38[(i - 2)]) + fVec38[(i - 3)]));
				
			}
			/* Recursive loop 432 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec94[i] = (fSlow58 + ((fVec39[(i - 1)] + fVec39[(i - 2)]) + fVec39[(i - 3)]));
				
			}
			/* Recursive loop 433 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec95[i] = (fSlow59 + ((fVec40[(i - 1)] + fVec40[(i - 2)]) + fVec40[(i - 3)]));
				
			}
			/* Recursive loop 434 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec96[i] = (fSlow60 + ((fVec41[(i - 1)] + fVec41[(i - 2)]) + fVec41[(i - 3)]));
				
			}
			/* Recursive loop 435 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec97[i] = (fSlow61 + ((fVec42[(i - 1)] + fVec42[(i - 2)]) + fVec42[(i - 3)]));
				
			}
			/* Recursive loop 436 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec98[i] = (fSlow62 + ((fVec43[(i - 1)] + fVec43[(i - 2)]) + fVec43[(i - 3)]));
				
			}
			/* Recursive loop 437 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec99[i] = (fSlow63 + ((fVec44[(i - 1)] + fVec44[(i - 2)]) + fVec44[(i - 3)]));
				
			}
			/* Recursive loop 438 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec100[i] = (fSlow64 + ((fVec45[(i - 1)] + fVec45[(i - 2)]) + fVec45[(i - 3)]));
				
			}
			/* Recursive loop 439 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec101[i] = (fSlow65 + ((fVec46[(i - 1)] + fVec46[(i - 2)]) + fVec46[(i - 3)]));
				
			}
			/* Recursive loop 440 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec102[i] = (fSlow66 + ((fVec47[(i - 1)] + fVec47[(i - 2)]) + fVec47[(i - 3)]));
				
			}
			/* Recursive loop 441 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec104[i] = (fRec121[i] * fZec103[i]);
				
			}
			/* Recursive loop 442 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec106[i] = (fRec122[i] * fZec105[i]);
				
			}
			/* Recursive loop 443 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec108[i] = (fRec123[i] * fZec107[i]);
				
			}
			/* Recursive loop 444 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec110[i] = (fRec124[i] * fZec109[i]);
				
			}
			/* Recursive loop 445 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec112[i] = (fRec125[i] * fZec111[i]);
				
			}
			/* Recursive loop 446 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec114[i] = (fRec126[i] * fZec113[i]);
				
			}
			/* Recursive loop 447 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec116[i] = (fRec127[i] * fZec115[i]);
				
			}
			/* Recursive loop 448 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec118[i] = (fRec128[i] * fZec117[i]);
				
			}
			/* Recursive loop 449 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec120[i] = (fRec129[i] * fZec119[i]);
				
			}
			/* Recursive loop 450 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec122[i] = (fRec130[i] * fZec121[i]);
				
			}
			/* Recursive loop 451 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec124[i] = (fRec131[i] * fZec123[i]);
				
			}
			/* Recursive loop 452 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec126[i] = (fRec132[i] * fZec125[i]);
				
			}
			/* Recursive loop 453 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec128[i] = (fRec121[i] * fZec127[i]);
				
			}
			/* Recursive loop 454 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec166[i] = (0.5f * fYec77[i]);
				
			}
			/* Recursive loop 455 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec167[i] = (0.5f * fYec78[i]);
				
			}
			/* Recursive loop 456 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec168[i] = (0.5f * fYec79[i]);
				
			}
			/* Recursive loop 457 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec169[i] = (0.5f * fYec80[i]);
				
			}
			/* Recursive loop 458 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec170[i] = (0.5f * fYec81[i]);
				
			}
			/* Recursive loop 459 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec171[i] = (0.5f * fYec82[i]);
				
			}
			/* Recursive loop 460 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec172[i] = (0.5f * fYec83[i]);
				
			}
			/* Recursive loop 461 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec173[i] = (0.5f * fYec84[i]);
				
			}
			/* Recursive loop 462 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec174[i] = (0.5f * fYec85[i]);
				
			}
			/* Recursive loop 463 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec175[i] = (0.5f * fYec86[i]);
				
			}
			/* Recursive loop 464 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec176[i] = (0.5f * fYec87[i]);
				
			}
			/* Recursive loop 465 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec177[i] = (0.5f * fYec88[i]);
				
			}
			/* Recursive loop 466 */
			/* Pre code */
			for (int j398 = 0; (j398 < 4); j398 = (j398 + 1)) {
				iRec249_tmp[j398] = iRec249_perm[j398];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec249[i] = (((0.5f * (fYec77[i] - fYec77[(i - 1)])) < 0.0f)?(1 - iRec249[(i - 1)]):iRec249[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec249_perm[j] = iRec249_tmp[(count + j)];
				
			}
			/* Recursive loop 467 */
			/* Pre code */
			for (int j401 = 0; (j401 < 4); j401 = (j401 + 1)) {
				iRec252_tmp[j401] = iRec252_perm[j401];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec252[i] = (((0.5f * (fYec78[i] - fYec78[(i - 1)])) < 0.0f)?(1 - iRec252[(i - 1)]):iRec252[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec252_perm[j] = iRec252_tmp[(count + j)];
				
			}
			/* Recursive loop 468 */
			/* Pre code */
			for (int j404 = 0; (j404 < 4); j404 = (j404 + 1)) {
				iRec255_tmp[j404] = iRec255_perm[j404];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec255[i] = (((0.5f * (fYec79[i] - fYec79[(i - 1)])) < 0.0f)?(1 - iRec255[(i - 1)]):iRec255[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec255_perm[j] = iRec255_tmp[(count + j)];
				
			}
			/* Recursive loop 469 */
			/* Pre code */
			for (int j407 = 0; (j407 < 4); j407 = (j407 + 1)) {
				iRec258_tmp[j407] = iRec258_perm[j407];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec258[i] = (((0.5f * (fYec80[i] - fYec80[(i - 1)])) < 0.0f)?(1 - iRec258[(i - 1)]):iRec258[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec258_perm[j] = iRec258_tmp[(count + j)];
				
			}
			/* Recursive loop 470 */
			/* Pre code */
			for (int j410 = 0; (j410 < 4); j410 = (j410 + 1)) {
				iRec261_tmp[j410] = iRec261_perm[j410];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec261[i] = (((0.5f * (fYec81[i] - fYec81[(i - 1)])) < 0.0f)?(1 - iRec261[(i - 1)]):iRec261[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec261_perm[j] = iRec261_tmp[(count + j)];
				
			}
			/* Recursive loop 471 */
			/* Pre code */
			for (int j413 = 0; (j413 < 4); j413 = (j413 + 1)) {
				iRec264_tmp[j413] = iRec264_perm[j413];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec264[i] = (((0.5f * (fYec82[i] - fYec82[(i - 1)])) < 0.0f)?(1 - iRec264[(i - 1)]):iRec264[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec264_perm[j] = iRec264_tmp[(count + j)];
				
			}
			/* Recursive loop 472 */
			/* Pre code */
			for (int j416 = 0; (j416 < 4); j416 = (j416 + 1)) {
				iRec267_tmp[j416] = iRec267_perm[j416];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec267[i] = (((0.5f * (fYec83[i] - fYec83[(i - 1)])) < 0.0f)?(1 - iRec267[(i - 1)]):iRec267[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec267_perm[j] = iRec267_tmp[(count + j)];
				
			}
			/* Recursive loop 473 */
			/* Pre code */
			for (int j419 = 0; (j419 < 4); j419 = (j419 + 1)) {
				iRec270_tmp[j419] = iRec270_perm[j419];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec270[i] = (((0.5f * (fYec84[i] - fYec84[(i - 1)])) < 0.0f)?(1 - iRec270[(i - 1)]):iRec270[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec270_perm[j] = iRec270_tmp[(count + j)];
				
			}
			/* Recursive loop 474 */
			/* Pre code */
			for (int j422 = 0; (j422 < 4); j422 = (j422 + 1)) {
				iRec273_tmp[j422] = iRec273_perm[j422];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec273[i] = (((0.5f * (fYec85[i] - fYec85[(i - 1)])) < 0.0f)?(1 - iRec273[(i - 1)]):iRec273[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec273_perm[j] = iRec273_tmp[(count + j)];
				
			}
			/* Recursive loop 475 */
			/* Pre code */
			for (int j425 = 0; (j425 < 4); j425 = (j425 + 1)) {
				iRec276_tmp[j425] = iRec276_perm[j425];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec276[i] = (((0.5f * (fYec86[i] - fYec86[(i - 1)])) < 0.0f)?(1 - iRec276[(i - 1)]):iRec276[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec276_perm[j] = iRec276_tmp[(count + j)];
				
			}
			/* Recursive loop 476 */
			/* Pre code */
			for (int j428 = 0; (j428 < 4); j428 = (j428 + 1)) {
				iRec279_tmp[j428] = iRec279_perm[j428];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec279[i] = (((0.5f * (fYec87[i] - fYec87[(i - 1)])) < 0.0f)?(1 - iRec279[(i - 1)]):iRec279[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec279_perm[j] = iRec279_tmp[(count + j)];
				
			}
			/* Recursive loop 477 */
			/* Pre code */
			for (int j431 = 0; (j431 < 4); j431 = (j431 + 1)) {
				iRec282_tmp[j431] = iRec282_perm[j431];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec282[i] = (((0.5f * (fYec88[i] - fYec88[(i - 1)])) < 0.0f)?(1 - iRec282[(i - 1)]):iRec282[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec282_perm[j] = iRec282_tmp[(count + j)];
				
			}
			/* Recursive loop 478 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec54[i] = (((fSlow18 * fZec52[i]) + (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec83[i] + fRec85[i])))))))))))))))))))) + (2.0f * (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + fZec53[i])))))))));
				
			}
			/* Recursive loop 479 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec129[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec0[i] * fZec55[i]) + (fRec7[i] * fZec56[i])) + (fRec13[i] * fZec57[i])) + (fRec19[i] * fZec58[i])) + (fRec25[i] * fZec59[i])) + (fRec31[i] * fZec60[i])) + (fRec37[i] * fZec61[i])) + (fRec43[i] * fZec62[i])) + (fRec49[i] * fZec63[i])) + (fRec55[i] * fZec64[i])) + (fRec61[i] * fZec65[i])) + (fRec67[i] * fZec66[i])) + (fRec73[i] * fZec67[i])) + (fRec75[i] * fZec68[i])) + (fRec77[i] * fZec69[i])) + (fRec79[i] * fZec70[i])) + (fRec81[i] * fZec71[i]))) + (fRec83[i] * fZec72[i])) + (fRec85[i] * fZec73[i])) + (fRec87[i] * fZec74[i])) + (fRec89[i] * fZec75[i])) + (fRec91[i] * fZec76[i])) + (fRec93[i] * fZec77[i])) + (fRec95[i] * fZec78[i])) + (fRec97[i] * fZec79[i])) + (fRec99[i] * fZec80[i])) + (fRec101[i] * fZec81[i])) + (fRec103[i] * fZec82[i])) + (fRec105[i] * fZec83[i])) + (fRec107[i] * fZec84[i])) + (fRec109[i] * fZec85[i])) + (fRec111[i] * fZec86[i])) + (fRec113[i] * fZec87[i])) + (fRec115[i] * fZec88[i])) + (fRec117[i] * fZec89[i])) + (fRec119[i] * fZec90[i])) + (fRec121[i] * fZec91[i])) + (fRec122[i] * fZec92[i])) + (fRec123[i] * fZec93[i])) + (fRec124[i] * fZec94[i])) + (fRec125[i] * fZec95[i])) + (fRec126[i] * fZec96[i])) + (fRec127[i] * fZec97[i])) + (fRec128[i] * fZec98[i])) + (fRec129[i] * fZec99[i])) + (fRec130[i] * fZec100[i])) + (fRec131[i] * fZec101[i])) + (fRec132[i] * fZec102[i])) + fZec104[i]) + fZec106[i]) + fZec108[i]) + fZec110[i]) + fZec112[i]) + fZec114[i]) + fZec116[i]) + fZec118[i]) + fZec120[i]) + fZec122[i]) + fZec124[i]) + fZec126[i]) + fZec128[i]));
				
			}
			/* Recursive loop 480 */
			/* Pre code */
			for (int j246 = 0; (j246 < 4); j246 = (j246 + 1)) {
				fRec135_tmp[j246] = fRec135_perm[j246];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec135[i] = (fRec135[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec130[i]), 4, 0)) - fRec135[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec135_perm[j] = fRec135_tmp[(count + j)];
				
			}
			/* Recursive loop 481 */
			/* Pre code */
			for (int j280 = 0; (j280 < 4); j280 = (j280 + 1)) {
				fRec160_tmp[j280] = fRec160_perm[j280];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec160[i] = (fRec160[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec140[i]), 0, 0)) - fRec160[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec160_perm[j] = fRec160_tmp[(count + j)];
				
			}
			/* Recursive loop 482 */
			/* Pre code */
			for (int j284 = 0; (j284 < 4); j284 = (j284 + 1)) {
				fRec163_tmp[j284] = fRec163_perm[j284];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec163[i] = (fRec163[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec141[i]), 1, 0)) - fRec163[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec163_perm[j] = fRec163_tmp[(count + j)];
				
			}
			/* Recursive loop 483 */
			/* Pre code */
			for (int j288 = 0; (j288 < 4); j288 = (j288 + 1)) {
				fRec166_tmp[j288] = fRec166_perm[j288];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec166[i] = (fRec166[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec142[i]), 2, 0)) - fRec166[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec166_perm[j] = fRec166_tmp[(count + j)];
				
			}
			/* Recursive loop 484 */
			/* Pre code */
			for (int j292 = 0; (j292 < 4); j292 = (j292 + 1)) {
				fRec169_tmp[j292] = fRec169_perm[j292];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec169[i] = (fRec169[(i - 1)] + (fConst18 * (float(yc20_get_sample(float(fZec143[i]), 3, 0)) - fRec169[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec169_perm[j] = fRec169_tmp[(count + j)];
				
			}
			/* Recursive loop 485 */
			/* Pre code */
			for (int j298 = 0; (j298 < 4); j298 = (j298 + 1)) {
				fRec173_tmp[j298] = fRec173_perm[j298];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec173[i] = (fRec173[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec146[i]), 7, 0)) - fRec173[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec173_perm[j] = fRec173_tmp[(count + j)];
				
			}
			/* Recursive loop 486 */
			/* Pre code */
			for (int j302 = 0; (j302 < 4); j302 = (j302 + 1)) {
				fRec176_tmp[j302] = fRec176_perm[j302];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec176[i] = (fRec176[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec147[i]), 8, 0)) - fRec176[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec176_perm[j] = fRec176_tmp[(count + j)];
				
			}
			/* Recursive loop 487 */
			/* Pre code */
			for (int j306 = 0; (j306 < 4); j306 = (j306 + 1)) {
				fRec179_tmp[j306] = fRec179_perm[j306];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec179[i] = (fRec179[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec148[i]), 9, 0)) - fRec179[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec179_perm[j] = fRec179_tmp[(count + j)];
				
			}
			/* Recursive loop 488 */
			/* Pre code */
			for (int j310 = 0; (j310 < 4); j310 = (j310 + 1)) {
				fRec182_tmp[j310] = fRec182_perm[j310];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec182[i] = (fRec182[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec149[i]), 10, 0)) - fRec182[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec182_perm[j] = fRec182_tmp[(count + j)];
				
			}
			/* Recursive loop 489 */
			/* Pre code */
			for (int j314 = 0; (j314 < 4); j314 = (j314 + 1)) {
				fRec185_tmp[j314] = fRec185_perm[j314];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec185[i] = (fRec185[(i - 1)] + (fConst21 * (float(yc20_get_sample(float(fZec150[i]), 11, 0)) - fRec185[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec185_perm[j] = fRec185_tmp[(count + j)];
				
			}
			/* Recursive loop 490 */
			/* Pre code */
			for (int j320 = 0; (j320 < 4); j320 = (j320 + 1)) {
				fRec189_tmp[j320] = fRec189_perm[j320];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec189[i] = (fRec189[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec156[i]), 0, 0)) - fRec189[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec189_perm[j] = fRec189_tmp[(count + j)];
				
			}
			/* Recursive loop 491 */
			/* Pre code */
			for (int j324 = 0; (j324 < 4); j324 = (j324 + 1)) {
				fRec192_tmp[j324] = fRec192_perm[j324];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec192[i] = (fRec192[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec157[i]), 1, 0)) - fRec192[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec192_perm[j] = fRec192_tmp[(count + j)];
				
			}
			/* Recursive loop 492 */
			/* Pre code */
			for (int j328 = 0; (j328 < 4); j328 = (j328 + 1)) {
				fRec195_tmp[j328] = fRec195_perm[j328];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec195[i] = (fRec195[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec158[i]), 2, 0)) - fRec195[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec195_perm[j] = fRec195_tmp[(count + j)];
				
			}
			/* Recursive loop 493 */
			/* Pre code */
			for (int j332 = 0; (j332 < 4); j332 = (j332 + 1)) {
				fRec198_tmp[j332] = fRec198_perm[j332];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec198[i] = (fRec198[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec159[i]), 3, 0)) - fRec198[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec198_perm[j] = fRec198_tmp[(count + j)];
				
			}
			/* Recursive loop 494 */
			/* Pre code */
			for (int j336 = 0; (j336 < 4); j336 = (j336 + 1)) {
				fRec201_tmp[j336] = fRec201_perm[j336];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec201[i] = (fRec201[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec160[i]), 4, 0)) - fRec201[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec201_perm[j] = fRec201_tmp[(count + j)];
				
			}
			/* Recursive loop 495 */
			/* Pre code */
			for (int j340 = 0; (j340 < 4); j340 = (j340 + 1)) {
				fRec204_tmp[j340] = fRec204_perm[j340];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec204[i] = (fRec204[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec161[i]), 5, 0)) - fRec204[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec204_perm[j] = fRec204_tmp[(count + j)];
				
			}
			/* Recursive loop 496 */
			/* Pre code */
			for (int j344 = 0; (j344 < 4); j344 = (j344 + 1)) {
				fRec207_tmp[j344] = fRec207_perm[j344];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec207[i] = (fRec207[(i - 1)] + (fConst19 * (float(yc20_get_sample(float(fZec162[i]), 6, 0)) - fRec207[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec207_perm[j] = fRec207_tmp[(count + j)];
				
			}
			/* Recursive loop 497 */
			/* Pre code */
			for (int j350 = 0; (j350 < 4); j350 = (j350 + 1)) {
				fRec211_tmp[j350] = fRec211_perm[j350];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec211[i] = (fRec211[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec166[i]), 0, 0)) - fRec211[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec211_perm[j] = fRec211_tmp[(count + j)];
				
			}
			/* Recursive loop 498 */
			/* Pre code */
			for (int j354 = 0; (j354 < 4); j354 = (j354 + 1)) {
				fRec214_tmp[j354] = fRec214_perm[j354];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec214[i] = (fRec214[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec167[i]), 1, 0)) - fRec214[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec214_perm[j] = fRec214_tmp[(count + j)];
				
			}
			/* Recursive loop 499 */
			/* Pre code */
			for (int j358 = 0; (j358 < 4); j358 = (j358 + 1)) {
				fRec217_tmp[j358] = fRec217_perm[j358];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec217[i] = (fRec217[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec168[i]), 2, 0)) - fRec217[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec217_perm[j] = fRec217_tmp[(count + j)];
				
			}
			/* Recursive loop 500 */
			/* Pre code */
			for (int j362 = 0; (j362 < 4); j362 = (j362 + 1)) {
				fRec220_tmp[j362] = fRec220_perm[j362];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec220[i] = (fRec220[(i - 1)] + (fConst23 * (float(yc20_get_sample(float(fZec169[i]), 3, 0)) - fRec220[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec220_perm[j] = fRec220_tmp[(count + j)];
				
			}
			/* Recursive loop 501 */
			/* Pre code */
			for (int j366 = 0; (j366 < 4); j366 = (j366 + 1)) {
				fRec223_tmp[j366] = fRec223_perm[j366];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec223[i] = (fRec223[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec170[i]), 4, 0)) - fRec223[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec223_perm[j] = fRec223_tmp[(count + j)];
				
			}
			/* Recursive loop 502 */
			/* Pre code */
			for (int j370 = 0; (j370 < 4); j370 = (j370 + 1)) {
				fRec226_tmp[j370] = fRec226_perm[j370];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec226[i] = (fRec226[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec171[i]), 5, 0)) - fRec226[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec226_perm[j] = fRec226_tmp[(count + j)];
				
			}
			/* Recursive loop 503 */
			/* Pre code */
			for (int j374 = 0; (j374 < 4); j374 = (j374 + 1)) {
				fRec229_tmp[j374] = fRec229_perm[j374];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec229[i] = (fRec229[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec172[i]), 6, 0)) - fRec229[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec229_perm[j] = fRec229_tmp[(count + j)];
				
			}
			/* Recursive loop 504 */
			/* Pre code */
			for (int j378 = 0; (j378 < 4); j378 = (j378 + 1)) {
				fRec232_tmp[j378] = fRec232_perm[j378];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec232[i] = (fRec232[(i - 1)] + (fConst25 * (float(yc20_get_sample(float(fZec173[i]), 7, 0)) - fRec232[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec232_perm[j] = fRec232_tmp[(count + j)];
				
			}
			/* Recursive loop 505 */
			/* Pre code */
			for (int j382 = 0; (j382 < 4); j382 = (j382 + 1)) {
				fRec235_tmp[j382] = fRec235_perm[j382];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec235[i] = (fRec235[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec174[i]), 8, 0)) - fRec235[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec235_perm[j] = fRec235_tmp[(count + j)];
				
			}
			/* Recursive loop 506 */
			/* Pre code */
			for (int j386 = 0; (j386 < 4); j386 = (j386 + 1)) {
				fRec238_tmp[j386] = fRec238_perm[j386];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec238[i] = (fRec238[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec175[i]), 9, 0)) - fRec238[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec238_perm[j] = fRec238_tmp[(count + j)];
				
			}
			/* Recursive loop 507 */
			/* Pre code */
			for (int j390 = 0; (j390 < 4); j390 = (j390 + 1)) {
				fRec241_tmp[j390] = fRec241_perm[j390];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec241[i] = (fRec241[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec176[i]), 10, 0)) - fRec241[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec241_perm[j] = fRec241_tmp[(count + j)];
				
			}
			/* Recursive loop 508 */
			/* Pre code */
			for (int j394 = 0; (j394 < 4); j394 = (j394 + 1)) {
				fRec244_tmp[j394] = fRec244_perm[j394];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec244[i] = (fRec244[(i - 1)] + (fConst22 * (float(yc20_get_sample(float(fZec177[i]), 11, 0)) - fRec244[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec244_perm[j] = fRec244_tmp[(count + j)];
				
			}
			/* Recursive loop 509 */
			/* Pre code */
			for (int j399 = 0; (j399 < 4); j399 = (j399 + 1)) {
				fRec248_tmp[j399] = fRec248_perm[j399];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec248[i] = (fRec248[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec249[i]) + fZec166[i]))), 0, 0)) - fRec248[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec248_perm[j] = fRec248_tmp[(count + j)];
				
			}
			/* Recursive loop 510 */
			/* Pre code */
			for (int j402 = 0; (j402 < 4); j402 = (j402 + 1)) {
				fRec251_tmp[j402] = fRec251_perm[j402];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec251[i] = (fRec251[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec252[i]) + fZec167[i]))), 1, 0)) - fRec251[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec251_perm[j] = fRec251_tmp[(count + j)];
				
			}
			/* Recursive loop 511 */
			/* Pre code */
			for (int j405 = 0; (j405 < 4); j405 = (j405 + 1)) {
				fRec254_tmp[j405] = fRec254_perm[j405];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec254[i] = (fRec254[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec255[i]) + fZec168[i]))), 2, 0)) - fRec254[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec254_perm[j] = fRec254_tmp[(count + j)];
				
			}
			/* Recursive loop 512 */
			/* Pre code */
			for (int j408 = 0; (j408 < 4); j408 = (j408 + 1)) {
				fRec257_tmp[j408] = fRec257_perm[j408];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec257[i] = (fRec257[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec258[i]) + fZec169[i]))), 3, 0)) - fRec257[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec257_perm[j] = fRec257_tmp[(count + j)];
				
			}
			/* Recursive loop 513 */
			/* Pre code */
			for (int j411 = 0; (j411 < 4); j411 = (j411 + 1)) {
				fRec260_tmp[j411] = fRec260_perm[j411];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec260[i] = (fRec260[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec261[i]) + fZec170[i]))), 4, 0)) - fRec260[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec260_perm[j] = fRec260_tmp[(count + j)];
				
			}
			/* Recursive loop 514 */
			/* Pre code */
			for (int j414 = 0; (j414 < 4); j414 = (j414 + 1)) {
				fRec263_tmp[j414] = fRec263_perm[j414];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec263[i] = (fRec263[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec264[i]) + fZec171[i]))), 5, 0)) - fRec263[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec263_perm[j] = fRec263_tmp[(count + j)];
				
			}
			/* Recursive loop 515 */
			/* Pre code */
			for (int j417 = 0; (j417 < 4); j417 = (j417 + 1)) {
				fRec266_tmp[j417] = fRec266_perm[j417];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec266[i] = (fRec266[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec267[i]) + fZec172[i]))), 6, 0)) - fRec266[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec266_perm[j] = fRec266_tmp[(count + j)];
				
			}
			/* Recursive loop 516 */
			/* Pre code */
			for (int j420 = 0; (j420 < 4); j420 = (j420 + 1)) {
				fRec269_tmp[j420] = fRec269_perm[j420];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec269[i] = (fRec269[(i - 1)] + (fConst26 * (float(yc20_get_sample(float((0.5f * (float(iRec270[i]) + fZec173[i]))), 7, 0)) - fRec269[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec269_perm[j] = fRec269_tmp[(count + j)];
				
			}
			/* Recursive loop 517 */
			/* Pre code */
			for (int j423 = 0; (j423 < 4); j423 = (j423 + 1)) {
				fRec272_tmp[j423] = fRec272_perm[j423];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec272[i] = (fRec272[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec273[i]) + fZec174[i]))), 8, 0)) - fRec272[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec272_perm[j] = fRec272_tmp[(count + j)];
				
			}
			/* Recursive loop 518 */
			/* Pre code */
			for (int j426 = 0; (j426 < 4); j426 = (j426 + 1)) {
				fRec275_tmp[j426] = fRec275_perm[j426];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec275[i] = (fRec275[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec276[i]) + fZec175[i]))), 9, 0)) - fRec275[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec275_perm[j] = fRec275_tmp[(count + j)];
				
			}
			/* Recursive loop 519 */
			/* Pre code */
			for (int j429 = 0; (j429 < 4); j429 = (j429 + 1)) {
				fRec278_tmp[j429] = fRec278_perm[j429];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec278[i] = (fRec278[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec279[i]) + fZec176[i]))), 10, 0)) - fRec278[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec278_perm[j] = fRec278_tmp[(count + j)];
				
			}
			/* Recursive loop 520 */
			/* Pre code */
			for (int j432 = 0; (j432 < 4); j432 = (j432 + 1)) {
				fRec281_tmp[j432] = fRec281_perm[j432];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec281[i] = (fRec281[(i - 1)] + (fConst23 * (float(yc20_get_sample(float((0.5f * (float(iRec282[i]) + fZec177[i]))), 11, 0)) - fRec281[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec281_perm[j] = fRec281_tmp[(count + j)];
				
			}
			/* Recursive loop 521 */
			/* Pre code */
			for (int j242 = 0; (j242 < 4); j242 = (j242 + 1)) {
				fYec48_tmp[j242] = fYec48_perm[j242];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec48[i] = (fZec54[i] - fZec129[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec48_perm[j] = fYec48_tmp[(count + j)];
				
			}
			/* Recursive loop 522 */
			/* Pre code */
			for (int j247 = 0; (j247 < 4); j247 = (j247 + 1)) {
				fRec134_tmp[j247] = fRec134_perm[j247];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec134[i] = (fConst5 * (fRec134[(i - 1)] + (fRec135[i] - fRec135[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec134_perm[j] = fRec134_tmp[(count + j)];
				
			}
			/* Recursive loop 523 */
			/* Pre code */
			for (int j250 = 0; (j250 < 4); j250 = (j250 + 1)) {
				fRec138_tmp[j250] = fRec138_perm[j250];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec138[i] = (fRec138[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec131[i]), 5, 0)) - fRec138[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec138_perm[j] = fRec138_tmp[(count + j)];
				
			}
			/* Recursive loop 524 */
			/* Pre code */
			for (int j254 = 0; (j254 < 4); j254 = (j254 + 1)) {
				fRec141_tmp[j254] = fRec141_perm[j254];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec141[i] = (fRec141[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec132[i]), 6, 0)) - fRec141[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec141_perm[j] = fRec141_tmp[(count + j)];
				
			}
			/* Recursive loop 525 */
			/* Pre code */
			for (int j258 = 0; (j258 < 4); j258 = (j258 + 1)) {
				fRec144_tmp[j258] = fRec144_perm[j258];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec144[i] = (fRec144[(i - 1)] + (fConst16 * (float(yc20_get_sample(float(fZec133[i]), 7, 0)) - fRec144[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec144_perm[j] = fRec144_tmp[(count + j)];
				
			}
			/* Recursive loop 526 */
			/* Pre code */
			for (int j262 = 0; (j262 < 4); j262 = (j262 + 1)) {
				fRec147_tmp[j262] = fRec147_perm[j262];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec147[i] = (fRec147[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec134[i]), 8, 0)) - fRec147[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec147_perm[j] = fRec147_tmp[(count + j)];
				
			}
			/* Recursive loop 527 */
			/* Pre code */
			for (int j266 = 0; (j266 < 4); j266 = (j266 + 1)) {
				fRec150_tmp[j266] = fRec150_perm[j266];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec150[i] = (fRec150[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec135[i]), 9, 0)) - fRec150[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec150_perm[j] = fRec150_tmp[(count + j)];
				
			}
			/* Recursive loop 528 */
			/* Pre code */
			for (int j270 = 0; (j270 < 4); j270 = (j270 + 1)) {
				fRec153_tmp[j270] = fRec153_perm[j270];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec153[i] = (fRec153[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec136[i]), 10, 0)) - fRec153[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec153_perm[j] = fRec153_tmp[(count + j)];
				
			}
			/* Recursive loop 529 */
			/* Pre code */
			for (int j274 = 0; (j274 < 4); j274 = (j274 + 1)) {
				fRec156_tmp[j274] = fRec156_perm[j274];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec156[i] = (fRec156[(i - 1)] + (fConst17 * (float(yc20_get_sample(float(fZec137[i]), 11, 0)) - fRec156[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec156_perm[j] = fRec156_tmp[(count + j)];
				
			}
			/* Recursive loop 530 */
			/* Pre code */
			for (int j281 = 0; (j281 < 4); j281 = (j281 + 1)) {
				fRec159_tmp[j281] = fRec159_perm[j281];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec159[i] = (fConst5 * (fRec159[(i - 1)] + (fRec160[i] - fRec160[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec159_perm[j] = fRec159_tmp[(count + j)];
				
			}
			/* Recursive loop 531 */
			/* Pre code */
			for (int j285 = 0; (j285 < 4); j285 = (j285 + 1)) {
				fRec162_tmp[j285] = fRec162_perm[j285];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec162[i] = (fConst5 * (fRec162[(i - 1)] + (fRec163[i] - fRec163[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec162_perm[j] = fRec162_tmp[(count + j)];
				
			}
			/* Recursive loop 532 */
			/* Pre code */
			for (int j289 = 0; (j289 < 4); j289 = (j289 + 1)) {
				fRec165_tmp[j289] = fRec165_perm[j289];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec165[i] = (fConst5 * (fRec165[(i - 1)] + (fRec166[i] - fRec166[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec165_perm[j] = fRec165_tmp[(count + j)];
				
			}
			/* Recursive loop 533 */
			/* Pre code */
			for (int j293 = 0; (j293 < 4); j293 = (j293 + 1)) {
				fRec168_tmp[j293] = fRec168_perm[j293];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec168[i] = (fConst5 * (fRec168[(i - 1)] + (fRec169[i] - fRec169[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec168_perm[j] = fRec168_tmp[(count + j)];
				
			}
			/* Recursive loop 534 */
			/* Pre code */
			for (int j299 = 0; (j299 < 4); j299 = (j299 + 1)) {
				fRec172_tmp[j299] = fRec172_perm[j299];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec172[i] = (fConst20 * (fRec172[(i - 1)] + (fRec173[i] - fRec173[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec172_perm[j] = fRec172_tmp[(count + j)];
				
			}
			/* Recursive loop 535 */
			/* Pre code */
			for (int j303 = 0; (j303 < 4); j303 = (j303 + 1)) {
				fRec175_tmp[j303] = fRec175_perm[j303];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec175[i] = (fConst20 * (fRec175[(i - 1)] + (fRec176[i] - fRec176[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec175_perm[j] = fRec175_tmp[(count + j)];
				
			}
			/* Recursive loop 536 */
			/* Pre code */
			for (int j307 = 0; (j307 < 4); j307 = (j307 + 1)) {
				fRec178_tmp[j307] = fRec178_perm[j307];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec178[i] = (fConst20 * (fRec178[(i - 1)] + (fRec179[i] - fRec179[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec178_perm[j] = fRec178_tmp[(count + j)];
				
			}
			/* Recursive loop 537 */
			/* Pre code */
			for (int j311 = 0; (j311 < 4); j311 = (j311 + 1)) {
				fRec181_tmp[j311] = fRec181_perm[j311];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec181[i] = (fConst20 * (fRec181[(i - 1)] + (fRec182[i] - fRec182[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec181_perm[j] = fRec181_tmp[(count + j)];
				
			}
			/* Recursive loop 538 */
			/* Pre code */
			for (int j315 = 0; (j315 < 4); j315 = (j315 + 1)) {
				fRec184_tmp[j315] = fRec184_perm[j315];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec184[i] = (fConst20 * (fRec184[(i - 1)] + (fRec185[i] - fRec185[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec184_perm[j] = fRec184_tmp[(count + j)];
				
			}
			/* Recursive loop 539 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec151[i] = (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + fZec52[i]))))))));
				
			}
			/* Recursive loop 540 */
			/* Pre code */
			for (int j321 = 0; (j321 < 4); j321 = (j321 + 1)) {
				fRec188_tmp[j321] = fRec188_perm[j321];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec188[i] = (fConst20 * (fRec188[(i - 1)] + (fRec189[i] - fRec189[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec188_perm[j] = fRec188_tmp[(count + j)];
				
			}
			/* Recursive loop 541 */
			/* Pre code */
			for (int j325 = 0; (j325 < 4); j325 = (j325 + 1)) {
				fRec191_tmp[j325] = fRec191_perm[j325];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec191[i] = (fConst20 * (fRec191[(i - 1)] + (fRec192[i] - fRec192[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec191_perm[j] = fRec191_tmp[(count + j)];
				
			}
			/* Recursive loop 542 */
			/* Pre code */
			for (int j329 = 0; (j329 < 4); j329 = (j329 + 1)) {
				fRec194_tmp[j329] = fRec194_perm[j329];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec194[i] = (fConst20 * (fRec194[(i - 1)] + (fRec195[i] - fRec195[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec194_perm[j] = fRec194_tmp[(count + j)];
				
			}
			/* Recursive loop 543 */
			/* Pre code */
			for (int j333 = 0; (j333 < 4); j333 = (j333 + 1)) {
				fRec197_tmp[j333] = fRec197_perm[j333];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec197[i] = (fConst20 * (fRec197[(i - 1)] + (fRec198[i] - fRec198[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec197_perm[j] = fRec197_tmp[(count + j)];
				
			}
			/* Recursive loop 544 */
			/* Pre code */
			for (int j337 = 0; (j337 < 4); j337 = (j337 + 1)) {
				fRec200_tmp[j337] = fRec200_perm[j337];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec200[i] = (fConst20 * (fRec200[(i - 1)] + (fRec201[i] - fRec201[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec200_perm[j] = fRec200_tmp[(count + j)];
				
			}
			/* Recursive loop 545 */
			/* Pre code */
			for (int j341 = 0; (j341 < 4); j341 = (j341 + 1)) {
				fRec203_tmp[j341] = fRec203_perm[j341];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec203[i] = (fConst20 * (fRec203[(i - 1)] + (fRec204[i] - fRec204[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec203_perm[j] = fRec203_tmp[(count + j)];
				
			}
			/* Recursive loop 546 */
			/* Pre code */
			for (int j345 = 0; (j345 < 4); j345 = (j345 + 1)) {
				fRec206_tmp[j345] = fRec206_perm[j345];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec206[i] = (fConst20 * (fRec206[(i - 1)] + (fRec207[i] - fRec207[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec206_perm[j] = fRec206_tmp[(count + j)];
				
			}
			/* Recursive loop 547 */
			/* Pre code */
			for (int j351 = 0; (j351 < 4); j351 = (j351 + 1)) {
				fRec210_tmp[j351] = fRec210_perm[j351];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec210[i] = (fConst24 * (fRec210[(i - 1)] + (fRec211[i] - fRec211[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec210_perm[j] = fRec210_tmp[(count + j)];
				
			}
			/* Recursive loop 548 */
			/* Pre code */
			for (int j355 = 0; (j355 < 4); j355 = (j355 + 1)) {
				fRec213_tmp[j355] = fRec213_perm[j355];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec213[i] = (fConst24 * (fRec213[(i - 1)] + (fRec214[i] - fRec214[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec213_perm[j] = fRec213_tmp[(count + j)];
				
			}
			/* Recursive loop 549 */
			/* Pre code */
			for (int j359 = 0; (j359 < 4); j359 = (j359 + 1)) {
				fRec216_tmp[j359] = fRec216_perm[j359];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec216[i] = (fConst24 * (fRec216[(i - 1)] + (fRec217[i] - fRec217[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec216_perm[j] = fRec216_tmp[(count + j)];
				
			}
			/* Recursive loop 550 */
			/* Pre code */
			for (int j363 = 0; (j363 < 4); j363 = (j363 + 1)) {
				fRec219_tmp[j363] = fRec219_perm[j363];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec219[i] = (fConst24 * (fRec219[(i - 1)] + (fRec220[i] - fRec220[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec219_perm[j] = fRec219_tmp[(count + j)];
				
			}
			/* Recursive loop 551 */
			/* Pre code */
			for (int j367 = 0; (j367 < 4); j367 = (j367 + 1)) {
				fRec222_tmp[j367] = fRec222_perm[j367];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec222[i] = (fConst24 * (fRec222[(i - 1)] + (fRec223[i] - fRec223[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec222_perm[j] = fRec222_tmp[(count + j)];
				
			}
			/* Recursive loop 552 */
			/* Pre code */
			for (int j371 = 0; (j371 < 4); j371 = (j371 + 1)) {
				fRec225_tmp[j371] = fRec225_perm[j371];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec225[i] = (fConst24 * (fRec225[(i - 1)] + (fRec226[i] - fRec226[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec225_perm[j] = fRec225_tmp[(count + j)];
				
			}
			/* Recursive loop 553 */
			/* Pre code */
			for (int j375 = 0; (j375 < 4); j375 = (j375 + 1)) {
				fRec228_tmp[j375] = fRec228_perm[j375];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec228[i] = (fConst24 * (fRec228[(i - 1)] + (fRec229[i] - fRec229[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec228_perm[j] = fRec228_tmp[(count + j)];
				
			}
			/* Recursive loop 554 */
			/* Pre code */
			for (int j379 = 0; (j379 < 4); j379 = (j379 + 1)) {
				fRec231_tmp[j379] = fRec231_perm[j379];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec231[i] = (fConst24 * (fRec231[(i - 1)] + (fRec232[i] - fRec232[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec231_perm[j] = fRec231_tmp[(count + j)];
				
			}
			/* Recursive loop 555 */
			/* Pre code */
			for (int j383 = 0; (j383 < 4); j383 = (j383 + 1)) {
				fRec234_tmp[j383] = fRec234_perm[j383];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec234[i] = (fConst24 * (fRec234[(i - 1)] + (fRec235[i] - fRec235[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec234_perm[j] = fRec234_tmp[(count + j)];
				
			}
			/* Recursive loop 556 */
			/* Pre code */
			for (int j387 = 0; (j387 < 4); j387 = (j387 + 1)) {
				fRec237_tmp[j387] = fRec237_perm[j387];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec237[i] = (fConst24 * (fRec237[(i - 1)] + (fRec238[i] - fRec238[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec237_perm[j] = fRec237_tmp[(count + j)];
				
			}
			/* Recursive loop 557 */
			/* Pre code */
			for (int j391 = 0; (j391 < 4); j391 = (j391 + 1)) {
				fRec240_tmp[j391] = fRec240_perm[j391];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec240[i] = (fConst24 * (fRec240[(i - 1)] + (fRec241[i] - fRec241[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec240_perm[j] = fRec240_tmp[(count + j)];
				
			}
			/* Recursive loop 558 */
			/* Pre code */
			for (int j395 = 0; (j395 < 4); j395 = (j395 + 1)) {
				fRec243_tmp[j395] = fRec243_perm[j395];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec243[i] = (fConst24 * (fRec243[(i - 1)] + (fRec244[i] - fRec244[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec243_perm[j] = fRec243_tmp[(count + j)];
				
			}
			/* Recursive loop 559 */
			/* Pre code */
			for (int j400 = 0; (j400 < 4); j400 = (j400 + 1)) {
				fRec247_tmp[j400] = fRec247_perm[j400];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec247[i] = (fConst27 * (fRec247[(i - 1)] + (fRec248[i] - fRec248[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec247_perm[j] = fRec247_tmp[(count + j)];
				
			}
			/* Recursive loop 560 */
			/* Pre code */
			for (int j403 = 0; (j403 < 4); j403 = (j403 + 1)) {
				fRec250_tmp[j403] = fRec250_perm[j403];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec250[i] = (fConst27 * (fRec250[(i - 1)] + (fRec251[i] - fRec251[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec250_perm[j] = fRec250_tmp[(count + j)];
				
			}
			/* Recursive loop 561 */
			/* Pre code */
			for (int j406 = 0; (j406 < 4); j406 = (j406 + 1)) {
				fRec253_tmp[j406] = fRec253_perm[j406];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec253[i] = (fConst27 * (fRec253[(i - 1)] + (fRec254[i] - fRec254[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec253_perm[j] = fRec253_tmp[(count + j)];
				
			}
			/* Recursive loop 562 */
			/* Pre code */
			for (int j409 = 0; (j409 < 4); j409 = (j409 + 1)) {
				fRec256_tmp[j409] = fRec256_perm[j409];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec256[i] = (fConst27 * (fRec256[(i - 1)] + (fRec257[i] - fRec257[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec256_perm[j] = fRec256_tmp[(count + j)];
				
			}
			/* Recursive loop 563 */
			/* Pre code */
			for (int j412 = 0; (j412 < 4); j412 = (j412 + 1)) {
				fRec259_tmp[j412] = fRec259_perm[j412];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec259[i] = (fConst27 * (fRec259[(i - 1)] + (fRec260[i] - fRec260[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec259_perm[j] = fRec259_tmp[(count + j)];
				
			}
			/* Recursive loop 564 */
			/* Pre code */
			for (int j415 = 0; (j415 < 4); j415 = (j415 + 1)) {
				fRec262_tmp[j415] = fRec262_perm[j415];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec262[i] = (fConst27 * (fRec262[(i - 1)] + (fRec263[i] - fRec263[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec262_perm[j] = fRec262_tmp[(count + j)];
				
			}
			/* Recursive loop 565 */
			/* Pre code */
			for (int j418 = 0; (j418 < 4); j418 = (j418 + 1)) {
				fRec265_tmp[j418] = fRec265_perm[j418];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec265[i] = (fConst27 * (fRec265[(i - 1)] + (fRec266[i] - fRec266[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec265_perm[j] = fRec265_tmp[(count + j)];
				
			}
			/* Recursive loop 566 */
			/* Pre code */
			for (int j421 = 0; (j421 < 4); j421 = (j421 + 1)) {
				fRec268_tmp[j421] = fRec268_perm[j421];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec268[i] = (fConst27 * (fRec268[(i - 1)] + (fRec269[i] - fRec269[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec268_perm[j] = fRec268_tmp[(count + j)];
				
			}
			/* Recursive loop 567 */
			/* Pre code */
			for (int j424 = 0; (j424 < 4); j424 = (j424 + 1)) {
				fRec271_tmp[j424] = fRec271_perm[j424];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec271[i] = (fConst27 * (fRec271[(i - 1)] + (fRec272[i] - fRec272[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec271_perm[j] = fRec271_tmp[(count + j)];
				
			}
			/* Recursive loop 568 */
			/* Pre code */
			for (int j427 = 0; (j427 < 4); j427 = (j427 + 1)) {
				fRec274_tmp[j427] = fRec274_perm[j427];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec274[i] = (fConst27 * (fRec274[(i - 1)] + (fRec275[i] - fRec275[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec274_perm[j] = fRec274_tmp[(count + j)];
				
			}
			/* Recursive loop 569 */
			/* Pre code */
			for (int j430 = 0; (j430 < 4); j430 = (j430 + 1)) {
				fRec277_tmp[j430] = fRec277_perm[j430];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec277[i] = (fConst27 * (fRec277[(i - 1)] + (fRec278[i] - fRec278[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec277_perm[j] = fRec277_tmp[(count + j)];
				
			}
			/* Recursive loop 570 */
			/* Pre code */
			for (int j433 = 0; (j433 < 4); j433 = (j433 + 1)) {
				fRec280_tmp[j433] = fRec280_perm[j433];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec280[i] = (fConst27 * (fRec280[(i - 1)] + (fRec281[i] - fRec281[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec280_perm[j] = fRec280_tmp[(count + j)];
				
			}
			/* Recursive loop 571 */
			/* Pre code */
			for (int j243 = 0; (j243 < 4); j243 = (j243 + 1)) {
				fRec133_tmp[j243] = fRec133_perm[j243];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec133[i] = (fConst15 * (fRec133[(i - 1)] + (fZec54[i] - (fZec129[i] + fYec48[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec133_perm[j] = fRec133_tmp[(count + j)];
				
			}
			/* Recursive loop 572 */
			/* Pre code */
			for (int j251 = 0; (j251 < 4); j251 = (j251 + 1)) {
				fRec137_tmp[j251] = fRec137_perm[j251];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec137[i] = (fConst5 * (fRec137[(i - 1)] + (fRec138[i] - fRec138[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec137_perm[j] = fRec137_tmp[(count + j)];
				
			}
			/* Recursive loop 573 */
			/* Pre code */
			for (int j255 = 0; (j255 < 4); j255 = (j255 + 1)) {
				fRec140_tmp[j255] = fRec140_perm[j255];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec140[i] = (fConst5 * (fRec140[(i - 1)] + (fRec141[i] - fRec141[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec140_perm[j] = fRec140_tmp[(count + j)];
				
			}
			/* Recursive loop 574 */
			/* Pre code */
			for (int j259 = 0; (j259 < 4); j259 = (j259 + 1)) {
				fRec143_tmp[j259] = fRec143_perm[j259];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec143[i] = (fConst5 * (fRec143[(i - 1)] + (fRec144[i] - fRec144[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec143_perm[j] = fRec143_tmp[(count + j)];
				
			}
			/* Recursive loop 575 */
			/* Pre code */
			for (int j263 = 0; (j263 < 4); j263 = (j263 + 1)) {
				fRec146_tmp[j263] = fRec146_perm[j263];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec146[i] = (fConst5 * (fRec146[(i - 1)] + (fRec147[i] - fRec147[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec146_perm[j] = fRec146_tmp[(count + j)];
				
			}
			/* Recursive loop 576 */
			/* Pre code */
			for (int j267 = 0; (j267 < 4); j267 = (j267 + 1)) {
				fRec149_tmp[j267] = fRec149_perm[j267];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec149[i] = (fConst5 * (fRec149[(i - 1)] + (fRec150[i] - fRec150[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec149_perm[j] = fRec149_tmp[(count + j)];
				
			}
			/* Recursive loop 577 */
			/* Pre code */
			for (int j271 = 0; (j271 < 4); j271 = (j271 + 1)) {
				fRec152_tmp[j271] = fRec152_perm[j271];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec152[i] = (fConst5 * (fRec152[(i - 1)] + (fRec153[i] - fRec153[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec152_perm[j] = fRec152_tmp[(count + j)];
				
			}
			/* Recursive loop 578 */
			/* Pre code */
			for (int j275 = 0; (j275 < 4); j275 = (j275 + 1)) {
				fRec155_tmp[j275] = fRec155_perm[j275];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec155[i] = (fConst5 * (fRec155[(i - 1)] + (fRec156[i] - fRec156[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec155_perm[j] = fRec155_tmp[(count + j)];
				
			}
			/* Recursive loop 579 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec152[i] = (fRec121[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + fZec151[i]))))))))))));
				
			}
			/* Recursive loop 580 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec164[i] = (((((((((((((((((fRec188[i] * fZec55[i]) + (fRec191[i] * fZec56[i])) + (fRec194[i] * fZec57[i])) + (fRec197[i] * fZec58[i])) + (fRec200[i] * fZec59[i])) + (fRec203[i] * fZec60[i])) + (fRec206[i] * fZec61[i])) + (fRec172[i] * fZec62[i])) + (fRec175[i] * fZec63[i])) + (fRec178[i] * fZec64[i])) + (fRec181[i] * fZec65[i])) + (fRec184[i] * fZec66[i])) + (fRec159[i] * fZec67[i])) + (fRec162[i] * fZec68[i])) + (fRec165[i] * fZec69[i])) + (fRec168[i] * fZec70[i])) + (fRec134[i] * fZec71[i]));
				
			}
			/* Recursive loop 581 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec179[i] = (((((((((((((((((fRec210[i] * fZec55[i]) + (fRec213[i] * fZec56[i])) + (fRec216[i] * fZec57[i])) + (fRec219[i] * fZec58[i])) + (fRec222[i] * fZec59[i])) + (fRec225[i] * fZec60[i])) + (fRec228[i] * fZec61[i])) + (fRec231[i] * fZec62[i])) + (fRec234[i] * fZec63[i])) + (fRec237[i] * fZec64[i])) + (fRec240[i] * fZec65[i])) + (fRec243[i] * fZec66[i])) + (fRec188[i] * fZec67[i])) + (fRec191[i] * fZec68[i])) + (fRec194[i] * fZec69[i])) + (fRec197[i] * fZec70[i])) + (fRec200[i] * fZec71[i]));
				
			}
			/* Recursive loop 582 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec182[i] = (((((((((((((((((fRec247[i] * fZec55[i]) + (fRec250[i] * fZec56[i])) + (fRec253[i] * fZec57[i])) + (fRec256[i] * fZec58[i])) + (fRec259[i] * fZec59[i])) + (fRec262[i] * fZec60[i])) + (fRec265[i] * fZec61[i])) + (fRec268[i] * fZec62[i])) + (fRec271[i] * fZec63[i])) + (fRec274[i] * fZec64[i])) + (fRec277[i] * fZec65[i])) + (fRec280[i] * fZec66[i])) + (fRec210[i] * fZec67[i])) + (fRec213[i] * fZec68[i])) + (fRec216[i] * fZec69[i])) + (fRec219[i] * fZec70[i])) + (fRec222[i] * fZec71[i]));
				
			}
			/* Recursive loop 583 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec144[i] = ((fSlow18 * (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec49[i]))))))))))))) + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec122[i] + ((2.0f * fRec121[i]) + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + (fRec73[i] + (fRec67[i] + (fRec61[i] + (fRec55[i] + (fRec49[i] + (fRec43[i] + (fRec31[i] + fRec37[i])))))))))))))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 584 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec145[i] = (0.25f * (fZec128[i] + (fZec126[i] + (fZec124[i] + (fZec122[i] + (fZec120[i] + (fZec118[i] + (fZec116[i] + (fZec114[i] + (fZec112[i] + (fZec110[i] + (fZec108[i] + (fZec106[i] + (fZec104[i] + ((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec159[i] * fZec55[i]) + (fRec162[i] * fZec56[i])) + (fRec165[i] * fZec57[i])) + (fRec168[i] * fZec58[i])) + (fRec134[i] * fZec59[i])) + (fRec137[i] * fZec60[i])) + (fRec140[i] * fZec61[i])) + (fRec143[i] * fZec62[i])) + (fRec146[i] * fZec63[i])) + (fRec149[i] * fZec64[i])) + (fRec152[i] * fZec65[i])) + (fRec155[i] * fZec66[i])) + (fRec0[i] * fZec67[i])) + (fRec7[i] * fZec68[i])) + (fRec13[i] * fZec69[i])) + (fRec19[i] * fZec70[i])) + (fRec25[i] * fZec71[i]))) + (fRec31[i] * fZec72[i])) + (fRec37[i] * fZec73[i])) + (fRec43[i] * fZec74[i])) + (fRec49[i] * fZec75[i])) + (fRec55[i] * fZec76[i])) + (fRec61[i] * fZec77[i])) + (fRec67[i] * fZec78[i])) + (fRec73[i] * fZec79[i])) + (fRec75[i] * fZec80[i])) + (fRec77[i] * fZec81[i])) + (fRec79[i] * fZec82[i])) + (fRec81[i] * fZec83[i])) + (fRec83[i] * fZec84[i])) + (fRec85[i] * fZec85[i])) + (fRec87[i] * fZec86[i])) + (fRec89[i] * fZec87[i])) + (fRec91[i] * fZec88[i])) + (fRec93[i] * fZec89[i])) + (fRec95[i] * fZec90[i])) + (fRec97[i] * fZec91[i])) + (fRec99[i] * fZec92[i])) + (fRec101[i] * fZec93[i])) + (fRec103[i] * fZec94[i])) + (fRec105[i] * fZec95[i])) + (fRec107[i] * fZec96[i])) + (fRec109[i] * fZec97[i])) + (fRec111[i] * fZec98[i])) + (fRec113[i] * fZec99[i])) + (fRec115[i] * fZec100[i])) + (fRec117[i] * fZec101[i])) + (fRec119[i] * fZec102[i]))))))))))))))));
				
			}
			/* Recursive loop 585 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec163[i] = ((fSlow18 * (fRec206[i] + (fRec203[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec191[i] + (fRec188[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec134[i] + fRec159[i]))))))))))))))))) + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + fZec152[i]))))))));
				
			}
			/* Recursive loop 586 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec165[i] = (0.25f * (fZec128[i] + ((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec164[i]) + (fRec137[i] * fZec72[i])) + (fRec140[i] * fZec73[i])) + (fRec143[i] * fZec74[i])) + (fRec146[i] * fZec75[i])) + (fRec149[i] * fZec76[i])) + (fRec152[i] * fZec77[i])) + (fRec155[i] * fZec78[i])) + (fRec0[i] * fZec79[i])) + (fRec7[i] * fZec80[i])) + (fRec13[i] * fZec81[i])) + (fRec19[i] * fZec82[i])) + (fRec25[i] * fZec83[i])) + (fRec31[i] * fZec84[i])) + (fRec37[i] * fZec85[i])) + (fRec43[i] * fZec86[i])) + (fRec49[i] * fZec87[i])) + (fRec55[i] * fZec88[i])) + (fRec61[i] * fZec89[i])) + (fRec67[i] * fZec90[i])) + (fRec73[i] * fZec91[i])) + (fRec75[i] * fZec92[i])) + (fRec77[i] * fZec93[i])) + (fRec79[i] * fZec94[i])) + (fRec81[i] * fZec95[i])) + (fRec83[i] * fZec96[i])) + (fRec85[i] * fZec97[i])) + (fRec87[i] * fZec98[i])) + (fRec89[i] * fZec99[i])) + (fRec91[i] * fZec100[i])) + (fRec93[i] * fZec101[i])) + (fRec95[i] * fZec102[i])) + (fRec97[i] * fZec103[i])) + (fRec99[i] * fZec105[i])) + (fRec101[i] * fZec107[i])) + (fRec103[i] * fZec109[i])) + (fRec105[i] * fZec111[i])) + (fRec107[i] * fZec113[i])) + (fRec109[i] * fZec115[i])) + (fRec111[i] * fZec117[i])) + (fRec113[i] * fZec119[i])) + (fRec115[i] * fZec121[i])) + (fRec117[i] * fZec123[i])) + (fRec119[i] * fZec125[i]))));
				
			}
			/* Recursive loop 587 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec178[i] = ((fSlow18 * (fRec243[i] + (fRec240[i] + (fRec237[i] + (fRec234[i] + (fRec231[i] + (fRec228[i] + (fRec225[i] + (fRec222[i] + (fRec219[i] + (fRec216[i] + (fRec213[i] + (fRec210[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec188[i] + fRec191[i]))))))))))))))))) + (fRec206[i] + (fRec203[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec151[i]))))))))))))))))))));
				
			}
			/* Recursive loop 588 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec180[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec179[i]) + (fRec203[i] * fZec72[i])) + (fRec206[i] * fZec73[i])) + (fRec172[i] * fZec74[i])) + (fRec175[i] * fZec75[i])) + (fRec178[i] * fZec76[i])) + (fRec181[i] * fZec77[i])) + (fRec184[i] * fZec78[i])) + (fRec159[i] * fZec79[i])) + (fRec162[i] * fZec80[i])) + (fRec165[i] * fZec81[i])) + (fRec168[i] * fZec82[i])) + (fRec134[i] * fZec83[i])) + (fRec137[i] * fZec84[i])) + (fRec140[i] * fZec85[i])) + (fRec143[i] * fZec86[i])) + (fRec146[i] * fZec87[i])) + (fRec149[i] * fZec88[i])) + (fRec152[i] * fZec89[i])) + (fRec155[i] * fZec90[i])) + (fRec0[i] * fZec91[i])) + (fRec7[i] * fZec92[i])) + (fRec13[i] * fZec93[i])) + (fRec19[i] * fZec94[i])) + (fRec25[i] * fZec95[i])) + (fRec31[i] * fZec96[i])) + (fRec37[i] * fZec97[i])) + (fRec43[i] * fZec98[i])) + (fRec49[i] * fZec99[i])) + (fRec55[i] * fZec100[i])) + (fRec61[i] * fZec101[i])) + (fRec67[i] * fZec102[i])) + (fRec73[i] * fZec103[i])) + (fRec75[i] * fZec105[i])) + (fRec77[i] * fZec107[i])) + (fRec79[i] * fZec109[i])) + (fRec81[i] * fZec111[i])) + (fRec83[i] * fZec113[i])) + (fRec85[i] * fZec115[i])) + (fRec87[i] * fZec117[i])) + (fRec89[i] * fZec119[i])) + (fRec91[i] * fZec121[i])) + (fRec93[i] * fZec123[i])) + (fRec95[i] * fZec125[i])) + (fRec97[i] * fZec127[i])));
				
			}
			/* Recursive loop 589 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec181[i] = (1.67900002f * ((fSlow18 * (fRec280[i] + (fRec277[i] + (fRec274[i] + (fRec271[i] + (fRec268[i] + (fRec265[i] + (fRec262[i] + (fRec259[i] + (fRec256[i] + (fRec253[i] + (fRec250[i] + (fRec247[i] + (fRec222[i] + (fRec219[i] + (fRec216[i] + (fRec210[i] + fRec213[i]))))))))))))))))) + (fRec243[i] + (fRec240[i] + (fRec237[i] + (fRec234[i] + (fRec231[i] + (fRec228[i] + (fRec225[i] + (fRec206[i] + (fRec203[i] + (fRec200[i] + (fRec197[i] + (fRec194[i] + (fRec191[i] + (fRec188[i] + (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec51[i])))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 590 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec183[i] = (0.419750005f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * fZec182[i]) + (fRec225[i] * fZec72[i])) + (fRec228[i] * fZec73[i])) + (fRec231[i] * fZec74[i])) + (fRec234[i] * fZec75[i])) + (fRec237[i] * fZec76[i])) + (fRec240[i] * fZec77[i])) + (fRec243[i] * fZec78[i])) + (fRec188[i] * fZec79[i])) + (fRec191[i] * fZec80[i])) + (fRec194[i] * fZec81[i])) + (fRec197[i] * fZec82[i])) + (fRec200[i] * fZec83[i])) + (fRec203[i] * fZec84[i])) + (fRec206[i] * fZec85[i])) + (fRec172[i] * fZec86[i])) + (fRec175[i] * fZec87[i])) + (fRec178[i] * fZec88[i])) + (fRec181[i] * fZec89[i])) + (fRec184[i] * fZec90[i])) + (fRec159[i] * fZec91[i])) + (fRec162[i] * fZec92[i])) + (fRec165[i] * fZec93[i])) + (fRec168[i] * fZec94[i])) + (fRec134[i] * fZec95[i])) + (fRec137[i] * fZec96[i])) + (fRec140[i] * fZec97[i])) + (fRec143[i] * fZec98[i])) + (fRec146[i] * fZec99[i])) + (fRec149[i] * fZec100[i])) + (fRec152[i] * fZec101[i])) + (fRec155[i] * fZec102[i])) + (fRec0[i] * fZec103[i])) + (fRec7[i] * fZec105[i])) + (fRec13[i] * fZec107[i])) + (fRec19[i] * fZec109[i])) + (fRec25[i] * fZec111[i])) + (fRec31[i] * fZec113[i])) + (fRec37[i] * fZec115[i])) + (fRec43[i] * fZec117[i])) + (fRec49[i] * fZec119[i])) + (fRec55[i] * fZec121[i])) + (fRec61[i] * fZec123[i])) + (fRec67[i] * fZec125[i])) + (fRec73[i] * fZec127[i])));
				
			}
			/* Recursive loop 591 */
			/* Pre code */
			for (int j460 = 0; (j460 < 4); j460 = (j460 + 1)) {
				iRec305_tmp[j460] = iRec305_perm[j460];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iRec305[i] = ((1103515245 * iRec305[(i - 1)]) + 12345);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec305_perm[j] = iRec305_tmp[(count + j)];
				
			}
			/* Recursive loop 592 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec189[i] = (0.00200000009f * (fRec133[i] * fSlow82));
				
			}
			/* Recursive loop 593 */
			/* Pre code */
			for (int j294 = 0; (j294 < 4); j294 = (j294 + 1)) {
				fYec62_tmp[j294] = fYec62_perm[j294];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec62[i] = (fZec144[i] - fZec145[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec62_perm[j] = fYec62_tmp[(count + j)];
				
			}
			/* Recursive loop 594 */
			/* Pre code */
			for (int j346 = 0; (j346 < 4); j346 = (j346 + 1)) {
				fYec76_tmp[j346] = fYec76_perm[j346];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec76[i] = (fZec163[i] - fZec165[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec76_perm[j] = fYec76_tmp[(count + j)];
				
			}
			/* Recursive loop 595 */
			/* Pre code */
			for (int j396 = 0; (j396 < 4); j396 = (j396 + 1)) {
				fYec89_tmp[j396] = fYec89_perm[j396];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec89[i] = (fZec178[i] - fZec180[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec89_perm[j] = fYec89_tmp[(count + j)];
				
			}
			/* Recursive loop 596 */
			/* Pre code */
			for (int j434 = 0; (j434 < 4); j434 = (j434 + 1)) {
				fYec90_tmp[j434] = fYec90_perm[j434];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec90[i] = (fZec181[i] - fZec183[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec90_perm[j] = fYec90_tmp[(count + j)];
				
			}
			/* Recursive loop 597 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec190[i] = mydsp_faustpower2_f(min(1.0f, max(-1.0f, (fZec189[i] + (fZec129[i] + (4.65661286e-16f * float(iRec305[i])))))));
				
			}
			/* Recursive loop 598 */
			/* Pre code */
			for (int j295 = 0; (j295 < 4); j295 = (j295 + 1)) {
				fRec171_tmp[j295] = fRec171_perm[j295];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec171[i] = (fConst15 * (fRec171[(i - 1)] + (fZec144[i] - (fZec145[i] + fYec62[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec171_perm[j] = fRec171_tmp[(count + j)];
				
			}
			/* Recursive loop 599 */
			/* Pre code */
			for (int j347 = 0; (j347 < 4); j347 = (j347 + 1)) {
				fRec209_tmp[j347] = fRec209_perm[j347];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec209[i] = (fConst15 * (fRec209[(i - 1)] + (fZec163[i] - (fZec165[i] + fYec76[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec209_perm[j] = fRec209_tmp[(count + j)];
				
			}
			/* Recursive loop 600 */
			/* Pre code */
			for (int j397 = 0; (j397 < 4); j397 = (j397 + 1)) {
				fRec246_tmp[j397] = fRec246_perm[j397];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec246[i] = (fConst15 * (fRec246[(i - 1)] + (fZec178[i] - (fZec180[i] + fYec89[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec246_perm[j] = fRec246_tmp[(count + j)];
				
			}
			/* Recursive loop 601 */
			/* Pre code */
			for (int j435 = 0; (j435 < 4); j435 = (j435 + 1)) {
				fRec283_tmp[j435] = fRec283_perm[j435];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec283[i] = (fConst15 * (fRec283[(i - 1)] + (fZec181[i] - (fZec183[i] + fYec90[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec283_perm[j] = fRec283_tmp[(count + j)];
				
			}
			/* Recursive loop 602 */
			/* Pre code */
			for (int j461 = 0; (j461 < 4); j461 = (j461 + 1)) {
				fRec302_tmp[j461] = fRec302_perm[j461];
				
			}
			for (int j462 = 0; (j462 < 4); j462 = (j462 + 1)) {
				iRec303_tmp[j462] = iRec303_perm[j462];
				
			}
			for (int j463 = 0; (j463 < 4); j463 = (j463 + 1)) {
				fRec304_tmp[j463] = fRec304_perm[j463];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				iZec188[i] = (iRec303[(i - 1)] < iConst36);
				fRec302[i] = (iZec188[i]?(fZec190[i] + fRec302[(i - 1)]):fZec190[i]);
				iRec303[i] = (iZec188[i]?(iRec303[(i - 1)] + 1):1);
				fRec304[i] = (iZec188[i]?fRec304[(i - 1)]:fRec302[(i - 1)]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec302_perm[j] = fRec302_tmp[(count + j)];
				
			}
			for (int j = 0; (j < 4); j = (j + 1)) {
				iRec303_perm[j] = iRec303_tmp[(count + j)];
				
			}
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec304_perm[j] = fRec304_tmp[(count + j)];
				
			}
			/* Recursive loop 603 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec154[i] = (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec172[i] * fZec55[i]) + (fRec175[i] * fZec56[i])) + (fRec178[i] * fZec57[i])) + (fRec181[i] * fZec58[i])) + (fRec184[i] * fZec59[i])) + (fRec159[i] * fZec60[i])) + (fRec162[i] * fZec61[i])) + (fRec165[i] * fZec62[i])) + (fRec168[i] * fZec63[i])) + (fRec134[i] * fZec64[i])) + (fRec137[i] * fZec65[i])) + (fRec140[i] * fZec66[i])) + (fRec143[i] * fZec67[i])) + (fRec146[i] * fZec68[i])) + (fRec149[i] * fZec69[i])) + (fRec152[i] * fZec70[i])) + (fRec155[i] * fZec71[i]))) + (fRec0[i] * fZec72[i])) + (fRec7[i] * fZec73[i])) + (fRec13[i] * fZec74[i])) + (fRec19[i] * fZec75[i])) + (fRec25[i] * fZec76[i])) + (fRec31[i] * fZec77[i])) + (fRec37[i] * fZec78[i])) + (fRec43[i] * fZec79[i])) + (fRec49[i] * fZec80[i])) + (fRec55[i] * fZec81[i])) + (fRec61[i] * fZec82[i])) + (fRec67[i] * fZec83[i])) + (fRec73[i] * fZec84[i])) + (fRec75[i] * fZec85[i])) + (fRec77[i] * fZec86[i])) + (fRec79[i] * fZec87[i])) + (fRec81[i] * fZec88[i])) + (fRec83[i] * fZec89[i])) + (fRec85[i] * fZec90[i])) + (fRec87[i] * fZec91[i])) + (fRec89[i] * fZec92[i])) + (fRec91[i] * fZec93[i])) + (fRec93[i] * fZec94[i])) + (fRec95[i] * fZec95[i])) + (fRec97[i] * fZec96[i])) + (fRec99[i] * fZec97[i])) + (fRec101[i] * fZec98[i])) + (fRec103[i] * fZec99[i])) + (fRec105[i] * fZec100[i])) + (fRec107[i] * fZec101[i])) + (fRec109[i] * fZec102[i])) + (fRec111[i] * fZec103[i])) + (fRec113[i] * fZec105[i])) + (fRec115[i] * fZec107[i])) + (fRec117[i] * fZec109[i])) + (fRec119[i] * fZec111[i])) + (fRec121[i] * fZec113[i])) + (fRec122[i] * fZec115[i])) + (fRec123[i] * fZec117[i])) + (fRec124[i] * fZec119[i])) + (fRec125[i] * fZec121[i])) + (fRec126[i] * fZec123[i])) + (fRec127[i] * fZec125[i])) + (fRec128[i] * fZec127[i]));
				
			}
			/* Recursive loop 604 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec184[i] = (fZec145[i] + (0.00200000009f * (fRec171[i] * fSlow82)));
				
			}
			/* Recursive loop 605 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec185[i] = (fZec165[i] + (0.00200000009f * (fRec209[i] * fSlow82)));
				
			}
			/* Recursive loop 606 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec186[i] = (fZec180[i] + (0.00200000009f * (fRec246[i] * fSlow82)));
				
			}
			/* Recursive loop 607 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec187[i] = (fZec183[i] + (0.00200000009f * (fRec283[i] * fSlow82)));
				
			}
			/* Recursive loop 608 */
			/* Pre code */
			for (int j464 = 0; (j464 < 4); j464 = (j464 + 1)) {
				fYec99_tmp[j464] = fYec99_perm[j464];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec99[i] = log10f(sqrtf((fConst37 * fRec304[i])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec99_perm[j] = fYec99_tmp[(count + j)];
				
			}
			/* Recursive loop 609 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec153[i] = ((fSlow18 * (fRec184[i] + (fRec181[i] + (fRec178[i] + (fRec175[i] + (fRec172[i] + (fRec168[i] + (fRec165[i] + (fRec162[i] + (fRec159[i] + (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec134[i] + fRec137[i]))))))))))))))))) + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec125[i] + (fRec124[i] + (fRec123[i] + (fRec122[i] + fZec152[i]))))))));
				
			}
			/* Recursive loop 610 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec155[i] = (0.25f * fZec154[i]);
				
			}
			/* Recursive loop 611 */
			/* Pre code */
			for (int j436 = 0; (j436 < 4); j436 = (j436 + 1)) {
				fYec91_tmp[j436] = fYec91_perm[j436];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec91[i] = (fSlow81 * fZec184[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec91_perm[j] = fYec91_tmp[(count + j)];
				
			}
			/* Recursive loop 612 */
			/* Pre code */
			for (int j440 = 0; (j440 < 4); j440 = (j440 + 1)) {
				fYec93_tmp[j440] = fYec93_perm[j440];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec93[i] = (fSlow85 * fZec185[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec93_perm[j] = fYec93_tmp[(count + j)];
				
			}
			/* Recursive loop 613 */
			/* Pre code */
			for (int j444 = 0; (j444 < 4); j444 = (j444 + 1)) {
				fYec95_tmp[j444] = fYec95_perm[j444];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec95[i] = (fSlow88 * fZec186[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec95_perm[j] = fYec95_tmp[(count + j)];
				
			}
			/* Recursive loop 614 */
			/* Pre code */
			for (int j448 = 0; (j448 < 4); j448 = (j448 + 1)) {
				fYec97_tmp[j448] = fYec97_perm[j448];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec97[i] = (fSlow91 * fZec187[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec97_perm[j] = fYec97_tmp[(count + j)];
				
			}
			/* Recursive loop 615 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec191[i] = (20.0f * fYec99[i]);
				
			}
			/* Recursive loop 616 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec192[i] = (20.0f * fYec99[(i - 1)]);
				
			}
			/* Recursive loop 617 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec138[i] = ((fSlow18 * (fRec155[i] + (fRec152[i] + (fRec149[i] + (fRec146[i] + (fRec143[i] + (fRec140[i] + (fRec137[i] + (fRec134[i] + fZec50[i]))))))))) + ((2.0f * fZec53[i]) + (fRec132[i] + (fRec131[i] + (fRec130[i] + (fRec129[i] + (fRec128[i] + (fRec127[i] + (fRec126[i] + (fRec119[i] + (fRec117[i] + (fRec115[i] + (fRec113[i] + (fRec111[i] + (fRec109[i] + (fRec107[i] + (fRec105[i] + (fRec103[i] + (fRec101[i] + (fRec99[i] + (fRec97[i] + (fRec95[i] + (fRec93[i] + (fRec91[i] + (fRec89[i] + (fRec87[i] + (fRec85[i] + (fRec83[i] + (fRec81[i] + (fRec79[i] + (fRec77[i] + (fRec75[i] + (fRec73[i] + (fRec67[i] + (fRec55[i] + fRec61[i])))))))))))))))))))))))))))))))))));
				
			}
			/* Recursive loop 618 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec139[i] = (0.25f * (((((((((((((((((((((((((((((((((((((((((((((fSlow18 * (((((((((((((((((fRec134[i] * fZec55[i]) + (fRec137[i] * fZec56[i])) + (fRec140[i] * fZec57[i])) + (fRec143[i] * fZec58[i])) + (fRec146[i] * fZec59[i])) + (fRec149[i] * fZec60[i])) + (fRec152[i] * fZec61[i])) + (fRec155[i] * fZec62[i])) + (fRec0[i] * fZec63[i])) + (fRec7[i] * fZec64[i])) + (fRec13[i] * fZec65[i])) + (fRec19[i] * fZec66[i])) + (fRec25[i] * fZec67[i])) + (fRec31[i] * fZec68[i])) + (fRec37[i] * fZec69[i])) + (fRec43[i] * fZec70[i])) + (fRec49[i] * fZec71[i]))) + (fRec55[i] * fZec72[i])) + (fRec61[i] * fZec73[i])) + (fRec67[i] * fZec74[i])) + (fRec73[i] * fZec75[i])) + (fRec75[i] * fZec76[i])) + (fRec77[i] * fZec77[i])) + (fRec79[i] * fZec78[i])) + (fRec81[i] * fZec79[i])) + (fRec83[i] * fZec80[i])) + (fRec85[i] * fZec81[i])) + (fRec87[i] * fZec82[i])) + (fRec89[i] * fZec83[i])) + (fRec91[i] * fZec84[i])) + (fRec93[i] * fZec85[i])) + (fRec95[i] * fZec86[i])) + (fRec97[i] * fZec87[i])) + (fRec99[i] * fZec88[i])) + (fRec101[i] * fZec89[i])) + (fRec103[i] * fZec90[i])) + (fRec105[i] * fZec91[i])) + (fRec107[i] * fZec92[i])) + (fRec109[i] * fZec93[i])) + (fRec111[i] * fZec94[i])) + (fRec113[i] * fZec95[i])) + (fRec115[i] * fZec96[i])) + (fRec117[i] * fZec97[i])) + (fRec119[i] * fZec98[i])) + (fRec121[i] * fZec99[i])) + (fRec122[i] * fZec100[i])) + (fRec123[i] * fZec101[i])) + (fRec124[i] * fZec102[i])) + (fRec125[i] * fZec103[i])) + (fRec126[i] * fZec105[i])) + (fRec127[i] * fZec107[i])) + (fRec128[i] * fZec109[i])) + (fRec129[i] * fZec111[i])) + (fRec130[i] * fZec113[i])) + (fRec131[i] * fZec115[i])) + (fRec132[i] * fZec117[i])) + (fRec121[i] * fZec119[i])) + (fRec122[i] * fZec121[i])) + (fRec123[i] * fZec123[i])) + (fRec124[i] * fZec125[i])) + (fRec125[i] * fZec127[i])));
				
			}
			/* Recursive loop 619 */
			/* Pre code */
			for (int j316 = 0; (j316 < 4); j316 = (j316 + 1)) {
				fYec68_tmp[j316] = fYec68_perm[j316];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec68[i] = (fZec153[i] - fZec155[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec68_perm[j] = fYec68_tmp[(count + j)];
				
			}
			/* Recursive loop 620 */
			/* Pre code */
			for (int j437 = 0; (j437 < 4); j437 = (j437 + 1)) {
				fRec285_tmp[j437] = fRec285_perm[j437];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec285[i] = (fConst28 * (fRec285[(i - 1)] + (fYec91[i] - fYec91[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec285_perm[j] = fRec285_tmp[(count + j)];
				
			}
			/* Recursive loop 621 */
			/* Pre code */
			for (int j441 = 0; (j441 < 4); j441 = (j441 + 1)) {
				fRec287_tmp[j441] = fRec287_perm[j441];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec287[i] = (fConst30 * (fRec287[(i - 1)] + (fYec93[i] - fYec93[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec287_perm[j] = fRec287_tmp[(count + j)];
				
			}
			/* Recursive loop 622 */
			/* Pre code */
			for (int j445 = 0; (j445 < 4); j445 = (j445 + 1)) {
				fRec289_tmp[j445] = fRec289_perm[j445];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec289[i] = (fConst32 * (fRec289[(i - 1)] + (fYec95[i] - fYec95[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec289_perm[j] = fRec289_tmp[(count + j)];
				
			}
			/* Recursive loop 623 */
			/* Pre code */
			for (int j449 = 0; (j449 < 4); j449 = (j449 + 1)) {
				fRec291_tmp[j449] = fRec291_perm[j449];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec291[i] = (fConst34 * (fRec291[(i - 1)] + (fYec97[i] - fYec97[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec291_perm[j] = fRec291_tmp[(count + j)];
				
			}
			/* Recursive loop 624 */
			/* Pre code */
			for (int j465 = 0; (j465 < 4); j465 = (j465 + 1)) {
				fRec301_tmp[j465] = fRec301_perm[j465];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec301[i] = min(1.0f, max(0.0f, ((fRec301[(i - 1)] + ((fZec191[i] > -25.0f)?((fZec192[i] < -25.0f)?1.0f:0.0f):0.0f)) - ((fZec192[i] > -35.0f)?((fZec191[i] < -35.0f)?1.0f:0.0f):0.0f))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec301_perm[j] = fRec301_tmp[(count + j)];
				
			}
			/* Recursive loop 625 */
			/* Pre code */
			for (int j276 = 0; (j276 < 4); j276 = (j276 + 1)) {
				fYec57_tmp[j276] = fYec57_perm[j276];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec57[i] = (fZec138[i] - fZec139[i]);
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec57_perm[j] = fYec57_tmp[(count + j)];
				
			}
			/* Recursive loop 626 */
			/* Pre code */
			for (int j317 = 0; (j317 < 4); j317 = (j317 + 1)) {
				fRec187_tmp[j317] = fRec187_perm[j317];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec187[i] = (fConst15 * (fRec187[(i - 1)] + (fZec153[i] - (fZec155[i] + fYec68[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec187_perm[j] = fRec187_tmp[(count + j)];
				
			}
			/* Recursive loop 627 */
			/* Pre code */
			for (int j438 = 0; (j438 < 4); j438 = (j438 + 1)) {
				fYec92_tmp[j438] = fYec92_perm[j438];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec92[i] = ((0.541666687f * fRec285[i]) + (fSlow83 * fZec184[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec92_perm[j] = fYec92_tmp[(count + j)];
				
			}
			/* Recursive loop 628 */
			/* Pre code */
			for (int j442 = 0; (j442 < 4); j442 = (j442 + 1)) {
				fYec94_tmp[j442] = fYec94_perm[j442];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec94[i] = ((0.541666687f * fRec287[i]) + (fSlow86 * fZec185[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec94_perm[j] = fYec94_tmp[(count + j)];
				
			}
			/* Recursive loop 629 */
			/* Pre code */
			for (int j446 = 0; (j446 < 4); j446 = (j446 + 1)) {
				fYec96_tmp[j446] = fYec96_perm[j446];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec96[i] = ((0.541666687f * fRec289[i]) + (fSlow89 * fZec186[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec96_perm[j] = fYec96_tmp[(count + j)];
				
			}
			/* Recursive loop 630 */
			/* Pre code */
			for (int j450 = 0; (j450 < 4); j450 = (j450 + 1)) {
				fYec98_tmp[j450] = fYec98_perm[j450];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec98[i] = ((0.541666687f * fRec291[i]) + (fSlow92 * fZec187[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec98_perm[j] = fYec98_tmp[(count + j)];
				
			}
			/* Recursive loop 631 */
			/* Pre code */
			for (int j452 = 0; (j452 < 4); j452 = (j452 + 1)) {
				fRec293_tmp[j452] = fRec293_perm[j452];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec293[i] = (fRec293[(i - 1)] + (fConst11 * (fYec91[i] - fRec293[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec293_perm[j] = fRec293_tmp[(count + j)];
				
			}
			/* Recursive loop 632 */
			/* Pre code */
			for (int j454 = 0; (j454 < 4); j454 = (j454 + 1)) {
				fRec295_tmp[j454] = fRec295_perm[j454];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec295[i] = (fRec295[(i - 1)] + (fConst8 * (fYec93[i] - fRec295[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec295_perm[j] = fRec295_tmp[(count + j)];
				
			}
			/* Recursive loop 633 */
			/* Pre code */
			for (int j456 = 0; (j456 < 4); j456 = (j456 + 1)) {
				fRec297_tmp[j456] = fRec297_perm[j456];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec297[i] = (fRec297[(i - 1)] + (fConst2 * (fYec95[i] - fRec297[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec297_perm[j] = fRec297_tmp[(count + j)];
				
			}
			/* Recursive loop 634 */
			/* Pre code */
			for (int j458 = 0; (j458 < 4); j458 = (j458 + 1)) {
				fRec299_tmp[j458] = fRec299_perm[j458];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec299[i] = (fRec299[(i - 1)] + (fConst16 * (fYec97[i] - fRec299[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec299_perm[j] = fRec299_tmp[(count + j)];
				
			}
			/* Recursive loop 635 */
			/* Pre code */
			for (int j466 = 0; (j466 < 4); j466 = (j466 + 1)) {
				fRec300_tmp[j466] = fRec300_perm[j466];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec300[i] = ((fConst39 * fRec300[(i - 1)]) + (fConst38 * ((fRec301[i] > 0.5f)?((fRec301[(i - 1)] < 0.5f)?1.0f:0.0f):0.0f)));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec300_perm[j] = fRec300_tmp[(count + j)];
				
			}
			/* Recursive loop 636 */
			/* Pre code */
			for (int j277 = 0; (j277 < 4); j277 = (j277 + 1)) {
				fRec158_tmp[j277] = fRec158_perm[j277];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec158[i] = (fConst15 * (fRec158[(i - 1)] + (fZec138[i] - (fZec139[i] + fYec57[(i - 1)]))));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec158_perm[j] = fRec158_tmp[(count + j)];
				
			}
			/* Recursive loop 637 */
			/* Pre code */
			for (int j439 = 0; (j439 < 4); j439 = (j439 + 1)) {
				fRec284_tmp[j439] = fRec284_perm[j439];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec284[i] = (fConst29 * (fRec284[(i - 1)] + (fYec92[i] - fYec92[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec284_perm[j] = fRec284_tmp[(count + j)];
				
			}
			/* Recursive loop 638 */
			/* Pre code */
			for (int j443 = 0; (j443 < 4); j443 = (j443 + 1)) {
				fRec286_tmp[j443] = fRec286_perm[j443];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec286[i] = (fConst31 * (fRec286[(i - 1)] + (fYec94[i] - fYec94[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec286_perm[j] = fRec286_tmp[(count + j)];
				
			}
			/* Recursive loop 639 */
			/* Pre code */
			for (int j447 = 0; (j447 < 4); j447 = (j447 + 1)) {
				fRec288_tmp[j447] = fRec288_perm[j447];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec288[i] = (fConst33 * (fRec288[(i - 1)] + (fYec96[i] - fYec96[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec288_perm[j] = fRec288_tmp[(count + j)];
				
			}
			/* Recursive loop 640 */
			/* Pre code */
			for (int j451 = 0; (j451 < 4); j451 = (j451 + 1)) {
				fRec290_tmp[j451] = fRec290_perm[j451];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec290[i] = (fConst35 * (fRec290[(i - 1)] + (fYec98[i] - fYec98[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec290_perm[j] = fRec290_tmp[(count + j)];
				
			}
			/* Recursive loop 641 */
			/* Pre code */
			for (int j453 = 0; (j453 < 4); j453 = (j453 + 1)) {
				fRec292_tmp[j453] = fRec292_perm[j453];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec292[i] = (fRec292[(i - 1)] + (fConst11 * (fRec293[i] - fRec292[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec292_perm[j] = fRec292_tmp[(count + j)];
				
			}
			/* Recursive loop 642 */
			/* Pre code */
			for (int j455 = 0; (j455 < 4); j455 = (j455 + 1)) {
				fRec294_tmp[j455] = fRec294_perm[j455];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec294[i] = (fRec294[(i - 1)] + (fConst8 * (fRec295[i] - fRec294[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec294_perm[j] = fRec294_tmp[(count + j)];
				
			}
			/* Recursive loop 643 */
			/* Pre code */
			for (int j457 = 0; (j457 < 4); j457 = (j457 + 1)) {
				fRec296_tmp[j457] = fRec296_perm[j457];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec296[i] = (fRec296[(i - 1)] + (fConst2 * (fRec297[i] - fRec296[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec296_perm[j] = fRec296_tmp[(count + j)];
				
			}
			/* Recursive loop 644 */
			/* Pre code */
			for (int j459 = 0; (j459 < 4); j459 = (j459 + 1)) {
				fRec298_tmp[j459] = fRec298_perm[j459];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec298[i] = (fRec298[(i - 1)] + (fConst16 * (fRec299[i] - fRec298[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec298_perm[j] = fRec298_tmp[(count + j)];
				
			}
			/* Recursive loop 645 */
			/* Pre code */
			for (int j467 = 0; (j467 < 4); j467 = (j467 + 1)) {
				fRec306_tmp[j467] = fRec306_perm[j467];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec306[i] = (fRec306[(i - 1)] + (fConst40 * ((fSlow17 * ((fSlow94 * ((0.25f * fZec179[i]) + (0.125f * fZec164[i]))) + (fSlow96 * (((0.25f * fZec182[i]) + (0.125f * fZec179[i])) + (0.0625f * fZec164[i]))))) - fRec306[(i - 1)])));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec306_perm[j] = fRec306_tmp[(count + j)];
				
			}
			/* Recursive loop 646 */
			/* Pre code */
			for (int j468 = 0; (j468 < 4); j468 = (j468 + 1)) {
				fRec307_tmp[j468] = fRec307_perm[j468];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec307[i] = (fSlow97 + (0.980000019f * fRec307[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec307_perm[j] = fRec307_tmp[(count + j)];
				
			}
			/* Recursive loop 647 */
			/* Pre code */
			for (int j469 = 0; (j469 < 4); j469 = (j469 + 1)) {
				fRec308_tmp[j469] = fRec308_perm[j469];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fRec308[i] = (fSlow98 + (0.980000019f * fRec308[(i - 1)]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fRec308_perm[j] = fRec308_tmp[(count + j)];
				
			}
			/* Recursive loop 648 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec193[i] = (fZec129[i] + fZec189[i]);
				
			}
			/* Recursive loop 649 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec194[i] = (0.00200000009f * (fRec187[i] * fSlow82));
				
			}
			/* Recursive loop 650 */
			/* Pre code */
			for (int j470 = 0; (j470 < 4); j470 = (j470 + 1)) {
				fYec100_tmp[j470] = fYec100_perm[j470];
				
			}
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fYec100[i] = min(1.0f, (fConst41 * fRec300[i]));
				
			}
			/* Post code */
			for (int j = 0; (j < 4); j = (j + 1)) {
				fYec100_perm[j] = fYec100_tmp[(count + j)];
				
			}
			/* Recursive loop 651 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fZec195[i] = (((((fSlow100 * (((((((fSlow102 * fZec193[i]) + (fSlow104 * (fZec139[i] + (0.00200000009f * (fRec158[i] * fSlow82))))) + (fSlow106 * fZec184[i])) + (fSlow108 * (fZec155[i] + fZec194[i]))) + (fSlow110 * fZec185[i])) + (fSlow112 * fZec186[i])) + (fSlow114 * fZec187[i]))) + (fSlow115 * ((fSlow117 * (((fRec284[i] + fRec286[i]) + fRec288[i]) + fRec290[i])) + (fSlow118 * (((fRec292[i] + fRec294[i]) + fRec296[i]) + fRec298[i]))))) + (fSlow119 * (((0.25f * (fZec193[i] + fZec154[i])) + (fZec194[i] + (0.5f * fZec187[i]))) * max(fSlow120, (0.25f * (((fYec100[i] + fYec100[(i - 2)]) + fYec100[(i - 3)]) + fYec100[(i - 4)])))))) + (fRec306[i] * ((4.5f * fRec307[i]) + 0.5f))) * ((0.0500000007f * fRec308[i]) + 0.00100000005f));
				
			}
			/* Vectorizable loop 652 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fOutput0[i] = FAUSTFLOAT(fZec195[i]);
				
			}
			/* Vectorizable loop 653 */
			/* Compute code */
			for (int i = 0; (i < count); i = (i + 1)) {
				fOutput1[i] = FAUSTFLOAT(fZec195[i]);
				
			}
			
		}
		
	}

	
};

#endif
