/* --- Generated the 30/3/2023 at 20:41 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 6 12:7:46 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st_2 Logic__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_LineFollowing")==0)) {
    return Logic__St_2_LineFollowing;
  };
  if ((strcmp(s, "St_2_Init")==0)) {
    return Logic__St_2_Init;
  };
}

char* string_of_Logic__st_2(Logic__st_2 x, char* buf) {
  switch (x) {
    case Logic__St_2_LineFollowing:
      strcpy(buf, "St_2_LineFollowing");
      break;
    case Logic__St_2_Init:
      strcpy(buf, "St_2_Init");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_1 Logic__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Init")==0)) {
    return Logic__St_1_Init;
  };
  if ((strcmp(s, "St_1_Fwd")==0)) {
    return Logic__St_1_Fwd;
  };
  if ((strcmp(s, "St_1_Back")==0)) {
    return Logic__St_1_Back;
  };
}

char* string_of_Logic__st_1(Logic__st_1 x, char* buf) {
  switch (x) {
    case Logic__St_1_Init:
      strcpy(buf, "St_1_Init");
      break;
    case Logic__St_1_Fwd:
      strcpy(buf, "St_1_Fwd");
      break;
    case Logic__St_1_Back:
      strcpy(buf, "St_1_Back");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_PID")==0)) {
    return Logic__St_PID;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_PID:
      strcpy(buf, "St_PID");
      break;
    default:
      break;
  };
  return buf;
}

