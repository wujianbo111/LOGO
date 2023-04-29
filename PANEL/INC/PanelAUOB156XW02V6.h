#define PanelTpye_1366
#define PanelName               _B,_1,_5,_6,_X,_W,_0,_2

#define PanelDither 		8//6
#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xff
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        0x00

#define LVDS_TIMode   			0//0xff
#define PanelDualPort   			0//0xff
#define PanelSwapPort   			0xff
#define PanelSwapOddML    		0
#define PanelSwapEvenML   		0
#define PanelSwapOddRB    		0
#define PanelSwapEvenRB   		0
#define PanelSwapMLSB   			0
#define PanelDClkDelay    			8
#define PanelInvDE      			0
#define PanelInvDClk    			0
#define PanelInvHSync   			0//0xFF
#define PanelInvVSync   			0//0xff
// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent  		1 // Dclk current
#define PanelDECurrent    			1 // DE signal current
#define PanelOddDataCurrent 		1 // Odd data current
#define PanelEvenDataCurrent  	1 // Even data current
#define PanelOnTiming1    		25 // 0//40 // time between panel & data while turn on power
#define PanelOnTiming2    		250 // 300//300 //30 // time between data & back light while turn on power  //20050701
#define PanelOffTiming1 			10 // 300 // time between back light & data while turn off power
#define PanelOffTiming2 			10 // 20 // time between data & panel while turn off power
#define PanelHSyncWidth			14
#define PanelHSyncBackPorch		15
#define PanelVSyncWidth			3
#define PanelVSyncBackPorch		29
#define PanelHStart 		(PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart 		(PanelVSyncWidth+PanelVSyncBackPorch)
#define PanelWidth			1366
#define PanelHeight 		768
#define PanelHTotal			1606
#define PanelVTotal 		808
#define PanelMaxHTotal		2047
#define PanelMinHTotal		1396
#define PanelMaxVTotal		1023
#define PanelMinVTotal		776
#define PanelDCLK			69
#define PanelMaxDCLK		72
#define PanelMinDCLK		65
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

