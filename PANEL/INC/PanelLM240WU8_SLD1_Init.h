#define PanelName				"LM240WU8SLD1"//_M,_2,_3,_6,_H,_3,_L,_A,_3//PanelM236H3LA3 // 130530 JUN Modify

#define PanelTTL    			0
#define PanelTCON   			0
#define PanelLVDS				0xff
#define PanelRSDS				0
#define PanelminiLVDS      		0 
#define PANEL_VCOM_ADJUST     	0x00


#define _PanelColorDepth		bPanelColorDepth
#define _ChangeModePanelVddOff	bChangeModePanelVddOff


#define PanelDualPort   		0xff
#define PanelSwapPort   		0xff
#if ModelName==AOC_E2271FW//petit 20121210
#define _PanelOutputControl1	0x90
#else
#define _PanelOutputControl1	0x10
#endif
#define _PanelOutputControl2	((PanelDualPort &BIT0) | (PanelSwapPort &BIT1))//Scaler Bank 0x43 Setting
//#define _PanelOSContol			0x80
//#define _PanelODRriving			0x55

#define PanelDither           	8

#define PanelDClkDelay			8
#define PanelInvDClk			0
#define PanelInvDE				0
#define PanelInvHSync			0
#define PanelInvVSync			0
//130708 Petit
#define _PanelOnTiming1    		25
#define _PanelOnTiming2    		500
#define _PanelOffTiming1 		140
#define _PanelOffTiming2 		5
#define PanelOffOnDelay     1400 // T4 >= 500ms

#define _PanelHSyncWidth   		14
#define _PanelHSyncBackPorch 	31
#define _PanelVSyncWidth   		3
#define _PanelVSyncBackPorch 	13
#define _PanelHStart   			(_PanelHSyncWidth+_PanelHSyncBackPorch)
#define _PanelVStart   			(_PanelVSyncWidth+_PanelVSyncBackPorch)


#define _PanelWidth				1920
#define _PanelHeight			1200
#define _PanelHTotal			2200 
#define _PanelVTotal			1125 
#define _PanelMaxHTotal		 	2300
#define _PanelMinHTotal			2112
#define _PanelMaxVTotal			1136
#define _PanelMinVTotal			1115


#define _PanelDCLK				149  
#define _PanelMaxDCLK			195 
#define _PanelMinDCLK			118


#define _DefBurstModeFreq		250
#define _DefMinDutyValue		0x30
#define _DefMaxDutyValue		0xFF


#define _STEPL					0x69
#define _STEPH					0x00
#define _SPANL					0xF4
#define _SPANH					0x01

#define _PanelLVDSSwing1		0x15// 283mV //For old chip


#define _PanelLVDSSwing2			1// 0:242.37mV    1:339.33mV    2:387mV    3:169.67mV    //For TSUMXXN&TSUMXXQ type ic auto tune target voltage
#define _PanelLVDSSwing				(_PanelLVDSSwing1|_PanelLVDSSwing2<<6)

#define PanelMaxVfreq   620 // 75Hz
#define PanelMinVfreq   495 // 50Hz

