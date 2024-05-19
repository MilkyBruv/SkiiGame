#pragma once

#include <allegro5/allegro5.h>

#define Bitmap ALLEGRO_BITMAP*
#define FB_WIDTH 160
#define FB_HEIGHT 144
#define TILE_WIDTH 160 / 8
#define TILE_HEIGHT 144 / 8
#define FPS 60
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// BitmapManager indexes
#define TOTAL_BITMAPS		32
#define PLAYER_F_BMI		0
#define PLAYER_R_BMI		1
#define PLAYER_L_BMI		2
#define FLAG_L_BMI			3
#define FLAG_R_BMI			4
#define SNOW_BMI			5
#define ICE_TL_BMI			6
#define ICE_T_BMI			7
#define ICE_TR_BMI			8
#define JUMP_L_BMI			9
#define TREE_BMI			10
#define ICE_L_BMI			11
#define ICE_C_BMI			12
#define ICE_R_BMI			13
#define JUMP_R_BMI			14
#define PISS_BMI			15
#define ICE_BL_BMI			16
#define ICE_B_BMI			17
#define ICE_BR_BMI			18
#define STONE_BMI			19
#define UNDEFINED_BMI		21
#define UNDEFINED_BMI		22
#define UNDEFINED_BMI		23
#define UNDEFINED_BMI		24
#define UNDEFINED_BMI		25
#define FRAMEBUFFER_BMI		26
