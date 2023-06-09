///////////////////////////////////////////////////////////////////////////////
/// @file ms_rwreg.h
/// @brief MStar Scaler register access.
/// @author MStarSemi Inc.
///
/// Functions for MStar scaler register access.
///
/// Features
///  -Write byte/word/bulk data
///  -Read byte/word data.
///  -
///  -
///////////////////////////////////////////////////////////////////////////////
#define _MS_RWREG_C

#include <intrins.h>
#include "types.h"
#include "board.h"
#include "ms_reg.h"
#include "misc.h"
#include "ms_rwreg.h"
#include "Global.h"



#define DELAY1US()  _nop_()
#if 1//DIRECT_BUS
/////////////////////////////////////////////////////////////////////////
#ifndef _REG_DIRECT_ACCESS_
BYTE msReadByte( WORD u16Reg )
{
	if( u16Reg & 0x8000 )
	{
		scRegs[0] = ( u16Reg >> 8 ) & 0x7F;
		return scRegs[u16Reg & 0xFF];
	}
	else
		return msRegs[u16Reg];
}
void msWriteByte( WORD u16Reg, BYTE u8Val )
{
	if( u16Reg & 0x8000 )
	{
		scRegs[0] = ( u16Reg >> 8 ) & 0x7F;
		scRegs[u16Reg & 0xFF] = u8Val;
	}
	else
		msRegs[u16Reg] = u8Val;
}

void msWriteBit( WORD u16Reg, Bool bBit, BYTE u8BitPos )
{
	BYTE u8Value;
	u8Value = msReadByte( u16Reg );
	if( bBit )
	{
		u8Value = u8Value | u8BitPos;
	}
	else
	{
		u8Value = u8Value & ( ~u8BitPos );
	}
	msWriteByte( u16Reg, u8Value );
}

//Jison:110428 change msRead2Byte() u16Reg to low addr.
WORD msRead2Byte( WORD u8RegLoAddr )
{
	return ((( WORD )msReadByte( u8RegLoAddr + 1 ) ) << 8 ) | msReadByte( u8RegLoAddr );
}



BYTE scReadByte( BYTE u8Reg )
{
	return scRegs[u8Reg];
}

void scWriteByte( BYTE u8Reg, BYTE u8Value )
{
	scRegs[u8Reg] = u8Value;
}
#if  CHIP_ID==CHIP_TSUMU
WORD msReadWord( WORD wReg )
{
	return ((( WORD )msReadByte( wReg ) ) << 8 ) | msReadByte( wReg - 1 );
}
void msWriteWord( WORD wReg, WORD wValue )
{
	msWriteByte( wReg - 1, ( BYTE )wValue );
	msWriteByte( wReg, ( BYTE )( wValue >> 8 ) );
}
#endif

/*
//Jison:110428 u16Reg is low addr.
WORD scRead2Byte( BYTE u8RegLoAddr )
{
    return ((( WORD )scReadByte( u8RegLoAddr+1 ) ) << 8 ) | scReadByte( u8RegLoAddr );
}
//Jison:110428 u16Reg is low addr.
void scWrite2Byte( BYTE u8RegLoAddr, WORD u16Value )
{
    scWriteByte( u8RegLoAddr, ( BYTE )u16Value );
    scWriteByte( u8RegLoAddr + 1, ( BYTE )( u16Value >> 8 ) );
}
void scWriteByteMask( BYTE u8Reg, BYTE u8Value, BYTE u8Mask )
{
    scWriteByte( u8Reg, ( (scReadByte( u8Reg ) & ( ~u8Mask )) | ( u8Value & u8Mask ) ) );
}
*/
#endif
//Jison:110428 u16Reg is low addr.
void msWrite2Byte( WORD u16RegLoAddr, WORD u16Value )
{
	msWriteByte( u16RegLoAddr, ( BYTE )u16Value );
	msWriteByte( u16RegLoAddr + 1, ( BYTE )( u16Value >> 8 ) );
}
void msWriteByteMask( WORD u16Reg, BYTE u8Value, BYTE u8Mask )
{
	msWriteByte( u16Reg, ( (msReadByte( u16Reg ) & ( ~u8Mask )) | ( u8Value & u8Mask ) ) );
}

//Jison:110428 u16Reg is low addr.
void msWrite2ByteMask( WORD u16RegLoAddr, WORD u16Value, WORD u16Mask )
{
	msWriteByteMask( u16RegLoAddr, ( BYTE )u16Value, ( BYTE ) u16Mask );
	msWriteByteMask( u16RegLoAddr + 1, ( BYTE )( u16Value >> 8 ), ( BYTE )( u16Mask >> 8 ) );
}

#if (CHIP_ID == CHIP_TSUMU || CHIP_ID == CHIP_TSUM2 || CHIP_ID == CHIP_TSUMC || CHIP_ID == CHIP_TSUMD || CHIP_ID == CHIP_TSUM9|| CHIP_ID == CHIP_TSUMF)
void msWrite3Byte( WORD u16RegLoAddr, DWORD u32Value )
{
	msWriteByte( u16RegLoAddr, ( BYTE )u32Value );
	msWriteByte( u16RegLoAddr + 1, ( BYTE )( u32Value >> 8 ) );
	msWriteByte( u16RegLoAddr + 2, ( BYTE )( u32Value >> 16 ) );
}

#endif

#if CHIP_ID<CHIP_TSUMV
BYTE mStar_ReadOSDByte( WORD address )
{
	return msReadByte(( address | BKMASKOSD1 ) );
}
void mStar_WriteOSDByte( WORD address, BYTE value )
{
	msWriteByte(( address | BKMASKOSD1 ), value );
}
#endif
/*
//Jison:110428 u8Reg is low addr.
void scWrite2ByteMask( BYTE u8RegLoAddr, WORD u16Value, WORD u16Mask )
{
    scWriteByteMask( u8RegLoAddr, ( BYTE )u16Value, ( BYTE ) u16Mask );
    scWriteByteMask( u8RegLoAddr + 1, ( BYTE )( u16Value >> 8 ), ( BYTE )( u16Mask >> 8 ) );
}
//Jison:110428 u8Reg is low addr.
void scWrite3Byte( BYTE u8RegLoAddr, DWORD u32Value )
{
    scWriteByte( u8RegLoAddr, ( BYTE )u32Value );
    scWriteByte( u8RegLoAddr + 1, ( BYTE )( u32Value >> 8 ) );
    scWriteByte( u8RegLoAddr + 2, ( BYTE )( u32Value >> 16 ) );
}
*/

#if 0
BYTE mStar_ReadByte( BYTE addr )
{
	//static xdata WORD ucCntOldRB = 0;
	addr = addr;
	//ucCntOldRB++;
	return 0;
}

void mStar_WriteByte( BYTE addr, BYTE value )
{
	//static xdata WORD ucCntWB = 0;
	value = addr;
	//ucCntWB++;
}

WORD mStar_ReadWord( BYTE addr )
{
	//static xdata WORD ucCntOldRW = 0;
	addr = addr;
	//ucCntOldRW++;
	return 0;
}
#endif
#if 0
void mStar_WriteWord( BYTE addr, WORD value )
{
	//static xdata WORD ucCntOldWW = 0;
	value = addr;
	//ucCntOldWW++;
}
#endif
//===============================================================
#elif DDR_BUS
void mStar_Start(BYTE u8Addr)
{
#define DDR_PORT    u8Addr
	SET_DDR_PORT;
	DELAY1US();
	SET_MS_ALE();
	DDR_PORT >>= 4;
	SET_DDR_PORT;
	DELAY1US();
	CLR_MS_ALE();
#undef DDR_PORT
}

void mStar_SendByte(BYTE u8Value)
{
#define DDR_PORT    u8Value
	SET_DDR_PORT;
	DELAY1US();
	CLR_MS_WRZ();
	DDR_PORT >>= 4;
	SET_DDR_PORT;
	DELAY1US();
	SET_MS_WRZ();
#undef DDR_PORT
}

#if 0
BYTE mStar_ReceiveByte(void)
{
	BYTE    u8Value;
	BYTE    ddrPort = 0xF;
	CLR_MS_RDZ();
	SET_DDR_PORT;
	u8Value = (HWMS_DDR_PORT >> HWMS_DDR_SHIFT_BITS) & 0xF;
	SET_MS_RDZ();
	DELAY1US();
	CLR_MS_RDZ();
	SET_DDR_PORT;
	u8Value = u8Value | (((HWMS_DDR_PORT >> HWMS_DDR_SHIFT_BITS) & 0xF) << 4);
	SET_MS_RDZ();
	return u8Value;
}

#else
BYTE mStar_ReceiveByte(void)
{
	BYTE    u8Value;
	BYTE    ddrPort = 0xF;
	SET_DDR_PORT;
	DELAY1US();
	CLR_MS_RDZ();
	u8Value = (HWMS_DDR_PORT >> HWMS_DDR_SHIFT_BITS) & 0xF;
	SET_MS_RDZ();
	DELAY1US();
	SET_DDR_PORT;
	DELAY1US();
	CLR_MS_RDZ();
	u8Value = u8Value | (((HWMS_DDR_PORT >> HWMS_DDR_SHIFT_BITS) & 0xF) << 4);
	SET_MS_RDZ();
	return u8Value;
}
#endif
BYTE mStar_ReadByte(BYTE u8Addr)
{
	mStar_Start(u8Addr);
	return mStar_ReceiveByte();
}

void mStar_WriteByte(BYTE u8Addr, BYTE u8Value)
{
	mStar_Start(u8Addr);
	mStar_SendByte(u8Value);
}

WORD mStar_ReadWord(BYTE u8Addr)
{
	WORD    u16Value;
	u16Value = mStar_ReadByte(u8Addr);
	u16Value = (u16Value << 8) | mStar_ReadByte(u8Addr - 1);
	return u16Value;
}

void mStar_WriteWord(BYTE u8Addr, WORD u16Value)
{
	mStar_WriteByte(u8Addr - 1, u16Value & 0xFF);
	mStar_WriteByte(u8Addr, u16Value >> 8);
}

void mStar_WriteTBL(BYTE u8Addr, BYTE *pu8Tbl, BYTE u8Count, BYTE u8Inc)
{
	u8Inc = u8Inc;
	while (u8Count--)
		mStar_WriteByte(u8Addr, *(pu8Tbl++));
}

#else // !DIRECT_BUS
void mStar_Start(msBus_Direction direct)
{
	SET_MS_CSZ();       // CS=1
	CLR_MS_SCL();       // SCL=0
	if (direct)         // Read
		SET_MS_SDA();   //SDA=1
	else
		CLR_MS_SDA();   //SDA=0
	SET_MS_SCL();       //SCL=1
	CLR_MS_SCL();       //SCL=0
}

void mStar_SendByte(BYTE u8Value, Bool lastOne)
{
	BYTE    i;
	for (i = 0; i < 7; i++)
	{
		(u8Value & BIT7) ? (SET_MS_SDA()) : (CLR_MS_SDA());
		u8Value <<= 1;
		SET_MS_SCL();
		DELAY4US();
		CLR_MS_SCL();
	}
	if (lastOne)
		CLR_MS_CSZ();
	(u8Value & BIT7) ? (SET_MS_SDA()) : (CLR_MS_SDA());
	DELAY4US();
	SET_MS_SCL();
	DELAY4US();
	CLR_MS_SCL();
	if (lastOne)
	{
		SET_MS_SDA();
		SET_MS_SCL();
	}
}

BYTE mStar_ReceiveByte(Bool lastOne)
{
	BYTE    i;
	BYTE    u8Value;
	for (i = 0; i < 7; i++)
	{
		u8Value <<= 1;
		SET_MS_SCL();
		DELAY4US();
		if (IS_MS_SDA_HI())
			u8Value |= BIT0;
		CLR_MS_SCL();
	}
	if (lastOne)
		CLR_MS_CSZ();
	{
		u8Value <<= 1;
		SET_MS_SCL();
		DELAY4US();
		if (IS_MS_SDA_HI())
			u8Value |= BIT0;
		CLR_MS_SCL();
	}
	if (lastOne)
	{
		SET_MS_SDA();
		SET_MS_SCL();
	}
	return u8Value;
}

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
BYTE mStar_ReadByte(BYTE u8Addr)
{
	mStar_Start(MS_READ);
	mStar_SendByte(u8Addr, 0);
	SET_MS_SDA();
	return mStar_ReceiveByte(1);
}

WORD mStar_ReadWord(BYTE u8Addr)
{
	WORD    u16Value;
	u16Value = mStar_ReadByte(u8Addr);
	u16Value = (u16Value << 8) | mStar_ReadByte(u8Addr - 1);
	return u16Value;
}

void mStar_WriteByte(BYTE u8Addr, BYTE u8Value)
{
	mStar_Start(MS_WRITE);
	mStar_SendByte(u8Addr, 0);
	mStar_SendByte(u8Value, 1);
}

void mStar_WriteWord(BYTE u8Addr, WORD u16Value)
{
	mStar_WriteByte(u8Addr - 1, u16Value & 0xFF);
	mStar_WriteByte(u8Addr, u16Value >> 8);
}

void mStar_SendDDRByte(BYTE u8Value, Bool lastOne)
{
	BYTE    i;
	for (i = 0; i < 7; i++)
	{
		HWMS_SDA_PIN = (u8Value & BIT7);
		u8Value <<= 1;
		HWMS_SCL_PIN = !HWMS_SCL_PIN;
	}
	if (lastOne)
		CLR_MS_CSZ();
	(u8Value & BIT7) ? (SET_MS_SDA()) : (CLR_MS_SDA());
	HWMS_SCL_PIN = !HWMS_SCL_PIN;
	if (lastOne)
	{
		SET_MS_SDA();
		SET_MS_SCL();
	}
}

void mStar_WriteDDRByte(BYTE u8Addr, BYTE u8Value)
{
	CLR_MS_SCL();
	SET_MS_CSZ();   // CS=1
	CLR_MS_SDA();   //SDA=0
	SET_MS_SCL();
	mStar_SendDDRByte(u8Addr, 0);
	mStar_SendDDRByte(u8Value, 1);
}

void mStar_WriteTBL(BYTE u8Addr, BYTE *pu8Tbl, BYTE u8Count, BYTE u8Inc)
{
	if (u8Inc)
		mStar_WriteByte(REGBK, mStar_ReadByte(REGBK) & ~AINC);
	else
		mStar_WriteByte(REGBK, mStar_ReadByte(REGBK) | AINC);
	mStar_Start(MS_WRITE);
	mStar_SendByte(u8Addr, 0);
	while (u8Count--)
		mStar_SendByte(*(pu8Tbl++), 0);
	mStar_SendByte(*pu8Tbl, 1);
}


#if 0
void mStar_SwitchRegBank(BYTE bank_index)
{
	BYTE    regValue = mStar_ReadByte(REGBK);
	mStar_WriteByte(REGBK, (regValue & REGBANK_MASK) | bank_index);
}
#endif
#endif

#if ENABLE_MENULOAD //111006 Rick add menuload function - C_FOS_015
//#include "DebugMsg.h"
//MST_MODULE(ms_rwreg)

static WORD xdata u16ML_Count = 0;
static BYTE xdata u8ML_Nums = 0;
static BYTE xdata u8ML_NumsIdx = 0;
static BYTE xdata u8PrevML_Mode = 0;
static WORD xdata u16PrevML_Reg = 0;
// Note the xdata used by code should be < 500h=1280 bytes, 500h~5FFh for menu load function
// Compiler set xdata start at 0x4000 so the start addr =0x4500
// CHIP_TSUMV do not have the status bit to show the ML finished or not.
// Note SC registers do not write scaler bank(function like scWriteByte)
#define ML_START_ADDR       0x4500
#define ML_BUFFER           ((unsigned char volatile xdata *) ML_START_ADDR)
#define VAR_INC(u16Value)   {MST_ASSERT(u16Value<256);u16Value++;}
#if ML_USE_INT
volatile BYTE xdata u8ML_Status = ML_STS_DONE;
#endif
// To ensure the previous ML already finished while next ML process start.
void msML_WaitReady(void) //must call this function before 1st msML_WriteByte() of next ML write process.
{
	//TimeOutCounter=50;
	SetTimOutConter(50);
	#if ML_USE_INT
	MST_ASSERT((u8ML_Status & ML_STS_CMD_ERR) == 0);
	//while(!(msReadByte(REG_3C27)&BIT3) && TimeOutCounter!=0)
	while(!(u8ML_Status & ML_STS_DONE) && u16TimeOutCounter != 0);
	//MST_ASSERT(u8ML_Status==ML_STS_DONE);
	#if 0
	printData("u8ML_Status=%xh", u8ML_Status);
	printData("REG_3C27=%xh\r\n", msReadByte(REG_3C27));
	#endif
	msWriteByteMask(REG_3C27, BIT3, BIT3);                  //clr menu load done
	u8ML_Status = 0;
	#else
	while((msReadByte(REG_3C25)&BIT7) && u16TimeOutCounter != 0);
	#endif
	msWriteByteMask(REG_3C25, 0x00, 0xC0);                  //Menu load disable
}
void msML_WriteByte(ML_ModeType enML_Mode, WORD u16Reg, BYTE u8Value)
{
	#if ML_USE_INT
	MST_ASSERT(u8ML_Status == 0); //should call msML_WaitReady() first
	#endif
	if ((enML_Mode != u8PrevML_Mode) //change mode
	        || (enML_Mode == ML_MODE_SUCCESSIVE && (u16Reg & 0xFF00) != (u16PrevML_Reg & 0xFF00)) //successice mode change bank
	        || (enML_Mode == ML_MODE_BURST && (u16Reg) != (u16PrevML_Reg))) //burst mode change bank/addr
	{
		u8ML_Nums = 0; //reset for another successive/burst mode
	}
	u8PrevML_Mode = enML_Mode;
	u16PrevML_Reg = u16Reg;
	switch(enML_Mode)
	{
		// Normal mode
		case ML_MODE_NORMAL:
			//bank
			if( u16Reg & 0x8000 )
				ML_BUFFER[u16ML_Count] = 0x2F | ML_MODE_NORMAL;
			else
				ML_BUFFER[u16ML_Count] = (BYTE)((u16Reg >> 8) & 0x3F);
			VAR_INC(u16ML_Count);
			//addr
			ML_BUFFER[u16ML_Count] = (BYTE)(u16Reg);
			VAR_INC(u16ML_Count);
			//value
			ML_BUFFER[u16ML_Count] = u8Value;
			VAR_INC(u16ML_Count);
			break;
			#if 0
		case ML_MODE_SUCCESSIVE :
			// Successive mode
			if(u8ML_Nums == 0x00) //bank
			{
				if( u16Reg & 0x8000 )
					ML_BUFFER[u16ML_Count] = (BYTE)(0x2F & 0x3F) | ML_MODE_SUCCESSIVE;
				else
					ML_BUFFER[u16ML_Count] = (BYTE)((u16Reg >> 8) & 0x3F) | ML_MODE_SUCCESSIVE;
				VAR_INC(u16ML_Count);
				//nums
				u8ML_NumsIdx = u16ML_Count; //save nums index in bufer
				VAR_INC(u16ML_Count);
			}
			//addr
			ML_BUFFER[u16ML_Count] = (BYTE)(u16Reg);
			VAR_INC(u16ML_Count);
			//value
			ML_BUFFER[u16ML_Count] = u8Value;
			VAR_INC(u16ML_Count);
			u8ML_Nums++;
			ML_BUFFER[u8ML_NumsIdx] = u8ML_Nums - 1;
			break;
		case ML_MODE_BURST:
			// Burst mode
			if(u8ML_Nums == 0x00) //bank
			{
				if( u16Reg & 0x8000 )
					ML_BUFFER[u16ML_Count] = (BYTE)(0x2F & 0x3F) | ML_MODE_BURST;
				else
					ML_BUFFER[u16ML_Count] = (BYTE)((u16Reg >> 8) & 0x3F) | ML_MODE_BURST;
				VAR_INC(u16ML_Count);
				//nums
				u8ML_NumsIdx = u16ML_Count; //save nums index in bufer
				VAR_INC(u16ML_Count);
				//addr
				ML_BUFFER[u16ML_Count] = (BYTE)(u16Reg);
				VAR_INC(u16ML_Count);
			}
			ML_BUFFER[u16ML_Count] = u8Value;
			VAR_INC(u16ML_Count);
			u8ML_Nums++;
			ML_BUFFER[u8ML_NumsIdx] = u8ML_Nums - 1;
			break;
			#endif
	}
}
#if 0
void msML_Write2Byte(WORD u16Reg, WORD u16Value)
{
	ML_WriteByte(ML_MODE_SUCCESSIVE, u16Reg, (BYTE)u16Value);
	ML_WriteByte(ML_MODE_SUCCESSIVE, u16Reg + 1, (BYTE)(u16Value >> 8));
}

void msML_WriteByteMask(WORD u16Reg, BYTE u8Value, BYTE u8Mask)
{
	XDATA BYTE uc;
	uc = msReadByte(u16Reg) & (~u8Mask);
	ML_WriteByte( u16Reg, ( uc | (u8Value & u8Mask)) );
}
#endif
void msML_Trigger(ML_TrigType enTrigType)
{
	msWriteByteMask(REG_3C25, enTrigType, 0x30);                                    //trig by Vsync-op
	msWrite2ByteMask(REG_3C24, (ML_START_ADDR & 0x7FF), 0x7FF);             //Menu Load start addr
	#if !ML_USE_INT
	msML_WriteByte(ML_MODE_NORMAL, REG_3C25, msReadByte(REG_3C25) & (~(BIT7 | BIT6))); //Last menu load write byte(Disable menu load while finished)
	#endif
	// run after msML_WriteByte() that disable ML to get correct u16ML_Count.
	msWrite2ByteMask(REG_3C26, (ML_START_ADDR & 0x7FF) + u16ML_Count - 1, 0x7FF); //Menu Load end addr
	#if 0
	{
		WORD i;
		for(i = 0; i < u16ML_Count; i++)
			printData("%x", ML_BUFFER[i]);
	}
	#endif
	if(enTrigType == ML_TRIG_SW)
		msWriteByteMask(REG_3C25, 0xC0, 0xC0);              //Menu load Enable
	else
		msWriteByteMask(REG_3C25, 0x80, 0xC0);              //Menu load Enable
	//PRINT_DATA("u16ML_Count=%d",u16ML_Count);
	u16ML_Count     = 0;
	u8ML_Nums       = 0;
	u8PrevML_Mode   = 0;
	u16PrevML_Reg   = 0;
}

#endif

