#ifndef __PANEL_HR215HW01__   //PanelTPM215HW01
    #define __PANEL_HR215HW01__

//#define PanelNumber             1800
#define PanelName       "HR215WU1"
#if MainBoardType ==MainBoard_6474_M0A
#define PanelDither		6
#else
#define PanelDither		8
#endif

#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xFF
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define NormalWhite 			   0		   // for normal Black panel
#define PANEL_VCOM_ADJUST        0x00

#define LVDS_TIMode		       0xFF

#if (MainBoardType==MainBoard_6178_M0A)// nick remove for meet G3 Project||(MainBoardType == MainBoard_6223_M0A))//20130427
#define PANEL_SWAP_PN          0xFF
#else
#define PANEL_SWAP_PN          0x00
#endif
#define LVDS_TI_BitModeSel      LVDS_TI_8BIT
#define PanelDualPort		0xFF
#if (MainBoardType==MainBoard_6474_M0A)
#define PanelSwapPort           0xFF
#else
#define PanelSwapPort           0
#endif
#define PanelSwapOddML		0
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0

#define PanelDClkDelay		8
#define PanelInvDClk			0
#define PanelInvDE			0
#define PanelInvHSync		0
#define PanelInvVSync		0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent		1 // Dclk current
#define PanelDECurrent		1 // DE signal current
#define PanelOddDataCurrent	1 // Odd data current
#define PanelEvenDataCurrent	1 // Even data current

#if (MainBoardType==MainBoard_6223_M0A)//20130522
#define PanelOnTiming1		10  // 20 //090302// T2 <= 50ms // time between panel & data while turn on power//20130701 bian
#else
#define PanelOnTiming1		25  // 20 //090302// T2 <= 50ms // time between panel & data while turn on power
#endif

#define PanelOnTiming2		300// T5 >= 450ms // time between data & back light while turn on power
#define PanelOffTiming1		300// t6 >= 90ms // time between back light & data while turn off power 


#if (MainBoardType==MainBoard_6223_M0A)//20130701 bian
#define PanelOffTiming2		15  // 20// T3 <= 50ms // time between data & panel while turn off power 
#else
#define PanelOffTiming2      20 // 20// T3 <= 50ms // time between data & panel while turn off power 
#endif

#define PanelOffOnDelay        1100 // T4 >= 500ms

#define PanelHSyncWidth		14//46
#define PanelHSyncBackPorch	31

#define PanelVSyncWidth		3
#define PanelVSyncBackPorch	13

 #define PanelHStart   (PanelHSyncWidth+PanelHSyncBackPorch)
 #define PanelVStart   (PanelVSyncWidth+PanelVSyncBackPorch)
 #define PanelWidth    1920
 #define PanelHeight   1080
 
 #define PanelHTotal   2200  
 #define PanelVTotal   1125
 
 #define PanelMaxHTotal     2400
 #define PanelMinHTotal     2120//2132 //20130517
 
 #define PanelMaxVTotal     1149 
 #define PanelMinVTotal    1091
 
 #define PanelDCLK           149//140
 #define PanelMaxDCLK          185//190
 #define PanelMinDCLK          126

// 080514
#define PanelVfreq          (600)//20130427
#define PanelMaxVfreq   (750+10) // 75Hz
#define PanelMinVfreq   (500-10) // 50Hz


#endif

