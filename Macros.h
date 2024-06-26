#pragma once

#include <allegro5/allegro5.h>

// Basic stuff
#define Bitmap ALLEGRO_BITMAP*
#define FB_WIDTH 160
#define FB_HEIGHT 144
#define TILE_WIDTH 160 / 8
#define TILE_HEIGHT 144 / 8
#define FPS 60

// Min for framebuffer scaling
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// Common interaction keys
#define KEY_LEFT	ALLEGRO_KEY_LEFT
#define KEY_RIGHT	ALLEGRO_KEY_RIGHT
#define KEY_PUSH	ALLEGRO_KEY_SPACE
#define KEY_UP		ALLEGRO_KEY_UP
#define KEY_DOWN	ALLEGRO_KEY_DOWN
#define KEY_ENTER	ALLEGRO_KEY_ENTER

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
#define UNDEFINED_BMI		20
#define UNDEFINED1_BMI		21
#define UNDEFINED2_BMI		22
#define UNDEFINED3_BMI		23
#define UNDEFINED4_BMI		24
#define FRAMEBUFFER_BMI		25
#define FONT_BMI			26
#define TITLE_BMI			27
#define OFFLINE_BMI			28
