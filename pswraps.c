/* pswraps.c generated from pswraps.psw
   by unix pswrap V1.009  Wed Apr 19 17:50:24 PDT 1989
 */

#include <dpsclient/dpsfriends.h>
#include <string.h>

#line 1 "pswraps.psw"
#line 10 "pswraps.c"
void myPSgrid( void )
{
  typedef struct {
    unsigned char tokenType;
    unsigned char topLevelCount;
    unsigned short nBytes;

    DPSBinObjGeneric obj0;
    DPSBinObjGeneric obj1;
    DPSBinObjReal obj2;
    DPSBinObjGeneric obj3;
    DPSBinObjGeneric obj4;
    DPSBinObjGeneric obj5;
    DPSBinObjGeneric obj6;
    DPSBinObjGeneric obj7;
    DPSBinObjGeneric obj8;
    DPSBinObjGeneric obj9;
    DPSBinObjGeneric obj10;
    DPSBinObjGeneric obj11;
    DPSBinObjGeneric obj12;
    DPSBinObjGeneric obj13;
    DPSBinObjGeneric obj14;
    DPSBinObjGeneric obj15;
    DPSBinObjGeneric obj16;
    DPSBinObjGeneric obj17;
    DPSBinObjGeneric obj18;
    DPSBinObjGeneric obj19;
    DPSBinObjGeneric obj20;
    DPSBinObjGeneric obj21;
    DPSBinObjGeneric obj22;
    DPSBinObjGeneric obj23;
    DPSBinObjGeneric obj24;
    DPSBinObjGeneric obj25;
    DPSBinObjGeneric obj26;
    DPSBinObjGeneric obj27;
    DPSBinObjGeneric obj28;
    DPSBinObjGeneric obj29;
    DPSBinObjGeneric obj30;
    DPSBinObjGeneric obj31;
    } _dpsQ;
  static const _dpsQ _dpsF = {
    DPS_DEF_TOKENTYPE, 32, 260,
    {DPS_LITERAL|DPS_INT, 0, 0, 1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 150},	/* setgray */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0.001},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 155},	/* setlinewidth */
    {DPS_LITERAL|DPS_INT, 0, 0, -3},
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_LITERAL|DPS_INT, 0, 0, 3},
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_LITERAL|DPS_INT, 0, 0, -3},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_LITERAL|DPS_INT, 0, 0, 3},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_LITERAL|DPS_INT, 0, 0, -3},
    {DPS_LITERAL|DPS_INT, 0, 0, 1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_LITERAL|DPS_INT, 0, 0, 3},
    {DPS_LITERAL|DPS_INT, 0, 0, 1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_LITERAL|DPS_INT, 0, 0, 1},
    {DPS_LITERAL|DPS_INT, 0, 0, -3},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_LITERAL|DPS_INT, 0, 0, 1},
    {DPS_LITERAL|DPS_INT, 0, 0, 3},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    }; /* _dpsQ */
  register DPSContext _dpsCurCtxt = DPSPrivCurrentContext();
  DPSBinObjSeqWrite(_dpsCurCtxt,(char *) &_dpsF,260);
}
#line 19 "pswraps.psw"

#line 91 "pswraps.c"
void PSanimline(float x1, float y1, float x2, float y2)
{
  typedef struct {
    unsigned char tokenType;
    unsigned char topLevelCount;
    unsigned short nBytes;

    DPSBinObjGeneric obj0;
    DPSBinObjGeneric obj1;
    DPSBinObjReal obj2;
    DPSBinObjReal obj3;
    DPSBinObjGeneric obj4;
    DPSBinObjGeneric obj5;
    DPSBinObjGeneric obj6;
    DPSBinObjReal obj7;
    DPSBinObjReal obj8;
    DPSBinObjGeneric obj9;
    DPSBinObjGeneric obj10;
    DPSBinObjReal obj11;
    DPSBinObjReal obj12;
    DPSBinObjGeneric obj13;
    DPSBinObjGeneric obj14;
    DPSBinObjReal obj15;
    DPSBinObjReal obj16;
    DPSBinObjGeneric obj17;
    DPSBinObjGeneric obj18;
    DPSBinObjGeneric obj19;
    DPSBinObjGeneric obj20;
    DPSBinObjReal obj21;
    DPSBinObjGeneric obj22;
    DPSBinObjGeneric obj23;
    DPSBinObjGeneric obj24;
    DPSBinObjGeneric obj25;
    DPSBinObjReal obj26;
    DPSBinObjGeneric obj27;
    DPSBinObjGeneric obj28;
    DPSBinObjGeneric obj29;
    DPSBinObjGeneric obj30;
    DPSBinObjReal obj31;
    DPSBinObjGeneric obj32;
    DPSBinObjGeneric obj33;
    DPSBinObjGeneric obj34;
    DPSBinObjGeneric obj35;
    DPSBinObjGeneric obj36;
    DPSBinObjGeneric obj37;
    DPSBinObjGeneric obj38;
    DPSBinObjGeneric obj39;
    DPSBinObjGeneric obj40;
    DPSBinObjReal obj41;
    DPSBinObjGeneric obj42;
    DPSBinObjGeneric obj43;
    DPSBinObjGeneric obj44;
    DPSBinObjGeneric obj45;
    DPSBinObjReal obj46;
    DPSBinObjGeneric obj47;
    DPSBinObjGeneric obj48;
    DPSBinObjGeneric obj49;
    DPSBinObjGeneric obj50;
    DPSBinObjGeneric obj51;
    DPSBinObjGeneric obj52;
    DPSBinObjGeneric obj53;
    DPSBinObjGeneric obj54;
    DPSBinObjGeneric obj55;
    DPSBinObjGeneric obj56;
    DPSBinObjGeneric obj57;
    DPSBinObjGeneric obj58;
    DPSBinObjGeneric obj59;
    DPSBinObjGeneric obj60;
    DPSBinObjGeneric obj61;
    DPSBinObjGeneric obj62;
    DPSBinObjGeneric obj63;
    DPSBinObjGeneric obj64;
    DPSBinObjGeneric obj65;
    DPSBinObjGeneric obj66;
    DPSBinObjGeneric obj67;
    DPSBinObjGeneric obj68;
    DPSBinObjGeneric obj69;
    DPSBinObjGeneric obj70;
    DPSBinObjGeneric obj71;
    DPSBinObjGeneric obj72;
    DPSBinObjGeneric obj73;
    DPSBinObjGeneric obj74;
    DPSBinObjGeneric obj75;
    DPSBinObjGeneric obj76;
    DPSBinObjGeneric obj77;
    DPSBinObjGeneric obj78;
    DPSBinObjGeneric obj79;
    DPSBinObjGeneric obj80;
    DPSBinObjGeneric obj81;
    DPSBinObjGeneric obj82;
    DPSBinObjGeneric obj83;
    DPSBinObjGeneric obj84;
    DPSBinObjGeneric obj85;
    DPSBinObjGeneric obj86;
    DPSBinObjGeneric obj87;
    DPSBinObjGeneric obj88;
    DPSBinObjGeneric obj89;
    DPSBinObjGeneric obj90;
    DPSBinObjGeneric obj91;
    DPSBinObjGeneric obj92;
    DPSBinObjGeneric obj93;
    DPSBinObjGeneric obj94;
    DPSBinObjGeneric obj95;
    DPSBinObjGeneric obj96;
    DPSBinObjGeneric obj97;
    DPSBinObjGeneric obj98;
    DPSBinObjGeneric obj99;
    DPSBinObjGeneric obj100;
    DPSBinObjGeneric obj101;
    DPSBinObjGeneric obj102;
    DPSBinObjGeneric obj103;
    DPSBinObjGeneric obj104;
    DPSBinObjGeneric obj105;
    DPSBinObjGeneric obj106;
    DPSBinObjGeneric obj107;
    DPSBinObjGeneric obj108;
    DPSBinObjGeneric obj109;
    DPSBinObjGeneric obj110;
    DPSBinObjGeneric obj111;
    DPSBinObjGeneric obj112;
    DPSBinObjGeneric obj113;
    DPSBinObjGeneric obj114;
    DPSBinObjGeneric obj115;
    DPSBinObjGeneric obj116;
    DPSBinObjGeneric obj117;
    DPSBinObjGeneric obj118;
    DPSBinObjGeneric obj119;
    DPSBinObjGeneric obj120;
    DPSBinObjGeneric obj121;
    DPSBinObjGeneric obj122;
    DPSBinObjGeneric obj123;
    DPSBinObjGeneric obj124;
    DPSBinObjGeneric obj125;
    DPSBinObjGeneric obj126;
    DPSBinObjGeneric obj127;
    DPSBinObjGeneric obj128;
    DPSBinObjGeneric obj129;
    DPSBinObjGeneric obj130;
    DPSBinObjGeneric obj131;
    DPSBinObjGeneric obj132;
    DPSBinObjGeneric obj133;
    DPSBinObjGeneric obj134;
    DPSBinObjGeneric obj135;
    } _dpsQ;
  static const _dpsQ _dpsStat = {
    DPS_DEF_TOKENTYPE, 19, 1092,
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 111},	/* newpath */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* xd */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x2 */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 169},	/* sub */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* yd */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y2 */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 169},	/* sub */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x1 */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_LITERAL|DPS_INT, 0, 0, 0},
    {DPS_LITERAL|DPS_REAL, 0, 0, 0.1},
    {DPS_LITERAL|DPS_REAL, 0, 0, 0.9},
    {DPS_EXEC|DPS_ARRAY, 0, 117, 152},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 72},	/* for */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 56},	/* dup */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 56},	/* dup */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0.1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 1},	/* add */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 56},	/* dup */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xd */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 1},	/* add */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yd */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 1},	/* add */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xd */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 1},	/* add */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yd */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y1 */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 1},	/* add */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_LITERAL|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 62},	/* exch */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 51},	/* def */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* ya */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xa */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 107},	/* moveto */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* yb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* xb */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 99},	/* lineto */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_EXEC|DPS_NAME, 0, 0, 0},	/* flushgraphics */
    }; /* _dpsQ */
  _dpsQ _dpsF;	/* local copy  */
  register DPSContext _dpsCurCtxt = DPSPrivCurrentContext();
  register DPSBinObjRec *_dpsP = (DPSBinObjRec *)&_dpsF.obj0;
  static long int _dpsCodes[43] = {-1};
  {
if (_dpsCodes[0] < 0) {
    static const char * const _dps_names[] = {
	"xd",
	(char *) 0 ,
	(char *) 0 ,
	"yd",
	(char *) 0 ,
	(char *) 0 ,
	"xa",
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	"ya",
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	"xb",
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	"yb",
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	(char *) 0 ,
	"flushgraphics"};
    long int *_dps_nameVals[43];
    _dps_nameVals[0] = &_dpsCodes[0];
    _dps_nameVals[1] = &_dpsCodes[1];
    _dps_nameVals[2] = &_dpsCodes[2];
    _dps_nameVals[3] = &_dpsCodes[3];
    _dps_nameVals[4] = &_dpsCodes[4];
    _dps_nameVals[5] = &_dpsCodes[5];
    _dps_nameVals[6] = &_dpsCodes[6];
    _dps_nameVals[7] = &_dpsCodes[7];
    _dps_nameVals[8] = &_dpsCodes[8];
    _dps_nameVals[9] = &_dpsCodes[9];
    _dps_nameVals[10] = &_dpsCodes[10];
    _dps_nameVals[11] = &_dpsCodes[11];
    _dps_nameVals[12] = &_dpsCodes[12];
    _dps_nameVals[13] = &_dpsCodes[13];
    _dps_nameVals[14] = &_dpsCodes[14];
    _dps_nameVals[15] = &_dpsCodes[15];
    _dps_nameVals[16] = &_dpsCodes[16];
    _dps_nameVals[17] = &_dpsCodes[17];
    _dps_nameVals[18] = &_dpsCodes[18];
    _dps_nameVals[19] = &_dpsCodes[19];
    _dps_nameVals[20] = &_dpsCodes[20];
    _dps_nameVals[21] = &_dpsCodes[21];
    _dps_nameVals[22] = &_dpsCodes[22];
    _dps_nameVals[23] = &_dpsCodes[23];
    _dps_nameVals[24] = &_dpsCodes[24];
    _dps_nameVals[25] = &_dpsCodes[25];
    _dps_nameVals[26] = &_dpsCodes[26];
    _dps_nameVals[27] = &_dpsCodes[27];
    _dps_nameVals[28] = &_dpsCodes[28];
    _dps_nameVals[29] = &_dpsCodes[29];
    _dps_nameVals[30] = &_dpsCodes[30];
    _dps_nameVals[31] = &_dpsCodes[31];
    _dps_nameVals[32] = &_dpsCodes[32];
    _dps_nameVals[33] = &_dpsCodes[33];
    _dps_nameVals[34] = &_dpsCodes[34];
    _dps_nameVals[35] = &_dpsCodes[35];
    _dps_nameVals[36] = &_dpsCodes[36];
    _dps_nameVals[37] = &_dpsCodes[37];
    _dps_nameVals[38] = &_dpsCodes[38];
    _dps_nameVals[39] = &_dpsCodes[39];
    _dps_nameVals[40] = &_dpsCodes[40];
    _dps_nameVals[41] = &_dpsCodes[41];
    _dps_nameVals[42] = &_dpsCodes[42];

    DPSMapNames(_dpsCurCtxt, 43, _dps_names, _dps_nameVals);
    }
  }

  _dpsF = _dpsStat;	/* assign automatic variable */

  _dpsP[3].val.realVal =
  _dpsP[11].val.realVal =
  _dpsP[26].val.realVal =
  _dpsP[41].val.realVal = x1;
  _dpsP[8].val.realVal =
  _dpsP[12].val.realVal =
  _dpsP[31].val.realVal =
  _dpsP[46].val.realVal = y1;
  _dpsP[2].val.realVal = x2;
  _dpsP[7].val.realVal = y2;
  _dpsP[1].val.nameVal = _dpsCodes[0];
  _dpsP[39].val.nameVal = _dpsCodes[1];
  _dpsP[24].val.nameVal = _dpsCodes[2];
  _dpsP[6].val.nameVal = _dpsCodes[3];
  _dpsP[44].val.nameVal = _dpsCodes[4];
  _dpsP[29].val.nameVal = _dpsCodes[5];
  _dpsP[33].val.nameVal = _dpsCodes[6];
  _dpsP[123].val.nameVal = _dpsCodes[7];
  _dpsP[111].val.nameVal = _dpsCodes[8];
  _dpsP[103].val.nameVal = _dpsCodes[9];
  _dpsP[95].val.nameVal = _dpsCodes[10];
  _dpsP[80].val.nameVal = _dpsCodes[11];
  _dpsP[70].val.nameVal = _dpsCodes[12];
  _dpsP[60].val.nameVal = _dpsCodes[13];
  _dpsP[54].val.nameVal = _dpsCodes[14];
  _dpsP[36].val.nameVal = _dpsCodes[15];
  _dpsP[120].val.nameVal = _dpsCodes[16];
  _dpsP[110].val.nameVal = _dpsCodes[17];
  _dpsP[100].val.nameVal = _dpsCodes[18];
  _dpsP[94].val.nameVal = _dpsCodes[19];
  _dpsP[83].val.nameVal = _dpsCodes[20];
  _dpsP[71].val.nameVal = _dpsCodes[21];
  _dpsP[63].val.nameVal = _dpsCodes[22];
  _dpsP[55].val.nameVal = _dpsCodes[23];
  _dpsP[48].val.nameVal = _dpsCodes[24];
  _dpsP[130].val.nameVal = _dpsCodes[25];
  _dpsP[116].val.nameVal = _dpsCodes[26];
  _dpsP[108].val.nameVal = _dpsCodes[27];
  _dpsP[98].val.nameVal = _dpsCodes[28];
  _dpsP[87].val.nameVal = _dpsCodes[29];
  _dpsP[75].val.nameVal = _dpsCodes[30];
  _dpsP[65].val.nameVal = _dpsCodes[31];
  _dpsP[57].val.nameVal = _dpsCodes[32];
  _dpsP[51].val.nameVal = _dpsCodes[33];
  _dpsP[127].val.nameVal = _dpsCodes[34];
  _dpsP[115].val.nameVal = _dpsCodes[35];
  _dpsP[105].val.nameVal = _dpsCodes[36];
  _dpsP[97].val.nameVal = _dpsCodes[37];
  _dpsP[90].val.nameVal = _dpsCodes[38];
  _dpsP[76].val.nameVal = _dpsCodes[39];
  _dpsP[68].val.nameVal = _dpsCodes[40];
  _dpsP[58].val.nameVal = _dpsCodes[41];
  _dpsP[135].val.nameVal = _dpsCodes[42];
  DPSBinObjSeqWrite(_dpsCurCtxt,(char *) &_dpsF,1092);
}
#line 59 "pswraps.psw"

#line 533 "pswraps.c"
void PSanimcircle(float x, float y, float r)
{
  typedef struct {
    unsigned char tokenType;
    unsigned char topLevelCount;
    unsigned short nBytes;

    DPSBinObjGeneric obj0;
    DPSBinObjReal obj1;
    DPSBinObjReal obj2;
    DPSBinObjReal obj3;
    DPSBinObjGeneric obj4;
    DPSBinObjGeneric obj5;
    DPSBinObjGeneric obj6;
    DPSBinObjGeneric obj7;
    DPSBinObjGeneric obj8;
    DPSBinObjReal obj9;
    DPSBinObjGeneric obj10;
    DPSBinObjGeneric obj11;
    DPSBinObjReal obj12;
    DPSBinObjReal obj13;
    DPSBinObjGeneric obj14;
    DPSBinObjGeneric obj15;
    DPSBinObjGeneric obj16;
    DPSBinObjGeneric obj17;
    DPSBinObjGeneric obj18;
    DPSBinObjReal obj19;
    DPSBinObjReal obj20;
    DPSBinObjGeneric obj21;
    DPSBinObjGeneric obj22;
    DPSBinObjReal obj23;
    DPSBinObjGeneric obj24;
    DPSBinObjGeneric obj25;
    DPSBinObjGeneric obj26;
    DPSBinObjGeneric obj27;
    DPSBinObjGeneric obj28;
    DPSBinObjReal obj29;
    DPSBinObjGeneric obj30;
    DPSBinObjGeneric obj31;
    DPSBinObjReal obj32;
    DPSBinObjGeneric obj33;
    DPSBinObjGeneric obj34;
    DPSBinObjReal obj35;
    DPSBinObjGeneric obj36;
    DPSBinObjGeneric obj37;
    DPSBinObjGeneric obj38;
    DPSBinObjGeneric obj39;
    } _dpsQ;
  static const _dpsQ _dpsStat = {
    DPS_DEF_TOKENTYPE, 40, 324,
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 111},	/* newpath */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: r */
    {DPS_LITERAL|DPS_INT, 0, 0, 0},
    {DPS_LITERAL|DPS_INT, 0, 0, 360},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 5},	/* arc */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 111},	/* newpath */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: r */
    {DPS_LITERAL|DPS_INT, 0, 0, 0},
    {DPS_LITERAL|DPS_INT, 0, 0, 360},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 5},	/* arc */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 111},	/* newpath */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: r */
    {DPS_LITERAL|DPS_INT, 0, 0, 0},
    {DPS_LITERAL|DPS_INT, 0, 0, 360},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 5},	/* arc */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 111},	/* newpath */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: x */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: y */
    {DPS_LITERAL|DPS_INT, 0, 0, -1},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 108},	/* mul */
    {DPS_LITERAL|DPS_REAL, 0, 0, 0},	/* param: r */
    {DPS_LITERAL|DPS_INT, 0, 0, 0},
    {DPS_LITERAL|DPS_INT, 0, 0, 360},
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 5},	/* arc */
    {DPS_EXEC|DPS_NAME, 0, DPSSYSNAME, 167},	/* stroke */
    }; /* _dpsQ */
  _dpsQ _dpsF;	/* local copy  */
  register DPSContext _dpsCurCtxt = DPSPrivCurrentContext();
  register DPSBinObjRec *_dpsP = (DPSBinObjRec *)&_dpsF.obj0;
  _dpsF = _dpsStat;	/* assign automatic variable */

  _dpsP[1].val.realVal =
  _dpsP[9].val.realVal =
  _dpsP[19].val.realVal =
  _dpsP[29].val.realVal = x;
  _dpsP[2].val.realVal =
  _dpsP[12].val.realVal =
  _dpsP[20].val.realVal =
  _dpsP[32].val.realVal = y;
  _dpsP[3].val.realVal =
  _dpsP[13].val.realVal =
  _dpsP[23].val.realVal =
  _dpsP[35].val.realVal = r;
  DPSBinObjSeqWrite(_dpsCurCtxt,(char *) &_dpsF,324);
}
#line 70 "pswraps.psw"
 