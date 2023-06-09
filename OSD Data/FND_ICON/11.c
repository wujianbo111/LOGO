#include "MoFtInd.h"  


#if COMPRESS_MONO_FONT

// Compressed mono font:
code BYTE tOSDFont1[] =
{
    // Code 000 [0x00]:
    0x00, 0x0F, 0x00, 0x01, 
    // Code 001 [0x01]:
    0x00, 0x0B, 0x00, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x00, 0x0E, 0x00, 
    // Code 002 [0x02]:
    0x00, 0x06, 0x00, 0x70, 0x03, 0xF0, 0x0F, 0x80, 0x3E, 0x00, 0xF8, 0x00, 0xE0, 0x00, 0x80, 0x00, 0x00, 0x03, 
    // Code 003 [0x03]:
    0x00, 0x04, 0x07, 0xF0, 0xFF, 0xF0, 0xFC, 0x10, 0x80, 0x10, 0x00, 0x18, 
    // Code 004 [0x04]:
    0x00, 0x04, 0xFE, 0x00, 0xFF, 0xF0, 0x83, 0xF0, 0x80, 0x10, 0x80, 0x08, 
    // Code 005 [0x05]:
    0x00, 0x06, 0xE0, 0x00, 0xFC, 0x00, 0x1F, 0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0x70, 0x00, 0x10, 0x00, 0x03, 
    // Code 006 [0x06]:
    0x00, 0x0B, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x07, 0x00, 
    // Code 007 [0x07]:
    0x00, 0x03, 0x00, 0x10, 0x00, 0x31, 0x00, 0x60, 0x00, 0xE0, 0x01, 0xC0, 0x01, 0x80, 0x03, 0x80, 0x03, 0x00, 0x07, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x1C, 0x00, 
    // Code 008 [0x08]:
    0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x0B, 
    // Code 009 [0x09]:
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x10, 
    // Code 010 [0x0a]:
    0x00, 0x1D, 0x03, 0xF0, 0x1F, 0xF0, 0x7E, 0x10, 0xE0, 0x10, 
    // Code 011 [0x0b]:
    0x80, 0x0D, 0xFC, 0x00, 0xFF, 0x80, 0x87, 0xE0, 0x80, 0x70, 
    // Code 012 [0x0c]:
    0x00, 0x0F, 0x00, 0x00, 0x80, 0x00, 
    // Code 013 [0x0d]:
    0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x30, 0x00, 0x10, 0x00, 0x0B, 
    // Code 014 [0x0e]:
    0x00, 0x03, 0x80, 0x00, 0xC0, 0x01, 0x60, 0x00, 0x70, 0x00, 0x38, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x07, 0x00, 0x03, 0x00, 0x03, 0x80, 
    // Code 015 [0x0f]:
    0x18, 0x01, 0x30, 0x02, 0x70, 0x00, 0x60, 0x03, 0xE0, 0x00, 0xC0, 0x05, 0xFF, 0xF0, 
    // Code 016 [0x10]:
    0x00, 0x0F, 0x00, 0x00, 0xFF, 0xF0, 
    // Code 017 [0x11]:
    0x00, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x01, 0x80, 0x03, 0x80, 0x07, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x18, 0x02, 0x38, 0x00, 0x30, 0x03, 0xFF, 0x80, 
    // Code 018 [0x12]:
    0xC0, 0x10, 0x00, 0x10, 0x00, 0x0E, 0x00, 0x10, 
    // Code 019 [0x13]:
    0x80, 0x30, 0x80, 0x00, 0x00, 0x0E, 0x80, 0x00, 
    // Code 020 [0x14]:
    0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x07, 0x00, 0x03, 0x00, 0x01, 0x82, 0x01, 0xC0, 0x00, 0xC3, 0x1F, 0xF0, 
    // Code 021 [0x15]:
    0x01, 0x81, 0x00, 0xC2, 0x00, 0xE0, 0x00, 0x63, 0x00, 0x70, 0x00, 0x35, 0xFF, 0xF0, 
    // Code 022 [0x16]:
    0xFF, 0xF0, 0xC0, 0x05, 0xE0, 0x00, 0x60, 0x03, 0x70, 0x00, 0x30, 0x02, 0x18, 0x01, 
    // Code 023 [0x17]:
    0xFF, 0xF0, 0x00, 0x0F, 0x00, 0x00, 
    // Code 024 [0x18]:
    0xFF, 0x80, 0x30, 0x03, 0x38, 0x00, 0x18, 0x02, 0x0C, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0x80, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x30, 
    // Code 025 [0x19]:
    0x00, 0x10, 0x00, 0x0E, 0x00, 0x10, 0xC0, 0x10, 
    // Code 026 [0x1a]:
    0x80, 0x00, 0x00, 0x0E, 0x80, 0x00, 0x80, 0x30, 
    // Code 027 [0x1b]:
    0x1F, 0xF0, 0x00, 0xC3, 0x01, 0xC0, 0x01, 0x82, 0x03, 0x00, 0x07, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x00, 
    // Code 028 [0x1c]:
    0xFF, 0xF0, 0x00, 0x35, 0x00, 0x70, 0x00, 0x63, 0x00, 0xE0, 0x00, 0xC2, 0x01, 0x81, 
    // Code 029 [0x1d]:
    0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x07, 0x00, 0x03, 0x00, 0x03, 0x80, 0x01, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x60, 0x00, 0x31, 0x00, 0x10, 0x00, 0x03, 
    // Code 030 [0x1e]:
    0x00, 0x0B, 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 
    // Code 031 [0x1f]:
    0x00, 0x10, 0x00, 0x0F, 0x00, 0x00, 
    // Code 032 [0x20]:
    0xE0, 0x10, 0x7E, 0x10, 0x1F, 0xF0, 0x03, 0xF0, 0x00, 0x1D, 
    // Code 033 [0x21]:
    0x80, 0x70, 0x87, 0xE0, 0xFF, 0x80, 0xFC, 0x00, 0x80, 0x0D, 
    // Code 034 [0x22]:
    0x80, 0x00, 0x00, 0x0F, 0x00, 0x00, 
    // Code 035 [0x23]:
    0x00, 0x0B, 0x00, 0x10, 0x00, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 
    // Code 036 [0x24]:
    0x03, 0x80, 0x03, 0x00, 0x07, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x38, 0x00, 0x70, 0x00, 0x60, 0x00, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x03, 
    // Code 037 [0x25]:
    0x0E, 0x00, 0x07, 0x00, 0x03, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x30, 0x00, 0x0B, 
    // Code 038 [0x26]:
    0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x03, 0xF0, 0x00, 0x70, 0x00, 0x06, 
    // Code 039 [0x27]:
    0x00, 0x18, 0x80, 0x10, 0xFC, 0x10, 0xFF, 0xF0, 0x07, 0xF0, 0x00, 0x04, 
    // Code 040 [0x28]:
    0x80, 0x08, 0x80, 0x10, 0x83, 0xF0, 0xFF, 0xF0, 0xFE, 0x00, 0x00, 0x04, 
    // Code 041 [0x29]:
    0x00, 0x03, 0x00, 0x10, 0x00, 0x70, 0x01, 0xF0, 0x07, 0xC0, 0x1F, 0x00, 0xFC, 0x00, 0xE0, 0x00, 0x00, 0x06, 
    // Code 042 [0x2a]:
    0x07, 0x00, 0x0E, 0x00, 0x3C, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0x00, 0x0B, 
    // After compressed, size = 616
};
code WORD tMonoFontDataAddr[43] = {
    0x0000, 0x0004, 0x0012, 0x0024, 0x0030, 0x003C, 0x004E, 0x005C, 0x0078, 0x0086, 0x008C, 0x0096, 0x00A0, 0x00A6, 0x00B4, 0x00D0, 
    0x00DE, 0x00E4, 0x00FE, 0x0106, 0x010E, 0x0128, 0x0136, 0x0144, 0x014A, 0x0164, 0x016C, 0x0174, 0x018E, 0x019C, 0x01B8, 0x01C6, 
    0x01CC, 0x01D6, 0x01E0, 0x01E6, 0x01F4, 0x0210, 0x021E, 0x0230, 0x023C, 0x0248, 0x025A, };


#else // No compress

#if 0 
// Mono font: Format 2: 1 word ==> 1 line
code WORD tOSDFont1[774] =
{
    // Code   0 [0x00] (CRM1_0_0):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code   1 [0x01] (CRM1_0_2):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0030, 0x0070, 0x00E0, 0x03C0, 0x0700, 0x0E00, 
    // Code   2 [0x02] (CRM1_0_3):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0070, 0x03F0, 0x0F80, 0x3E00, 0xF800, 0xE000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code   3 [0x03] (CRM1_0_4):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07F0, 0xFFF0, 0xFC10, 0x8010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 
    // Code   4 [0x04] (CRM1_0_5):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE00, 0xFFF0, 0x83F0, 0x8010, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    // Code   5 [0x05] (CRM1_0_6):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE000, 0xFC00, 0x1F00, 0x07C0, 0x01F0, 0x0070, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code   6 [0x06] (CRM1_0_7):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC000, 0xE000, 0x7000, 0x3C00, 0x0E00, 0x0700, 
    // Code   7 [0x07] (CRM1_1_1):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0x0030, 0x0030, 0x0060, 0x00E0, 0x01C0, 0x0180, 0x0380, 0x0300, 0x0700, 0x0600, 0x0E00, 0x0C00, 0x1C00, 
    // Code   8 [0x08] (CRM1_1_2):
    0x1C00, 0x3800, 0x7000, 0xE000, 0xC000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code   9 [0x09] (CRM1_1_3):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 
    // Code  10 [0x0a] (CRM1_1_4):
    0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x03F0, 0x1FF0, 0x7E10, 0xE010, 
    // Code  11 [0x0b] (CRM1_1_5):
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0xFC00, 0xFF80, 0x87E0, 0x8070, 
    // Code  12 [0x0c] (CRM1_1_6):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 
    // Code  13 [0x0d] (CRM1_1_7):
    0x0380, 0x01C0, 0x00E0, 0x0070, 0x0030, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  14 [0x0e] (CRM1_1_8):
    0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xC000, 0xC000, 0x6000, 0x7000, 0x3800, 0x1800, 0x1C00, 0x0C00, 0x0E00, 0x0600, 0x0700, 0x0300, 0x0380, 
    // Code  15 [0x0f] (CRM1_2_1):
    0x1800, 0x1800, 0x3000, 0x3000, 0x3000, 0x7000, 0x6000, 0x6000, 0x6000, 0x6000, 0xE000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xFFF0, 
    // Code  16 [0x10] (CRM1_2_2):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFF0, 
    // Code  17 [0x11] (CRM1_2_3):
    0x0030, 0x0070, 0x00E0, 0x0180, 0x0380, 0x0700, 0x0600, 0x0E00, 0x0C00, 0x1800, 0x1800, 0x1800, 0x3800, 0x3000, 0x3000, 0x3000, 0x3000, 0xFF80, 
    // Code  18 [0x12] (CRM1_2_4):
    0xC010, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 
    // Code  19 [0x13] (CRM1_2_5):
    0x8030, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 
    // Code  20 [0x14] (CRM1_2_6):
    0xC000, 0xE000, 0x7000, 0x1800, 0x1C00, 0x0E00, 0x0600, 0x0700, 0x0300, 0x0180, 0x0180, 0x0180, 0x01C0, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x1FF0, 
    // Code  21 [0x15] (CRM1_2_8):
    0x0180, 0x0180, 0x00C0, 0x00C0, 0x00C0, 0x00E0, 0x0060, 0x0060, 0x0060, 0x0060, 0x0070, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0xFFF0, 
    // Code  22 [0x16] (CRM1_3_1):
    0xFFF0, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE000, 0x6000, 0x6000, 0x6000, 0x6000, 0x7000, 0x3000, 0x3000, 0x3000, 0x1800, 0x1800, 
    // Code  23 [0x17] (CRM1_3_2):
    0xFFF0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  24 [0x18] (CRM1_3_3):
    0xFF80, 0x3000, 0x3000, 0x3000, 0x3000, 0x3800, 0x1800, 0x1800, 0x1800, 0x0C00, 0x0E00, 0x0600, 0x0700, 0x0380, 0x0180, 0x00E0, 0x0070, 0x0030, 
    // Code  25 [0x19] (CRM1_3_4):
    0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0xC010, 
    // Code  26 [0x1a] (CRM1_3_5):
    0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8030, 
    // Code  27 [0x1b] (CRM1_3_6):
    0x1FF0, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x01C0, 0x0180, 0x0180, 0x0180, 0x0300, 0x0700, 0x0600, 0x0E00, 0x1C00, 0x1800, 0x7000, 0xE000, 0xC000, 
    // Code  28 [0x1c] (CRM1_3_8):
    0xFFF0, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0030, 0x0070, 0x0060, 0x0060, 0x0060, 0x0060, 0x00E0, 0x00C0, 0x00C0, 0x00C0, 0x0180, 0x0180, 
    // Code  29 [0x1d] (CRM1_4_1):
    0x1C00, 0x0C00, 0x0E00, 0x0600, 0x0700, 0x0300, 0x0380, 0x0180, 0x01C0, 0x00E0, 0x0060, 0x0030, 0x0030, 0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  30 [0x1e] (CRM1_4_2):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xC000, 0xE000, 0x7000, 0x3800, 0x1C00, 
    // Code  31 [0x1f] (CRM1_4_3):
    0x0010, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  32 [0x20] (CRM1_4_4):
    0xE010, 0x7E10, 0x1FF0, 0x03F0, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 
    // Code  33 [0x21] (CRM1_4_5):
    0x8070, 0x87E0, 0xFF80, 0xFC00, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    // Code  34 [0x22] (CRM1_4_6):
    0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  35 [0x23] (CRM1_4_7):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0x0030, 0x0070, 0x00E0, 0x01C0, 0x0380, 
    // Code  36 [0x24] (CRM1_4_8):
    0x0380, 0x0300, 0x0700, 0x0600, 0x0E00, 0x0C00, 0x1C00, 0x1800, 0x3800, 0x7000, 0x6000, 0xC000, 0xC000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  37 [0x25] (CRM1_5_2):
    0x0E00, 0x0700, 0x03C0, 0x00E0, 0x0070, 0x0030, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  38 [0x26] (CRM1_5_3):
    0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xE000, 0xF800, 0x3E00, 0x0F80, 0x03F0, 0x0070, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  39 [0x27] (CRM1_5_4):
    0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x8010, 0xFC10, 0xFFF0, 0x07F0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  40 [0x28] (CRM1_5_5):
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8010, 0x83F0, 0xFFF0, 0xFE00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  41 [0x29] (CRM1_5_6):
    0x0000, 0x0000, 0x0000, 0x0000, 0x0010, 0x0070, 0x01F0, 0x07C0, 0x1F00, 0xFC00, 0xE000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    // Code  42 [0x2a] (CRM1_5_7):
    0x0700, 0x0E00, 0x3C00, 0x7000, 0xE000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

#else
// Mono font: Format 2: 1 byte ==> 1 line
code BYTE tCRMMonoFont[1161] =
{ 
  // Code   0 [0x00] (CRM1_0_0):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code   1 [0x01] (CRM1_0_2):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x00, 0x0E, 0x3C, 0x00, 0x70, 0xE0,  
  // Code   2 [0x02] (CRM1_0_3):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x3F, 0xF8, 0xF3, 0xE0, 0x80, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code   3 [0x03] (CRM1_0_4):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xC1, 0x08, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01,  
  // Code   4 [0x04] (CRM1_0_5):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xE0, 0x8F, 0xFF, 0x3F, 0x88, 0x01, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00,  
  // Code   5 [0x05] (CRM1_0_6):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x1F, 0xC0, 0xF0, 0x00, 0x7C, 0x1F, 0x00, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code   6 [0x06] (CRM1_0_7):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x37, 0x00, 0xC0, 0x00, 0xE0, 0x70,  
  // Code   7 [0x07] (CRM1_1_1):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x03, 0x06, 0x00, 0x0E, 0x1C, 0x00, 0x18, 0x38, 0x00, 0x30, 0x70, 0x00, 0x60, 0xE0, 0x10, 0xC0, 0xC0,  
  // Code   8 [0x08] (CRM1_1_2):
  0x31, 0xC0, 0x80, 0xE7, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code   9 [0x09] (CRM1_1_3):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,  
  // Code  10 [0x0a] (CRM1_1_4):
  0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x10, 0x3F, 0xFF, 0xE7, 0xE1, 0x01,  
  // Code  11 [0x0b] (CRM1_1_5):
  0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0xFF, 0xC0, 0xF8, 0x88, 0x7E, 0x07,  
  // Code  12 [0x0c] (CRM1_1_6):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,  
  // Code  13 [0x0d] (CRM1_1_7):
  0x00, 0x38, 0x1C, 0x00, 0x0E, 0x07, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  14 [0x0e] (CRM1_1_8):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x6C, 0x00, 0x00, 0x37, 0x00, 0x80, 0x11, 0x80, 0xC0, 0x00, 0xC0, 0xE0, 0x00, 0x60, 0x70, 0x00, 0x30, 0x38,  
  // Code  15 [0x0f] (CRM1_2_1):
  0x11, 0x80, 0x80, 0x33, 0x00, 0x00, 0x73, 0x00, 0x00, 0x66, 0x00, 0x00, 0x66, 0x00, 0x00, 0xCE, 0x00, 0x00, 0xCC, 0x00, 0x00, 0xCC, 0x00, 0x00, 0xFC, 0x00, 0xFF,  
  // Code  16 [0x10] (CRM1_2_2):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xFF,  
  // Code  17 [0x11] (CRM1_2_3):
  0x00, 0x03, 0x07, 0x00, 0x0E, 0x18, 0x00, 0x38, 0x70, 0x00, 0x60, 0xE0, 0x10, 0xC0, 0x80, 0x11, 0x80, 0x80, 0x33, 0x80, 0x00, 0x33, 0x00, 0x00, 0xF3, 0x00, 0xF8,  
  // Code  18 [0x12] (CRM1_2_4):
  0x0C, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,  
  // Code  19 [0x13] (CRM1_2_5):
  0x88, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,  
  // Code  20 [0x14] (CRM1_2_6):
  0xEC, 0x00, 0x00, 0x17, 0x00, 0x80, 0x01, 0xC0, 0xE0, 0x00, 0x60, 0x70, 0x00, 0x30, 0x18, 0x00, 0x18, 0x18, 0x00, 0x1C, 0x0C, 0x00, 0x0C, 0x0C, 0x10, 0x0C, 0xFF,  
  // Code  21 [0x15] (CRM1_2_8):
  0x00, 0x18, 0x18, 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0E, 0x00, 0x06, 0x06, 0x00, 0x06, 0x06, 0x00, 0x07, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0xF0, 0x03, 0xFF,  
  // Code  22 [0x16] (CRM1_3_1):
  0xCF, 0xFF, 0x00, 0xCC, 0x00, 0x00, 0xCC, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x66, 0x00, 0x00, 0x66, 0x00, 0x00, 0x37, 0x00, 0x00, 0x33, 0x00, 0x00, 0x11, 0x80, 0x80,  
  // Code  23 [0x17] (CRM1_3_2):
  0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  24 [0x18] (CRM1_3_3):
  0x3F, 0xF8, 0x00, 0x33, 0x00, 0x00, 0x33, 0x00, 0x80, 0x11, 0x80, 0x80, 0x01, 0x80, 0xC0, 0x00, 0xE0, 0x60, 0x00, 0x70, 0x38, 0x00, 0x18, 0x0E, 0x00, 0x07, 0x03,  
  // Code  25 [0x19] (CRM1_3_4):
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x01,  
  // Code  26 [0x1a] (CRM1_3_5):
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x03,  
  // Code  27 [0x1b] (CRM1_3_6):
  0x01, 0xFF, 0x0C, 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x1C, 0x00, 0x18, 0x18, 0x00, 0x18, 0x30, 0x00, 0x70, 0x60, 0x10, 0xE0, 0xC0, 0x71, 0x80, 0x00, 0xCE, 0x00, 0x00,  
  // Code  28 [0x1c] (CRM1_3_8):
  0x0F, 0xFF, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x07, 0x00, 0x06, 0x06, 0x00, 0x06, 0x06, 0x00, 0x0E, 0x0C, 0x00, 0x0C, 0x0C, 0x00, 0x18, 0x18,  
  // Code  29 [0x1d] (CRM1_4_1):
  0x01, 0xC0, 0xC0, 0x00, 0xE0, 0x60, 0x00, 0x70, 0x30, 0x00, 0x38, 0x18, 0x00, 0x1C, 0x0E, 0x00, 0x06, 0x03, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  30 [0x1e] (CRM1_4_2):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x13, 0x80, 0xC0,  
  // Code  31 [0x1f] (CRM1_4_3):
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  32 [0x20] (CRM1_4_4):
  0x7E, 0x01, 0xE1, 0x01, 0xFF, 0x3F, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01,  
  // Code  33 [0x21] (CRM1_4_5):
  0x88, 0x07, 0x7E, 0xFF, 0xF8, 0xC0, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00,  
  // Code  34 [0x22] (CRM1_4_6):
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  35 [0x23] (CRM1_4_7):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x07, 0x0E, 0x00, 0x1C, 0x38,  
  // Code  36 [0x24] (CRM1_4_8):
  0x00, 0x38, 0x30, 0x00, 0x70, 0x60, 0x00, 0xE0, 0xC0, 0x11, 0xC0, 0x80, 0x73, 0x80, 0x00, 0xC6, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  37 [0x25] (CRM1_5_2):
  0x00, 0xE0, 0x70, 0x00, 0x3C, 0x0E, 0x00, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  38 [0x26] (CRM1_5_3):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE8, 0x00, 0x00, 0x3F, 0x80, 0xE0, 0x00, 0xF8, 0x3F, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  39 [0x27] (CRM1_5_4):
  0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x80, 0x01, 0x01, 0xFF, 0xC1, 0xFF, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  40 [0x28] (CRM1_5_5):
  0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x01, 0xF8, 0x3F, 0xFF, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  41 [0x29] (CRM1_5_6):
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x00, 0x1F, 0x7C, 0xF1, 0xF0, 0xC0, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
  // Code  42 [0x2a] (CRM1_5_7):
  0x00, 0x70, 0xE0, 0x73, 0xC0, 0x00, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif 

#endif

code BYTE tCRM4ColorFont[] =
{
};
code BYTE tCRM8ColorFont[] =
{
};



 BYTE code  tCRMPalette[] =
{
		 // 2 color [0x00]  CRM1_0_0
		 CP256_RGB_C( 255, 255, 255), 
		 CP256_RGB_C(   0,   0,   0), 
};



 BYTE code strCRMWindow[6][11]=
{
	{	 CRM(0x00), CRM(0x00), CRM(0x01), CRM(0x02), CRM(0x03), CRM(0x04), CRM(0x05), CRM(0x06), 
		 CRM(0x00), CRM(0x00), 
	 0},
	{	 CRM(0x00), CRM(0x07), CRM(0x08), CRM(0x09), CRM(0x0A), CRM(0x0B), CRM(0x0C), CRM(0x0D), 
		 CRM(0x0E), CRM(0x00), 
	 0},
	{	 CRM(0x00), CRM(0x0F), CRM(0x10), CRM(0x11), CRM(0x12), CRM(0x13), CRM(0x14), CRM(0x10), 
		 CRM(0x15), CRM(0x00), 
	 0},
	{	 CRM(0x00), CRM(0x16), CRM(0x17), CRM(0x18), CRM(0x19), CRM(0x1A), CRM(0x1B), CRM(0x17), 
		 CRM(0x1C), CRM(0x00), 
	 0},
	{	 CRM(0x00), CRM(0x1D), CRM(0x1E), CRM(0x1F), CRM(0x20), CRM(0x21), CRM(0x22), CRM(0x23), 
		 CRM(0x24), CRM(0x00), 
	 0},
	{	 CRM(0x00), CRM(0x00), CRM(0x25), CRM(0x26), CRM(0x27), CRM(0x28), CRM(0x29), CRM(0x2A), 
		 CRM(0x00), CRM(0x00), 
	 0}
};
