#ifndef _PanelTPM236H3HGJL02_  
    #define _PanelTPM236H3HGJL02_

#define PanelName       "TPM236H3-HGJL02"//20130414
#define PanelDither		8

#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xFF
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define NormalWhite    			0      		// for normal Black panel
#define PANEL_VCOM_ADJUST        0x00

#define LVDS_TIMode		       0xFF
#if MainBoardType==MainBoard_5863_M0A//petit 20130414
#define PANEL_SWAP_PN      0
#else
#define PANEL_SWAP_PN       0xFF
#endif

#define PanelDualPort		0xFF
#define PanelSwapPort		0xFF
#define PanelSwapOddML		0
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0

#define PanelDClkDelay          0
#define PanelInvDE              0
#define PanelInvDClk            0
#define PanelInvHSync           0
#define PanelInvVSync           0

#define PanelOnTiming1		20   // time between panel & data while turn on power
#define PanelOnTiming2		500// time between data & back light while turn on power
#define PanelOffTiming1		140 // time between back light & data while turn off power 
#define PanelOffTiming2		5  //20130507 time between data & panel while turn off power 
#define PanelOffOnDelay        550 // T7>= 500ms

#define PanelHSyncWidth		24
#define PanelHSyncBackPorch	36

#define PanelVSyncWidth		3
#define PanelVSyncBackPorch	13

 #define PanelHStart   (PanelHSyncWidth+PanelHSyncBackPorch)
 #define PanelVStart   (PanelVSyncWidth+PanelVSyncBackPorch)
 #define PanelWidth    1920
 #define PanelHeight   1080
 
 #define PanelHTotal   2200  
 #define PanelVTotal   1125
 
 #define PanelMaxHTotal     2300
 #define PanelMinHTotal     2100
 
 #define PanelMaxVTotal     1136 
 #define PanelMinVTotal    1115
 
 #define PanelDCLK           149
 #define PanelMaxDCLK          195
 #define PanelMinDCLK          118

// 080514
#define PanelMaxVfreq   (750+13) // 75Hz
#define PanelMinVfreq   (500-13) // 50Hz
#if MainBoardType==MainBoard_5276_M0A//20130414  petit
//LED Backlight Control
#define LED_STRING_NUM                  4


#define LED_CH_0    1
#define LED_CH_1    1
#define LED_CH_2    1
#define LED_CH_3    1
#define LED_CH_4    0
#define LED_CH_5    0
#define LED_CH_6    0
#define LED_CH_7    0

#define LED_SERIES                      (LED_CH_0+LED_CH_1+LED_CH_2+LED_CH_3+LED_CH_4+LED_CH_5+LED_CH_6+LED_CH_7)

#if (LED_SERIES == 4) || (LED_SERIES == 3)
#define MAX_CURRENT_RATE       60
#elif (LED_SERIES == 6)
#define MAX_CURRENT_RATE        30
#elif (LED_SERIES == 8)
#define MAX_CURRENT_RATE        14 //10
#endif

#define BOOST_CURRENT_LIMIT_LEVEL    BIT5//BIT4

#define PANEL_F_MODULATION    40 // 30~40KHz
#define PANEL_PERCENTAGE      2  // 0.5~3%

//==================================================================
//OVP
#define LED_OVP_TUNING_ENABLE       		0

#define PanelLightBarDefaultVoltage    		44
#define PanelLightBarMaximumVoltage    	48
#define OVP1_Ratio						110    // 1.1 
#define OVP1_ProtVoltage					OVP1_Ratio*PanelLightBarMaximumVoltage/100  // 1.1*45=	49.5V
#define OVP2_Ratio						125    // 1.25
#define OVP2_ProtVoltage					OVP2_Ratio*PanelLightBarDefaultVoltage/100  // 1.1*42=	52.5V
#define ResistorRatio						43//(R2+R1)/R1

//==================================================================
//LED Protect

#define SAR_V_10p00             0xB8    //X=10/5.5*100=182=0xB6
#define SAR_V_8p00              0xC5//20130509 from MST hunyi.cai //6.7/3.3/11*1023=189
#define SAR_V_5p00              0x5D       // U01  0x22E
#define SAR_V_4p50              0x53       // U01  0x1D1
#define SAR_V_1p55              0x30       //=> 2.5V   Skew Low Bond
#define SAR_V_0p55              0xA
#define SAR_V_0p54              0xA
#define SAR_V_0p10              0x5
#endif


#endif

