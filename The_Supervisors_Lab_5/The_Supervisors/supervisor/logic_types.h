/* --- Generated the 30/3/2023 at 20:41 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 6 12:7:46 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
typedef enum {
  Logic__St_2_LineFollowing,
  Logic__St_2_Init
} Logic__st_2;

Logic__st_2 Logic__st_2_of_string(char* s);

char* string_of_Logic__st_2(Logic__st_2 x, char* buf);

typedef enum {
  Logic__St_1_Init,
  Logic__St_1_Fwd,
  Logic__St_1_Back
} Logic__st_1;

Logic__st_1 Logic__st_1_of_string(char* s);

char* string_of_Logic__st_1(Logic__st_1 x, char* buf);

typedef enum {
  Logic__St_PID
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

#endif // LOGIC_TYPES_H
