/* --- Generated the 9/4/2023 at 23:35 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 14:9:13 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
typedef enum {
  Logic__St_5_Parking,
  Logic__St_5_ObstacleAvoidance,
  Logic__St_5_LineFollowing,
  Logic__St_5_Init
} Logic__st_5;

Logic__st_5 Logic__st_5_of_string(char* s);

char* string_of_Logic__st_5(Logic__st_5 x, char* buf);

typedef enum {
  Logic__St_4_Straight,
  Logic__St_4_Stop,
  Logic__St_4_Right,
  Logic__St_4_Forward
} Logic__st_4;

Logic__st_4 Logic__st_4_of_string(char* s);

char* string_of_Logic__st_4(Logic__st_4 x, char* buf);

typedef enum {
  Logic__St_3_RotateRight,
  Logic__St_3_RotateLeft,
  Logic__St_3_Follow
} Logic__st_3;

Logic__st_3 Logic__st_3_of_string(char* s);

char* string_of_Logic__st_3(Logic__st_3 x, char* buf);

typedef enum {
  Logic__St_2_Init,
  Logic__St_2_Fwd,
  Logic__St_2_Back
} Logic__st_2;

Logic__st_2 Logic__st_2_of_string(char* s);

char* string_of_Logic__st_2(Logic__st_2 x, char* buf);

typedef enum {
  Logic__St_1_PID,
  Logic__St_1_Obs
} Logic__st_1;

Logic__st_1 Logic__st_1_of_string(char* s);

char* string_of_Logic__st_1(Logic__st_1 x, char* buf);

typedef enum {
  Logic__St_WhiteLine,
  Logic__St_BlackLine
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

#endif // LOGIC_TYPES_H
