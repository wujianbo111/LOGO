#define	PanelName	_L,_M,_2,_1,_5,_W,_F,_1//"LM220WE1"

#define PanelDither		8//6

#define PanelTTL		0
#define PanelTCON		0
#define PanelLVDS		0xFF
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        0x00

#define LVDS_TIMode		    0xff
#define PanelDualPort		    0xFF
#define PanelSwapPort		     0xFF
#define PanelSwapOddML		     0
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0
#define PanelSwapPlusMinus		0//0xff



#define PanelDClkDelay		0
#define PanelInvDE		            0
#define PanelInvDClk		0
#define PanelInvHSync		0
#define PanelInvVSync		0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent	1 // Dclk current
#define PanelDECurrent		1 // DE signal current
#define PanelOddDataCurrent	1 // Odd data current
#define PanelEvenDataCurrent	1 // Even data current

#define PanelOnTiming1    25 // 0//40 // time between panel & data while turn on power
#define PanelOnTiming2    550 // 300//300 //30 // time between data & back light while turn on power

#define PanelOffTiming1  250 // time between back light & data while turn off power
#define PanelOffTiming2  15 // 20 // time between data & panel while turn off power

#define PanelHSyncWidth    26
#define PanelHSyncBackPorch  18

#define PanelVSyncWidth     3
#define PanelVSyncBackPorch  10 // 46

#define PanelHStart   (PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart   (PanelVSyncWidth+PanelVSyncBackPorch)
#define PanelWidth    1920//1680
#define PanelHeight   1080//1050

#define PanelHTotal    2176//2000 // 1840 // 2240//2256
#define PanelVTotal     1100//1200//1250

#define PanelMaxHTotal    2240//2600
#define PanelMinHTotal    2000//1826
#define PanelMaxVTotal    1160//1300
#define PanelMinVTotal    1090
#define PanelDCLK           144//119

#define PanelMaxDCLK         175//149
#define PanelMinDCLK         120//100
//=================================================================
// TCON	 setting for LVDS
//PVS / FSYNC
#define GPO9_VStart		0x7
#define GPO9_VEnd		0x705
#define GPO9_HStart		0x0
#define GPO9_HEnd		0x0
#define GPO9_Control		0x7

//HSYNC
#define GPOA_VStart		0x006
#define GPOA_VEnd		0x408
#define GPOA_HStart		0
#define GPOA_HEnd		0
#define GPOA_Control		0x4

