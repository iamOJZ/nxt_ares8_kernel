typedef u8 innolux_cmd_t[2];

static innolux_cmd_t innolux_init_code[] = {
/* CMD 1 */
	{0xFF, 0x10},
	{0xB3, 0x00},
	{0xC0, 0x01},
	{0xBB, 0x10},
/* CMD2_P4 */
	{0xFF, 0x24},
/* PANEL TIMING */
	{0xCF, 0x0A},
	{0xD0, 0x06},
	{0xD2, 0xBA},
	{0xD3, 0xBA},
	{0xD4, 0xBA},
	{0xD5, 0x01},
	{0xD8, 0x41},
	{0x92, 0x00},
	{0x93, 0x00},
/* CGOUT */
	{0x02, 0x00},
	{0x03, 0x00},
	{0x04, 0x00},
	{0x05, 0x03},
	{0x06, 0x8C},
	{0x07, 0x0C},
	{0x08, 0x09},
	{0x09, 0x07},
	{0x0A, 0x00},
	{0x0B, 0x00},
	{0x0C, 0x00},
	{0x0D, 0x00},
	{0x0E, 0x00},
	{0x0F, 0x00},
	{0x10, 0x00},
	{0x11, 0x00},
	{0x12, 0x00},
	{0x13, 0x00},
	{0x14, 0x00},
	{0x15, 0x00},
	{0x16, 0x00},
	{0x17, 0x00},
	{0x18, 0x00},
	{0x19, 0x00},
	{0x1A, 0x00},
	{0x1D, 0x00},
	{0x1E, 0x00},
	{0x1F, 0x00},
	{0x20, 0x00},
	{0x21, 0x00},
	{0x22, 0x00},
	{0x23, 0x00},
	{0x24, 0x00},
	{0x25, 0x00},
	{0x26, 0x00},
	{0x27, 0x02},
	{0x28, 0x08},
	{0x29, 0x06},
	{0x2A, 0x02},
	{0x2B, 0x03},
	{0x2D, 0x04},
	{0x2F, 0x05},
	{0x30, 0x06},
	{0x31, 0x07},
	{0x32, 0x00},
	{0x33, 0x00},
	{0x34, 0x00},
	{0x35, 0x00},
	{0x36, 0x00},
	{0x37, 0x00},
/* STV */
	{0x38, 0x80},
	{0x39, 0x00},
	{0x3A, 0x40},
	{0x3B, 0x02},
	{0x3D, 0xA3},
	{0x42, 0xAD},
/* UD */
	{0x43, 0x50},
	{0x44, 0x22},
/* GCK */
	{0x45, 0x00},
	{0x46, 0x04},
	{0x47, 0x00},
	{0x48, 0x48},
	{0x49, 0x19},
	{0x4A, 0x00},
	{0x4B, 0xA3},
	{0x4C, 0x30},
	{0x4D, 0x05},
	{0x4E, 0x20},
/* CTRL */
	{0x65, 0x25},
	{0x66, 0x64},
	{0x6D, 0x04},
	{0x6E, 0x08},
/* Abnormal */
	{0x80, 0x21},
	{0x81, 0x0C},
/* Power */
	{0xFF, 0x20},
	{0x07, 0x44},
	{0x16, 0x1A},
	{0x53, 0x2C},
	{0x54, 0x01},
	{0x55, 0x2C},
	{0x56, 0x01},
	{0x57, 0x00},
	{0x58, 0x00},
	{0x59, 0x2C},
	{0x5A, 0x01},
	{0x5B, 0x2C},
	{0x5C, 0x01},
	{0x61, 0x00},
	{0x62, 0x00},
	{0x0E, 0x13},
	{0x0F, 0x13},
	{0x10, 0x13},
	{0x11, 0x13},
	{0x14, 0xCF},
	{0x0B, 0xA4},
	{0x0C, 0x90},
/* CMD, Page4 */
	{0xFF, 0x24},
	{0xE5, 0x2F},
/* Source */
	{0x83, 0x01},
	{0x8E, 0x00},
	{0x97, 0x00},
	{0x9B, 0x01},
	{0x9C, 0x39},
	{0x9D, 0x06},
	{0x9E, 0x02},
	{0xA2, 0x03},
	{0xA5, 0x12},
	{0xA6, 0x45},
	{0xA7, 0x31},
	{0xA9, 0x64},
	{0xAA, 0x23},
	{0xAB, 0x56},
	{0xB2, 0x21},
	{0xB3, 0x43},
	{0xB4, 0x65},
	{0xB8, 0x00},
	{0xB9, 0x40},
	{0xBA, 0x10},
	{0xC0, 0x07},
	{0xC1, 0x17},
/* MTP Reload off */
	{0xFF, 0x10},
	{0xFB, 0x01},
	{0xFF, 0x20},
	{0xFB, 0x01},
	{0xFF, 0x24},
	{0xFB, 0x01},
	{0xFF, 0x10},
	{0xFB, 0x01},
/* Sleep Out */
	{0x11, 0x00},
/* Display on */
	{0x29, 0x00},
/* For CABC */
	{0x53, 0x2C},
	{0x51, 0xFF},
	{0x55, 0x00},
	{0x35, 0x00}
};
