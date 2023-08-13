/* --- Generated the 9/4/2023 at 23:35 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 14:9:13 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Logic__valet_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int is0;
  int is1;
  int is2;
  int is3;
  int is4;
  int ir0;
  int ir1;
  int ir2;
  Logic__valet_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Logic__valet_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &is0)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &is1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &is2)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &is3)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &is4)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ir0)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ir1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ir2)==EOF)) {
      return 0;
    };;
    Logic__valet_step(is0, is1, is2, is3, is4, ir0, ir1, ir2, &_res, &mem);
    printf("%d\n", _res.v_left);
    printf("%d\n", _res.v_right);
    printf("%d\n", _res.direction);
    printf("%d\n", _res.side_vals);
    fflush(stdout);
  };
  return 0;
}

