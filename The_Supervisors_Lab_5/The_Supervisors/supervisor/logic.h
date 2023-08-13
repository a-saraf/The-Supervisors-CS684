/* --- Generated the 30/3/2023 at 20:41 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 6 12:7:46 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__valet_mem {
  Logic__st_1 v_14;
  int v_15;
  Logic__st_2 ck;
  int v_45;
  int v_42;
  int v_38;
  int v_35;
  int v_28;
  int v_23;
  int v_20;
  Logic__st ck_2;
  int pnr_2;
  int pnr;
} Logic__valet_mem;

typedef struct Logic__valet_out {
  int v_left;
  int v_right;
  int direction;
} Logic__valet_out;

void Logic__valet_reset(Logic__valet_mem* self);

void Logic__valet_step(int s0, int s1, int s2, int s3, int s4,
                       Logic__valet_out* _out, Logic__valet_mem* self);

#endif // LOGIC_H
