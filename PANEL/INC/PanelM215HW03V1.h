#ifndef __PANELM215HW03V1__  
#define __PANELM215HW03V1__

#define PanelName       	"M215HW03V1" 
#define PanelDither			8	

#define PanelTTL			0
#define PanelTCON			0
#define PanelLVDS			0xFF
#define PanelRSDS			0
#define PanelminiLVDS      	0 
#define PANEL_VCOM_ADJUST 	0x00

#define LVDS_TIMode		  	0xFF
#define PANEL_SWAP_PN       0x00

#define PanelDualPort		0xFF
#define PanelSwapPort		0x00
#define PanelSwapOddML		0
#define PanelSwapEvenML		0
#define PanelSwapOddRB		0
#define PanelSwapEvenRB		0
#define PanelSwapMLSB		0

#define PanelDClkDelay		8
#define PanelInvDClk		0
#define PanelInvDE			0
#define PanelInvHSync		0
#define PanelInvVSync		0

// driving current setting 0==>4mA, 1==>6mA, 2==>8mA ,3==>12mA
#define PanelDCLKCurrent		1 // Dclk current
#define PanelDECurrent			1 // DE signal current
#define PanelOddDataCurrent		1 // Odd data current
#define PanelEvenDataCurrent	1 // Even data current

#define PanelOnTiming1			25  // 20 //090302// T2 <= 50ms // time between panel & data while turn on power // 130530 JUN Modify
#define PanelOnTiming2			550// T5 >= 450ms // time between data & back light while turn on power
#define PanelOffTiming1			250// t6 >= 90ms // time between back light & data while turn off power 
#define PanelOffTiming2			5  // 20// T3 <= 50ms // time between data & panel while turn off power 

#define PanelHSyncWidth			14//46
#define PanelHSyncBackPorch		31

#define PanelVSyncWidth			3
#define PanelVSyncBackPorch		13

#define PanelHStart   		(PanelHSyncWidth+PanelHSyncBackPorch)
#define PanelVStart   		(PanelVSyncWidth+PanelVSyncBackPorch)
#define PanelWidth    		1920
#define PanelHeight   		1080

#define PanelHTotal   		2120 
#define PanelVTotal   		1120

#define PanelMaxHTotal     	4094
#define PanelMinHTotal     	2080

#define PanelMaxVTotal     	2047 
#define PanelMinVTotal    	1088

#define PanelDCLK       	150
#define PanelMaxDCLK    	188
#define PanelMinDCLK     	80

#define PanelMaxVfreq   	(750+13)
#define PanelMinVfreq   	(500-13)

#endif

