/* --- Generated the 9/4/2023 at 23:35 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 14:9:13 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__valet_mem {
  int v_5;
  int v_2;
  Logic__st_4 v_8;
  int v_9;
  Logic__st_3 v_18;
  int v_19;
  Logic__st_2 v_35;
  int v_36;
  Logic__st_5 ck;
  Logic__st_1 ck_4;
  int v_60;
  int v_57;
  int v_53;
  int v_50;
  int v_43;
  Logic__st ck_6;
  int pnr_5;
  int pnr_1;
  int pnr;
} Logic__valet_mem;

typedef struct Logic__valet_out {
  int v_left;
  int v_right;
  int direction;
  int side_vals;
} Logic__valet_out;

void Logic__valet_reset(Logic__valet_mem* self);

void Logic__valet_step(int is0, int is1, int is2, int is3, int is4, int ir0,
                       int ir1, int ir2, Logic__valet_out* _out,
                       Logic__valet_mem* self);

#endif // LOGIC_H
