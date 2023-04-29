#define PanelType_1600x900
#define PanelName               _T,_P,_M,_2,_0,_0,_O,_1,_L,_0,_2,_C,_1,_D

#define PanelDither		8

#define PanelTTL		0
#define PanelTCON		0
#define PanelLVDS		0xFF
#define PanelRSDS		0
#define PanelminiLVDS      0
#define PANEL_VCOM_ADJUST        0x00

#define LVDS_TIMode		0xff
#define PanelDualPort		0xFF
#define PanelSwapPort		0xFF
#define PanelSwapOddML		0
#define PanelSwapEvenML		0

#define PanelSwapOddRB		0//xFF
#define PanelSwapEvenRB		0//xFF
#define PanelSwapMLSB		0

#define PanelDClkDelay		0
#define PanelInvDE		0
#define PanelInvDClk		0
#define PanelInvHSync		0
#define PanelInvVSync		0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent		3 // Dclk current
#define PanelDECurrent		3 // DE signal current
#define PanelOddDataCurrent	3 // Odd data current
#define PanelEvenDataCurrent	3 // Even data current

#define PanelOnTiming1		30 //80 // time between panel & data while turn on power
#define PanelOnTiming2		500//80 // time between data & back light while turn on power
#define PanelOffTiming1		130 // time between back light & data while turn off power
#define PanelOffTiming2		20 // time between data & panel while turn off power
#define PanelOffOnDelay     800

#define PanelHSyncWidth		14// 32
#define PanelHSyncBackPorch	21

#define PanelVSyncWidth		12
#define PanelVSyncBackPorch	28

#define PanelHStart		(PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart		(PanelVSyncWidth+PanelVSyncBackPorch)
#define PanelWidth		1600
#define PanelHeight		900
#define PanelHTotal		2112//2128
#define PanelVTotal		934//932

#define PanelMaxHTotal		2144//2300//2160
#define PanelMinHTotal		2080//1900//1880//2096
#define PanelMaxVTotal		942//955//940
#define PanelMinVTotal		929//906//926
#define PanelDCLK			118
#define PanelMaxDCLK		152
#define PanelMinDCLK			97


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


