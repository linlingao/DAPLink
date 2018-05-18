/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 // Device: k22f
 
 #include "flash_blob.h"

static const uint32_t _flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0xf000b510, 0x485dfd79, 0x444821fe, 0x21ff7001, 0x70817041, 0xbf0070c1, 0x485a4959, 0x495a81c1,
    0x21ff81c1, 0x800131d3, 0x44484858, 0xf8b0f000, 0xd0002800, 0xbd102001, 0x47702000, 0x47702000,
    0x47702000, 0x7810b510, 0x28004614, 0x484fd008, 0x1d222308, 0x44482110, 0xf9ddf000, 0xd1262800,
    0x28007860, 0x4849d009, 0x23084622, 0x2111320c, 0xf0004448, 0x2800f9d0, 0x78a0d119, 0xd0092800,
    0x46224842, 0x32142308, 0x44482112, 0xf9c3f000, 0xd10c2800, 0x280078e0, 0x483cd00b, 0x23084622,
    0x2113321c, 0xf0004448, 0x2800f9b6, 0x2001d001, 0x2000bd10, 0xb57cbd10, 0x78104605, 0x460e4614,
    0xd0122800, 0x23084831, 0x2110466a, 0xf0004448, 0x2800fa21, 0x9901d143, 0x68629800, 0x405068a3,
    0x43084059, 0x1d28d001, 0x7860bd7c, 0xd0132800, 0x23084826, 0x2111466a, 0xf0004448, 0x2800fa0b,
    0x9900d12d, 0x68e29801, 0x40516923, 0x43014058, 0x4628d002, 0xbd7c300c, 0x280078a0, 0x481bd013,
    0x466a2308, 0x44482112, 0xf9f4f000, 0xd1162800, 0x98009901, 0x69a36962, 0x40594050, 0xd0024308,
    0x30144628, 0x78e0bd7c, 0xd0152800, 0x2308480f, 0x2113466a, 0xf0004448, 0x2800f9dd, 0x4628d001,
    0x9901bd7c, 0x69e29800, 0x40506a23, 0x43084059, 0x4628d002, 0xbd7c301c, 0xbd7c19a8, 0x00000004,
    0x0000c520, 0x40052000, 0x0000d928, 0x00000008, 0x2800b510, 0x49f9d01d, 0x010968c9, 0x290f0f09,
    0x4af7d019, 0x447a0049, 0x02895a51, 0x60022200, 0x21026041, 0x02896081, 0x49f260c1, 0x158b7a0c,
    0x614340a3, 0x61027ac9, 0x62426202, 0x20006181, 0x2004bd10, 0x2101bd10, 0xe7e704c9, 0xd0022800,
    0x20006101, 0x20044770, 0x49e74770, 0x220f6849, 0x43910512, 0x4ae41889, 0xbf006051, 0xbf00bf00,
    0x8f6ff3bf, 0xbf00bf00, 0xbf00bf00, 0xbf00bf00, 0x8f4ff3bf, 0xbf00bf00, 0x4770bf00, 0x217048d9,
    0x70013820, 0x70012180, 0x06097801, 0x7800d5fc, 0xd5010681, 0x47702067, 0xd50106c1, 0x47702068,
    0xd0fc07c0, 0x47702069, 0x0004b510, 0x4acdd011, 0x3a2048ce, 0x46086050, 0xfb5cf000, 0xd1072800,
    0xf7ff4620, 0x4603ffdb, 0xf7ff4620, 0x4618ffbe, 0x2004bd10, 0xb510bd10, 0xd0062800, 0x42191e5b,
    0x421ad101, 0x2065d003, 0x2004bd10, 0x6803bd10, 0xd804428b, 0x18896840, 0x42881818, 0x2066d201,
    0x2000bd10, 0xb570bd10, 0x0005460e, 0xd0164614, 0x46102120, 0xfb60f000, 0x1a306828, 0x68e86020,
    0x68a96060, 0xf0006868, 0x60a0fb6a, 0x20042108, 0x60e06121, 0x616161a0, 0x200061e0, 0x2004bd70,
    0xb5ffbd70, 0x4616b089, 0x466a460c, 0xf7ff9809, 0x4632ffda, 0x9b044621, 0xf7ff9809, 0x0005ffbc,
    0x9c00d12c, 0x19a69f01, 0x46391e76, 0xf0004630, 0x2900fb46, 0x1c40d01c, 0x1e464378, 0x0221e018,
    0x0a092009, 0x18090600, 0x38204896, 0x980c6041, 0xfaf0f000, 0xd1112800, 0xf7ff9809, 0x4605ff6f,
    0x69009809, 0xd0002800, 0x2d004780, 0x19e4d102, 0xd9e442b4, 0xf7ff9809, 0x4628ff48, 0xbdf0b00d,
    0x0004b510, 0x4a87d011, 0x3a204889, 0x46086050, 0xfad0f000, 0xd1072800, 0xf7ff4620, 0x4603ff4f,
    0xf7ff4620, 0x4618ff32, 0x2004bd10, 0xb5ffbd10, 0x461fb089, 0x460d0014, 0x466ad00d, 0xf7ff9809,
    0x463aff82, 0x9b034629, 0xf7ff9809, 0x0006ff64, 0x9d00d1d4, 0x2004e028, 0x4872e7d0, 0x3820cc02,
    0x99036081, 0xd0022904, 0xd0072908, 0x0229e00e, 0x0a092203, 0x18890652, 0xe0076041, 0x60c1cc02,
    0x22070229, 0x06120a09, 0x60411889, 0xf7ff9809, 0x4606ff15, 0x69009809, 0xd0002800, 0x2e004780,
    0x9803d104, 0x1a3f1945, 0xd1d62f00, 0xf7ff9809, 0x4630feec, 0xb570e7a2, 0xd0120004, 0xd0102a00,
    0x4d5c0608, 0x19450a00, 0x38204856, 0x68156045, 0x29106085, 0x3911d002, 0xd8062902, 0xd0022b08,
    0x2004e003, 0x6851bd70, 0x462060c1, 0xfee6f7ff, 0x46204603, 0xfec9f7ff, 0xbd704618, 0xb089b5ff,
    0x9f129809, 0x4614461d, 0x2800460e, 0x2c00d00d, 0x466ad00b, 0xff17f7ff, 0x46399806, 0x42061e40,
    0x4205d101, 0x2065d003, 0x2004e018, 0x1972e766, 0x1e522000, 0xd0022901, 0xd0062f00, 0x2e00e003,
    0x2d08d101, 0x2004d00a, 0x2affe008, 0x2301d906, 0x429e05db, 0x4938d3f7, 0xd8f4428a, 0x4a370639,
    0x18894f30, 0x91083f20, 0xd1df2800, 0x0230e01f, 0x0a002103, 0x18400609, 0x98066078, 0xd0022804,
    0xd0032808, 0x9808e004, 0xe00160f8, 0x60b89808, 0xf7ff9809, 0x2800fe93, 0x68b9d1c8, 0x9906c402,
    0xd1012908, 0xc40268f9, 0x198e9906, 0x2d001a6d, 0xe723d1dd, 0x461fb5f8, 0x460c4615, 0xd0182800,
    0xd0162d00, 0x4a1e0621, 0x0a094e16, 0x3e201889, 0xf7ff6071, 0x2800fe73, 0x68b1d10a, 0x2c106029,
    0x3c11d002, 0xd8032c02, 0xd1012f08, 0x606968f1, 0x2004bdf8, 0x2800bdf8, 0x2900d024, 0x4809d022,
    0x78803820, 0x0f920782, 0xd01d2a02, 0x28020980, 0x2002d01c, 0x20007008, 0x00004770, 0x40048040,
    0x00000996, 0x40020020, 0x4001f000, 0x44ffffff, 0x4bffffff, 0x4300ffff, 0x008003ff, 0x00ffffff,
    0x4100ffff, 0xe7e72004, 0xe7e32000, 0xe7e12001, 0x460cb570, 0xd0200006, 0xd01e2c00, 0x20004dd9,
    0x078978a9, 0x29020f89, 0x48d7d016, 0x46206068, 0xf9d4f000, 0x0a00ba00, 0x020078e1, 0x60a84308,
    0xf0001d20, 0xba00f9cb, 0x79e10a00, 0x43080200, 0x463060e8, 0xfe12f7ff, 0x2004bd70, 0xb510bd70,
    0xd0072800, 0x04094ac9, 0x4ac61889, 0xf7ff6051, 0xbd10fe05, 0xbd102004, 0xb089b5ff, 0x460d4614,
    0x9809466a, 0xfe3ff7ff, 0x46294622, 0x98099b05, 0xfe21f7ff, 0xd12f2800, 0x4629466a, 0xf7ff9809,
    0x9d00fe32, 0x90089802, 0x42404269, 0x424f4001, 0xd10142af, 0x183f9808, 0xd01c2c00, 0x42a61b7e,
    0x4626d900, 0x99054630, 0xf999f000, 0x22010229, 0x06120a09, 0x49ab188a, 0x9a0c604a, 0x02120400,
    0x30ff4310, 0x98096088, 0xfdc8f7ff, 0xd1032800, 0x19ad1ba4, 0x2000e7de, 0xb5ffe660, 0x9f12b089,
    0x4616001d, 0xd010460c, 0x9809466a, 0xfdfbf7ff, 0x46214632, 0x98099b07, 0xfdddf7ff, 0xd1052800,
    0x06394a9b, 0x9c00188f, 0x2004e021, 0x0221e646, 0x0a092001, 0x18090640, 0x60414892, 0x68296087,
    0x980960c1, 0xfd9af7ff, 0xd0092800, 0x29009913, 0x600cd000, 0x29009914, 0x2200d0e8, 0xe62d600a,
    0x1a769907, 0x00890889, 0x9907194d, 0x2e00190c, 0xe623d1dd, 0x2800b510, 0x4a86d007, 0x18890409,
    0x60514a80, 0xfd7af7ff, 0x2004bd10, 0xb5f0bd10, 0x001db0a9, 0x460c4617, 0xd00e4606, 0xf7ff2304,
    0x4684fd9a, 0xd1092800, 0x468619e0, 0x68702101, 0x428803c9, 0x0943d904, 0x2004e004, 0xbdf0b029,
    0x029b2301, 0x20006837, 0x43414619, 0x0086187a, 0x1c404669, 0x2820518a, 0x2200d9f6, 0xa9214869,
    0x2a08e001, 0x7c06d204, 0x07f640d6, 0xe00b0ff6, 0x3e084616, 0xd2012e08, 0xe0107c47, 0x3e104616,
    0xd2092e08, 0xe00a7c87, 0x1c52548e, 0xd3e82a20, 0x46172200, 0xe0184616, 0x46167cc7, 0x40f73e18,
    0x0ff607fe, 0x0091e7f0, 0x58404668, 0xd80b42a0, 0x18084668, 0x42a06840, 0xa821d906, 0x1c7f5c80,
    0xd1002800, 0x18e41c76, 0x45741c52, 0x2e00d3eb, 0x42bed003, 0x2001d103, 0x2000e002, 0x2002e000,
    0x46607028, 0xb5ffe7aa, 0x001eb083, 0x460c4617, 0x2304d016, 0xf7ff9803, 0x9000fd2e, 0xd1102800,
    0x19e79803, 0x427b6941, 0x46024248, 0x40184022, 0x25001880, 0x91014240, 0xf8b1f000, 0xe0199002,
    0xb0072004, 0x4620bdf0, 0xf0009901, 0x2820f8a8, 0x4934d202, 0xe00669c9, 0x69899903, 0xd90b4281,
    0x69894930, 0x22013820, 0x438a4082, 0x1c6dd000, 0x19049801, 0xd3e642bc, 0xd0042d00, 0x42859802,
    0x2002d203, 0x2000e002, 0x2001e000, 0x98007030, 0xb500e7d7, 0xd00a2800, 0xd0082a00, 0xf000000b,
    0x080af93d, 0x13110e0a, 0x1b191715, 0x20041f1d, 0x68c0bd00, 0x6840e000, 0x20006010, 0x6840bd00,
    0xe7f90840, 0xe7f76880, 0xe7f56800, 0xe7f32001, 0xe7f16940, 0xe7ef6980, 0xe7ed6a00, 0xe7eb6a40,
    0xbd00206a, 0xd0062800, 0x6101480e, 0x42886900, 0x2069d003, 0x2004e640, 0x2000e63e, 0x2800e63c,
    0x2900d006, 0x4807d004, 0x60086900, 0xe6332000, 0xe6312004, 0x42884908, 0x206bd001, 0x2000e62c,
    0x0000e62a, 0x40020000, 0x45ffffff, 0x4000ffff, 0x00ffffff, 0x4a00ffff, 0x6b65666b, 0xc004e001,
    0x29041f09, 0x078bd2fb, 0x8002d501, 0x07c91c80, 0x7002d000, 0x29004770, 0x07c3d00b, 0x7002d002,
    0x1e491c40, 0xd3042902, 0xd5020783, 0x1c808002, 0xe7e31e89, 0xe7ee2200, 0xe7df2200, 0x78c27803,
    0x78434619, 0x021b0612, 0x78834319, 0x041b78c0, 0x43114319, 0x0a090209, 0x43080600, 0x22004770,
    0x428b0903, 0x0a03d32c, 0xd311428b, 0x469c2300, 0x4603e04e, 0xd43c430b, 0x08432200, 0xd331428b,
    0x428b0903, 0x0a03d31c, 0xd301428b, 0xe03f4694, 0x428b09c3, 0x01cbd301, 0x41521ac0, 0x428b0983,
    0x018bd301, 0x41521ac0, 0x428b0943, 0x014bd301, 0x41521ac0, 0x428b0903, 0x010bd301, 0x41521ac0,
    0x428b08c3, 0x00cbd301, 0x41521ac0, 0x428b0883, 0x008bd301, 0x41521ac0, 0x428b0843, 0x004bd301,
    0x41521ac0, 0xd2001a41, 0x41524601, 0x47704610, 0x0fcae05d, 0x4249d000, 0xd3001003, 0x40534240,
    0x469c2200, 0x428b0903, 0x0a03d32d, 0xd312428b, 0x018922fc, 0x0a03ba12, 0xd30c428b, 0x11920189,
    0xd308428b, 0x11920189, 0xd304428b, 0xd03a0189, 0xe0001192, 0x09c30989, 0xd301428b, 0x1ac001cb,
    0x09834152, 0xd301428b, 0x1ac0018b, 0x09434152, 0xd301428b, 0x1ac0014b, 0x09034152, 0xd301428b,
    0x1ac0010b, 0x08c34152, 0xd301428b, 0x1ac000cb, 0x08834152, 0xd301428b, 0x1ac0008b, 0xd2d94152,
    0x428b0843, 0x004bd301, 0x41521ac0, 0xd2001a41, 0x46634601, 0x105b4152, 0xd3014610, 0x2b004240,
    0x4249d500, 0x46634770, 0xd300105b, 0xb5014240, 0x46c02000, 0xbd0246c0, 0x4c06b570, 0x4d06447c,
    0xe003447d, 0x19006820, 0x1d244780, 0xd1f942ac, 0x0000bd70, 0x00000060, 0x0000005c, 0x4674b430,
    0x78251e64, 0x42ab1c64, 0x461dd200, 0x005b5d63, 0xbc3018e3, 0x00004718, 0x40020004, 0x40020010,
    0x00100008, 0x00200018, 0x00400030, 0x00800060, 0x010000c0, 0x02000180, 0x04000300, 0x00000600,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

/**
* List of start and size for each size of flash sector - even indexes are start, odd are size
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address flash_start + flash_size.
*/
static const sector_info_t sectors_info[] = {
    {0xffff0000, 0x00000024},
};

static const program_target_t flash = {
    0x1ffc0021, // Init
    0x1ffc0059, // UnInit
    0x11ffc001f, // EraseChip
    0x1ffc0061, // EraseSector
    0x1ffc0065, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x1ffc0001,
        0x1ffc0b80,
        0x1ffc0800
    },

    0x1ffc0000 + 0x00000A00,  // mem buffer location
    0x1ffc0000,               // location to write prog_blob in target RAM
    sizeof(_flash_prog_blob),   // prog_blob size
    _flash_prog_blob,           // address of prog_blob
    0x00000024       // ram_to_flash_bytes_to_be_written
};
