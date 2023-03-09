
#include "board.h"

#if 1// Enable_Gamma
BYTE code tblGamma20[] =
{
	0xFC, 0x00, 0x00, 0x01, 0x02,
	0xFF, 0x03, 0x04, 0x05, 0x06,
	0xFF, 0x07, 0x08, 0x09, 0x0A,
	0xFF, 0x0B, 0x0C, 0x0D, 0x0E,
	0xFF, 0x0F, 0x10, 0x11, 0x12,
	0xAB, 0x13, 0x14, 0x15, 0x16,
	0xAA, 0x17, 0x18, 0x19, 0x1A,
	0xAA, 0x1B, 0x1C, 0x1D, 0x1E,
	0xAA, 0x1F, 0x20, 0x21, 0x22,
	0xAA, 0x23, 0x24, 0x25, 0x26,
	0x5A, 0x27, 0x28, 0x29, 0x2A,
	0x55, 0x2B, 0x2C, 0x2D, 0x2E,
	0x85, 0x2F, 0x30, 0x31, 0x31,
	0x05, 0x32, 0x33, 0x34, 0x35,
	0xF0, 0x36, 0x37, 0x37, 0x38,
	0xFF, 0x39, 0x3A, 0x3B, 0x3C,
	0xAB, 0x3D, 0x3E, 0x3F, 0x40,
	0xFE, 0x41, 0x42, 0x43, 0x44,
	0x00, 0x46, 0x47, 0x48, 0x49,
	0x95, 0x4A, 0x4B, 0x4C, 0x4D,
	0x3A, 0x4E, 0x4F, 0x50, 0x52,
	0x50, 0x53, 0x54, 0x55, 0x56,
	0xAA, 0x57, 0x58, 0x59, 0x5A,
	0xAA, 0x5B, 0x5C, 0x5D, 0x5E,
	0xAA, 0x5F, 0x60, 0x61, 0x62,
	0x5A, 0x63, 0x64, 0x65, 0x66,
	0x05, 0x67, 0x68, 0x69, 0x6A,
	0xF0, 0x6B, 0x6C, 0x6C, 0x6D,
	0xAF, 0x6E, 0x6F, 0x70, 0x71,
	0x5A, 0x72, 0x73, 0x74, 0x75,
	0x05, 0x76, 0x77, 0x78, 0x79,
	0xC0, 0x7A, 0x7B, 0x7C, 0x7C,
	0x1B, 0x7D, 0x7E, 0x7F, 0x80,
	0x0F, 0x80, 0x81, 0x83, 0x84,
	0x03, 0x84, 0x86, 0x87, 0x88,
	0x00, 0x89, 0x8A, 0x8B, 0x8C,
	0x00, 0x8D, 0x8E, 0x8F, 0x90,
	0x00, 0x91, 0x92, 0x93, 0x94,
	0x00, 0x95, 0x96, 0x97, 0x98,
	0x45, 0x99, 0x9A, 0x9B, 0x9C,
	0x55, 0x9D, 0x9E, 0x9F, 0xA0,
	0xA9, 0xA1, 0xA2, 0xA3, 0xA4,
	0xFA, 0xA5, 0xA6, 0xA7, 0xA8,
	0x43, 0xA9, 0xAB, 0xAC, 0xAD,
	0x55, 0xAE, 0xAF, 0xB0, 0xB1,
	0x55, 0xB2, 0xB3, 0xB4, 0xB5,
	0x55, 0xB6, 0xB7, 0xB8, 0xB9,
	0x01, 0xBA, 0xBB, 0xBC, 0xBD,
	0xF0, 0xBE, 0xBF, 0xBF, 0xC0,
	0xAA, 0xC1, 0xC2, 0xC3, 0xC4,
	0xFA, 0xC5, 0xC6, 0xC7, 0xC8,
	0x0F, 0xC9, 0xCA, 0xCC, 0xCD,
	0xA5, 0xCE, 0xCF, 0xD0, 0xD1,
	0x93, 0xD2, 0xD4, 0xD5, 0xD6,
	0x0E, 0xD7, 0xD8, 0xDA, 0xDB,
	0x55, 0xDC, 0xDD, 0xDE, 0xDF,
	0xEA, 0xE0, 0xE1, 0xE2, 0xE3,
	0xFF, 0xE4, 0xE5, 0xE6, 0xE7,
	0xFF, 0xE8, 0xE9, 0xEA, 0xEB,
	0xAF, 0xEC, 0xED, 0xEE, 0xEF,
	0x15, 0xF0, 0xF1, 0xF2, 0xF3,
	0x10, 0xF4, 0xF5, 0xF6, 0xF7,
	0x00, 0xF8, 0xF9, 0xFA, 0xFB,
	0x00, 0xFC, 0xFD, 0xFE, 0xFF,
};
BYTE code tblGamma22[] =
{
	0x18, 0x00, 0x00, 0x01, 0x02,
	0xC7, 0x02, 0x03, 0x04, 0x04,
	0xB2, 0x05, 0x06, 0x06, 0x07,
	0x6D, 0x08, 0x08, 0x09, 0x0A,
	0x18, 0x0B, 0x0B, 0x0C, 0x0D,
	0xC7, 0x0D, 0x0E, 0x0F, 0x0F,
	0xB2, 0x10, 0x11, 0x11, 0x12,
	0x6D, 0x13, 0x13, 0x14, 0x15,
	0x18, 0x16, 0x16, 0x17, 0x18,
	0xC7, 0x18, 0x19, 0x1A, 0x1A,
	0xB2, 0x1B, 0x1C, 0x1C, 0x1D,
	0x6D, 0x1E, 0x1E, 0x1F, 0x20,
	0x88, 0x21, 0x21, 0x22, 0x22,
	0xC0, 0x23, 0x24, 0x25, 0x25,
	0x16, 0x26, 0x27, 0x28, 0x29,
	0xAC, 0x2A, 0x2A, 0x2B, 0x2C,
	0xC5, 0x2D, 0x2E, 0x2F, 0x2F,
	0x5A, 0x30, 0x31, 0x32, 0x33,
	0xF0, 0x34, 0x35, 0x35, 0x36,
	0x5A, 0x37, 0x38, 0x39, 0x3A,
	0x01, 0x3B, 0x3C, 0x3D, 0x3E,
	0xFF, 0x3E, 0x3F, 0x40, 0x41,
	0x3F, 0x42, 0x43, 0x44, 0x46,
	0x00, 0x47, 0x48, 0x49, 0x4A,
	0x94, 0x4B, 0x4C, 0x4D, 0x4E,
	0xFE, 0x4F, 0x50, 0x51, 0x52,
	0x53, 0x53, 0x55, 0x56, 0x57,
	0x55, 0x58, 0x59, 0x5A, 0x5B,
	0xAA, 0x5C, 0x5D, 0x5E, 0x5F,
	0xAA, 0x60, 0x61, 0x62, 0x63,
	0xAA, 0x64, 0x65, 0x66, 0x67,
	0xA9, 0x68, 0x69, 0x6A, 0x6B,
	0x55, 0x6C, 0x6D, 0x6E, 0x6F,
	0x55, 0x70, 0x71, 0x72, 0x73,
	0x55, 0x74, 0x75, 0x76, 0x77,
	0x55, 0x78, 0x79, 0x7A, 0x7B,
	0x15, 0x7C, 0x7D, 0x7E, 0x7F,
	0x3F, 0x7F, 0x80, 0x81, 0x83,
	0x90, 0x84, 0x85, 0x86, 0x87,
	0xFA, 0x88, 0x89, 0x8A, 0x8B,
	0x50, 0x8D, 0x8E, 0x8F, 0x90,
	0xFA, 0x91, 0x92, 0x93, 0x94,
	0x53, 0x95, 0x97, 0x98, 0x99,
	0xFA, 0x9A, 0x9B, 0x9C, 0x9D,
	0x94, 0x9F, 0xA0, 0xA1, 0xA2,
	0x43, 0xA3, 0xA5, 0xA6, 0xA7,
	0x8E, 0xA8, 0xA9, 0xAB, 0xAC,
	0x4E, 0xAD, 0xAE, 0xB0, 0xB1,
	0xE9, 0xB2, 0xB3, 0xB4, 0xB5,
	0x50, 0xB7, 0xB8, 0xB9, 0xBA,
	0xE9, 0xBB, 0xBC, 0xBD, 0xBE,
	0xFF, 0xBF, 0xC0, 0xC1, 0xC2,
	0xE4, 0xC4, 0xC5, 0xC6, 0xC7,
	0x24, 0xC9, 0xCA, 0xCB, 0xCD,
	0x49, 0xCE, 0xCF, 0xD1, 0xD2,
	0xE7, 0xD3, 0xD5, 0xD6, 0xD7,
	0x4D, 0xD9, 0xDA, 0xDC, 0xDD,
	0x9E, 0xDE, 0xDF, 0xE1, 0xE2,
	0x93, 0xE3, 0xE5, 0xE6, 0xE7,
	0x43, 0xE8, 0xEA, 0xEB, 0xEC,
	0xEA, 0xED, 0xEE, 0xEF, 0xF0,
	0x83, 0xF1, 0xF3, 0xF4, 0xF5,
	0x4E, 0xF6, 0xF7, 0xF9, 0xFA,
	0x39, 0xFB, 0xFC, 0xFD, 0xFF,
};

BYTE code tblGamma24[] =
{
	0x88, 0x00, 0x00, 0x01, 0x01,
	0x88, 0x02, 0x02, 0x03, 0x03,
	0x88, 0x04, 0x04, 0x05, 0x05,
	0x88, 0x06, 0x06, 0x07, 0x07,
	0x88, 0x08, 0x08, 0x09, 0x09,
	0x88, 0x0A, 0x0A, 0x0B, 0x0B,
	0x88, 0x0C, 0x0C, 0x0D, 0x0D,
	0x88, 0x0E, 0x0E, 0x0F, 0x0F,
	0x88, 0x10, 0x10, 0x11, 0x11,
	0xDD, 0x12, 0x12, 0x13, 0x13,
	0xDD, 0x14, 0x14, 0x15, 0x15,
	0xDD, 0x16, 0x16, 0x17, 0x17,
	0x8D, 0x18, 0x18, 0x19, 0x19,
	0x6C, 0x1A, 0x1A, 0x1B, 0x1C,
	0x6C, 0x1D, 0x1D, 0x1E, 0x1F,
	0xB0, 0x20, 0x21, 0x21, 0x22,
	0xC1, 0x23, 0x24, 0x25, 0x25,
	0x06, 0x26, 0x27, 0x28, 0x29,
	0x1B, 0x29, 0x2A, 0x2B, 0x2C,
	0x6C, 0x2D, 0x2D, 0x2E, 0x2F,
	0xB0, 0x30, 0x31, 0x31, 0x32,
	0x16, 0x33, 0x34, 0x35, 0x36,
	0xAC, 0x37, 0x37, 0x38, 0x39,
	0x16, 0x3A, 0x3B, 0x3C, 0x3D,
	0xF0, 0x3E, 0x3F, 0x3F, 0x40,
	0x3F, 0x41, 0x42, 0x43, 0x45,
	0x00, 0x46, 0x47, 0x48, 0x49,
	0x95, 0x4A, 0x4B, 0x4C, 0x4D,
	0x3A, 0x4E, 0x4F, 0x50, 0x52,
	0x90, 0x53, 0x54, 0x55, 0x56,
	0xFE, 0x57, 0x58, 0x59, 0x5A,
	0x03, 0x5B, 0x5D, 0x5E, 0x5F,
	0x50, 0x60, 0x61, 0x62, 0x63,
	0x55, 0x64, 0x65, 0x66, 0x67,
	0xA5, 0x68, 0x69, 0x6A, 0x6B,
	0xAA, 0x6C, 0x6D, 0x6E, 0x6F,
	0xFE, 0x70, 0x71, 0x72, 0x73,
	0x0F, 0x74, 0x75, 0x77, 0x78,
	0x50, 0x79, 0x7A, 0x7B, 0x7C,
	0x15, 0x7D, 0x7E, 0x7F, 0x80,
	0xA4, 0x81, 0x82, 0x83, 0x84,
	0x93, 0x85, 0x87, 0x88, 0x89,
	0x43, 0x8A, 0x8C, 0x8D, 0x8E,
	0x0E, 0x8F, 0x90, 0x92, 0x93,
	0x39, 0x94, 0x95, 0x96, 0x98,
	0x39, 0x99, 0x9A, 0x9B, 0x9D,
	0x39, 0x9E, 0x9F, 0xA0, 0xA2,
	0x4E, 0xA3, 0xA4, 0xA6, 0xA7,
	0x22, 0xA8, 0xAA, 0xAB, 0xAD,
	0x39, 0xAE, 0xAF, 0xB0, 0xB2,
	0x4E, 0xB3, 0xB4, 0xB6, 0xB7,
	0x4E, 0xB8, 0xB9, 0xBB, 0xBC,
	0x3A, 0xBD, 0xBE, 0xBF, 0xC1,
	0x34, 0xC2, 0xC3, 0xC4, 0xC6,
	0xD2, 0xC7, 0xC9, 0xCA, 0xCB,
	0xC9, 0xCD, 0xCE, 0xD0, 0xD1,
	0x21, 0xD3, 0xD5, 0xD6, 0xD8,
	0x76, 0xD9, 0xDB, 0xDC, 0xDE,
	0x22, 0xDF, 0xE1, 0xE2, 0xE4,
	0x9D, 0xE5, 0xE6, 0xE8, 0xE9,
	0xE4, 0xEB, 0xEC, 0xED, 0xEE,
	0x24, 0xF0, 0xF1, 0xF2, 0xF4,
	0x8D, 0xF5, 0xF6, 0xF8, 0xF9,
	0x27, 0xFA, 0xFC, 0xFD, 0xFF,
};
#else
BYTE code tblGamma20[] = {0};
BYTE code tblGamma22[] = {0};
BYTE code tblGamma24[] = {0};
#endif

