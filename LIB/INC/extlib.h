typedef struct
{
    BYTE Flags;
    WORD expHTotal;
    WORD MST_Clock_MHz;
    WORD srcHPeriod;
    WORD PnlWidth;
    WORD PnlHeight;
    BYTE PnlMaxDClk;
} OutputFactorType;
extern Bool SetOutputDClk(OutputFactorType *OutputFactor, DWORD *factor);
// factor: return output dclk factor
//

extern void mStar_LoadCompressedFont(BYTE u8Addr, WORD *pu16FontPtr, WORD u16Count);
extern void LoadCompressColorFont(BYTE *pu8FontTbl, WORD *pu16MapPtr, BYTE countu8Count);

// for Comperess fon without proporitonal string.
// count: 0 indicated download entire font table, others indicated specify real count
extern void LoadPropFonts(BYTE *font, WORD num); // for proportional string
extern void LoadCompressedPropFonts(BYTE *font, WORD num); // for proportional string with compressed
// font: the font table address for proportional string
// num : font number
// NOTICE ****** IMPORTANT  :
// for proportional string:
//  1. You must add the following struct into menudef.h
//	typedef struct
//	{ BYTE SpaceWidth;
//	  WORD LineData[18];
//	} PropFontType;
//	typedef WORD PropFontType;
//     If you use compressed proportional font, then change PropFontType as
//       typedef WORD PropFontType;
//  2. declare font table as
//	extern PropFontType code tPropFontSet[]; // for common font
//	extern PropFontType code tPropFontSet1[]; // for 1st additional font table
//	extern PropFontType code tPropFontSet2[]; // for 2nd additional font
//     if you adopt compressed proportional font, you must declare additional three mapping table
//      extern WORD code tPropFontMap[];
//      extern WORD code tPropFontMap1[];
//      extern WORD code tPropFontMap2[];
//     the content was from font editor
//  3. add external declaration
//       extern BYTE SecondTblAddr; // for refer common font table or 1st/2nd font table
//       extern BYTE LanguageIndex; // for refer 1st font table or 2nd font table
//         Bit6..7 of LanguageIndex was used for specify how many pixel width among proportional string
//                 The value range is from 1 to 3. the value 0 will be specify as 2
//	Ex 0xC0 indicate pixel width is 3.
