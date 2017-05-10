//
// Created by youhei on 17/05/10.
//

#include "east_width_asian.h"

const int east_width_asian::width_char_code[455][2] = {
            {0x00A1,0x00A1},
            {0x00A4,0x00A4},
            {0x00A7,0x00A7},
            {0x00A8,0x00A8},
            {0x00AA,0x00AA},
            {0x00AD,0x00AD},
            {0x00AE,0x00AE},
            {0x00B0,0x00B0},
            {0x00B1,0x00B1},
            {0x00B2,0x00B3},
            {0x00B4,0x00B4},
            {0x00B6,0x00B7},
            {0x00B8,0x00B8},
            {0x00B9,0x00B9},
            {0x00BA,0x00BA},
            {0x00BC,0x00BE},
            {0x00BF,0x00BF},
            {0x00C6,0x00C6},
            {0x00D0,0x00D0},
            {0x00D7,0x00D7},
            {0x00D8,0x00D8},
            {0x00DE,0x00E1},
            {0x00E6,0x00E6},
            {0x00E8,0x00EA},
            {0x00EC,0x00ED},
            {0x00F0,0x00F0},
            {0x00F2,0x00F3},
            {0x00F7,0x00F7},
            {0x00F8,0x00FA},
            {0x00FC,0x00FC},
            {0x00FE,0x00FE},
            {0x0101,0x0101},
            {0x0111,0x0111},
            {0x0113,0x0113},
            {0x011B,0x011B},
            {0x0126,0x0127},
            {0x012B,0x012B},
            {0x0131,0x0133},
            {0x0138,0x0138},
            {0x013F,0x0142},
            {0x0144,0x0144},
            {0x0148,0x014B},
            {0x014D,0x014D},
            {0x0152,0x0153},
            {0x0166,0x0167},
            {0x016B,0x016B},
            {0x01CE,0x01CE},
            {0x01D0,0x01D0},
            {0x01D2,0x01D2},
            {0x01D4,0x01D4},
            {0x01D6,0x01D6},
            {0x01D8,0x01D8},
            {0x01DA,0x01DA},
            {0x01DC,0x01DC},
            {0x0251,0x0251},
            {0x0261,0x0261},
            {0x02C4,0x02C4},
            {0x02C7,0x02C7},
            {0x02C9,0x02CB},
            {0x02CD,0x02CD},
            {0x02D0,0x02D0},
            {0x02D8,0x02DB},
            {0x02DD,0x02DD},
            {0x02DF,0x02DF},
            {0x0300,0x036F},
            {0x0391,0x03A1},
            {0x03A3,0x03A9},
            {0x03B1,0x03C1},
            {0x03C3,0x03C9},
            {0x0401,0x0401},
            {0x0410,0x044F},
            {0x0451,0x0451},
            {0x1100,0x115F},
            {0x2010,0x2010},
            {0x2013,0x2015},
            {0x2016,0x2016},
            {0x2018,0x2018},
            {0x2019,0x2019},
            {0x201C,0x201C},
            {0x201D,0x201D},
            {0x2020,0x2022},
            {0x2024,0x2027},
            {0x2030,0x2030},
            {0x2032,0x2033},
            {0x2035,0x2035},
            {0x203B,0x203B},
            {0x203E,0x203E},
            {0x2074,0x2074},
            {0x207F,0x207F},
            {0x2081,0x2084},
            {0x20AC,0x20AC},
            {0x2103,0x2103},
            {0x2105,0x2105},
            {0x2109,0x2109},
            {0x2113,0x2113},
            {0x2116,0x2116},
            {0x2121,0x2122},
            {0x2126,0x2126},
            {0x212B,0x212B},
            {0x2153,0x2154},
            {0x215B,0x215E},
            {0x2160,0x216B},
            {0x2170,0x2179},
            {0x2189,0x2189},
            {0x2190,0x2194},
            {0x2195,0x2199},
            {0x21B8,0x21B9},
            {0x21D2,0x21D2},
            {0x21D4,0x21D4},
            {0x21E7,0x21E7},
            {0x2200,0x2200},
            {0x2202,0x2203},
            {0x2207,0x2208},
            {0x220B,0x220B},
            {0x220F,0x220F},
            {0x2211,0x2211},
            {0x2215,0x2215},
            {0x221A,0x221A},
            {0x221D,0x2220},
            {0x2223,0x2223},
            {0x2225,0x2225},
            {0x2227,0x222C},
            {0x222E,0x222E},
            {0x2234,0x2237},
            {0x223C,0x223D},
            {0x2248,0x2248},
            {0x224C,0x224C},
            {0x2252,0x2252},
            {0x2260,0x2261},
            {0x2264,0x2267},
            {0x226A,0x226B},
            {0x226E,0x226F},
            {0x2282,0x2283},
            {0x2286,0x2287},
            {0x2295,0x2295},
            {0x2299,0x2299},
            {0x22A5,0x22A5},
            {0x22BF,0x22BF},
            {0x2312,0x2312},
            {0x231A,0x231B},
            {0x2329,0x2329},
            {0x232A,0x232A},
            {0x23E9,0x23EC},
            {0x23F0,0x23F0},
            {0x23F3,0x23F3},
            {0x2460,0x249B},
            {0x249C,0x24E9},
            {0x24EB,0x24FF},
            {0x2500,0x254B},
            {0x2550,0x2573},
            {0x2580,0x258F},
            {0x2592,0x2595},
            {0x25A0,0x25A1},
            {0x25A3,0x25A9},
            {0x25B2,0x25B3},
            {0x25B6,0x25B6},
            {0x25B7,0x25B7},
            {0x25BC,0x25BD},
            {0x25C0,0x25C0},
            {0x25C1,0x25C1},
            {0x25C6,0x25C8},
            {0x25CB,0x25CB},
            {0x25CE,0x25D1},
            {0x25E2,0x25E5},
            {0x25EF,0x25EF},
            {0x25FD,0x25FE},
            {0x2605,0x2606},
            {0x2609,0x2609},
            {0x260E,0x260F},
            {0x2614,0x2615},
            {0x261C,0x261C},
            {0x261E,0x261E},
            {0x2640,0x2640},
            {0x2642,0x2642},
            {0x2648,0x2653},
            {0x2660,0x2661},
            {0x2663,0x2665},
            {0x2667,0x266A},
            {0x266C,0x266D},
            {0x266F,0x266F},
            {0x267F,0x267F},
            {0x2693,0x2693},
            {0x269E,0x269F},
            {0x26A1,0x26A1},
            {0x26AA,0x26AB},
            {0x26BD,0x26BE},
            {0x26BF,0x26BF},
            {0x26C4,0x26C5},
            {0x26C6,0x26CD},
            {0x26CE,0x26CE},
            {0x26CF,0x26D3},
            {0x26D4,0x26D4},
            {0x26D5,0x26E1},
            {0x26E3,0x26E3},
            {0x26E8,0x26E9},
            {0x26EA,0x26EA},
            {0x26EB,0x26F1},
            {0x26F2,0x26F3},
            {0x26F4,0x26F4},
            {0x26F5,0x26F5},
            {0x26F6,0x26F9},
            {0x26FA,0x26FA},
            {0x26FB,0x26FC},
            {0x26FD,0x26FD},
            {0x26FE,0x26FF},
            {0x2705,0x2705},
            {0x270A,0x270B},
            {0x2728,0x2728},
            {0x273D,0x273D},
            {0x274C,0x274C},
            {0x274E,0x274E},
            {0x2753,0x2755},
            {0x2757,0x2757},
            {0x2776,0x277F},
            {0x2795,0x2797},
            {0x27B0,0x27B0},
            {0x27BF,0x27BF},
            {0x2B1B,0x2B1C},
            {0x2B50,0x2B50},
            {0x2B55,0x2B55},
            {0x2B56,0x2B59},
            {0x2E80,0x2E99},
            {0x2E9B,0x2EF3},
            {0x2F00,0x2FD5},
            {0x2FF0,0x2FFB},
            {0x3000,0x3000},
            {0x3001,0x3003},
            {0x3004,0x3004},
            {0x3005,0x3005},
            {0x3006,0x3006},
            {0x3007,0x3007},
            {0x3008,0x3008},
            {0x3009,0x3009},
            {0x300A,0x300A},
            {0x300B,0x300B},
            {0x300C,0x300C},
            {0x300D,0x300D},
            {0x300E,0x300E},
            {0x300F,0x300F},
            {0x3010,0x3010},
            {0x3011,0x3011},
            {0x3012,0x3013},
            {0x3014,0x3014},
            {0x3015,0x3015},
            {0x3016,0x3016},
            {0x3017,0x3017},
            {0x3018,0x3018},
            {0x3019,0x3019},
            {0x301A,0x301A},
            {0x301B,0x301B},
            {0x301C,0x301C},
            {0x301D,0x301D},
            {0x301E,0x301F},
            {0x3020,0x3020},
            {0x3021,0x3029},
            {0x302A,0x302D},
            {0x302E,0x302F},
            {0x3030,0x3030},
            {0x3031,0x3035},
            {0x3036,0x3037},
            {0x3038,0x303A},
            {0x303B,0x303B},
            {0x303C,0x303C},
            {0x303D,0x303D},
            {0x303E,0x303E},
            {0x3041,0x3096},
            {0x3099,0x309A},
            {0x309B,0x309C},
            {0x309D,0x309E},
            {0x309F,0x309F},
            {0x30A0,0x30A0},
            {0x30A1,0x30FA},
            {0x30FB,0x30FB},
            {0x30FC,0x30FE},
            {0x30FF,0x30FF},
            {0x3105,0x312D},
            {0x3131,0x318E},
            {0x3190,0x3191},
            {0x3192,0x3195},
            {0x3196,0x319F},
            {0x31A0,0x31BA},
            {0x31C0,0x31E3},
            {0x31F0,0x31FF},
            {0x3200,0x321E},
            {0x3220,0x3229},
            {0x322A,0x3247},
            {0x3248,0x324F},
            {0x3250,0x3250},
            {0x3251,0x325F},
            {0x3260,0x327F},
            {0x3280,0x3289},
            {0x328A,0x32B0},
            {0x32B1,0x32BF},
            {0x32C0,0x32FE},
            {0x3300,0x33FF},
            {0x3400,0x4DB5},
            {0x4DB6,0x4DBF},
            {0x4E00,0x9FD5},
            {0x9FD6,0x9FFF},
            {0xA000,0xA014},
            {0xA015,0xA015},
            {0xA016,0xA48C},
            {0xA490,0xA4C6},
            {0xA960,0xA97C},
            {0xAC00,0xD7A3},
            {0xE000,0xF8FF},
            {0xF900,0xFA6D},
            {0xFA6E,0xFA6F},
            {0xFA70,0xFAD9},
            {0xFADA,0xFAFF},
            {0xFE00,0xFE0F},
            {0xFE10,0xFE16},
            {0xFE17,0xFE17},
            {0xFE18,0xFE18},
            {0xFE19,0xFE19},
            {0xFE30,0xFE30},
            {0xFE31,0xFE32},
            {0xFE33,0xFE34},
            {0xFE35,0xFE35},
            {0xFE36,0xFE36},
            {0xFE37,0xFE37},
            {0xFE38,0xFE38},
            {0xFE39,0xFE39},
            {0xFE3A,0xFE3A},
            {0xFE3B,0xFE3B},
            {0xFE3C,0xFE3C},
            {0xFE3D,0xFE3D},
            {0xFE3E,0xFE3E},
            {0xFE3F,0xFE3F},
            {0xFE40,0xFE40},
            {0xFE41,0xFE41},
            {0xFE42,0xFE42},
            {0xFE43,0xFE43},
            {0xFE44,0xFE44},
            {0xFE45,0xFE46},
            {0xFE47,0xFE47},
            {0xFE48,0xFE48},
            {0xFE49,0xFE4C},
            {0xFE4D,0xFE4F},
            {0xFE50,0xFE52},
            {0xFE54,0xFE57},
            {0xFE58,0xFE58},
            {0xFE59,0xFE59},
            {0xFE5A,0xFE5A},
            {0xFE5B,0xFE5B},
            {0xFE5C,0xFE5C},
            {0xFE5D,0xFE5D},
            {0xFE5E,0xFE5E},
            {0xFE5F,0xFE61},
            {0xFE62,0xFE62},
            {0xFE63,0xFE63},
            {0xFE64,0xFE66},
            {0xFE68,0xFE68},
            {0xFE69,0xFE69},
            {0xFE6A,0xFE6B},
            {0xFF01,0xFF03},
            {0xFF04,0xFF04},
            {0xFF05,0xFF07},
            {0xFF08,0xFF08},
            {0xFF09,0xFF09},
            {0xFF0A,0xFF0A},
            {0xFF0B,0xFF0B},
            {0xFF0C,0xFF0C},
            {0xFF0D,0xFF0D},
            {0xFF0E,0xFF0F},
            {0xFF10,0xFF19},
            {0xFF1A,0xFF1B},
            {0xFF1C,0xFF1E},
            {0xFF1F,0xFF20},
            {0xFF21,0xFF3A},
            {0xFF3B,0xFF3B},
            {0xFF3C,0xFF3C},
            {0xFF3D,0xFF3D},
            {0xFF3E,0xFF3E},
            {0xFF3F,0xFF3F},
            {0xFF40,0xFF40},
            {0xFF41,0xFF5A},
            {0xFF5B,0xFF5B},
            {0xFF5C,0xFF5C},
            {0xFF5D,0xFF5D},
            {0xFF5E,0xFF5E},
            {0xFF5F,0xFF5F},
            {0xFF60,0xFF60},
            {0xFFE0,0xFFE1},
            {0xFFE2,0xFFE2},
            {0xFFE3,0xFFE3},
            {0xFFE4,0xFFE4},
            {0xFFE5,0xFFE6},
            {0xFFFD,0xFFFD},
            {0x16FE0,0x16FE0},
            {0x17000,0x187EC},
            {0x18800,0x18AF2},
            {0x1B000,0x1B001},
            {0x1F004,0x1F004},
            {0x1F0CF,0x1F0CF},
            {0x1F100,0x1F10A},
            {0x1F110,0x1F12D},
            {0x1F130,0x1F169},
            {0x1F170,0x1F18D},
            {0x1F18E,0x1F18E},
            {0x1F18F,0x1F190},
            {0x1F191,0x1F19A},
            {0x1F19B,0x1F1AC},
            {0x1F200,0x1F202},
            {0x1F210,0x1F23B},
            {0x1F240,0x1F248},
            {0x1F250,0x1F251},
            {0x1F300,0x1F320},
            {0x1F32D,0x1F335},
            {0x1F337,0x1F37C},
            {0x1F37E,0x1F393},
            {0x1F3A0,0x1F3CA},
            {0x1F3CF,0x1F3D3},
            {0x1F3E0,0x1F3F0},
            {0x1F3F4,0x1F3F4},
            {0x1F3F8,0x1F3FA},
            {0x1F3FB,0x1F3FF},
            {0x1F400,0x1F43E},
            {0x1F440,0x1F440},
            {0x1F442,0x1F4FC},
            {0x1F4FF,0x1F53D},
            {0x1F54B,0x1F54E},
            {0x1F550,0x1F567},
            {0x1F57A,0x1F57A},
            {0x1F595,0x1F596},
            {0x1F5A4,0x1F5A4},
            {0x1F5FB,0x1F5FF},
            {0x1F600,0x1F64F},
            {0x1F680,0x1F6C5},
            {0x1F6CC,0x1F6CC},
            {0x1F6D0,0x1F6D2},
            {0x1F6EB,0x1F6EC},
            {0x1F6F4,0x1F6F6},
            {0x1F910,0x1F91E},
            {0x1F920,0x1F927},
            {0x1F930,0x1F930},
            {0x1F933,0x1F93E},
            {0x1F940,0x1F94B},
            {0x1F950,0x1F95E},
            {0x1F980,0x1F991},
            {0x1F9C0,0x1F9C0},
            {0x20000,0x2A6D6},
            {0x2A6D7,0x2A6FF},
            {0x2A700,0x2B734},
            {0x2B735,0x2B73F},
            {0x2B740,0x2B81D},
            {0x2B81E,0x2B81F},
            {0x2B820,0x2CEA1},
            {0x2CEA2,0x2F7FF},
            {0x2F800,0x2FA1D},
            {0x2FA1E,0x2FFFD},
            {0x30000,0x3FFFD},
            {0xE0100,0xE01EF},
            {0xF0000,0xFFFFD},
            {0x100000,0x10FFFD}
    };

}

