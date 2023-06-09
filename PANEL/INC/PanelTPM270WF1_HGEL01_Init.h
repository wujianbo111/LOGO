#define PanelName			"TPM270WF1"//peitt 20130424

#define _PanelColorDepth				bPanelColorDepth//6 Bit Panel->0		8 Bit Panel->bPanelColorDepth
#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xff
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        0x00

#define PanelDClkDelay			8
#define PanelInvDClk			0
#define PanelInvDE		0
#define PanelInvVSync             	0
#define PanelInvHSync   			0
#define PanelDither		8

#define _ChangeModePanelVddOff		bChangeModePanelVddOff

#define PanelDualPort   			0xFF

#define PanelSwapPort   			0xFF

#define _PanelOutputControl1	0x10
#define _PanelOutputControl2	((PanelDualPort &BIT0) | (PanelSwapPort &BIT1))//Scaler Bank 0x43 Setting
#define _PanelOnTiming1    		15 // time between panel & data while turn on power
#define _PanelOnTiming2    		500  // time between data & back light while turn on power
#define _PanelOffTiming1 			100 // time between back light & data while turn off power
#define _PanelOffTiming2 			15 // time between data & panel while turn off power

#define _PanelHSyncWidth   		36
#define _PanelHSyncBackPorch 	36
#define _PanelVSyncWidth   		3
#define _PanelVSyncBackPorch 	20
#define _PanelHStart   	(_PanelHSyncWidth+_PanelHSyncBackPorch)
#define _PanelVStart   	(_PanelVSyncWidth+_PanelVSyncBackPorch)

#define _PanelWidth      			1920
#define _PanelHeight     			1080
#define _PanelHTotal     			2200
#define _PanelVTotal     			1125
#define _PanelMaxHTotal      		2300
#define _PanelMinHTotal      		2100
#define _PanelMaxVTotal      		1251
#define _PanelMinVTotal      		1105
#define _PanelDCLK           		148
#define _PanelMaxDCLK        		196
#define _PanelMinDCLK            	110

#define _DefBurstModeFreq			250

#define _DefMinDutyValue			0x01
#define _DefMaxDutyValue			0xFF

#define _STEPL			0x80
#define _STEPH			0x00
#define _SPANL			0xCC
#define _SPANH			0x01

#define _PanelLVDSSwing1			0x15// 283mV //For old chip
#define _PanelLVDSSwing2			1// 0:242.37mV    1:339.33mV    2:387mV    3:169.67mV    //For TSUMXXN&TSUMXXQ type ic auto tune target voltage
#define _PanelLVDSSwing				(_PanelLVDSSwing1|_PanelLVDSSwing2<<6)

