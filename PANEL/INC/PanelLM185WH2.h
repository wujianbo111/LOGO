#ifndef __PANEL_LM185WH2__  
    #define __PANEL_LM185WH2__

#define PanelName               "PanelLM185WH2-TRC2"

#define PanelDither		8

#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xff
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        0xFF
#define MINILVDSTCON_DEVICE     0x50
#define MAX_VCOM_VALUE          0x7F
#define DEF_VCOM_VALUE          0x4F
#define MIN_VCOM_VALUE          0x00


#define LVDS_TIMode		       0xFF
#define PanelDualPort		0
#define PanelSwapPort		0xFF
#define PanelSwapOddML		0xFF
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0


#define PanelDClkDelay		8
#define PanelInvDClk			0
#define PanelInvDE			0
#define PanelInvHSync		0xFF
#define PanelInvVSync		0xFF

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent        1 // Dclk current
#define PanelDECurrent              1 // DE signal current
#define PanelOddDataCurrent         1 // Odd data current
#define PanelEvenDataCurrent    1 // Even data current

#define PanelOnTiming1          25 // 0//40 // time between panel & data while turn on power
#define PanelOnTiming2          550 // 300//300 //30 // time between data & back light while turn on power  //20050701

#define PanelOffTiming1             200 // 300 // time between back light & data while turn off power
#define PanelOffTiming2             10 // 20 // time between data & panel while turn off power
#define PanelOffOnDelay       1224

#define PanelHSyncWidth         35//53//51//42
#define PanelHSyncBackPorch     21//19//21//21//30

#define  PanelVSyncWidth        3//12
#define PanelVSyncBackPorch      29//28
#define PanelHStart   (PanelHSyncWidth+PanelHSyncBackPorch)
 #define PanelVStart   (PanelVSyncWidth+PanelVSyncBackPorch)
 #define PanelWidth    1366
 #define PanelHeight   768
#define PanelHTotal     1608 // 070410 // 2006/4/25 5:38PM by Emily 1840 // 2240//2256
#define PanelVTotal         798 // 1080//1200//1250

#define PanelMaxHTotal  2044 // 070410
#define PanelMinHTotal  (1430+2+16)//1446
#define PanelMaxVTotal  1108
#define PanelMinVTotal  776 // 070410 // 1065 //

#define PanelDCLK            	77
#define PanelMaxDCLK          90
#define PanelMinDCLK          62
// 080514  ?
#define PanelMaxVfreq   (750+13) // 75Hz
#define PanelMinVfreq   (500-13) // 50Hz

//=================================================================
// TCON	 setting for RSDS
    #define HV_OUTPUT_TYPE          HSRM_B
    //=================================================================
    #define TCON_Format1  0x1 // OFC1: control polarity & inversion
    #define ESP_AfterData   0 // Even Start Pulse after Data
    #define ESP_Offset  1 // Even start pulse position
    #define OSP_AfterData   0 // Odd Start Pulse after Data
    #define OSP_Offset  1 // Odd start pulse position
    // driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
    #define PanelOESPCurrent  2 // OSP/ESP drive current
    #define PanelOEGCurrent   2 // OPOL/EPOL/GPOL drive current
    #define PanelEINVCurrent  0 // EINV drive current
    #define PanelOINVCurrent  0 // OINV drive current
    #define OuputFormat   (BIT3|BIT5)//Enable Auto Toggle GPO0 & data invert
    // POL
    #define GPO0_VStart   0x000
    #define GPO0_VEnd   0x000
    #define GPO0_HStart   0x369//0x2B8
    #define GPO0_HEnd   0x3C8
    #define GPO0_Control    0x12 //0x02 
    //LP
    #define GPO1_VStart   0
    #define GPO1_VEnd   0
    #define GPO1_HStart   0x3ca//0x014
    #define GPO1_HEnd   0x3de//0x41b
    #define GPO1_Control  0x00
    // STV
    #define GPO2_VStart   0x000
    #define GPO2_VEnd   0x001
    #define GPO2_HStart   0x2b0 // 0x2a5 090223
    #define GPO2_HEnd     0xf0 // 0x2a5 090223
    #define GPO2_Control  0x00
    // CLKV
    #define GPO3_VStart   0
    #define GPO3_VEnd   0x00 
    #define GPO3_HStart   0x4c//0x1bd 090223
    #define GPO3_HEnd   0x3b6// 0x3bd 090223
    #define GPO3_Control  0x01
    // OE
    #define GPO4_VStart   0
    #define GPO4_VEnd   0
    #define GPO4_HStart   0x330// 0xc0 090319
    #define GPO4_HEnd   0x3d8// 0x32c 090319 // 0x0390 090223
    #define GPO4_Control  0x01 // 0x00 090319

    //GV_OFF 
    #define GPO5_VStart        0x0 
    #define GPO5_VEnd          0x0 
    #define GPO5_HStart        0x256 // 0x2c0 090223
    #define GPO5_HEnd          0x348 // 0x3c0 090223
    #define GPO5_Control       0x00//0x01 

    //PVS / FSYNC
    #define GPO9_VStart   0 //0x002
    #define GPO9_VEnd   0 //0x306
    #define GPO9_HStart   0 //0x00A
    #define GPO9_HEnd   0 //0x005
    #define GPO9_Control  0 //0x08
    //HSYNC
    #define GPOA_VStart   0
    #define GPOA_VEnd   0
    #define GPOA_HStart   0
    #define GPOA_HEnd   0
    #define GPOA_Control  0
#endif

