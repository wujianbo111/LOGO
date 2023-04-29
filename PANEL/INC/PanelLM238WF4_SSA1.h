
#define PanelName              "LM238WF4"

#define PanelDither		8

#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xFF
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        	0xFF		
#define MINILVDSTCON_DEVICE     	0x50
#define MAX_VCOM_VALUE          	0x5E
#define DEF_VCOM_VALUE          	0x40
#define MIN_VCOM_VALUE          	0x22

#define LVDS_TIMode		 	0xFF
#define PanelDualPort		0xFF
#define PanelSwapPort		0
#define PanelSwapOddML		0
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0
#if 0// (MainBoardType==MainBoard_7762_M0A)
#define PANEL_SWAP_PN       0xFF
#else
#define PANEL_SWAP_PN       0//xFF
#endif
#define PanelDClkDelay		0
#define PanelInvDClk			0
#define PanelInvDE			0
#define PanelInvHSync		0
#define PanelInvVSync		0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent		 0// Dclk current
#define PanelDECurrent		  0//DE signal current
#define PanelOddDataCurrent	 0// Odd data current
#define PanelEvenDataCurrent 	0// Even data current

#define PanelOnTiming1		20 //090302// T2 <= 50ms // time between panel & data while turn on power
#define PanelOnTiming2		550// T5 >= 450ms // time between data & back light while turn on power
#define PanelOffTiming1		250// t6 >= 90ms // time between back light & data while turn off power 
#define PanelOffTiming2		20// T3 <= 50ms // time between data & panel while turn off power 

#define PanelHSyncWidth		  12
#define PanelHSyncBackPorch	  18

#define PanelVSyncWidth		2
#define PanelVSyncBackPorch	16

 #define PanelHStart   		(PanelHSyncWidth+PanelHSyncBackPorch)
 #define PanelVStart   		(PanelVSyncWidth+PanelVSyncBackPorch)
 #define PanelWidth    		1920
 #define PanelHeight   		1080
 
 #define PanelHTotal   		2176  
 #define PanelVTotal   		1100 
 
 #define PanelMaxHTotal     2240
 #define PanelMinHTotal     2048
 
 #define PanelMaxVTotal     1251
 #define PanelMinVTotal    	1090
 
 #define PanelDCLK       	144
 #define PanelMaxDCLK     	184
 #define PanelMinDCLK     	110

// 080514
#define PanelMaxVfreq   (750+13) // 75Hz
#define PanelMinVfreq   (500-13) // 50Hz

//==================================================================
//LED Backlight Control
#define LED_CH_0    1
#define LED_CH_1    1
#define LED_CH_2    1
#define LED_CH_3    1

#define LEDBL_PanelDefaultCurrent        	80			//need set by panel spec   //  3/4~4/4 panel current
#define PanelLightBarDefaultVoltage    		48			//need set by panel spec  
#define PanelLightBarMaximumVoltage    		49			//need set by panel spec

#define ForwardVoltage_Of_EachLED    		33			//need set by panel spec



