/* --- Generated the 9/4/2023 at 23:35 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 14:9:13 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st_5 Logic__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Parking")==0)) {
    return Logic__St_5_Parking;
  };
  if ((strcmp(s, "St_5_ObstacleAvoidance")==0)) {
    return Logic__St_5_ObstacleAvoidance;
  };
  if ((strcmp(s, "St_5_LineFollowing")==0)) {
    return Logic__St_5_LineFollowing;
  };
  if ((strcmp(s, "St_5_Init")==0)) {
    return Logic__St_5_Init;
  };
}

char* string_of_Logic__st_5(Logic__st_5 x, char* buf) {
  switch (x) {
    case Logic__St_5_Parking:
      strcpy(buf, "St_5_Parking");
      break;
    case Logic__St_5_ObstacleAvoidance:
      strcpy(buf, "St_5_ObstacleAvoidance");
      break;
    case Logic__St_5_LineFollowing:
      strcpy(buf, "St_5_LineFollowing");
      break;
    case Logic__St_5_Init:
      strcpy(buf, "St_5_Init");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_4 Logic__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Straight")==0)) {
    return Logic__St_4_Straight;
  };
  if ((strcmp(s, "St_4_Stop")==0)) {
    return Logic__St_4_Stop;
  };
  if ((strcmp(s, "St_4_Right")==0)) {
    return Logic__St_4_Right;
  };
  if ((strcmp(s, "St_4_Forward")==0)) {
    return Logic__St_4_Forward;
  };
}

char* string_of_Logic__st_4(Logic__st_4 x, char* buf) {
  switch (x) {
    case Logic__St_4_Straight:
      strcpy(buf, "St_4_Straight");
      break;
    case Logic__St_4_Stop:
      strcpy(buf, "St_4_Stop");
      break;
    case Logic__St_4_Right:
      strcpy(buf, "St_4_Right");
      break;
    case Logic__St_4_Forward:
      strcpy(buf, "St_4_Forward");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_3 Logic__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_RotateRight")==0)) {
    return Logic__St_3_RotateRight;
  };
  if ((strcmp(s, "St_3_RotateLeft")==0)) {
    return Logic__St_3_RotateLeft;
  };
  if ((strcmp(s, "St_3_Follow")==0)) {
    return Logic__St_3_Follow;
  };
}

char* string_of_Logic__st_3(Logic__st_3 x, char* buf) {
  switch (x) {
    case Logic__St_3_RotateRight:
      strcpy(buf, "St_3_RotateRight");
      break;
    case Logic__St_3_RotateLeft:
      strcpy(buf, "St_3_RotateLeft");
      break;
    case Logic__St_3_Follow:
      strcpy(buf, "St_3_Follow");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_2 Logic__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Init")==0)) {
    return Logic__St_2_Init;
  };
  if ((strcmp(s, "St_2_Fwd")==0)) {
    return Logic__St_2_Fwd;
  };
  if ((strcmp(s, "St_2_Back")==0)) {
    return Logic__St_2_Back;
  };
}

char* string_of_Logic__st_2(Logic__st_2 x, char* buf) {
  switch (x) {
    case Logic__St_2_Init:
      strcpy(buf, "St_2_Init");
      break;
    case Logic__St_2_Fwd:
      strcpy(buf, "St_2_Fwd");
      break;
    case Logic__St_2_Back:
      strcpy(buf, "St_2_Back");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_1 Logic__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_PID")==0)) {
    return Logic__St_1_PID;
  };
  if ((strcmp(s, "St_1_Obs")==0)) {
    return Logic__St_1_Obs;
  };
}

char* string_of_Logic__st_1(Logic__st_1 x, char* buf) {
  switch (x) {
    case Logic__St_1_PID:
      strcpy(buf, "St_1_PID");
      break;
    case Logic__St_1_Obs:
      strcpy(buf, "St_1_Obs");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_WhiteLine")==0)) {
    return Logic__St_WhiteLine;
  };
  if ((strcmp(s, "St_BlackLine")==0)) {
    return Logic__St_BlackLine;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_WhiteLine:
      strcpy(buf, "St_WhiteLine");
      break;
    case Logic__St_BlackLine:
      strcpy(buf, "St_BlackLine");
      break;
    default:
      break;
  };
  return buf;
}

