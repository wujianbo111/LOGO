#ifndef __PanelMV270FHB_N20__
#define __PanelMV270FHB_N20__
#define PanelName           "PanelMV270QHB"

#define PanelDither		8

#define PanelTTL            0 //
#define PanelTCON           0
#define PanelLVDS           1 //  0

#define PANEL_SWAP_AB_PORT  0 //0: non-swap, 0xFF: AB swap
#define PANEL_SWAP_CD_PORT  0//0: non-swap ,0xFF: CD swap

#define LVDS_CH_A_SWAP            LVDS_CH_C//  LVDS_CH_A
#define LVDS_CH_B_SWAP      	     LVDS_CH_D//110427
#define LVDS_CH_C_SWAP      	     LVDS_CH_A//	LVDS_CH_B///0//110511_03  LVDS_CH_C  //110427
#define LVDS_CH_D_SWAP            LVDS_CH_B//	LVDS_CH_D

#define PAIR_SWAP_B         		0 

#define ShortLineCheck      		0

#define LVDS_TI_BitModeSel  		LVDS_TI_10BIT

#define PANEL_QUAD_PORT       		1//FUNC_ENABLE
//    panel output type select
#define PANEL_OUTPUT_FMT_3D_LR      0xFF
#define PANEL_OUTPUT_FMT_3D_CB      0

#define LVDS_TIMode         0xFF
#define PanelDualPort       0
#define PanelSwapPort       0

#define PanelSwapOddML      0
#define PanelSwapEvenML     0
#define PanelSwapOddRB      0//xFF
#define PanelSwapEvenRB     0//xFF
#define PanelSwapMLSB       0
#define PanelSwapPlusMinus      0

#define PANEL_SWAP_PN       0

#define PanelDClkDelay    0
#define PanelInvDE      0
#define PanelInvDClk    0
#define PanelInvHSync   0
#define PanelInvVSync   0
// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent  1 // Dclk current
#define PanelDECurrent    1 // DE signal current
#define PanelOddDataCurrent 1 // Odd data current
#define PanelEvenDataCurrent  1 // Even data current

#define PanelOnTiming1      25//60//20 // time between panel & data while turn on power
#define PanelOnTiming2      550//350//220 // time between data & back light while turn on power
#define PanelOffTiming1     300//350//220 // 2005/5/3// time between back light & data while turn off power
#define PanelOffTiming2     25//20//25 // 2005/5/3//10 // time between data & panel while turn off power

#define PanelHSyncWidth     32
#define PanelHSyncBackPorch 48

#define PanelVSyncWidth         4
#define PanelVSyncBackPorch 8

#define PanelHStart   (PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart   (PanelVSyncWidth+PanelVSyncBackPorch)


#define PanelWidth      2560
#define PanelHeight     1440

#define PanelHTotal     2720
#define PanelVTotal     1481

#define PanelMaxHTotal      2728//2720
#define PanelMinHTotal       2720//2720

#define PanelMaxVTotal      1483//1481
#define PanelMinVTotal       1479//1481
 
 #define PanelDCLK       		240
 #define PanelMaxDCLK     	300
 #define PanelMinDCLK     		196

// TCON  setting for LVDS
//PVS / FSYNC
#define GPO9_VStart             0x7
#define GPO9_VEnd               0x705
#define GPO9_HStart             0x0
#define GPO9_HEnd               0x0
#define GPO9_Control            0x7

//HSYNC
#define GPOA_VStart             0x006
#define GPOA_VEnd               0x408
#define GPOA_HStart             0
#define GPOA_HEnd               0
#define GPOA_Control            0x4



#endif

