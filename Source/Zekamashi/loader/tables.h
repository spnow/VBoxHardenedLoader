/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2014 - 2016
*
*  TITLE:       TABLES.H
*
*  VERSION:     1.60
*
*  DATE:        29 Apr 2016
*
*  Patch tables for supported VirtualBox versions.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

typedef struct _TABLE_DESC {
    LPWSTR  lpDescription;
    PVOID   DDTablePointer;
    ULONG   DDTableSize;
    PVOID   VMMTablePointer;
    ULONG   VMMTableSize;
} TABLE_DESC, *PTABLE_DESC;

//5.0.16
unsigned char TsmiPatchDataValue_5016[189] = {
    0x84, 0x15, 0x03, 0x00, 0x02, 0x51, 0x52, 0x7D, 0x17, 0x03, 0x00, 0x02, 0x51, 0x52, 0xE4, 0x19,
    0x03, 0x00, 0x02, 0x51, 0x52, 0x37, 0x1B, 0x03, 0x00, 0x02, 0x51, 0x52, 0x62, 0x1E, 0x03, 0x00,
    0x02, 0x51, 0x52, 0x04, 0x20, 0x03, 0x00, 0x02, 0x51, 0x52, 0x38, 0x21, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x40, 0xB7, 0x03, 0x00, 0x02, 0x51, 0x52, 0x1D, 0x76, 0x11, 0x00, 0x02, 0x51, 0x52, 0x80,
    0xD5, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x88, 0xA6, 0x12, 0x00,
    0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x58, 0xAA, 0x12, 0x00, 0x08, 0x4D, 0x61,
    0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x08, 0xAC, 0x12, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63,
    0x61, 0x6C, 0x52, 0x43, 0x7C, 0x12, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65,
    0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74,
    0x68, 0x00, 0x00, 0xB6, 0xBE, 0x00, 0x00, 0x02, 0xDE, 0x10, 0xE6, 0x05, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0x06, 0xE1, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x14, 0xE1, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x81,
    0x21, 0x04, 0x00, 0x02, 0xDE, 0x10, 0x95, 0x21, 0x04, 0x00, 0x02, 0xCA, 0xC0
};

//5.0.16 
unsigned char TsmiPatchDataValueVMM_5016[27] = {
    0x25, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x2C, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x34, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00
};
