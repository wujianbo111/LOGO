#include "types.h"
#include "board.h"
#include "global.h"
#include "keypaddef.h"
#include "menudef.h"

#if PropFontNewData
#include "menuTextProp_new.h"
#else
#include "menuTextProp.h"
#endif

#define Icon2Color_AddrShift   1
#define Icon4Color_AddrShift   2
#define Icon8Color_AddrShift   3

#define BrM(x)	(_2ColorBrightnessIconStart + x * Icon2Color_AddrShift)
 BYTE code strBrightnessIcon[4][7]=
{
	{	 BrM(0x00), BrM(0x01), BrM(0x02), BrM(0x03), BrM(0x04), BrM(0x00), 
	 0},
	{	 BrM(0x05), BrM(0x06), BrM(0x07), BrM(0x08), BrM(0x09), BrM(0x00), 
	 0},
	{	 BrM(0x0A), BrM(0x0B), BrM(0x0C), BrM(0x0D), BrM(0x0E), BrM(0x00), 
	 0},
	{	 BrM(0x00), BrM(0x0F), BrM(0x10), BrM(0x11), BrM(0x12), BrM(0x00), 
	 0}
};

#define ImM(x)	(_2ColorImageIconStart + x * Icon2Color_AddrShift)
 BYTE code strImageIcon[4][7]=
{
	{	 ImM(0x00), ImM(0x01), ImM(0x01), ImM(0x01), ImM(0x01), ImM(0x02), 
	 0},
	{	 ImM(0x03), ImM(0x04), ImM(0x04), ImM(0x04), ImM(0x05), ImM(0x06), 
	 0},
	{	 ImM(0x03), ImM(0x04), ImM(0x04), ImM(0x07), ImM(0x08), ImM(0x09), 
	 0},
	{	 ImM(0x0A), ImM(0x0B), ImM(0x0B), ImM(0x0B), ImM(0x0C), ImM(0x04), 
	 0}
};

#define CoM(x)	(_2ColorColorIconStart + x * Icon2Color_AddrShift)
 BYTE code strColorTempIcon[4][7]=
{
	{	 CoM(0x00), CoM(0x01), CoM(0x02), CoM(0x03), CoM(0x04), CoM(0x00), 
	 0},
	{	 CoM(0x05), CoM(0x06), CoM(0x07), CoM(0x08), CoM(0x09), CoM(0x0A), 
	 0},
	{	 CoM(0x0B), CoM(0x0C), CoM(0x0D), CoM(0x0E), CoM(0x0F), CoM(0x10), 
	 0},
	{	 CoM(0x00), CoM(0x11), CoM(0x12), CoM(0x13), CoM(0x14), CoM(0x00), 
	 0}
};

#define OSM(x)	(_2ColorOSDIconStart + x * Icon2Color_AddrShift)
 BYTE code strOSDIcon[4][7]=
{
	{	 OSM(0x00), OSM(0x01), OSM(0x02), OSM(0x03), OSM(0x04), OSM(0x05), 
	 0},
	{	 OSM(0x06), OSM(0x07), OSM(0x08), OSM(0x09), OSM(0x0A), OSM(0x0B), 
	 0},
	{	 OSM(0x0C), OSM(0x0D), OSM(0x0E), OSM(0x0F), OSM(0x10), OSM(0x11), 
	 0},
	{	 OSM(0x12), OSM(0x13), OSM(0x14), OSM(0x15), OSM(0x16), OSM(0x05), 
	 0}
};

#define ReM(x)	(_2ColorResetIconStart + x * Icon2Color_AddrShift)
 BYTE code strResetIcon[4][7]=
{
	{	 ReM(0x00), ReM(0x01), ReM(0x02), ReM(0x03), ReM(0x04), ReM(0x00), 
	 0},
	{	 ReM(0x05), ReM(0x06), ReM(0x07), ReM(0x08), ReM(0x09), ReM(0x0A), 
	 0},
	{	 ReM(0x0B), ReM(0x0C), ReM(0x0D), ReM(0x0E), ReM(0x0F), ReM(0x10), 
	 0},
	{	 ReM(0x00), ReM(0x11), ReM(0x12), ReM(0x13), ReM(0x14), ReM(0x00), 
	 0}
};

#define ExM(x)	(_2ColorExtraIconStart + x * Icon2Color_AddrShift)
 BYTE code strMiscIcon[4][7]=
{
	{	 ExM(0x00), ExM(0x01), ExM(0x02), ExM(0x03), ExM(0x04), ExM(0x00), 
	 0},
	{	 ExM(0x05), ExM(0x06), ExM(0x07), ExM(0x08), ExM(0x09), ExM(0x0A), 
	 0},
	{	 ExM(0x0B), ExM(0x0C), ExM(0x0D), ExM(0x0E), ExM(0x0F), ExM(0x10), 
	 0},
	{	 ExM(0x11), ExM(0x12), ExM(0x13), ExM(0x14), ExM(0x15), ExM(0x00), 
	 0}
};

#define StM(x)	(_2ColorHotIconStart + x * Icon2Color_AddrShift)
 BYTE code strStandardIcon[4][7]=
{
	{	 StM(0x00), StM(0x01), StM(0x01), StM(0x01), StM(0x01), StM(0x02), 
	 0},
	{	 StM(0x03), StM(0x04), StM(0x04), StM(0x04), StM(0x04), StM(0x05), 
	 0},
	{	 StM(0x03), StM(0x04), StM(0x06), StM(0x07), StM(0x08), StM(0x09), 
	 0},
	{	 StM(0x0A), StM(0x0B), StM(0x0C), StM(0x0D), StM(0x0E), StM(0x0F), 
	 0}
};

#define ieM(x)	(_2ColorHotIconStart + x * Icon2Color_AddrShift)
 BYTE code strIEIcon[4][7]=
{
	{	 ieM(0x00), ieM(0x01), ieM(0x02), ieM(0x03), ieM(0x04), ieM(0x05), 
	 0},
	{	 ieM(0x00), ieM(0x06), ieM(0x07), ieM(0x08), ieM(0x09), ieM(0x00), 
	 0},
	{	 ieM(0x0A), ieM(0x0B), ieM(0x0C), ieM(0x0D), ieM(0x0E), ieM(0x00), 
	 0},
	{	 ieM(0x0F), ieM(0x10), ieM(0x11), ieM(0x12), ieM(0x00), ieM(0x00), 
	 0}
};

#define GaM(x)	(_2ColorHotIconStart + x * Icon2Color_AddrShift)
 BYTE code strGameIcon[4][7]=
{
	{	 GaM(0x00), GaM(0x00), GaM(0x00), GaM(0x00), GaM(0x00), GaM(0x00), 
	 0},
	{	 GaM(0x01), GaM(0x02), GaM(0x03), GaM(0x04), GaM(0x05), GaM(0x06), 
	 0},
	{	 GaM(0x07), GaM(0x08), GaM(0x09), GaM(0x0A), GaM(0x0B), GaM(0x0C), 
	 0},
	{	 GaM(0x0D), GaM(0x0E), GaM(0x00), GaM(0x00), GaM(0x0F), GaM(0x10), 
	 0}
};

#define MoM(x)	(_2ColorHotIconStart + x * Icon2Color_AddrShift)
 BYTE code strMovieIcon[4][7]=
{
	{	 MoM(0x00), MoM(0x01), MoM(0x01), MoM(0x01), MoM(0x01), MoM(0x01), 
	 0},
	{	 MoM(0x02), MoM(0x03), MoM(0x04), MoM(0x05), MoM(0x06), MoM(0x07), 
	 0},
	{	 MoM(0x08), MoM(0x09), MoM(0x0A), MoM(0x0B), MoM(0x0C), MoM(0x0D), 
	 0},
	{	 MoM(0x0E), MoM(0x0F), MoM(0x0F), MoM(0x0F), MoM(0x0F), MoM(0x0F), 
	 0}
};

BYTE* BrightnessIcon(void)
{
	return strBrightnessIcon;
}
BYTE* ImageIcon(void)
{
	return strImageIcon;
}
BYTE* ColorTempIcon(void)
{
	return strColorTempIcon;
}
BYTE* OSDIcon(void)
{
	return strOSDIcon;
}
BYTE* ResetIcon(void)
{
	return strResetIcon;
}
BYTE* MiscIcon(void)
{
	return strMiscIcon;
}
BYTE* StandardIcon(void)
{
	return strStandardIcon;
}
BYTE* IEIcon(void)
{
	return strIEIcon;
}
BYTE* GameIcon(void)
{
	return strGameIcon;
}
BYTE* MovieIcon(void)
{
	return strMovieIcon;
}


//----Eson Start----------------------------------
//========= TEXT =========
BYTE* MainMenu_BrightText(void)
{
	return strLuminanceM7[UserPrefLanguage];
}
BYTE* MainMenu_ImageText(void)
{
	return strImageSetupM7[UserPrefLanguage];
}
BYTE* MainMenu_ColorText(void)
{
	return strColorSetupM7[UserPrefLanguage];
}

BYTE* MainMenu_OSDText(void)
{
	return strOSDSetupM7[UserPrefLanguage];
}

BYTE* MainMenu_ResetText(void)
{
	return strResetM7[UserPrefLanguage];
}
BYTE* MainMenu_MiscText(void)
{
	return strExtraM7[UserPrefLanguage];
}
BYTE *Main_FText(void)
{
	return strFactory;
}

//-----------------------------------------------
BYTE *ContrastText( void )
{
	return strContrastM1[UserPrefLanguage];
}
BYTE *BrightnessText( void )
{
	return strBrightnessM1[UserPrefLanguage];
}
BYTE *ECOModeText( void )
{
	return strEcoModeM1[UserPrefLanguage];
}
BYTE *ECOModeValue( void )
{
	if( UserPrefECOMode == ECO_Standard )
	{
		return strStandardM1[UserPrefLanguage];
	}
	else if( UserPrefECOMode == ECO_Internet )
	{
		return strInternetM1[UserPrefLanguage];
	}
	else if( UserPrefECOMode == ECO_Game )
	{
		return strGameM1[UserPrefLanguage];
	}
	#if ENABLE_FPS_RTS
	else if( UserPrefECOMode == ECO_FPS )
	{
		return strFPSM1[UserPrefLanguage];
	}
	else if( UserPrefECOMode == ECO_RTS )
	{
		return strRTSM1[UserPrefLanguage];
	}
	#endif
	else if( UserPrefECOMode == ECO_Movie)
	{
		return strMovieM1[UserPrefLanguage];
	}
	#if	PresetMode_Enable
	else if( UserPrefECOMode == ECO_Preset)
	{
		return strPresetModeM1[UserPrefLanguage];
	}
	#endif
	else
	{
		return strStandardM1[UserPrefLanguage];
	}
}
#if Enable_Gamma
BYTE *GammaText( void )
{
	return strGammaM1[UserPrefLanguage];
}
BYTE *GammaModeValue( void )
{
	BYTE u8gammamode = UserPrefGamaMode;
	if( u8gammamode == GAMA2 )
	{
		return strGamma2M1[UserPrefLanguage];
	}
	else if( u8gammamode == GAMA3 )
	{
		return strGamma3M1[UserPrefLanguage];
	}
	else
	{
		return strGamma1M1[UserPrefLanguage];
	}
}
#endif
BYTE *DCRText( void )
{
	#if PresetMode_Enable && Enable_Gamma
	if(UserPrefECOMode == ECO_Preset)
		return strGammaM1[UserPrefLanguage];
	else
	#endif
		return strDCRM1[UserPrefLanguage];
}
BYTE *DcrValueText( void )
{
	#if PresetMode_Enable && Enable_Gamma
	if(UserPrefECOMode == ECO_Preset)
	{
		if( UserPrefGamaMode == GAMA2 )
		{
			return strGamma2M1[UserPrefLanguage];
		}
		else if( UserPrefGamaMode == GAMA3 )
		{
			return strGamma3M1[UserPrefLanguage];
		}
		else
		{
			return strGamma1M1[UserPrefLanguage];
		}
	}
	else
	#endif
	{
		if( UserPrefDcrMode )
		{
			return strOnM1[UserPrefLanguage];
		}
		else
		{
			return strOffM1[UserPrefLanguage];
		}
	}
}

#if (ENABLE_RTE )
#if PresetMode_Enable
BYTE *OverdriveText( void )
{
	return strOverdriveM6[UserPrefLanguage];
}
BYTE *OverdriveValueText( void )
{
	#if  1
	#if (ENABLE_DUAL_LINK)	//130402 Modify
	if(Disabe_Overdrive_Item)
	{
		return strOffM6[UserPrefLanguage];
	}
	else
	#endif
	{
		if(UserPrefRTEMode == RTE1)
		{
			return strOnM6[UserPrefLanguage];
		}
		else
		{
			return strOffM6[UserPrefLanguage];
		}
	}
	#endif
}
#else
BYTE *OverdriveText( void )
{
	return strOverdriveM1[UserPrefLanguage];
}
BYTE *OverdriveValueText( void )
{
	#if  1
	#if (ENABLE_DUAL_LINK)	//130402 Modify
	if(Disabe_Overdrive_Item)
	{
		return strOffM1[UserPrefLanguage];
	}
	else
	#endif
	{
		if(UserPrefRTEMode == RTE1)
		{
			return strOnM1[UserPrefLanguage];
		}
		else
		{
			return strOffM1[UserPrefLanguage];
		}
	}
	#endif
}
#endif
#endif
//-----------------------------------------------

//-----------------------------------------------------------
BYTE *HPositionText( void )
{
	return strHPositionM2[UserPrefLanguage];
}
BYTE *VPositionText( void )
{
	return strVPositionM2[UserPrefLanguage];
}
BYTE *ClockText( void )
{
	return strClockM2[UserPrefLanguage];
}
BYTE *FocusText( void )
{
	return strPhaseM2[UserPrefLanguage];
}
#if Enable_Func_AdjExpansion
BYTE *ExpansionText( void )
{
	return strImageRatioM2[UserPrefLanguage];
}
BYTE *ExpansionValueText( void )
{
	if( UserprefExpansionMode == Expansion_Aspect && ExpansionFlag )
	{
		return strRatio43M2[UserPrefLanguage];
	}
	#if ENABLE_OVER_SCAN
	else if( UserprefExpansionMode == Expansion_11 )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio11M63[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_17Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio43_17M64[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_19Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio43_19M65[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_W19Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio1610_19M66[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_W21_5Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio169_215M67[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_W22Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio1610_22M68[UserPrefLanguage];
	}
	else if( UserprefExpansionMode == PIC_FORMAT_W23Picth )//&& !INPUT_IS_NATIVE_TIMING() )	//121228 Modify
	{
		return strRatio169_23M69[UserPrefLanguage];
	}
	#endif
	else
	{
		return strWideM2[UserPrefLanguage];
	}
}

#endif
//-----------------------------------------------------------------------
//-----------------------------------------------------------
BYTE *ColorTempText( void )
{
	return strColorTempM3[UserPrefLanguage];
}
BYTE *ColorTempValueText( void )
{
	#if PresetMode_Enable
	if(UserPrefECOMode == ECO_Preset)
	{
		if( UserPrefColorTemp_Preset == CTEMP_Warm1)
		{
			return strWarmM3[UserPrefLanguage];
		}
		else if( UserPrefColorTemp_Preset == CTEMP_Normal)
		{
			return strNormalM3[UserPrefLanguage];
		}
		else if( UserPrefColorTemp_Preset == CTEMP_Cool1)
		{
			return strCoolM3[UserPrefLanguage];
		}
		else if( UserPrefColorTemp_Preset == CTEMP_USER )
		{
			return strUserM3[UserPrefLanguage];
		}
		else
		{
			return strWarmM3[UserPrefLanguage];
		}
	}
	else
	#endif
	{
		if( UserPrefColorTemp == CTEMP_Warm1)
		{
			return strWarmM3[UserPrefLanguage];
		}
		#if CT_7500K_ENABLE
		else if( UserPrefColorTemp == CTEMP_Normal)
		{
			return strNormalM3[UserPrefLanguage];
		}
		#endif
		else if( UserPrefColorTemp == CTEMP_Cool1)
		{
			return strCoolM3[UserPrefLanguage];
		}
		#if CT_sRGB_ENABLE
		else if( UserPrefColorTemp == CTEMP_SRGB )
		{
			return strsRGBM3[UserPrefLanguage];
		}
		#endif
		else if( UserPrefColorTemp == CTEMP_USER )
		{
			return strUserM3[UserPrefLanguage];
		}
		#if LowBlueLightType ==  LowBlueLight_SharpFunc
		else if( UserPrefColorTemp == CTEMP_LowBlue )
		{
			return strLowBlueLightM3[UserPrefLanguage];
		}
		#endif
		else
		{
			return strWarmM3[UserPrefLanguage];
		}
	}
}
BYTE *UserColorRText( void )
{
	return strRedM3[UserPrefLanguage];
}
BYTE *UserColorGText( void )
{
	return strGreenM3[UserPrefLanguage];
}
BYTE *UserColorBText( void )
{
	return strBlueM3[UserPrefLanguage];
}
#if ( LowBlueLightType==LowBlueLight_ColorTemp)
BYTE *LowBlueLightText( void )
{
	return strLowBlueLightM3[UserPrefLanguage];
}

BYTE *LowBlueLightStatusText( void )
{
	if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Weak)
	{
		return strWeakM3[UserPrefLanguage];
	}
	else if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Middle)
	{
		return strMediumM3[UserPrefLanguage];
	}
	else if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Strong)
	{
		return strStrongM3[UserPrefLanguage];
	}
	else
	{
		return strOffM3[UserPrefLanguage];
	}
}
#elif ( LowBlueLightType==LowBlueLight_Misc_Guage)
BYTE *LowBlueLightText( void )
{
	return strLowBlueLightM6[UserPrefLanguage];
}
#elif ( LowBlueLightType==LowBlueLight_SharpFunc)
BYTE *LowBlueLightText( void )
{
	return strLowBlueLightM3[UserPrefLanguage];
}

BYTE *LowBlueLightStatusText( void )
{
	if(gTempLowBlueMode == LOW_BLUE_LIGHT_Weak)
	{
		return strWeakM3[UserPrefLanguage];
	}
	else if(gTempLowBlueMode == LOW_BLUE_LIGHT_Middle)
	{
		return strMediumM3[UserPrefLanguage];
	}
	else if(gTempLowBlueMode == LOW_BLUE_LIGHT_Stronger)
	{
		return strStrongerM3[UserPrefLanguage];
	}
	else if(gTempLowBlueMode == LOW_BLUE_LIGHT_Strong)
	{
		return strStrongM3[UserPrefLanguage];
	}
	else
	{
		return strOffM3[UserPrefLanguage];
	}
}
#elif ( LowBlueLightType==LowBlueLight_Misc_Group)
BYTE *LowBlueLightText( void )
{
	return strLowBlueLightM6[UserPrefLanguage];
}

BYTE *LowBlueLightStatusText( void )
{
	if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Weak)
	{
		return strWeakM6[UserPrefLanguage];
	}
	else if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Middle)
	{
		return strMediumM6[UserPrefLanguage];
	}
	else if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Strong)
	{
		return strStrongestM6[UserPrefLanguage];
	}
	else if(UserprefLowBlueLightMode == LOW_BLUE_LIGHT_Stronger)
	{
		return strStrongM6[UserPrefLanguage];
	}
	else
	{
		return strOffM6[UserPrefLanguage];
	}
}
#endif

//-----------------------------------------------------------
#if OsdAdjustHVPos_Enable
BYTE *OsdHPositionText( void )
{
	return strHPositionM4[UserPrefLanguage];
}
BYTE *OsdVPositionText( void )
{
	return strVPositionM4[UserPrefLanguage];
}
#endif
BYTE *OsdTimeOutText( void )
{
	return strTimeoutM4[UserPrefLanguage];
}
BYTE *TransparenceText( void )
{
	return strTransparenceM4[UserPrefLanguage];
}
BYTE *LanguageText( void )
{
	return strLanguageM4[UserPrefLanguage];
}
#if AdjustLanguageFunction
BYTE *LanguageStatusText( void )
{
	return strLanguageStatusM8[UserPrefLanguage];
}
#else

BYTE *strEnglishText( void )
{
	return strEnglishM8[0];
}
BYTE *strFranceText( void )
{
	return strFranshM8[0];
}
BYTE *strEspanolText( void )
{
	return strEspanolM8[0];
}
BYTE *strPortuguesText( void )
{
	return strPortuguesM8[0];
}
BYTE *strDeutschText( void )
{
	return strDeutschM8[0];
}

BYTE *strItalianoText( void )
{
	return strItalianoM8[0];
}
BYTE *strNederlandsText( void )
{
	return strNederlandsM8[0];
}
BYTE * strSvenskaText( void )
{
	return strSvenskaM8[0];
}
BYTE *strSuomiText( void )
{
	return strSuomiM8[0];
}
BYTE *strPolskiText( void )
{
	return strPolskiM8[0];
}

BYTE *strCestinaText( void )
{
	return strCestinaM8[0];
}
BYTE *strPycText( void )
{
	return strPycM8[0];
}
BYTE *strKoreanText( void )
{
	return strKoreanM8[0];
}
BYTE *strTChineseText( void )
{
	return strTChineseM8[0];
}
BYTE *strSChineseText( void )
{
	return strSChineseM8[0];
}
BYTE *strJapanText( void )
{
	return strJapanM8[0];
}

#endif

BYTE *ResetText( void )
{
	return strResetM5[UserPrefLanguage];
}

#if AboutDSUBFunc_Enable
BYTE *SubAutoColorText(void)
{
	return strAutoColorM5[UserPrefLanguage];
}
BYTE *AutoConfigText( void )
{
	return strAutoConfigM5[UserPrefLanguage];
}
#endif
#ifdef OffPower

BYTE *OffTimerText( void )
{
	return strOffTimerM5[UserPrefLanguage];
}
BYTE *NullText( void )
{
	return 0;
}
#endif

//-------------------------------------------------------------
#if (INPUT_TYPE!=INPUT_1A) && (INPUT_TYPE!=INPUT_1H)
BYTE *InputSelectText( void )
{
	return strInputSelectM6[UserPrefLanguage];
}
#endif
#if !HKC_INPUTSELECT_MODE
#if (INPUT_TYPE!=INPUT_1A) && (INPUT_TYPE!=INPUT_1H)

BYTE *InputSourceText( void )
{
	#if ENABLE_AutoDetech
	if (UserPrefInputSelectType == INPUT_PRIORITY_AUTO)//(EnableAutoswitchFlag)
	{
		return strAutoM6[UserPrefLanguage];
	}
	else
	#endif
	{
		#if INPUT_TYPE == INPUT_1A2H || INPUT_TYPE == INPUT_2H //110424 Modify
		if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strHDMI1M6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMI2M6[UserPrefLanguage];	//120511 Modify
		}
		#elif INPUT_TYPE == INPUT_1A1H || INPUT_TYPE == INPUT_1H
		if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMIM6[UserPrefLanguage];	//120511 Modify
		}
		#elif INPUT_TYPE == INPUT_1A1D1DP	//130924 xiandi
		if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strDVIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];
		}
		#elif INPUT_TYPE == INPUT_1A1DP	//20151126 Alpha
		if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];
		}
		#elif (INPUT_TYPE == INPUT_1A2H1DP)
		if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMI1M6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_HDMI2ND)
		{
			return strHDMI2M6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];	// 20130109
		}
		#elif (INPUT_TYPE == INPUT_1A1D1H1DP)
		if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strDVIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];	// 20130109
		}
		#elif INPUT_TYPE == INPUT_1A1H1DP
		if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];	// 20130109
		}
		#elif INPUT_TYPE == INPUT_1D1H1DP
		if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DP)
		{
			return strDPM6[UserPrefLanguage];   // 20130109
		}
		else if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strDVIM6[UserPrefLanguage];   // 20130109
		}
		#elif INPUT_TYPE == INPUT_1A1D1H	//131113 fay
		if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strDVIM6[UserPrefLanguage];
		}
		else if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
			return strHDMIM6[UserPrefLanguage];
		}
		#else
		if( UserPrefInputType == INPUT_PRIORITY_DVI)
		{
			return strDVIM6[UserPrefLanguage];
		}
		/*
		else if( UserPrefInputType == INPUT_PRIORITY_HDMI)
		{
		    return strHDMIM6[UserPrefLanguage];
		}
		*/
		#endif
		#if INPUT_TYPE != INPUT_1D1H1DP
		else
		{
			return strDSUBM6[UserPrefLanguage];
		}
		#else
		return strDVIM6[UserPrefLanguage];
		#endif
	}
}
#endif
#endif
#if AudioFunc
#if EANBLE_MUTE_ON_OFF

BYTE *MuteText(void)
{
	return strMuteM6[UserPrefLanguage];
}
BYTE *MuteValueText( void )
{
	if( UserPrefMuteState)
	{
		return strOnM6[UserPrefLanguage];
	}
	else
	{
		return strOffM6[UserPrefLanguage];
	}
}
#endif
BYTE *VolumeText(void)
{
	return strVolumeM6[UserPrefLanguage];
}
#endif
#if Enable_Adjust_SharpnessMenu
BYTE *SharpnessText( void )
{
	return strSharpnessM6[UserPrefLanguage];
}
#endif

#if  DDCCI_ENABLE && DDCCCIMenu_Enable
BYTE *DDCCIText( void )
{
	return strDDCCIM6[UserPrefLanguage];
}
BYTE *DDCCIValueText( void )
{
	if( DDCciFlag )
	{
		return strOnM6[UserPrefLanguage];
	}
	else
	{
		return strOffM6[UserPrefLanguage];
	}
}
#endif
#if  FreeSyncMenu_Enable
BYTE *FreeSyncText( void )
{
	return strFreeSyncM6[UserPrefLanguage];
}
BYTE *FreeSyncValueText( void )
{
	#if FREESYNC_DP_on_off
	if (CURRENT_INPUT_IS_HDMI())
		return strOnM6[UserPrefLanguage];
	else if(CURRENT_INPUT_IS_DVI())
		return strOffM6[UserPrefLanguage];
	else
	{
		if(UserprefFreeSyncMode == FreeSyncMenuItems_On) //    if( FreeSyncFlag )
		{
			return strOnM6[UserPrefLanguage];
		}
		else
		{
			return strOffM6[UserPrefLanguage];
		}
	}
	#else
	if(CURRENT_INPUT_IS_VGA())
		return strOffM6[UserPrefLanguage];
	#if ENABLE_FREESYNC
	if(UserprefFreeSyncMode == FreeSyncMenuItems_On) //    if( FreeSyncFlag )
	{
		return strOnM6[UserPrefLanguage];
	}
	else
	#endif
	{
		return strOffM6[UserPrefLanguage];
	}
	#endif
}
#endif
#if 0//ENABLE_FREESYNC
BYTE *FreesyncDesText1( void )
{
	return strFreeSyncDes01M15[UserPrefLanguage];
}
BYTE *FreesyncDesText2( void )
{
	return strFreeSyncDes02M15[UserPrefLanguage];
}
BYTE *Quick_FreesyncText( void )
{
	return strFreeSyncM2[UserPrefLanguage];
}
BYTE *Quick_FreesyncValue( void )
{
	if(UserprefFreeSyncMode == FreeSyncMenuItems_On)
		return strONM2[UserPrefLanguage];
	else
		return strOFFM2[UserPrefLanguage];
}
#endif


//-------------------------------------------------------------



BYTE *InputConnectorText(void)
{
	if (SrcInputType == Input_VGA)
	{
		return strDSUBM6[UserPrefLanguage];
	}
	#if ENABLE_DP_INPUT
	#if CHIP_ID>=CHIP_TSUMC
	#if (INPUT_TYPE == INPUT_1A1DP)
	else if( SrcInputType == Input_Displayport )
	{
		return strDPM6[UserPrefLanguage];
	}
	#else
	else if( SrcInputType == Input_Displayport3 )
	{
		return strDPM6[UserPrefLanguage];
	}
	#endif
	#else
	else if( SrcInputType == Input_Displayport)
	{
		return strDPM6[UserPrefLanguage];
	}
	#endif
	#endif
	#if ENABLE_HDMI
	#if INPUT_TYPE==INPUT_1A1H ||INPUT_TYPE==INPUT_1A1H1DP
	else if(SrcInputType == Input_Digital)
	#else
	else if(SrcInputType == Input_Digital2)
	#endif
	{
		#if INPUT_TYPE==INPUT_1A2H ||INPUT_TYPE == INPUT_2H	//121108 Modify
		return strHDMI2M6[UserPrefLanguage];
		#else
		#if INPUT_TYPE==INPUT_1A2H1DP
		return strHDMI2M6[UserPrefLanguage];
		#else
		return strHDMIM6[UserPrefLanguage];
		#endif
		#endif
	}
	#endif
	else
	{
		#if  INPUT_TYPE==INPUT_1A2H ||INPUT_TYPE == INPUT_2H	//121108 Modify
		return strHDMI1M6[UserPrefLanguage];
		#elif INPUT_TYPE == INPUT_1H
		return strHDMIM6[UserPrefLanguage];
		#else
		#if INPUT_TYPE == INPUT_1A2H1DP
		return strHDMI1M6[UserPrefLanguage];
		#else
		return strDVIM6[UserPrefLanguage];
		#endif
		#endif
	}
}





































//-----------------------------------------------------------



//-----------------------------------------------------------


#if Dual
#if ENABLE_VGA
BYTE *AnalogText( void )
{
	return strDSUBM6[UserPrefLanguage];
}
#endif
#if ENABLE_DVI
BYTE *DigitalText( void )
{
	return strDVIM6[UserPrefLanguage];
}
#endif
#if ENABLE_HDMI
BYTE *HDMIText( void )
{
	#if ENABLE_HDMI2
	return strHDMI1M6[UserPrefLanguage];
	#else
	return strHDMIM6[UserPrefLanguage];
	#endif
}
#endif
#if ENABLE_HDMI2
BYTE *HDMI2Text( void )
{
	return strHDMI2M6[UserPrefLanguage];
}
#endif
#if ENABLE_DP_INPUT
BYTE *DPText( void )
{
	return strDPM6[UserPrefLanguage];
}
#endif




#if (INPUT_TYPE!=INPUT_1A) && (INPUT_TYPE!=INPUT_1H)
#if ENABLE_AutoDetech
BYTE *AutoText( void )
{
	return strAutoM6[UserPrefLanguage];
}
#endif
#endif

#if HKC_INPUTSELECT_MODE
BYTE *InputTypeRationText( void )
{
//CURRENT_INPUT_IS_TMDS()
	#if ENABLE_VGA
	if(UserPrefInputType == Input_VGA  ) //=
		return strDSUBM6[UserPrefLanguage];
	#endif
	#if ENABLE_HDMI
	if(UserPrefInputType == Input_HDMI) //=
		return strHDMIM6[UserPrefLanguage];
	#endif
	#if ENABLE_HDMI2
	if(UserPrefInputType == Input_HDMI2) //==========problem
		strHDMI2M6[UserPrefLanguage];
	#endif
	#if ENABLE_DVI
	if(UserPrefInputType == Input_DVI     )
		return strDVIM6[UserPrefLanguage];
	#endif
	#if ENABLE_DP_INPUT
	if(UserPrefInputType == Input_Displayport)
		return strDPM6[UserPrefLanguage];
	#endif
	#if 0//(INPUT_TYPE!=INPUT_1A) && (INPUT_TYPE!=INPUT_1H)
	if(UserPrefInputType == INPUT_PRIORITY_AUTO) //=
		return strAutoM6[PropFontIndex];
	#endif
}
#endif

#endif




#if ENABLE_FREESYNC
BYTE *VsyncText( void )
{
	return strVsyncM6[UserPrefLanguage];
}
#endif

//-----------------------------------------------------------
BYTE *OutOfRangeText( void )
{
	return strInputNotSupportM9[UserPrefLanguage];
}
BYTE * CableNotConnectText( void )
{
	return strCableNotConnectedM10[UserPrefLanguage];
}

BYTE *NoSyncText( void )
{
	return strNoSignalM11[UserPrefLanguage];
}





#ifdef OffPower
BYTE *OffTimerM98Text( void )
{
	return strOffTimerM98[UserPrefLanguage];
}
BYTE *MonitorOffText( void )
{
	return strMonitorOffM98[UserPrefLanguage];
}
#endif



#if Hot_Corss_ColorSelect



BYTE code strCorssIcon[41] =
{
	(CorssAddr + 0),  (CorssAddr + 0),  (CorssAddr + 0), (CorssAddr + 1),    (CorssAddr + 2),   (CorssAddr + 0),       (CorssAddr + 0),    (CorssAddr + 0),
	(CorssAddr + 0),  (CorssAddr + 0),  (CorssAddr + 0), (CorssAddr + 3),    (CorssAddr + 4),   (CorssAddr + 0),       (CorssAddr + 0),    (CorssAddr + 0),
	(CorssAddr + 5),  (CorssAddr + 6),  (CorssAddr + 7), (CorssAddr + 8),    (CorssAddr + 9),   (CorssAddr + 7),       (CorssAddr + 10),  (CorssAddr + 11),
	(CorssAddr + 0),  (CorssAddr + 0),  (CorssAddr + 0), (CorssAddr + 12),  (CorssAddr + 13),  (CorssAddr + 0),       (CorssAddr + 0),    (CorssAddr + 0),
	(CorssAddr + 0),  (CorssAddr + 0),  (CorssAddr + 0), (CorssAddr + 14),  (CorssAddr + 15),  (CorssAddr + 0),       (CorssAddr + 0),    (CorssAddr + 0),
	'\0'
};


BYTE* CorssIcon(void)
{
	return strCorssIcon;
}
#elif Hot_Corss_FY_ColorSelect


#define CRM(x)        (CorssAddr+x)
BYTE code strCROWindow_ONE[6][11] =
{
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x03), CRM(0x04), CRM(0x05), CRM(0x06), CRM(0x07), CRM(0x08),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x0A), CRM(0x0C), CRM(0x0D), CRM(0x0A), CRM(0x0E),
		CRM(0x0A), CRM(0x0F),
		0
	},
	{
		CRM(0x10), CRM(0x11), CRM(0x12), CRM(0x11), CRM(0x13), CRM(0x14), CRM(0x11), CRM(0x15),
		CRM(0x11), CRM(0x16),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x17), CRM(0x18), CRM(0x19), CRM(0x1A), CRM(0x1B), CRM(0x1C),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x1D), CRM(0x1E), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	}
};



BYTE code strCROWindow_TOW[6][11] =
{
	{
		CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x03), CRM(0x04), CRM(0x05), CRM(0x06), CRM(0x07),
		CRM(0x08), CRM(0x00),
		0
	},
	{
		CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x00), CRM(0x0C), CRM(0x0B), CRM(0x00), CRM(0x0C),
		CRM(0x0D), CRM(0x0E),
		0
	},
	{
		CRM(0x0F), CRM(0x10), CRM(0x08), CRM(0x11), CRM(0x12), CRM(0x13), CRM(0x14), CRM(0x01),
		CRM(0x15), CRM(0x16),
		0
	},
	{
		CRM(0x17), CRM(0x18), CRM(0x0B), CRM(0x19), CRM(0x1A), CRM(0x1B), CRM(0x1C), CRM(0x0C),
		CRM(0x1D), CRM(0x1E),
		0
	},
	{
		CRM(0x1F), CRM(0x20), CRM(0x08), CRM(0x00), CRM(0x01), CRM(0x08), CRM(0x00), CRM(0x01),
		CRM(0x21), CRM(0x22),
		0
	},
	{
		CRM(0x00), CRM(0x0C), CRM(0x23), CRM(0x24), CRM(0x25), CRM(0x26), CRM(0x27), CRM(0x28),
		CRM(0x0B), CRM(0x00),
		0
	}
};


BYTE code strCROWindow_THR[6][11] =
{
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x03), CRM(0x04), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x05), CRM(0x06), CRM(0x07), CRM(0x06), CRM(0x08), CRM(0x09), CRM(0x0A), CRM(0x0B),
		CRM(0x0A), CRM(0x0C),
		0
	},
	{
		CRM(0x0D), CRM(0x0E), CRM(0x0F), CRM(0x0E), CRM(0x10), CRM(0x11), CRM(0x12), CRM(0x13),
		CRM(0x12), CRM(0x14),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x15), CRM(0x16), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x17), CRM(0x18), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	}
};

BYTE* CorssIcon1(void)
{
	return strCROWindow_ONE;
}
BYTE* CorssIcon2(void)
{
	return strCROWindow_TOW;
}
BYTE* CorssIcon3(void)
{
	return strCROWindow_THR;
}

#elif Hot_Corss_FND_Select


#define CRM(x)        (CorssAddr+x)
BYTE code strCROWindow_ONE[6][11] =
{
	{
		CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x03), CRM(0x04), CRM(0x05), CRM(0x06),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x07), CRM(0x08), CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x0C), CRM(0x0D),
		CRM(0x0E), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x0F), CRM(0x10), CRM(0x11), CRM(0x12), CRM(0x13), CRM(0x14), CRM(0x10),
		CRM(0x15), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x16), CRM(0x17), CRM(0x18), CRM(0x19), CRM(0x1A), CRM(0x1B), CRM(0x17),
		CRM(0x1C), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x1D), CRM(0x1E), CRM(0x1F), CRM(0x20), CRM(0x21), CRM(0x22), CRM(0x23),
		CRM(0x24), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x25), CRM(0x26), CRM(0x27), CRM(0x28), CRM(0x29), CRM(0x2A),
		CRM(0x00), CRM(0x00),
		0
	}
};



BYTE code strCROWindow_TOW[6][11] =
{
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x03), CRM(0x04), CRM(0x05), CRM(0x06), CRM(0x07), CRM(0x08),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x0C), CRM(0x0D), CRM(0x0E), CRM(0x0F), CRM(0x10),
		CRM(0x11), CRM(0x12),
		0
	},
	{
		CRM(0x13), CRM(0x14), CRM(0x15), CRM(0x16), CRM(0x17), CRM(0x18), CRM(0x19), CRM(0x1A),
		CRM(0x1B), CRM(0x1C),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x1D), CRM(0x1E), CRM(0x1F), CRM(0x20), CRM(0x21), CRM(0x22),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x23), CRM(0x24), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	}
};

BYTE code strCROWindow_THR[6][11] =
{
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x03), CRM(0x04), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x05), CRM(0x06), CRM(0x07), CRM(0x08), CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x0C),
		CRM(0x06), CRM(0x0D),
		0
	},
	{
		CRM(0x0E), CRM(0x0F), CRM(0x10), CRM(0x11), CRM(0x12), CRM(0x13), CRM(0x14), CRM(0x15),
		CRM(0x0F), CRM(0x16),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x17), CRM(0x18), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	},
	{
		CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x00), CRM(0x19), CRM(0x1A), CRM(0x00), CRM(0x00),
		CRM(0x00), CRM(0x00),
		0
	}
};

BYTE* CorssIcon1(void)
{
	return strCROWindow_ONE;
}
BYTE* CorssIcon2(void)
{
	return strCROWindow_TOW;
}
BYTE* CorssIcon3(void)
{
	return strCROWindow_THR;
}

#endif





//----Eson End----------------------------------




