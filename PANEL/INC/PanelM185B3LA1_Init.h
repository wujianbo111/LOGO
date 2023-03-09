#define PanelTpye_1366
    #define PanelName               _M,_1,_8,_5,_B,_3,_L,_0,_1

#define _PanelColorDepth			0
#define PanelTTL			0
#define PanelTCON		0
#define PanelLVDS		0xff
#define PanelRSDS		0
#define PanelminiLVDS      0 
#define PANEL_VCOM_ADJUST        0x00


#define _ChangeModePanelVddOff	bChangeModePanelVddOff

#define PanelDualPort   			0
#if (MainBoardType==MainBoard_715G2904_B|| MainBoardType==MainBoard_712G3244_2)
#define PanelSwapPort   			0xFF
#else
#define PanelSwapPort   			0
#endif

#define _PanelOutputControl1	0x10
#define _PanelOutputControl2			(DOT_B | (PanelDualPort &DPO_B) | (PanelSwapPort &DPX_B))//Scaler Bank 0x43 Setting
//#define _PanelOSContol			0x83
//#define _PanelODRriving		0x55


#define _PanelOnTiming1    		25 // 0//40 // time between panel & data while turn on power
#define _PanelOnTiming2    		500 // 300//300 //30 // time between data & back light while turn on power  //20050701
#define _PanelOffTiming1 			100 // 300 // time between back light & data while turn off power
#define _PanelOffTiming2 			25 // 20 // time between data & panel while turn off power
#define PanelOffOnDelay   1000

#define _PanelHSyncWidth   		15//32
#define _PanelHSyncBackPorch 	11 //152//24
#define _PanelVSyncWidth   		3
#define _PanelVSyncBackPorch 		29 // 46
#define _PanelHStart   	(_PanelHSyncWidth+_PanelHSyncBackPorch)
#define _PanelVStart   	(_PanelVSyncWidth+_PanelVSyncBackPorch)


#define _PanelWidth    	1366
#define _PanelHeight   	768
#define _PanelHTotal   		1560 // 070410 // 2006/4/25 5:38PM by Emily 1840 // 2240//2256
#define _PanelVTotal   		806 // 1080//1200//1250
#define _PanelMaxHTotal 	1570//1936 // 070410
#define _PanelMinHTotal     1500//1446//1900//1960 // 070410 //1790 // 1820 // 1860// 1800 // 1880
#define _PanelMaxVTotal   	815//888
#define _PanelMinVTotal    	800//778 // 070410 // 1065 //
#define _PanelDCLK           	76//75  // 070410 modified
#define _PanelMaxDCLK          96//90 // 070410 modified
#define _PanelMinDCLK          60//50 // 070410 modified


#define _DefBurstModeFreq		250
#define _DefMinDutyValue			0x46
#define _DefMaxDutyValue		0xFF


#define _STEPL			0x1B
#define _STEPH			0x00
#define _SPANL			0xCC
#define _SPANH			0x01

#define _PanelLVDSSwing1			0x15// 283mV //For old chip
/*
BK1_2D        BK0_43[6]=0      BK0_43[6]=1 
0x00                133mV                67mV  
0x01                167mV                83mV  
0x02                200mV                100mV  
0x03                233mV                117mV  
0x04                267mV                133mV   
0x05                300mV                150mV  
0x06                333mV                167mV  
0x07                367mV                183mV  
0x08                400mV                200mV  
0x09                433mV                217mV  
0x0A                467mV                233mV  
0x0B                500mV                250mV  
0x0C                533mV                267mV  
0x0D                567mV                283mV  
0x0E                600mV                300mV  
0x0F                633mV                317mV  
0x10                400mV                200mV 
0x11                433mV                217mV 
0x12                467mV                233mV 
0x13                500mV                250mV 
0x14                533mV                267mV
0x15                567mV                283mV 
0x16                600mV                300mV 
0x17                633mV                317mV 
0x18                667mV                333mV 
0x19                700mV                350mV 
0x1A                733mV                367mV 
0x1B                767mV                383mV 
0x1C                800mV                400mV 
0x1D                833mV                417mV 
0x1E                867mV                433mV 
0x1F                900mV                450mV 
*/
#define _PanelLVDSSwing2			1// 0:242.37mV    1:339.33mV    2:387mV    3:169.67mV    //For TSUMXXN&TSUMXXQ type ic auto tune target voltage
#define _PanelLVDSSwing				(_PanelLVDSSwing1|_PanelLVDSSwing2<<6)

