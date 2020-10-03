// Time Stamp : 2019-02-28 21:06:29

//VERNUM [011b001b] [00100203]

//#define	SEL_MODEL			0
//#define	SELECT_VENDOR		1
//#define	SELECT_ACT			2
//#define	SELECT_GYRO			3
//#define	MASTER_SLAVE		0
//#define FRA_ENABLE			0

#define SERVO_ON_CHECKSUM_COMMAND_DMA_0_1_2_3_0_0			0x00041834
#define SERVO_ON_CHECKSUM_COMMAND_DMB_0_1_2_3_0_0			0x0004186e

#define LC898124EP3_SERVO_ON_DMA_ByteSize_0_1_2_3_0_0		0x0054
#define LC898124EP3_SERVO_ON_DMA_CheckSum_0_1_2_3_0_0		0x08006479

#define LC898124EP3_SERVO_ON_DMB_ByteSize_0_1_2_3_0_0		0x03C8
#define LC898124EP3_SERVO_ON_DMB_CheckSum_0_1_2_3_0_0		0x3648F6AC

#define LC898124EP3_SERVO_ON_PMCheckSum_0_1_2_3_0_0		0x0003E5C0
#define LC898124EP3_SERVO_ON_PMSize_0_1_2_3_0_0			680

const unsigned char LC898124EP3_SERVO_ON_DM_0_1_2_3_0_0[] = {
0x20, 0xC0, 0x00, 0x80, 0x06, 0x30,
0x20, 0xC4, 0x00, 0x80, 0x06, 0x34,
0x20, 0xC8, 0x00, 0x80, 0x06, 0x38,
0x20, 0xCC, 0x00, 0x80, 0x06, 0x3c,
0x20, 0xD0, 0x00, 0x80, 0x06, 0x40,
0x20, 0xD4, 0x00, 0x80, 0x06, 0x44,
0x20, 0xD8, 0x00, 0x80, 0x06, 0x48,
0x20, 0xDC, 0x00, 0x80, 0x06, 0x4c,
0x20, 0xE0, 0x00, 0x80, 0x06, 0x4c,
0x20, 0xE4, 0x00, 0x80, 0x06, 0x50,
0x20, 0xE8, 0x00, 0x80, 0x06, 0x54,
0x20, 0xEC, 0x00, 0x80, 0x06, 0x58,
0x20, 0xF0, 0x00, 0x80, 0x06, 0x58,
0x20, 0xF4, 0x00, 0x80, 0x06, 0x5c,
0x20, 0xF8, 0x00, 0x80, 0x06, 0x5c,
0x20, 0xFC, 0x00, 0x80, 0x06, 0x2c,
0x27, 0x68, 0x00, 0x00, 0x00, 0x05,
0x27, 0x6C, 0x80, 0x00, 0x00, 0x01,
0x27, 0x70, 0x7f, 0xff, 0xff, 0xff,
0x27, 0x74, 0x80, 0x00, 0x00, 0x01,
0x27, 0x78, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0x00, 0x01, 0x1b, 0x00, 0x1b,
0xA0, 0x04, 0x00, 0x10, 0x02, 0x03,
0xA0, 0x90, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0x94, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0x98, 0x80, 0x00, 0x00, 0x01,
0xA0, 0xA4, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xAC, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xB0, 0x04, 0x0c, 0x37, 0x13,
0xA0, 0xB4, 0x8a, 0xdf, 0xbd, 0x3f,
0xA0, 0xB8, 0x6b, 0x7b, 0xa9, 0x6d,
0xA0, 0xBC, 0x76, 0x5b, 0x66, 0xab,
0xA0, 0xC0, 0x82, 0xa1, 0x75, 0xb3,
0xA0, 0xC4, 0x7b, 0x9d, 0x91, 0x2b,
0xA0, 0xC8, 0x7e, 0x3f, 0x06, 0xdd,
0xA0, 0xD8, 0x72, 0x14, 0x82, 0xbf,
0xA0, 0xDC, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xE4, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xEC, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xF0, 0x7f, 0xff, 0xff, 0xff,
0xA0, 0xF4, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x00, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x14, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x18, 0x00, 0x28, 0x6f, 0xa3,
0xA1, 0x1C, 0xcc, 0x16, 0x08, 0x07,
0xA1, 0x20, 0x00, 0x50, 0xdf, 0x45,
0xA1, 0x24, 0x73, 0x48, 0x39, 0x6d,
0xA1, 0x28, 0x00, 0x28, 0x6f, 0xa3,
0xA1, 0x2C, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x30, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x34, 0x80, 0x00, 0x00, 0x01,
0xA1, 0x40, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x48, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x4C, 0x04, 0x0c, 0x37, 0x13,
0xA1, 0x50, 0x8a, 0xdf, 0xbd, 0x3f,
0xA1, 0x54, 0x6b, 0x7b, 0xa9, 0x6d,
0xA1, 0x58, 0x76, 0x5b, 0x66, 0xab,
0xA1, 0x5C, 0x82, 0xa1, 0x75, 0xb3,
0xA1, 0x60, 0x7b, 0x9d, 0x91, 0x2b,
0xA1, 0x64, 0x7e, 0x3f, 0x06, 0xdd,
0xA1, 0x74, 0x5a, 0x9d, 0xf7, 0xab,
0xA1, 0x78, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x7C, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x80, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x84, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x88, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x8C, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x90, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0x9C, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xB0, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xB4, 0x00, 0x1c, 0x8d, 0x2d,
0xA1, 0xB8, 0xca, 0x3d, 0x97, 0xb5,
0xA1, 0xBC, 0x00, 0x39, 0x1a, 0x59,
0xA1, 0xC0, 0x75, 0x50, 0x33, 0x99,
0xA1, 0xC4, 0x00, 0x1c, 0x8d, 0x2d,
0xA1, 0xC8, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xCC, 0x80, 0x00, 0x00, 0x01,
0xA1, 0xD0, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xD4, 0x80, 0x00, 0x00, 0x01,
0xA1, 0xD8, 0x38, 0x00, 0x00, 0x00,
0xA1, 0xDC, 0xc8, 0x00, 0x00, 0x00,
0xA1, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xE4, 0x80, 0x00, 0x00, 0x01,
0xA1, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0xA1, 0xEC, 0x80, 0x00, 0x00, 0x01,
0xA1, 0xF0, 0x38, 0x00, 0x00, 0x00,
0xA1, 0xF4, 0xc8, 0x00, 0x00, 0x00,
0xA1, 0xF8, 0x02, 0x06, 0x00, 0x01,
0xA1, 0xFC, 0x00, 0x01, 0x01, 0x00,
0xA2, 0x00, 0x01, 0x00, 0x02, 0x06,
0xA2, 0x04, 0x00, 0x12, 0x74, 0x74,
0xA2, 0x14, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0x1C, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0x6C, 0x00, 0x07, 0xff, 0xff,
0xA2, 0x70, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0x78, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0x7C, 0x3e, 0x70, 0x59, 0x2b,
0xA2, 0x80, 0xc5, 0x34, 0x72, 0xdb,
0xA2, 0x84, 0x6f, 0x51, 0xae, 0x5d,
0xA2, 0x88, 0x3d, 0x26, 0x06, 0xa1,
0xA2, 0x8C, 0xad, 0x72, 0xde, 0x6b,
0xA2, 0x90, 0x7f, 0xf6, 0xdd, 0x87,
0xA2, 0x94, 0x52, 0x96, 0x44, 0x0d,
0xA2, 0x98, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0xA0, 0x7f, 0xfe, 0x20, 0x00,
0xA2, 0xA4, 0x0c, 0xdc, 0x61, 0x39,
0xA2, 0xA8, 0x00, 0xe2, 0xd1, 0x41,
0xA2, 0xAC, 0x7e, 0x3a, 0x5d, 0x7d,
0xA2, 0xB0, 0x00, 0xe2, 0xd1, 0x41,
0xA2, 0xB4, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0xB8, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0xBC, 0x5f, 0xfc, 0x88, 0x91,
0xA2, 0xC0, 0x16, 0x22, 0xf6, 0x0f,
0xA2, 0xC4, 0x53, 0xba, 0x13, 0xe3,
0xA2, 0xC8, 0x16, 0x22, 0xf6, 0x0f,
0xA2, 0xCC, 0x3f, 0xff, 0xff, 0xff,
0xA2, 0xD0, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0xD8, 0x7f, 0xff, 0xff, 0xff,
0xA2, 0xDC, 0x3e, 0x70, 0x59, 0x2b,
0xA2, 0xE0, 0xc5, 0x34, 0x72, 0xdb,
0xA2, 0xE4, 0x6f, 0x51, 0xae, 0x5d,
0xA2, 0xE8, 0x3d, 0x26, 0x06, 0xa1,
0xA2, 0xEC, 0xad, 0x72, 0xde, 0x6b,
0xA2, 0xF0, 0x7f, 0xf6, 0xdd, 0x87,
0xA2, 0xF4, 0x52, 0x96, 0x44, 0x0d,
0xA2, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0xA3, 0x00, 0x7f, 0xfe, 0x20, 0x00,
0xA3, 0x04, 0x0c, 0xdc, 0x61, 0x39,
0xA3, 0x08, 0x00, 0xe2, 0xd1, 0x41,
0xA3, 0x0C, 0x7e, 0x3a, 0x5d, 0x7d,
0xA3, 0x10, 0x00, 0xe2, 0xd1, 0x41,
0xA3, 0x14, 0x7f, 0xff, 0xff, 0xff,
0xA3, 0x18, 0x7f, 0xff, 0xff, 0xff,
0xA3, 0x1C, 0x5f, 0xfc, 0x88, 0x91,
0xA3, 0x20, 0x16, 0x22, 0xf6, 0x0f,
0xA3, 0x24, 0x53, 0xba, 0x13, 0xe3,
0xA3, 0x28, 0x16, 0x22, 0xf6, 0x0f,
0xA3, 0x2C, 0x3f, 0xff, 0xff, 0xff,
0xA3, 0x38, 0x01, 0x00, 0x03, 0x01,
0xA3, 0x3C, 0x01, 0x00, 0x03, 0x01,
0xA3, 0x40, 0x00, 0x0b, 0x6a, 0x7b,
0xA3, 0x44, 0x7f, 0xe9, 0x2b, 0x09,
0xA3, 0x48, 0x00, 0x0b, 0x6a, 0x7b,
0xA3, 0x60, 0x28, 0x00, 0x00, 0x00,
0xA3, 0x64, 0x0c, 0x99, 0x97, 0x19,
0xA3, 0x68, 0x0a, 0xcc, 0xca, 0xa8,
0xA3, 0x6C, 0x0e, 0x66, 0x63, 0x8a,
0xA3, 0x70, 0x7f, 0xff, 0xff, 0xff,
0xA3, 0x74, 0x7f, 0xff, 0xff, 0xff,
0xA3, 0xF4, 0x00, 0x64, 0x00, 0x05,
0xA4, 0x0C, 0x00, 0x00, 0x02, 0xd8,
0xA4, 0x24, 0x00, 0x00, 0x02, 0xfc,
0xA4, 0x34, 0x80, 0x00, 0x00, 0x01,
0xA4, 0x38, 0x7f, 0xff, 0xff, 0xff,
0xA4, 0x3C, 0x7f, 0xff, 0xff, 0xff,
0xA4, 0x44, 0x00, 0x30, 0x77, 0xae,
0xA4, 0x48, 0x1c, 0x66, 0x20, 0x7e,
0xA4, 0x4C, 0x00, 0x00, 0x00, 0x1e,
0xA4, 0x50, 0x00, 0x00, 0x00, 0x01,
0xA4, 0x54, 0x00, 0x04, 0x00, 0x00,
0xA4, 0x58, 0x00, 0x00, 0x00, 0x80,
0xA4, 0x60, 0x00, 0x10, 0x00, 0x00,
0xA4, 0x64, 0x7f, 0xff, 0xff, 0xff,
0xA4, 0x68, 0x00, 0x00, 0x40, 0x00,
0xA4, 0x6C, 0x00, 0x10, 0x00, 0x00,
0xA4, 0x70, 0x00, 0x00, 0x03, 0xe8,
0xA4, 0x74, 0x00, 0x00, 0x00, 0x04,
0xA4, 0x78, 0x00, 0x00, 0x32, 0x00,
0xA4, 0x7C, 0x0a, 0x3d, 0x00, 0x00,
0xA4, 0x80, 0x00, 0x00, 0x06, 0x29,
0xA4, 0x84, 0x00, 0x30, 0x00, 0x00,
0xA4, 0x88, 0x28, 0x00, 0x00, 0x00,
0xA4, 0x8C, 0x00, 0x00, 0x80, 0x00,
0xA4, 0xA0, 0x7f, 0xfe, 0x20, 0x00,
0xA4, 0xA4, 0x00, 0x07, 0x69, 0x8a,
0xA4, 0xA8, 0x54, 0x91, 0x9a, 0x57,
0xA4, 0xAC, 0x00, 0x00, 0x00, 0xec,
0xA4, 0xB8, 0x00, 0x02, 0x6c, 0x62,
0xA4, 0xBC, 0xad, 0x99, 0x86, 0xfc,
0xA4, 0xC0, 0x7c, 0x7a, 0xf7, 0x9f,
0xA4, 0xC4, 0x55, 0xeb, 0x81, 0x65,
0xA4, 0xC8, 0x00, 0x00, 0x54, 0x6e,
0xA4, 0xCC, 0x00, 0x00, 0x3a, 0x62,
0xA4, 0xD0, 0xad, 0x72, 0xde, 0x6b,
0xA4, 0xD4, 0x52, 0x96, 0x44, 0x0d,
0xA4, 0xD8, 0x00, 0x00, 0x00, 0x5c,
0xA4, 0xDC, 0x00, 0x00, 0x08, 0xcd,
0xA4, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0xA4, 0xE8, 0x28, 0x00, 0x00, 0x00,
0xA4, 0xEC, 0x61, 0x86, 0x18, 0x60,
0xA4, 0xF0, 0x00, 0x00, 0x0a, 0x30,
0xA4, 0xF8, 0x02, 0x40, 0x00, 0x00,
0xA4, 0xFC, 0x00, 0xbe, 0x00, 0x00,
0xA5, 0x00, 0x00, 0xe6, 0x00, 0x00,
0xA5, 0x04, 0x01, 0x1d, 0x00, 0x00,
0xA5, 0x88, 0x5f, 0x37, 0x59, 0xdf,
0xA5, 0x8C, 0x5f, 0xff, 0xff, 0xff,
0xA5, 0x9C, 0x00, 0xb4, 0x00, 0xb4,
0xA5, 0xA0, 0x06, 0x00, 0x00, 0x00,
0xA5, 0xEC, 0x00, 0x00, 0x02, 0xda,
0xA5, 0xF0, 0x00, 0x04, 0x18, 0xac,
0xA5, 0xF4, 0x00, 0x04, 0x15, 0x1e,
0xA5, 0xF8, 0x00, 0x04, 0x18, 0xf4,
0xA5, 0xFC, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x00, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x04, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x08, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x0C, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x10, 0x00, 0x00, 0x03, 0x76,
0xA6, 0x14, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x18, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x1C, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x20, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x24, 0x00, 0x04, 0x15, 0x1e,
0xA6, 0x28, 0x00, 0x04, 0x15, 0x1e,
0xA7, 0xAC, 0x00, 0x00, 0x00, 0x04,
0xA7, 0xB0, 0x00, 0x08, 0xbe, 0x1d,
0xA7, 0xB4, 0x00, 0x00, 0x27, 0x10,
0xA7, 0xB8, 0x00, 0x00, 0x00, 0x0a,
0xA7, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0xA7, 0xFC, 0x04, 0x28, 0xf5, 0xc0,
0xA8, 0x00, 0x7f, 0xff, 0xff, 0xff,
0xA8, 0x04, 0x80, 0x00, 0x00, 0x01,
0xA8, 0x10, 0x7f, 0xff, 0xff, 0xff,
0xA8, 0x14, 0x05, 0x1e, 0xb8, 0x50,
0xA8, 0x18, 0x7f, 0xff, 0xff, 0xff,
0xA8, 0x1C, 0x80, 0x00, 0x00, 0x01,
0xA8, 0x20, 0x00, 0x05, 0x24, 0x28,
0xA8, 0x24, 0x7f, 0xf5, 0xb7, 0xaf,
0xA8, 0x28, 0x00, 0x05, 0x24, 0x28,
0xA8, 0x2C, 0x33, 0x33, 0x33, 0x40,
0xA8, 0x30, 0x19, 0x99, 0x99, 0xa0,
0xA8, 0x38, 0xe0, 0x00, 0x00, 0x01,
0xA8, 0x40, 0x26, 0x66, 0x66, 0x80,
0xA8, 0x44, 0x33, 0x33, 0x33, 0x40,
0xA8, 0x4C, 0xe0, 0x00, 0x00, 0x01,
0xA8, 0x54, 0x80, 0x02, 0x92, 0x21,
0xA8, 0x58, 0x7f, 0xfa, 0xdb, 0xbd,
0xA8, 0x5C, 0x7f, 0xfd, 0x6d, 0xdf,
0xA8, 0x60, 0x00, 0x40, 0x00, 0x00,
0xA9, 0x1C, 0x00, 0x16, 0xd2, 0xed,
0xA9, 0x20, 0x7f, 0xd2, 0x5a, 0x25,
0xA9, 0x24, 0x00, 0x16, 0xd2, 0xed,
0xA9, 0x28, 0x00, 0x06, 0x00, 0x0a,
0xA9, 0x3C, 0x3f, 0xff, 0xff, 0xff,
0xA9, 0x40, 0x1f, 0xff, 0xff, 0xff,
0xA9, 0x44, 0x7f, 0xfe, 0x20, 0x00,
0xA9, 0x48, 0x7f, 0xb0, 0x00, 0x00,
0xA9, 0x4C, 0x00, 0x00, 0x20, 0x00,
0xA9, 0x50, 0x00, 0x80, 0x00, 0x00,
0xA9, 0x54, 0x7f, 0xf4, 0x00, 0x00,
0xA9, 0x60, 0x00, 0x48, 0x00, 0x00,
0xA9, 0x64, 0x7f, 0xf0, 0x00, 0x00,
0xA9, 0x68, 0x00, 0x00, 0x04, 0x00,
0xA9, 0x6C, 0x1f, 0xff, 0xff, 0xff,
0xA9, 0x70, 0x7f, 0x00, 0x00, 0x00,
0xA9, 0x74, 0x00, 0x00, 0x02, 0x8c,
0xA9, 0x7C, 0x0c, 0xdc, 0x61, 0x39,
0xA9, 0x80, 0x0a, 0x49, 0xe7, 0x60,
0xA9, 0x84, 0x00, 0xa0, 0x00, 0x00,
0xA9, 0x88, 0x01, 0x20, 0x00, 0x00,
};

const unsigned char LC898124EP3_SERVO_ON_PM_0_1_2_3_0_0[] = {
0x64, 0x00, 0x00, 0x02, 0x07,
0x64, 0x00, 0x00, 0x51, 0x67,
0x64, 0x00, 0x40, 0x1d, 0x87,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x64, 0x00, 0x00, 0x54, 0xe7,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x64, 0x00, 0x40, 0x23, 0x47,
0x64, 0x00, 0x40, 0x27, 0x87,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x46, 0x0b, 0x03, 0x80, 0x00,
0x40, 0x00, 0x03, 0x80, 0x00,
0x66, 0x00, 0x00, 0x28, 0x08,
0x40, 0x00, 0x02, 0xbf, 0xe0,
0x5c, 0x00, 0x63, 0x01, 0x05,
0x6c, 0x70, 0x28, 0x06, 0x48,
0x68, 0x34, 0x00, 0x1b, 0x20,
0x68, 0x03, 0xf9, 0xff, 0xca,
0x5c, 0x81, 0x00, 0x40, 0x0b,
0x54, 0x4d, 0xf2, 0xc5, 0x01,
0x5c, 0x10, 0xf0, 0x40, 0x4a,
0x5c, 0x02, 0xfa, 0x03, 0x20,
0x84, 0x00, 0x05, 0x20, 0xa2,
0xb0, 0x62, 0x05, 0xc0, 0x06,
0x80, 0x2c, 0x98, 0x00, 0x7a,
0x80, 0x07, 0xa8, 0x00, 0x7a,
0x84, 0x07, 0xaa, 0x00, 0x60,
0x84, 0x07, 0xaa, 0x04, 0xe0,
0x5c, 0x00, 0xb0, 0x02, 0x4a,
0x84, 0x05, 0x0a, 0x02, 0x20,
0x84, 0x00, 0x06, 0x80, 0x00,
0x60, 0x00, 0x25, 0x48, 0x41,
0x31, 0xdf, 0x05, 0xc0, 0xe1,
0x04, 0x05, 0x26, 0xc6, 0x80,
0x80, 0x84, 0xb5, 0xc0, 0xdb,
0xa0, 0x06, 0x08, 0x40, 0x50,
0xa0, 0x08, 0x0b, 0x08, 0x08,
0x68, 0x34, 0x08, 0x4a, 0x24,
0x84, 0x05, 0x08, 0x40, 0xd0,
0xa2, 0x02, 0x08, 0x60, 0x48,
0x80, 0x04, 0x98, 0x00, 0x4a,
0xac, 0x7e, 0x08, 0x00, 0x4a,
0x68, 0x20, 0x01, 0x4f, 0x21,
0x68, 0x00, 0x00, 0x2b, 0x24,
0xac, 0x58, 0x08, 0x02, 0x4a,
0xac, 0x40, 0x08, 0x48, 0x00,
0x52, 0x4e, 0x30, 0x60, 0x08,
0x52, 0x05, 0x23, 0x06, 0x07,
0x86, 0x04, 0x88, 0x02, 0x4b,
0x84, 0x84, 0xa8, 0x40, 0x4b,
0xb0, 0x01, 0xc6, 0x60, 0x04,
0x03, 0x66, 0x8a, 0x40, 0x40,
0x5c, 0x81, 0x02, 0x40, 0x40,
0x94, 0x02, 0xdb, 0x07, 0xfc,
0x30, 0x12, 0x8b, 0xc1, 0x08,
0x68, 0x20, 0x00, 0x1b, 0x24,
0x23, 0x4e, 0xd8, 0x20, 0x49,
0x88, 0x06, 0x46, 0x60, 0x04,
0x03, 0x66, 0x85, 0xc0, 0x06,
0xb0, 0x03, 0xca, 0x40, 0x40,
0x94, 0x02, 0xd5, 0x1a, 0x76,
0x88, 0x02, 0x0b, 0xc0, 0x6f,
0x40, 0x00, 0x00, 0x40, 0x49,
0x6c, 0x40, 0x00, 0x36, 0x7a,
0x40, 0x00, 0x00, 0x60, 0xfa,
0x66, 0x00, 0x40, 0x42, 0xa0,
0x6e, 0x00, 0x01, 0xae, 0x2d,
0x38, 0x11, 0xc2, 0x59, 0x28,
0xbc, 0x03, 0x06, 0x60, 0x04,
0x02, 0xdc, 0x0b, 0xc0, 0x87,
0x66, 0x00, 0x40, 0x2d, 0xc0,
0x6e, 0x00, 0x01, 0xae, 0x2d,
0x38, 0x11, 0xc2, 0x41, 0x28,
0x6e, 0x00, 0x01, 0xae, 0x60,
0x5c, 0x0d, 0xeb, 0x00, 0x0c,
0x6e, 0x00, 0x00, 0x8c, 0xae,
0x6c, 0x40, 0x03, 0x1a, 0x48,
0x30, 0x17, 0x0b, 0xc0, 0x68,
0x6c, 0x40, 0x03, 0x1e, 0x48,
0x68, 0x00, 0x3f, 0xff, 0xc9,
0x6e, 0x40, 0x00, 0x08, 0x75,
0x66, 0x00, 0x41, 0x38, 0x40,
0x6e, 0x40, 0x00, 0x08, 0x3d,
0x68, 0x00, 0x01, 0x00, 0x08,
0x28, 0x92, 0xc3, 0x20, 0x20,
0xbc, 0x09, 0x93, 0x81, 0x1d,
0x6e, 0x00, 0x01, 0xae, 0x2c,
0x24, 0x16, 0x06, 0xe0, 0x00,
0x1a, 0xe6, 0x06, 0x60, 0x00,
0x03, 0x94, 0x83, 0x80, 0x04,
0x68, 0x00, 0x01, 0x2b, 0x20,
0x66, 0x00, 0x41, 0x46, 0x80,
0x66, 0x00, 0x40, 0xea, 0xc0,
0x5c, 0x0b, 0x6b, 0x03, 0x6e,
0x6c, 0x00, 0x02, 0x60, 0x49,
0x5c, 0x0d, 0xfb, 0x80, 0x00,
0x66, 0x00, 0x40, 0x2e, 0xe8,
0x5c, 0x1f, 0x6b, 0x00, 0x84,
0x6c, 0x00, 0x00, 0x56, 0x08,
0x38, 0x1d, 0x52, 0x59, 0x60,
0xbc, 0x05, 0x83, 0x81, 0xc6,
0x52, 0x4d, 0x23, 0x80, 0x00,
0x6c, 0x00, 0x00, 0x56, 0x48,
0x68, 0x00, 0x00, 0xe0, 0x20,
0x6c, 0x40, 0x04, 0xc4, 0x08,
0x39, 0x02, 0x08, 0x00, 0x48,
0x84, 0x0f, 0xa8, 0x40, 0x7a,
0x40, 0x00, 0x03, 0xc0, 0x4f,
0x5c, 0x00, 0xe2, 0xc4, 0xc0,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x02, 0xc6, 0x0a,
0x32, 0xa3, 0x0b, 0xff, 0xa1,
0x68, 0x00, 0x00, 0x2b, 0x20,
0x6c, 0x00, 0x02, 0xc6, 0x7a,
0xa0, 0x00, 0x48, 0x02, 0x0a,
0x25, 0x97, 0x0b, 0xc0, 0x89,
0x88, 0x06, 0x02, 0x49, 0x75,
0x82, 0x24, 0x96, 0x80, 0x00,
0x0b, 0x6a, 0x06, 0xc4, 0x00,
0x31, 0x84, 0x88, 0x60, 0x60,
0x66, 0x00, 0x00, 0x12, 0x60,
0x88, 0x02, 0x00, 0x00, 0x00,
0x84, 0x02, 0x0b, 0xa0, 0x80,
0x6c, 0x00, 0x00, 0xf0, 0x09,
0x6c, 0x00, 0x01, 0x1a, 0x08,
0x22, 0x86, 0xd6, 0x83, 0x40,
0x80, 0x02, 0x02, 0x28, 0x64,
0x6c, 0x68, 0x10, 0x00, 0x49,
0x40, 0x00, 0x00, 0x44, 0x48,
0x66, 0x00, 0x41, 0xca, 0x40,
0x6c, 0x00, 0x02, 0x3c, 0x20,
0x40, 0x00, 0x03, 0xa0, 0x80,
0x68, 0x00, 0x01, 0x16, 0x20,
0x68, 0x20, 0x00, 0xf1, 0x24,
0x68, 0x00, 0x01, 0x1a, 0x21,
0x68, 0x20, 0x00, 0xf7, 0x25,
0x68, 0x00, 0x01, 0x00, 0x22,
0x66, 0x00, 0x40, 0x5d, 0x00,
0x68, 0x00, 0x01, 0x2b, 0x20,
0x66, 0x00, 0x41, 0x48, 0x20,
0x46, 0x0e, 0x03, 0x80, 0x00,
0xbf, 0xbb, 0xf3, 0x81, 0xd5,
0x68, 0x20, 0x00, 0x24, 0x21,
0x5c, 0x82, 0x02, 0xbf, 0x70,
0x5c, 0x08, 0xb0, 0x08, 0x08,
0x68, 0x00, 0x00, 0x9a, 0x20,
0x68, 0x20, 0x00, 0x4b, 0x24,
0x84, 0x00, 0x94, 0x42, 0x00,
0x02, 0x00, 0x98, 0x40, 0x88,
0x6e, 0x00, 0x01, 0xae, 0x2f,
0x44, 0x09, 0x00, 0x81, 0x64,
0x52, 0xcd, 0xc0, 0x81, 0xe1,
0x88, 0x27, 0x68, 0x82, 0xd6,
0x90, 0x45, 0x84, 0x20, 0x3c,
0x88, 0x55, 0x49, 0x03, 0x5a,
0x00, 0x00, 0x06, 0xc0, 0x00,
0x18, 0x60, 0xab, 0xc0, 0x7f,
0x6c, 0x00, 0x01, 0x74, 0x09,
0x68, 0x00, 0x00, 0x9c, 0x20,
0x00, 0x00, 0x08, 0x40, 0x8a,
0x84, 0x00, 0x98, 0x85, 0xca,
0x40, 0x00, 0x00, 0x86, 0x49,
0x68, 0x20, 0x00, 0x85, 0x24,
0x66, 0x00, 0x40, 0x88, 0xe8,
0x6e, 0x40, 0x01, 0x12, 0x27,
0x68, 0x20, 0x00, 0x85, 0x20,
0x88, 0x84, 0x8a, 0x00, 0x88,
0x94, 0x02, 0x78, 0x86, 0x0a,
0x88, 0x58, 0x96, 0x60, 0x04,
0x08, 0x8e, 0x8a, 0x04, 0x4c,
0x6e, 0x00, 0x01, 0xae, 0x2d,
0x5c, 0x08, 0xf0, 0x85, 0xc8,
0x52, 0xcd, 0x40, 0x88, 0xc8,
0xbc, 0x21, 0x98, 0x88, 0x09,
0x68, 0x20, 0x00, 0x90, 0x2c,
0x68, 0x20, 0x00, 0x8a, 0x24,
0x68, 0x20, 0x00, 0x8d, 0x25,
0x40, 0x00, 0x00, 0x80, 0x6c,
0x66, 0x00, 0x40, 0x78, 0x80,
0x6c, 0x40, 0x00, 0x4a, 0x09,
0x44, 0x08, 0x00, 0x85, 0x89,
0x68, 0x20, 0x00, 0x98, 0xac,
0x88, 0x84, 0x86, 0x82, 0x00,
0x09, 0x2a, 0x46, 0x82, 0x00,
0x09, 0x5a, 0x58, 0x80, 0x6c,
0x90, 0x65, 0x88, 0x85, 0xd4,
0x66, 0x00, 0x40, 0x78, 0x80,
0x6c, 0x40, 0x00, 0x98, 0x09,
0x40, 0x00, 0x03, 0xc0, 0xcf,
0x44, 0x08, 0x00, 0x88, 0xc8,
0x6c, 0x40, 0x00, 0x4a, 0x08,
0x44, 0x21, 0x00, 0x85, 0x89,
0x6c, 0x40, 0x00, 0x98, 0x08,
0x44, 0x20, 0x01, 0x06, 0x5a,
0x40, 0x00, 0x00, 0x85, 0xd6,
0x68, 0x00, 0x00, 0x7d, 0x20,
0x90, 0x61, 0x2a, 0x04, 0x21,
0x88, 0x59, 0x68, 0x85, 0xe1,
0x90, 0x65, 0x88, 0x87, 0x54,
0x66, 0x00, 0x40, 0x52, 0x08,
0x5c, 0x00, 0x71, 0x80, 0x89,
0x90, 0x61, 0x06, 0x80, 0x00,
0x09, 0x22, 0x08, 0x87, 0x14,
0xa0, 0x42, 0x18, 0x86, 0xc8,
0x88, 0x66, 0x16, 0x60, 0x04,
0x05, 0x20, 0x85, 0xc0, 0x07,
0x18, 0x00, 0x98, 0x86, 0x20,
0x88, 0x12, 0x1a, 0x05, 0x84,
0x90, 0x31, 0x08, 0x48, 0x09,
0x88, 0x29, 0x48, 0x81, 0x48,
0x68, 0x00, 0x01, 0x34, 0x21,
0x88, 0x5a, 0x08, 0x60, 0x08,
0x44, 0x0c, 0x00, 0x81, 0xa5,
0xa0, 0x58, 0x09, 0x04, 0x12,
0x86, 0x80, 0x88, 0x40, 0x0a,
0x88, 0x51, 0x66, 0xc0, 0x00,
0x1e, 0xa0, 0xb4, 0x44, 0x4c,
0x08, 0x1e, 0x45, 0x40, 0xe1,
0x08, 0x2e, 0x09, 0x80, 0x8a,
0x6c, 0x00, 0x01, 0xde, 0x09,
0x54, 0x0a, 0x40, 0x62, 0x4a,
0x98, 0x00, 0x98, 0x42, 0x49,
0x88, 0x34, 0xa8, 0x83, 0xc9,
0x68, 0x20, 0x01, 0xfc, 0x24,
0x66, 0x00, 0x00, 0x26, 0x80,
0x88, 0x84, 0x86, 0x80, 0x00,
0x13, 0xa2, 0x18, 0x81, 0xa0,
0x68, 0x20, 0x02, 0x02, 0x24,
0x66, 0x00, 0x00, 0x26, 0x80,
0x88, 0x10, 0x98, 0x83, 0x0a,
0x54, 0x0b, 0x80, 0x86, 0x82,
0x54, 0x08, 0x00, 0x83, 0x89,
0x54, 0x05, 0x50, 0x81, 0xa1,
0x88, 0x80, 0x95, 0x40, 0xa9,
0x08, 0x2a, 0x08, 0x49, 0x40,
0x68, 0x20, 0x00, 0x7e, 0x2c,
0x88, 0x8c, 0x88, 0x41, 0x42,
0x68, 0x00, 0x00, 0x48, 0x21,
0x68, 0x20, 0x00, 0x24, 0x24,
0x68, 0x20, 0x00, 0x72, 0x25,
0x40, 0x00, 0x00, 0x80, 0x6c,
0x66, 0x00, 0x00, 0x22, 0x48,
0x6c, 0x00, 0x02, 0xb6, 0x09,
0x68, 0x20, 0x00, 0x7f, 0xac,
0x88, 0x84, 0x86, 0x80, 0x00,
0x05, 0xc2, 0x18, 0x81, 0xa0,
0x68, 0x20, 0x00, 0x4b, 0x24,
0x68, 0x20, 0x00, 0x78, 0x25,
0x88, 0x06, 0xc6, 0x60, 0x00,
0x02, 0x24, 0x86, 0xc0, 0x00,
0x2b, 0x80, 0x98, 0x88, 0xc8,
0x68, 0x20, 0x00, 0x83, 0x20,
0x68, 0x20, 0x00, 0x84, 0x21,
0xa4, 0x22, 0x36, 0x60, 0x04,
0x0c, 0x68, 0x8a, 0x42, 0x02,
0x5c, 0x8d, 0x00, 0x82, 0xa0,
0x5c, 0x08, 0x61, 0x8e, 0x89,
0xa0, 0x28, 0x09, 0x42, 0x0f,
0x25, 0x93, 0x8b, 0xc0, 0x39,
0x55, 0x01, 0x70, 0x81, 0xa1,
0x88, 0x80, 0xa8, 0x40, 0x0b,
0x54, 0x0f, 0x82, 0x0a, 0x81,
0x94, 0xa0, 0xe2, 0x59, 0x30,
0xbc, 0x03, 0x98, 0x40, 0xc0,
0x00, 0x00, 0x08, 0x88, 0x89,
0x00, 0x00, 0x08, 0x48, 0x08,
0x54, 0x09, 0x40, 0x82, 0x36,
0xba, 0x14, 0x88, 0x48, 0xc0,
0x40, 0x00, 0x02, 0x80, 0x90,
0x98, 0x84, 0x8a, 0x28, 0x01,
0xa0, 0x04, 0x5a, 0x2c, 0x22,
0x86, 0x80, 0xaa, 0x10, 0x45,
0xab, 0xfb, 0x08, 0x81, 0xe2,
0x88, 0x16, 0x09, 0x82, 0x20,
0x85, 0x00, 0x85, 0x70, 0x98,
0x20, 0x82, 0x25, 0x50, 0x00,
0x21, 0x02, 0x35, 0x70, 0xa0,
0x21, 0x82, 0x68, 0x80, 0x66,
0x88, 0x2e, 0x68, 0x82, 0x65,
0xa2, 0x06, 0x48, 0x85, 0x25,
0x88, 0x36, 0x48, 0x83, 0xe0,
0x88, 0x47, 0x66, 0x60, 0x04,
0x06, 0xa6, 0x89, 0x80, 0x09,
0x5c, 0x08, 0x28, 0x82, 0x20,
0x88, 0x1a, 0x1a, 0x02, 0x20,
0x94, 0x02, 0xf5, 0x2c, 0xbc,
0x04, 0x94, 0x8a, 0x05, 0xe1,
0x42, 0x02, 0xc8, 0x83, 0x24,
0x5c, 0x00, 0x30, 0x83, 0xa0,
0x88, 0x12, 0x50, 0x00, 0x00,
0x86, 0x98, 0xa8, 0x48, 0x09,
0x54, 0x0b, 0x82, 0x01, 0x40,
0x98, 0x00, 0x9a, 0x22, 0xe4,
0x84, 0x8c, 0x98, 0x81, 0x64,
0x88, 0x1e, 0x06, 0x60, 0x04,
0x07, 0x0c, 0x08, 0x82, 0xa1,
0x88, 0x52, 0x58, 0x81, 0x24,
0x88, 0x1a, 0x08, 0x84, 0x36,
0xa2, 0x82, 0x5a, 0x80, 0x50,
0xa0, 0x04, 0x0a, 0x20, 0x64,
0x40, 0x00, 0x02, 0x08, 0x21,
0x64, 0x00, 0x40, 0x71, 0xaf,
0x55, 0x01, 0x2a, 0x08, 0x22,
0xa2, 0x08, 0x4a, 0x20, 0x22,
0x84, 0x40, 0x98, 0x60, 0x0a,
0x57, 0x8b, 0xaa, 0xbf, 0xe0,
0xa1, 0x4a, 0x4a, 0x08, 0x00,
0x85, 0x00, 0x88, 0x80, 0x64,
0x88, 0x0e, 0x08, 0x81, 0x76,
0x66, 0x00, 0x40, 0x53, 0x48,
0x2e, 0x96, 0x58, 0x80, 0x20,
0x88, 0x0a, 0x48, 0x41, 0x89,
0x44, 0x08, 0x00, 0x81, 0x36,
0x46, 0x0a, 0x41, 0x80, 0x08,
0x86, 0x14, 0x8a, 0x80, 0x20,
0x68, 0x00, 0x00, 0x2c, 0x20,
0x5c, 0x81, 0x03, 0x02, 0x74,
0x68, 0x01, 0x05, 0xdb, 0x2c,
0x80, 0x06, 0xc6, 0x80, 0x00,
0x0a, 0x4a, 0x18, 0x00, 0x61,
0x68, 0x01, 0x05, 0x47, 0xa1,
0x6c, 0x00, 0x02, 0xcc, 0x48,
0x46, 0x0a, 0x40, 0x00, 0x61,
0x84, 0x06, 0x10, 0x00, 0x00,
0x68, 0x00, 0x00, 0x07, 0x60,
0xab, 0xff, 0x09, 0x40, 0x2c,
0x55, 0x5f, 0x22, 0x04, 0x10,
0x59, 0x01, 0x00, 0x80, 0x76,
0xbc, 0x29, 0x89, 0x40, 0x2e,
0x32, 0x06, 0x0b, 0xc1, 0x40,
0x32, 0x0a, 0x0b, 0xc3, 0x51,
0x32, 0x0b, 0x0b, 0xc0, 0x88,
0x68, 0x20, 0x02, 0x63, 0x20,
0x68, 0x00, 0x00, 0x07, 0xa1,
0x66, 0x00, 0x41, 0x53, 0x60,
0x40, 0x00, 0x03, 0xc2, 0xb7,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x54, 0x40,
0x66, 0x00, 0x41, 0x52, 0x08,
0xb0, 0x02, 0x4b, 0xc2, 0x37,
0x32, 0x0b, 0x0b, 0xc0, 0x88,
0x68, 0x20, 0x02, 0x4d, 0x20,
0x68, 0x00, 0x00, 0x07, 0xa1,
0x66, 0x00, 0x41, 0x53, 0x60,
0x40, 0x00, 0x03, 0xc1, 0x97,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x54, 0x40,
0x66, 0x00, 0x41, 0x52, 0x08,
0xb0, 0x02, 0x4b, 0xc1, 0x17,
0x32, 0x0b, 0x0b, 0xc0, 0x88,
0x68, 0x00, 0x01, 0x8f, 0x20,
0x68, 0x00, 0x00, 0x07, 0xa1,
0x66, 0x00, 0x41, 0x53, 0x60,
0x40, 0x00, 0x03, 0xc0, 0x77,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x54, 0x40,
0x66, 0x00, 0x41, 0x52, 0x08,
0xb0, 0x02, 0x48, 0x80, 0x36,
0xba, 0x14, 0x8a, 0x80, 0x10,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x40, 0x03, 0x18, 0x09,
0x5d, 0x0a, 0x23, 0x01, 0xc6,
0x52, 0x0d, 0x72, 0xbf, 0xe0,
0x59, 0x01, 0x00, 0x80, 0xfa,
0x6c, 0x40, 0x03, 0x18, 0x4a,
0x88, 0x17, 0x64, 0x20, 0x74,
0x18, 0xe8, 0x95, 0x50, 0x16,
0x08, 0x04, 0x89, 0x8e, 0x88,
0x88, 0x00, 0x93, 0x20, 0x68,
0xbc, 0x07, 0x8b, 0x00, 0x0d,
0x88, 0x00, 0x95, 0x90, 0x54,
0x30, 0x00, 0xdb, 0xc0, 0x29,
0x98, 0x24, 0x89, 0x8e, 0x89,
0x88, 0x0c, 0x93, 0x20, 0x68,
0xbc, 0x09, 0x98, 0x81, 0xc8,
0x66, 0x00, 0x40, 0x77, 0x00,
0x68, 0x00, 0x00, 0x72, 0x20,
0x5c, 0x81, 0x00, 0x81, 0x88,
0x80, 0x20, 0x98, 0x40, 0x49,
0x32, 0x06, 0x0b, 0xc0, 0x71,
0x66, 0x00, 0x40, 0x77, 0xc0,
0x68, 0x00, 0x00, 0x87, 0x20,
0x39, 0x02, 0x08, 0x02, 0x09,
0x84, 0x04, 0x99, 0x8e, 0x88,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x99, 0x21,
0x66, 0x00, 0x41, 0x44, 0xe8,
0x88, 0x08, 0x9b, 0x00, 0x0c,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x99, 0x21,
0x66, 0x00, 0x41, 0x44, 0xe8,
0x88, 0x18, 0x98, 0x80, 0x09,
0x32, 0x02, 0x8b, 0xc1, 0x01,
0x68, 0x00, 0x00, 0x2b, 0x20,
0x5c, 0x0e, 0x2a, 0xc4, 0xc0,
0x84, 0x00, 0x82, 0x51, 0x64,
0x6c, 0x40, 0x03, 0x18, 0x0a,
0x52, 0x8b, 0xa8, 0x02, 0x48,
0x6c, 0x40, 0x03, 0x18, 0x49,
0x68, 0x01, 0x05, 0x47, 0xa1,
0xbc, 0x05, 0xf8, 0x40, 0x61,
0x68, 0x00, 0x00, 0xcd, 0xa0,
0x6c, 0x00, 0x00, 0x0a, 0x60,
0x00, 0x00, 0x08, 0x81, 0x36,
0xba, 0x14, 0x8a, 0x80, 0x20,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x00, 0x71, 0x20,
0x68, 0x20, 0x00, 0x82, 0x22,
0x84, 0x00, 0x88, 0x50, 0x0a,
0x58, 0x0d, 0x02, 0xbf, 0xf0,
0x68, 0x20, 0x00, 0x81, 0x21,
0xbc, 0x03, 0x88, 0x80, 0x76,
0x66, 0x00, 0x40, 0xf3, 0x40,
0x68, 0x00, 0x00, 0x86, 0x20,
0x6c, 0x40, 0x01, 0x04, 0x08,
0x84, 0x00, 0xa3, 0x01, 0x30,
0x68, 0x20, 0x00, 0x82, 0x22,
0x40, 0x00, 0x03, 0xc0, 0x48,
0x68, 0x20, 0x00, 0x81, 0x21,
0x66, 0x00, 0x40, 0xf3, 0x40,
0x6c, 0x00, 0x00, 0xe2, 0x08,
0x6c, 0x40, 0x01, 0x04, 0x0a,
0x30, 0x1a, 0x0b, 0xc0, 0x41,
0x6c, 0x00, 0x01, 0x0c, 0x08,
0x30, 0x1a, 0x0b, 0xc0, 0x60,
0x68, 0x00, 0x00, 0xcd, 0xa0,
0x40, 0x00, 0x03, 0xc1, 0x1f,
0x6c, 0x00, 0x00, 0x0a, 0x60,
0x68, 0x00, 0x00, 0x2b, 0x20,
0x5c, 0x0e, 0x22, 0xc4, 0xc0,
0x84, 0x00, 0xa2, 0x49, 0x36,
0x6c, 0x40, 0x03, 0x18, 0x00,
0x52, 0x88, 0x20, 0x02, 0x4a,
0x68, 0x01, 0x05, 0x47, 0xa2,
0x6c, 0x40, 0x03, 0x18, 0x48,
0x84, 0x06, 0x20, 0x00, 0x00,
0x88, 0x03, 0x6b, 0xa1, 0x48,
0xa8, 0x01, 0x00, 0x00, 0x00,
0x6c, 0x40, 0x03, 0x28, 0x08,
0x5c, 0x0e, 0x32, 0xbf, 0xf0,
0x52, 0x0d, 0x20, 0x80, 0x76,
0x6c, 0x40, 0x03, 0x28, 0x48,
0x66, 0x00, 0x00, 0x39, 0x48,
0x5c, 0x00, 0x63, 0x80, 0x00,
0x68, 0x00, 0x00, 0x2b, 0x20,
0x5c, 0x0e, 0x22, 0xc4, 0xc0,
0x84, 0x00, 0xa5, 0x24, 0x9b,
0x08, 0x03, 0x66, 0xc4, 0x00,
0x32, 0x80, 0x05, 0x24, 0x82,
0x00, 0x24, 0xa6, 0xc4, 0x00,
0x32, 0x84, 0x86, 0x80, 0x10,
0x54, 0x7a, 0xcb, 0xa1, 0x48,
0x84, 0x06, 0xca, 0x80, 0x10,
0x59, 0x01, 0x02, 0xbf, 0x60,
0xbc, 0x0f, 0x96, 0x80, 0x00,
0x15, 0xa2, 0x16, 0x80, 0x00,
0x15, 0x32, 0x05, 0xc8, 0x10,
0x18, 0xe8, 0x86, 0x80, 0x00,
0x1f, 0x22, 0x12, 0xa0, 0x64,
0x5d, 0x48, 0x20, 0x08, 0x0a,
0x32, 0x1e, 0x0b, 0xff, 0xba,
0x40, 0x00, 0x00, 0x00, 0x4a,
0x68, 0x00, 0x01, 0x56, 0x22,
0x5c, 0x81, 0x00, 0x48, 0x0b,
0x5c, 0x00, 0x19, 0x50, 0x35,
0x95, 0x0b, 0x0a, 0x40, 0xc0,
0x68, 0x00, 0x01, 0x53, 0x22,
0x23, 0x09, 0xc5, 0x50, 0x2e,
0x18, 0x22, 0x95, 0xd4, 0x81,
0x9d, 0x08, 0x15, 0x90, 0xec,
0x14, 0x83, 0x65, 0x70, 0xb9,
0x14, 0x8b, 0x45, 0x70, 0x10,
0x9c, 0x08, 0x34, 0x3f, 0x9d,
0x15, 0x87, 0x29, 0x58, 0xf1,
0x51, 0xa1, 0xe2, 0x41, 0xa1,
0x5b, 0x08, 0x0a, 0xc0, 0xc1,
0x51, 0x58, 0x42, 0x00, 0x22,
0x57, 0x08, 0x4a, 0x00, 0x60,
0x57, 0x08, 0x50, 0x81, 0xf6,
0x51, 0x58, 0x90, 0x81, 0x4b,
0x51, 0x58, 0x48, 0x08, 0x42,
0x51, 0x59, 0x30, 0x08, 0x41,
0x54, 0x09, 0x00, 0x08, 0x40,
0x54, 0x08, 0x08, 0x08, 0x7a,
0x51, 0x58, 0x00, 0x08, 0x4a,
0x51, 0x58, 0x40, 0x08, 0x40,
0x80, 0xac, 0x08, 0x80, 0x61,
0x88, 0x26, 0x18, 0x82, 0xe2,
0x68, 0x20, 0x00, 0x90, 0x23,
0x68, 0x20, 0x00, 0x8a, 0x24,
0x68, 0x20, 0x00, 0x8d, 0x25,
0x66, 0x00, 0x00, 0x47, 0x28,
0x40, 0x00, 0x02, 0x40, 0xc1,
0x5c, 0x81, 0x00, 0x81, 0x08,
0x51, 0x61, 0x20, 0x82, 0x23,
0x51, 0xa1, 0x22, 0xc0, 0xc1,
0x5b, 0x08, 0x08, 0x82, 0xa0,
0x22, 0xb0, 0x85, 0x70, 0x84,
0xa0, 0x05, 0x05, 0x70, 0x85,
0x20, 0x46, 0x12, 0x2b, 0x12,
0x51, 0x58, 0x48, 0x18, 0x42,
0x51, 0x59, 0x30, 0x18, 0x41,
0x54, 0x09, 0x00, 0x18, 0x40,
0x54, 0x08, 0x08, 0x18, 0x7a,
0x51, 0x58, 0x00, 0x18, 0x4a,
0x51, 0x58, 0x40, 0x18, 0x40,
0x81, 0xac, 0x08, 0x80, 0x63,
0x68, 0x20, 0x00, 0x98, 0xa3,
0x68, 0x20, 0x00, 0x92, 0xa4,
0x68, 0x20, 0x00, 0x95, 0xa5,
0x66, 0x00, 0x00, 0x47, 0x28,
0xa0, 0x82, 0x28, 0x81, 0xb6,
0xba, 0x14, 0x8a, 0x80, 0xa0,
0x40, 0x00, 0x03, 0x80, 0x00,
0xba, 0x14, 0x82, 0xe1, 0xa8,
0x40, 0x00, 0x01, 0x80, 0x08,
0x59, 0x06, 0x42, 0xbf, 0xd0,
0x49, 0xa9, 0xb8, 0x80, 0x76,
0xbc, 0x19, 0x89, 0xa0, 0x00,
0x32, 0x03, 0x0b, 0xc0, 0x29,
0x38, 0x10, 0x02, 0xa0, 0x76,
0x68, 0x00, 0x09, 0xc4, 0x09,
0x50, 0x41, 0x83, 0xa1, 0x11,
0x44, 0x08, 0x81, 0x01, 0x58,
0x5b, 0x40, 0x11, 0x02, 0x59,
0x66, 0x00, 0x41, 0x49, 0x68,
0x5b, 0x42, 0x0b, 0xa1, 0x01,
0x90, 0x11, 0x19, 0x02, 0x12,
0x29, 0x85, 0x13, 0x20, 0x08,
0xbc, 0x1a, 0x33, 0x60, 0x00,
0x37, 0x80, 0x0b, 0xc1, 0x77,
0x32, 0x02, 0x0b, 0xc0, 0x29,
0x38, 0x10, 0x02, 0xa0, 0x64,
0x68, 0x01, 0xff, 0xff, 0xc9,
0x50, 0x41, 0x03, 0xa1, 0x11,
0x44, 0x48, 0x81, 0x01, 0x58,
0x5b, 0x40, 0x11, 0x02, 0x59,
0x66, 0x00, 0x41, 0x49, 0x68,
0x5b, 0x42, 0x0b, 0xa1, 0x01,
0x90, 0x11, 0x19, 0x02, 0x12,
0x29, 0x85, 0x13, 0x20, 0x08,
0xbc, 0x02, 0x33, 0x60, 0x00,
0x37, 0x80, 0x08, 0x80, 0x36,
0xba, 0x14, 0x8a, 0x80, 0x30,
0x40, 0x00, 0x03, 0x80, 0x00,
0x5b, 0x02, 0x03, 0x01, 0x01,
0x50, 0x43, 0x11, 0x84, 0x0a,
0x46, 0x08, 0x89, 0x83, 0x88,
0x44, 0x41, 0x09, 0x84, 0x8b,
0x98, 0x30, 0xa4, 0x47, 0x44,
0xab, 0xfe, 0x05, 0x08, 0x20,
0x08, 0x07, 0x60, 0x88, 0x82,
0x37, 0x80, 0x06, 0x80, 0x00,
0x9c, 0x40, 0x80, 0x84, 0x80,
0x6a, 0x00, 0x09, 0xc4, 0x02,
0x5b, 0x44, 0x11, 0x01, 0x58,
0x66, 0x00, 0x41, 0x49, 0x68,
0x5b, 0x40, 0x0b, 0xa1, 0x01,
0x90, 0x11, 0x26, 0xa0, 0x00,
0x9c, 0x40, 0x12, 0x98, 0x52,
0x32, 0x01, 0x0b, 0xc0, 0x3b,
0x88, 0x03, 0x63, 0x60, 0x00,
0x37, 0x80, 0x0b, 0xa1, 0x48,
0xa8, 0x02, 0x00, 0x00, 0x00,
0xab, 0xf8, 0x09, 0x40, 0x36,
0x88, 0x04, 0xa8, 0x80, 0xe5,
0x88, 0x16, 0x48, 0x81, 0xe3,
0x88, 0x26, 0x28, 0x82, 0xf6,
0x66, 0x00, 0x00, 0x40, 0xe8,
0x40, 0x00, 0x01, 0x48, 0x35,
0x6a, 0x00, 0x09, 0xc4, 0x00,
0x5b, 0x40, 0x00, 0x83, 0x48,
0x5c, 0x00, 0x21, 0x05, 0x58,
0x88, 0x3c, 0x88, 0x84, 0x54,
0x00, 0x00, 0x08, 0x80, 0x0a,
0x51, 0x85, 0x20, 0x82, 0x22,
0x98, 0x22, 0x89, 0xd0, 0x02,
0x88, 0x4e, 0x86, 0x60, 0x00,
0x04, 0x0e, 0x89, 0x50, 0x35,
0x5b, 0x48, 0x3b, 0x01, 0xfe,
0x25, 0x9a, 0x06, 0x80, 0x01,
0xff, 0xfc, 0xab, 0xc0, 0x88,
0x55, 0x01, 0x00, 0x86, 0x48,
0x30, 0x1b, 0x8b, 0xc0, 0xcd,
0x88, 0x38, 0x16, 0x80, 0x01,
0xff, 0xfc, 0x0b, 0xc0, 0x87,
0x68, 0x00, 0x20, 0x00, 0x0a,
0x30, 0x1b, 0x8b, 0xc0, 0x4d,
0x40, 0x00, 0x00, 0x83, 0x81,
0x68, 0x00, 0x20, 0x00, 0x00,
0x59, 0x0a, 0x40, 0x81, 0xa2,
0xbc, 0x03, 0xb5, 0x50, 0x13,
0xac, 0x01, 0x09, 0x50, 0x50,
0x55, 0x02, 0x60, 0x81, 0xe2,
0x00, 0x00, 0x08, 0x84, 0xa8,
0x88, 0x82, 0x35, 0x18, 0x52,
0x08, 0x4c, 0x89, 0xd8, 0x04,
0x98, 0x22, 0x88, 0x60, 0x08,
0x9d, 0x80, 0x38, 0x83, 0x0a,
0x88, 0x6e, 0x46, 0x60, 0x00,
0x04, 0x12, 0x88, 0x58, 0x09,
0x88, 0x38, 0x83, 0x20, 0xe0,
0xbc, 0x13, 0x85, 0xc0, 0xfe,
0x19, 0x20, 0x19, 0x05, 0x12,
0x40, 0x00, 0x01, 0x07, 0x58,
0x66, 0x00, 0x41, 0x49, 0x68,
0x5b, 0x40, 0x08, 0x84, 0x16,
0x55, 0x00, 0x09, 0x07, 0x10,
0x6a, 0x00, 0x09, 0xc4, 0x02,
0x29, 0x88, 0x23, 0x20, 0x10,
0xbc, 0x03, 0xb3, 0x81, 0xfc,
0x36, 0x04, 0x13, 0x78, 0x41,
0x52, 0xc8, 0x41, 0x83, 0x48,
0x68, 0x00, 0x1f, 0xff, 0xcb,
0xbc, 0x07, 0x83, 0x69, 0x04,
0x30, 0x1e, 0x0b, 0xc0, 0xa5,
0x6a, 0x00, 0x1f, 0xff, 0xc1,
0x40, 0x00, 0x03, 0xc0, 0x67,
0x68, 0x00, 0x20, 0x00, 0x0b,
0x30, 0x1e, 0x0b, 0xc0, 0x25,
0x6a, 0x00, 0x20, 0x00, 0x01,
0x5c, 0x80, 0x80, 0x81, 0x22,
0x98, 0x34, 0x19, 0x50, 0x51,
0x88, 0x16, 0x20, 0x00, 0x00,
0x88, 0x6a, 0x38, 0x83, 0x08,
0x66, 0x00, 0x00, 0x44, 0xc8,
0x55, 0x00, 0x08, 0x58, 0x09,
0x5c, 0x0f, 0xf9, 0x83, 0x08,
0x25, 0x9c, 0x05, 0xb4, 0x82,
0x3c, 0x09, 0x86, 0x80, 0x01,
0xff, 0xfc, 0xb3, 0x01, 0xe0,
0xbc, 0x0d, 0xd8, 0x84, 0x88,
0x6a, 0x00, 0x1f, 0xff, 0xc0,
0x40, 0x00, 0x03, 0xc0, 0x87,
0x68, 0x00, 0x20, 0x00, 0x0b,
0x30, 0x1e, 0x0b, 0xc0, 0x4d,
0x40, 0x00, 0x00, 0x84, 0x88,
0x6a, 0x00, 0x20, 0x00, 0x00,
0x5c, 0x80, 0x80, 0x80, 0xa2,
0x5d, 0x88, 0x21, 0x83, 0x00,
0x59, 0x0d, 0x00, 0x86, 0x0b,
0x95, 0x05, 0x08, 0x83, 0x4b,
0x88, 0x3c, 0x88, 0x80, 0xe2,
0xbf, 0x77, 0xa8, 0x80, 0x0a,
0x88, 0x2b, 0x6b, 0xa1, 0x48,
0xa8, 0x08, 0x00, 0x00, 0x00,
0xab, 0xfd, 0x08, 0x80, 0xc9,
0x5c, 0x09, 0xf8, 0x80, 0x4b,
0x88, 0x17, 0x59, 0x02, 0x5b,
0x88, 0x1d, 0x70, 0x00, 0x00,
0x6e, 0x00, 0x01, 0x08, 0x2d,
0x25, 0x9e, 0x8b, 0xc0, 0x60,
0x6c, 0x68, 0x08, 0x10, 0x03,
0x6c, 0x00, 0x01, 0x34, 0x53,
0x40, 0x00, 0x03, 0xc0, 0x67,
0x6c, 0x68, 0x08, 0x16, 0x03,
0x6c, 0x00, 0x01, 0x34, 0x53,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6e, 0x00, 0x01, 0x32, 0x2b,
0x25, 0x9d, 0x8b, 0xc0, 0x50,
0x6c, 0x68, 0x08, 0x12, 0x09,
0x6c, 0x00, 0x01, 0x36, 0x49,
0xbc, 0x07, 0x72, 0x59, 0xe8,
0xbc, 0x05, 0x06, 0xc6, 0x80,
0x81, 0x60, 0x96, 0xc0, 0x00,
0x13, 0x64, 0x90, 0x00, 0x00,
0x5c, 0x02, 0x29, 0x02, 0x13,
0x68, 0x00, 0x00, 0x00, 0x75,
0x6c, 0x68, 0x08, 0x06, 0x75,
0x6c, 0x00, 0x02, 0xc6, 0x49,
0x00, 0x00, 0x08, 0x81, 0x97,
0x88, 0x00, 0xb4, 0x60, 0xb4,
0x08, 0x13, 0x58, 0x80, 0x89,
0x40, 0x00, 0x02, 0x80, 0x30,
0x40, 0x00, 0x03, 0xa1, 0x60,
};
