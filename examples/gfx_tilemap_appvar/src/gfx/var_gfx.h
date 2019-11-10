// convpng v7.3
// this file contains all the graphics sources for easy inclusion in a project
#ifndef __var_gfx__
#define __var_gfx__
#include <stdint.h>

#include <stdbool.h>

#define var_gfx_num 2

extern uint8_t *var_gfx[2];
#define tileset_width 256
#define tileset_height 128
#define tileset ((gfx_sprite_t*)var_gfx[0])
#define tileset_tiles_num 128
extern uint8_t *tileset_tiles_data[128];
#define tileset_tiles ((gfx_sprite_t**)tileset_tiles_data)
#define tileset_tile_0 ((gfx_sprite_t*)tileset_tiles_data[0])
#define tileset_tile_1 ((gfx_sprite_t*)tileset_tiles_data[1])
#define tileset_tile_2 ((gfx_sprite_t*)tileset_tiles_data[2])
#define tileset_tile_3 ((gfx_sprite_t*)tileset_tiles_data[3])
#define tileset_tile_4 ((gfx_sprite_t*)tileset_tiles_data[4])
#define tileset_tile_5 ((gfx_sprite_t*)tileset_tiles_data[5])
#define tileset_tile_6 ((gfx_sprite_t*)tileset_tiles_data[6])
#define tileset_tile_7 ((gfx_sprite_t*)tileset_tiles_data[7])
#define tileset_tile_8 ((gfx_sprite_t*)tileset_tiles_data[8])
#define tileset_tile_9 ((gfx_sprite_t*)tileset_tiles_data[9])
#define tileset_tile_10 ((gfx_sprite_t*)tileset_tiles_data[10])
#define tileset_tile_11 ((gfx_sprite_t*)tileset_tiles_data[11])
#define tileset_tile_12 ((gfx_sprite_t*)tileset_tiles_data[12])
#define tileset_tile_13 ((gfx_sprite_t*)tileset_tiles_data[13])
#define tileset_tile_14 ((gfx_sprite_t*)tileset_tiles_data[14])
#define tileset_tile_15 ((gfx_sprite_t*)tileset_tiles_data[15])
#define tileset_tile_16 ((gfx_sprite_t*)tileset_tiles_data[16])
#define tileset_tile_17 ((gfx_sprite_t*)tileset_tiles_data[17])
#define tileset_tile_18 ((gfx_sprite_t*)tileset_tiles_data[18])
#define tileset_tile_19 ((gfx_sprite_t*)tileset_tiles_data[19])
#define tileset_tile_20 ((gfx_sprite_t*)tileset_tiles_data[20])
#define tileset_tile_21 ((gfx_sprite_t*)tileset_tiles_data[21])
#define tileset_tile_22 ((gfx_sprite_t*)tileset_tiles_data[22])
#define tileset_tile_23 ((gfx_sprite_t*)tileset_tiles_data[23])
#define tileset_tile_24 ((gfx_sprite_t*)tileset_tiles_data[24])
#define tileset_tile_25 ((gfx_sprite_t*)tileset_tiles_data[25])
#define tileset_tile_26 ((gfx_sprite_t*)tileset_tiles_data[26])
#define tileset_tile_27 ((gfx_sprite_t*)tileset_tiles_data[27])
#define tileset_tile_28 ((gfx_sprite_t*)tileset_tiles_data[28])
#define tileset_tile_29 ((gfx_sprite_t*)tileset_tiles_data[29])
#define tileset_tile_30 ((gfx_sprite_t*)tileset_tiles_data[30])
#define tileset_tile_31 ((gfx_sprite_t*)tileset_tiles_data[31])
#define tileset_tile_32 ((gfx_sprite_t*)tileset_tiles_data[32])
#define tileset_tile_33 ((gfx_sprite_t*)tileset_tiles_data[33])
#define tileset_tile_34 ((gfx_sprite_t*)tileset_tiles_data[34])
#define tileset_tile_35 ((gfx_sprite_t*)tileset_tiles_data[35])
#define tileset_tile_36 ((gfx_sprite_t*)tileset_tiles_data[36])
#define tileset_tile_37 ((gfx_sprite_t*)tileset_tiles_data[37])
#define tileset_tile_38 ((gfx_sprite_t*)tileset_tiles_data[38])
#define tileset_tile_39 ((gfx_sprite_t*)tileset_tiles_data[39])
#define tileset_tile_40 ((gfx_sprite_t*)tileset_tiles_data[40])
#define tileset_tile_41 ((gfx_sprite_t*)tileset_tiles_data[41])
#define tileset_tile_42 ((gfx_sprite_t*)tileset_tiles_data[42])
#define tileset_tile_43 ((gfx_sprite_t*)tileset_tiles_data[43])
#define tileset_tile_44 ((gfx_sprite_t*)tileset_tiles_data[44])
#define tileset_tile_45 ((gfx_sprite_t*)tileset_tiles_data[45])
#define tileset_tile_46 ((gfx_sprite_t*)tileset_tiles_data[46])
#define tileset_tile_47 ((gfx_sprite_t*)tileset_tiles_data[47])
#define tileset_tile_48 ((gfx_sprite_t*)tileset_tiles_data[48])
#define tileset_tile_49 ((gfx_sprite_t*)tileset_tiles_data[49])
#define tileset_tile_50 ((gfx_sprite_t*)tileset_tiles_data[50])
#define tileset_tile_51 ((gfx_sprite_t*)tileset_tiles_data[51])
#define tileset_tile_52 ((gfx_sprite_t*)tileset_tiles_data[52])
#define tileset_tile_53 ((gfx_sprite_t*)tileset_tiles_data[53])
#define tileset_tile_54 ((gfx_sprite_t*)tileset_tiles_data[54])
#define tileset_tile_55 ((gfx_sprite_t*)tileset_tiles_data[55])
#define tileset_tile_56 ((gfx_sprite_t*)tileset_tiles_data[56])
#define tileset_tile_57 ((gfx_sprite_t*)tileset_tiles_data[57])
#define tileset_tile_58 ((gfx_sprite_t*)tileset_tiles_data[58])
#define tileset_tile_59 ((gfx_sprite_t*)tileset_tiles_data[59])
#define tileset_tile_60 ((gfx_sprite_t*)tileset_tiles_data[60])
#define tileset_tile_61 ((gfx_sprite_t*)tileset_tiles_data[61])
#define tileset_tile_62 ((gfx_sprite_t*)tileset_tiles_data[62])
#define tileset_tile_63 ((gfx_sprite_t*)tileset_tiles_data[63])
#define tileset_tile_64 ((gfx_sprite_t*)tileset_tiles_data[64])
#define tileset_tile_65 ((gfx_sprite_t*)tileset_tiles_data[65])
#define tileset_tile_66 ((gfx_sprite_t*)tileset_tiles_data[66])
#define tileset_tile_67 ((gfx_sprite_t*)tileset_tiles_data[67])
#define tileset_tile_68 ((gfx_sprite_t*)tileset_tiles_data[68])
#define tileset_tile_69 ((gfx_sprite_t*)tileset_tiles_data[69])
#define tileset_tile_70 ((gfx_sprite_t*)tileset_tiles_data[70])
#define tileset_tile_71 ((gfx_sprite_t*)tileset_tiles_data[71])
#define tileset_tile_72 ((gfx_sprite_t*)tileset_tiles_data[72])
#define tileset_tile_73 ((gfx_sprite_t*)tileset_tiles_data[73])
#define tileset_tile_74 ((gfx_sprite_t*)tileset_tiles_data[74])
#define tileset_tile_75 ((gfx_sprite_t*)tileset_tiles_data[75])
#define tileset_tile_76 ((gfx_sprite_t*)tileset_tiles_data[76])
#define tileset_tile_77 ((gfx_sprite_t*)tileset_tiles_data[77])
#define tileset_tile_78 ((gfx_sprite_t*)tileset_tiles_data[78])
#define tileset_tile_79 ((gfx_sprite_t*)tileset_tiles_data[79])
#define tileset_tile_80 ((gfx_sprite_t*)tileset_tiles_data[80])
#define tileset_tile_81 ((gfx_sprite_t*)tileset_tiles_data[81])
#define tileset_tile_82 ((gfx_sprite_t*)tileset_tiles_data[82])
#define tileset_tile_83 ((gfx_sprite_t*)tileset_tiles_data[83])
#define tileset_tile_84 ((gfx_sprite_t*)tileset_tiles_data[84])
#define tileset_tile_85 ((gfx_sprite_t*)tileset_tiles_data[85])
#define tileset_tile_86 ((gfx_sprite_t*)tileset_tiles_data[86])
#define tileset_tile_87 ((gfx_sprite_t*)tileset_tiles_data[87])
#define tileset_tile_88 ((gfx_sprite_t*)tileset_tiles_data[88])
#define tileset_tile_89 ((gfx_sprite_t*)tileset_tiles_data[89])
#define tileset_tile_90 ((gfx_sprite_t*)tileset_tiles_data[90])
#define tileset_tile_91 ((gfx_sprite_t*)tileset_tiles_data[91])
#define tileset_tile_92 ((gfx_sprite_t*)tileset_tiles_data[92])
#define tileset_tile_93 ((gfx_sprite_t*)tileset_tiles_data[93])
#define tileset_tile_94 ((gfx_sprite_t*)tileset_tiles_data[94])
#define tileset_tile_95 ((gfx_sprite_t*)tileset_tiles_data[95])
#define tileset_tile_96 ((gfx_sprite_t*)tileset_tiles_data[96])
#define tileset_tile_97 ((gfx_sprite_t*)tileset_tiles_data[97])
#define tileset_tile_98 ((gfx_sprite_t*)tileset_tiles_data[98])
#define tileset_tile_99 ((gfx_sprite_t*)tileset_tiles_data[99])
#define tileset_tile_100 ((gfx_sprite_t*)tileset_tiles_data[100])
#define tileset_tile_101 ((gfx_sprite_t*)tileset_tiles_data[101])
#define tileset_tile_102 ((gfx_sprite_t*)tileset_tiles_data[102])
#define tileset_tile_103 ((gfx_sprite_t*)tileset_tiles_data[103])
#define tileset_tile_104 ((gfx_sprite_t*)tileset_tiles_data[104])
#define tileset_tile_105 ((gfx_sprite_t*)tileset_tiles_data[105])
#define tileset_tile_106 ((gfx_sprite_t*)tileset_tiles_data[106])
#define tileset_tile_107 ((gfx_sprite_t*)tileset_tiles_data[107])
#define tileset_tile_108 ((gfx_sprite_t*)tileset_tiles_data[108])
#define tileset_tile_109 ((gfx_sprite_t*)tileset_tiles_data[109])
#define tileset_tile_110 ((gfx_sprite_t*)tileset_tiles_data[110])
#define tileset_tile_111 ((gfx_sprite_t*)tileset_tiles_data[111])
#define tileset_tile_112 ((gfx_sprite_t*)tileset_tiles_data[112])
#define tileset_tile_113 ((gfx_sprite_t*)tileset_tiles_data[113])
#define tileset_tile_114 ((gfx_sprite_t*)tileset_tiles_data[114])
#define tileset_tile_115 ((gfx_sprite_t*)tileset_tiles_data[115])
#define tileset_tile_116 ((gfx_sprite_t*)tileset_tiles_data[116])
#define tileset_tile_117 ((gfx_sprite_t*)tileset_tiles_data[117])
#define tileset_tile_118 ((gfx_sprite_t*)tileset_tiles_data[118])
#define tileset_tile_119 ((gfx_sprite_t*)tileset_tiles_data[119])
#define tileset_tile_120 ((gfx_sprite_t*)tileset_tiles_data[120])
#define tileset_tile_121 ((gfx_sprite_t*)tileset_tiles_data[121])
#define tileset_tile_122 ((gfx_sprite_t*)tileset_tiles_data[122])
#define tileset_tile_123 ((gfx_sprite_t*)tileset_tiles_data[123])
#define tileset_tile_124 ((gfx_sprite_t*)tileset_tiles_data[124])
#define tileset_tile_125 ((gfx_sprite_t*)tileset_tiles_data[125])
#define tileset_tile_126 ((gfx_sprite_t*)tileset_tiles_data[126])
#define tileset_tile_127 ((gfx_sprite_t*)tileset_tiles_data[127])
#define sizeof_tiles_gfx_pal 152
#define tiles_gfx_pal ((uint16_t*)var_gfx[1])
bool var_gfx_init(void);

#endif
