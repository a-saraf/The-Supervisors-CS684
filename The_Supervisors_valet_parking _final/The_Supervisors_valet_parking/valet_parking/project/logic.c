/* --- Generated the 9/4/2023 at 23:35 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 14:9:13 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__valet_reset(Logic__valet_mem* self) {
  self->v_36 = false;
  self->v_35 = Logic__St_2_Init;
  self->v_19 = false;
  self->v_18 = Logic__St_3_RotateLeft;
  self->v_9 = false;
  self->v_8 = Logic__St_4_Straight;
  self->pnr = false;
  self->ck_6 = Logic__St_WhiteLine;
  self->pnr_1 = false;
  self->ck_4 = Logic__St_1_PID;
  self->pnr_5 = false;
  self->v_43 = true;
  self->v_2 = true;
  self->ck = Logic__St_5_Init;
}

void Logic__valet_step(int is0, int is1, int is2, int is3, int is4, int ir0,
                       int ir1, int ir2, Logic__valet_out* _out,
                       Logic__valet_mem* self) {
  
  int v;
  int v_6;
  int v_4;
  int v_3;
  int v_1;
  int v_7;
  int nr_4_St_4_Stop;
  Logic__st_4 ns_4_St_4_Stop;
  int counter_St_5_Parking_St_4_Stop;
  int obstacle_mode_St_5_Parking_St_4_Stop;
  int direction_St_5_Parking_St_4_Stop;
  int v_right_St_5_Parking_St_4_Stop;
  int v_left_St_5_Parking_St_4_Stop;
  int nr_4_St_4_Forward;
  Logic__st_4 ns_4_St_4_Forward;
  int counter_St_5_Parking_St_4_Forward;
  int obstacle_mode_St_5_Parking_St_4_Forward;
  int direction_St_5_Parking_St_4_Forward;
  int v_right_St_5_Parking_St_4_Forward;
  int v_left_St_5_Parking_St_4_Forward;
  int nr_4_St_4_Right;
  Logic__st_4 ns_4_St_4_Right;
  int counter_St_5_Parking_St_4_Right;
  int obstacle_mode_St_5_Parking_St_4_Right;
  int direction_St_5_Parking_St_4_Right;
  int v_right_St_5_Parking_St_4_Right;
  int v_left_St_5_Parking_St_4_Right;
  int nr_4_St_4_Straight;
  Logic__st_4 ns_4_St_4_Straight;
  int counter_St_5_Parking_St_4_Straight;
  int obstacle_mode_St_5_Parking_St_4_Straight;
  int direction_St_5_Parking_St_4_Straight;
  int v_right_St_5_Parking_St_4_Straight;
  int v_left_St_5_Parking_St_4_Straight;
  Logic__st_4 ck_3;
  Logic__st_4 ns_4;
  int r_4;
  int nr_4;
  int pnr_4;
  int v_13;
  int v_14;
  int v_17;
  int v_16;
  int v_15;
  int nr_3_St_3_RotateRight;
  Logic__st_3 ns_3_St_3_RotateRight;
  int counter_St_5_ObstacleAvoidance_St_3_RotateRight;
  int obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateRight;
  int direction_St_5_ObstacleAvoidance_St_3_RotateRight;
  int v_right_St_5_ObstacleAvoidance_St_3_RotateRight;
  int v_left_St_5_ObstacleAvoidance_St_3_RotateRight;
  int nr_3_St_3_Follow;
  Logic__st_3 ns_3_St_3_Follow;
  int counter_St_5_ObstacleAvoidance_St_3_Follow;
  int obstacle_mode_St_5_ObstacleAvoidance_St_3_Follow;
  int direction_St_5_ObstacleAvoidance_St_3_Follow;
  int v_right_St_5_ObstacleAvoidance_St_3_Follow;
  int v_left_St_5_ObstacleAvoidance_St_3_Follow;
  int nr_3_St_3_RotateLeft;
  Logic__st_3 ns_3_St_3_RotateLeft;
  int counter_St_5_ObstacleAvoidance_St_3_RotateLeft;
  int obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateLeft;
  int direction_St_5_ObstacleAvoidance_St_3_RotateLeft;
  int v_right_St_5_ObstacleAvoidance_St_3_RotateLeft;
  int v_left_St_5_ObstacleAvoidance_St_3_RotateLeft;
  Logic__st_3 ck_2;
  int v_12;
  int v_11;
  int v_10;
  Logic__st_3 ns_3;
  int r_3;
  int nr_3;
  int pnr_3;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int nr_2_St_2_Back;
  Logic__st_2 ns_2_St_2_Back;
  int counter_St_5_LineFollowing_St_2_Back;
  int obstacle_mode_St_5_LineFollowing_St_2_Back;
  int direction_St_5_LineFollowing_St_2_Back;
  int v_right_St_5_LineFollowing_St_2_Back;
  int v_left_St_5_LineFollowing_St_2_Back;
  int nr_2_St_2_Fwd;
  Logic__st_2 ns_2_St_2_Fwd;
  int counter_St_5_LineFollowing_St_2_Fwd;
  int obstacle_mode_St_5_LineFollowing_St_2_Fwd;
  int direction_St_5_LineFollowing_St_2_Fwd;
  int v_right_St_5_LineFollowing_St_2_Fwd;
  int v_left_St_5_LineFollowing_St_2_Fwd;
  int nr_2_St_2_Init;
  Logic__st_2 ns_2_St_2_Init;
  int counter_St_5_LineFollowing_St_2_Init;
  int obstacle_mode_St_5_LineFollowing_St_2_Init;
  int direction_St_5_LineFollowing_St_2_Init;
  int v_right_St_5_LineFollowing_St_2_Init;
  int v_left_St_5_LineFollowing_St_2_Init;
  Logic__st_2 ck_1;
  int v_25;
  Logic__st_5 v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  Logic__st_2 ns_2;
  int r_2;
  int nr_2;
  int pnr_2;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int nr_5_St_5_Parking;
  Logic__st_5 ns_5_St_5_Parking;
  int counter_St_5_Parking;
  int obstacle_mode_St_5_Parking;
  int direction_St_5_Parking;
  int v_right_St_5_Parking;
  int v_left_St_5_Parking;
  int nr_5_St_5_ObstacleAvoidance;
  Logic__st_5 ns_5_St_5_ObstacleAvoidance;
  int counter_St_5_ObstacleAvoidance;
  int obstacle_mode_St_5_ObstacleAvoidance;
  int direction_St_5_ObstacleAvoidance;
  int v_right_St_5_ObstacleAvoidance;
  int v_left_St_5_ObstacleAvoidance;
  int nr_5_St_5_LineFollowing;
  Logic__st_5 ns_5_St_5_LineFollowing;
  int counter_St_5_LineFollowing;
  int obstacle_mode_St_5_LineFollowing;
  int direction_St_5_LineFollowing;
  int v_right_St_5_LineFollowing;
  int v_left_St_5_LineFollowing;
  int nr_5_St_5_Init;
  Logic__st_5 ns_5_St_5_Init;
  int counter_St_5_Init;
  int obstacle_mode_St_5_Init;
  int direction_St_5_Init;
  int v_right_St_5_Init;
  int v_left_St_5_Init;
  int v_41;
  int r_1_St_1_Obs;
  Logic__st_1 s_1_St_1_Obs;
  int r_1_St_1_PID;
  Logic__st_1 s_1_St_1_PID;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_59;
  int v_58;
  int v_56;
  int v_55;
  int v_54;
  int v_52;
  int v_51;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_42;
  int nr_1_St_1_Obs;
  Logic__st_1 ns_1_St_1_Obs;
  int pid_left_St_1_Obs;
  int pid_forward_St_1_Obs;
  int vel_out_left_St_1_Obs;
  int vel_out_right_St_1_Obs;
  int nr_1_St_1_PID;
  Logic__st_1 ns_1_St_1_PID;
  int pid_left_St_1_PID;
  int pid_forward_St_1_PID;
  int vel_out_left_St_1_PID;
  int vel_out_right_St_1_PID;
  Logic__st_1 ck_5;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int nr_St_BlackLine;
  Logic__st ns_St_BlackLine;
  int black_St_BlackLine;
  int thrs_St_BlackLine;
  int ss4_St_BlackLine;
  int ss3_St_BlackLine;
  int ss2_St_BlackLine;
  int ss1_St_BlackLine;
  int ss0_St_BlackLine;
  int s4_St_BlackLine;
  int s3_St_BlackLine;
  int s2_St_BlackLine;
  int s1_St_BlackLine;
  int s0_St_BlackLine;
  int side_vals_St_BlackLine;
  int nr_St_WhiteLine;
  Logic__st ns_St_WhiteLine;
  int black_St_WhiteLine;
  int thrs_St_WhiteLine;
  int ss4_St_WhiteLine;
  int ss3_St_WhiteLine;
  int ss2_St_WhiteLine;
  int ss1_St_WhiteLine;
  int ss0_St_WhiteLine;
  int s4_St_WhiteLine;
  int s3_St_WhiteLine;
  int s2_St_WhiteLine;
  int s1_St_WhiteLine;
  int s0_St_WhiteLine;
  int side_vals_St_WhiteLine;
  Logic__st_5 ns_5;
  int r_5;
  int nr_5;
  Logic__st_1 s_1;
  Logic__st_1 ns_1;
  int r_1;
  int nr_1;
  Logic__st ns;
  int r;
  int nr;
  int s0;
  int s1;
  int s2;
  int s3;
  int s4;
  int ss0;
  int ss1;
  int ss2;
  int ss3;
  int ss4;
  int thrs;
  int vel_out_right;
  int vel_out_left;
  int pid_forward;
  int pid_left;
  int kp1;
  int kp2;
  int kp3;
  int kd1;
  int kd2;
  int kd3;
  int obstacle_mode;
  int black;
  int counter;
  r = self->pnr;
  r_5 = self->pnr_5;
  kd3 = 2;
  kd2 = 2;
  kd1 = 2;
  kp3 = 3;
  kp2 = 4;
  kp1 = 1;
  switch (self->ck_6) {
    case Logic__St_WhiteLine:
      black_St_WhiteLine = 0;
      s4_St_WhiteLine = is4;
      s3_St_WhiteLine = is3;
      s2_St_WhiteLine = is2;
      s1_St_WhiteLine = is1;
      s0_St_WhiteLine = is0;
      thrs_St_WhiteLine = 700;
      s0 = s0_St_WhiteLine;
      s1 = s1_St_WhiteLine;
      s2 = s2_St_WhiteLine;
      v_105 = (s1+s2);
      s3 = s3_St_WhiteLine;
      v_106 = (v_105+s3);
      v_107 = (v_106/3);
      s4 = s4_St_WhiteLine;
      v_103 = (s0+s4);
      v_104 = (v_103/2);
      side_vals_St_WhiteLine = (v_104-v_107);
      _out->side_vals = side_vals_St_WhiteLine;
      v_93 = (_out->side_vals>350);
      thrs = thrs_St_WhiteLine;
      v_102 = (s4>thrs);
      if (v_102) {
        ss4_St_WhiteLine = true;
      } else {
        ss4_St_WhiteLine = false;
      };
      v_101 = (s3>thrs);
      if (v_101) {
        ss3_St_WhiteLine = true;
      } else {
        ss3_St_WhiteLine = false;
      };
      v_100 = (s2>thrs);
      if (v_100) {
        ss2_St_WhiteLine = true;
      } else {
        ss2_St_WhiteLine = false;
      };
      v_99 = (s1>thrs);
      if (v_99) {
        ss1_St_WhiteLine = true;
      } else {
        ss1_St_WhiteLine = false;
      };
      v_98 = (s0>thrs);
      if (v_98) {
        ss0_St_WhiteLine = true;
      } else {
        ss0_St_WhiteLine = false;
      };
      ss0 = ss0_St_WhiteLine;
      ss1 = ss1_St_WhiteLine;
      ss2 = ss2_St_WhiteLine;
      ss3 = ss3_St_WhiteLine;
      ss4 = ss4_St_WhiteLine;
      v_96 = (ss0&&ss4);
      black = black_St_WhiteLine;
      break;
    case Logic__St_BlackLine:
      black_St_BlackLine = 1;
      s4_St_BlackLine = (1023-is4);
      s3_St_BlackLine = (1023-is3);
      s2_St_BlackLine = (1023-is2);
      s1_St_BlackLine = (1023-is1);
      s0_St_BlackLine = (1023-is0);
      thrs_St_BlackLine = 500;
      nr_St_BlackLine = false;
      ns_St_BlackLine = Logic__St_BlackLine;
      s0 = s0_St_BlackLine;
      s1 = s1_St_BlackLine;
      s2 = s2_St_BlackLine;
      v_90 = (s1+s2);
      s3 = s3_St_BlackLine;
      v_91 = (v_90+s3);
      v_92 = (v_91/3);
      s4 = s4_St_BlackLine;
      v_88 = (s0+s4);
      v_89 = (v_88/2);
      side_vals_St_BlackLine = (v_89-v_92);
      _out->side_vals = side_vals_St_BlackLine;
      thrs = thrs_St_BlackLine;
      v_87 = (s4>thrs);
      if (v_87) {
        ss4_St_BlackLine = true;
      } else {
        ss4_St_BlackLine = false;
      };
      v_86 = (s3>thrs);
      if (v_86) {
        ss3_St_BlackLine = true;
      } else {
        ss3_St_BlackLine = false;
      };
      v_85 = (s2>thrs);
      if (v_85) {
        ss2_St_BlackLine = true;
      } else {
        ss2_St_BlackLine = false;
      };
      v_84 = (s1>thrs);
      if (v_84) {
        ss1_St_BlackLine = true;
      } else {
        ss1_St_BlackLine = false;
      };
      v_83 = (s0>thrs);
      if (v_83) {
        ss0_St_BlackLine = true;
      } else {
        ss0_St_BlackLine = false;
      };
      ss0 = ss0_St_BlackLine;
      ss1 = ss1_St_BlackLine;
      ss2 = ss2_St_BlackLine;
      ss3 = ss3_St_BlackLine;
      ss4 = ss4_St_BlackLine;
      black = black_St_BlackLine;
      break;
    default:
      break;
  };
  switch (self->ck_4) {
    case Logic__St_1_PID:
      r_1_St_1_PID = self->pnr_1;
      s_1_St_1_PID = Logic__St_1_PID;
      break;
    default:
      break;
  };
  switch (self->ck) {
    case Logic__St_5_Init:
      counter_St_5_Init = 250;
      obstacle_mode_St_5_Init = false;
      direction_St_5_Init = 1;
      v_right_St_5_Init = 0;
      v_left_St_5_Init = 0;
      v_37 = (ss0||ss1);
      v_38 = (v_37||ss2);
      v_39 = (v_38||ss3);
      v_40 = (v_39||ss4);
      if (v_40) {
        nr_5_St_5_Init = true;
        ns_5_St_5_Init = Logic__St_5_LineFollowing;
      } else {
        nr_5_St_5_Init = false;
        ns_5_St_5_Init = Logic__St_5_Init;
      };
      ns_5 = ns_5_St_5_Init;
      nr_5 = nr_5_St_5_Init;
      _out->direction = direction_St_5_Init;
      obstacle_mode = obstacle_mode_St_5_Init;
      counter = counter_St_5_Init;
      break;
    case Logic__St_5_LineFollowing:
      if (r_5) {
        pnr_2 = false;
      } else {
        pnr_2 = self->v_36;
      };
      r_2 = pnr_2;
      if (r_5) {
        ck_1 = Logic__St_2_Init;
      } else {
        ck_1 = self->v_35;
      };
      v_22 = (ir1==1);
      v_21 = (black==1);
      v_23 = (v_21&&v_22);
      if (v_23) {
        v_25 = true;
        v_24 = Logic__St_5_Parking;
      } else {
        v_25 = false;
        v_24 = Logic__St_5_LineFollowing;
      };
      v_20 = (ir0==1);
      if (v_20) {
        nr_5_St_5_LineFollowing = true;
        ns_5_St_5_LineFollowing = Logic__St_5_ObstacleAvoidance;
      } else {
        nr_5_St_5_LineFollowing = v_25;
        ns_5_St_5_LineFollowing = v_24;
      };
      ns_5 = ns_5_St_5_LineFollowing;
      nr_5 = nr_5_St_5_LineFollowing;
      switch (ck_1) {
        case Logic__St_2_Init:
          counter_St_5_LineFollowing_St_2_Init = 250;
          obstacle_mode_St_5_LineFollowing_St_2_Init = false;
          v_right_St_5_LineFollowing_St_2_Init = 0;
          v_left_St_5_LineFollowing_St_2_Init = 0;
          direction_St_5_LineFollowing_St_2_Init = 1;
          if (ss2) {
            nr_2_St_2_Init = true;
            ns_2_St_2_Init = Logic__St_2_Fwd;
          } else {
            nr_2_St_2_Init = false;
            ns_2_St_2_Init = Logic__St_2_Init;
          };
          direction_St_5_LineFollowing = direction_St_5_LineFollowing_St_2_Init;
          obstacle_mode_St_5_LineFollowing = obstacle_mode_St_5_LineFollowing_St_2_Init;
          counter_St_5_LineFollowing = counter_St_5_LineFollowing_St_2_Init;
          ns_2 = ns_2_St_2_Init;
          nr_2 = nr_2_St_2_Init;
          break;
        case Logic__St_2_Fwd:
          counter_St_5_LineFollowing_St_2_Fwd = 250;
          obstacle_mode_St_5_LineFollowing_St_2_Fwd = false;
          direction_St_5_LineFollowing_St_2_Fwd = 1;
          v_30 = (ss0||ss1);
          v_31 = (v_30||ss2);
          v_32 = (v_31||ss3);
          v_33 = (v_32||ss4);
          v_34 = (v_33==false);
          if (v_34) {
            nr_2_St_2_Fwd = true;
            ns_2_St_2_Fwd = Logic__St_2_Back;
          } else {
            nr_2_St_2_Fwd = false;
            ns_2_St_2_Fwd = Logic__St_2_Fwd;
          };
          direction_St_5_LineFollowing = direction_St_5_LineFollowing_St_2_Fwd;
          obstacle_mode_St_5_LineFollowing = obstacle_mode_St_5_LineFollowing_St_2_Fwd;
          counter_St_5_LineFollowing = counter_St_5_LineFollowing_St_2_Fwd;
          ns_2 = ns_2_St_2_Fwd;
          nr_2 = nr_2_St_2_Fwd;
          break;
        case Logic__St_2_Back:
          counter_St_5_LineFollowing_St_2_Back = 250;
          obstacle_mode_St_5_LineFollowing_St_2_Back = false;
          v_right_St_5_LineFollowing_St_2_Back = 100;
          v_left_St_5_LineFollowing_St_2_Back = 100;
          direction_St_5_LineFollowing_St_2_Back = 0;
          v_26 = (ss0||ss1);
          v_27 = (v_26||ss2);
          v_28 = (v_27||ss3);
          v_29 = (v_28||ss4);
          if (v_29) {
            nr_2_St_2_Back = true;
            ns_2_St_2_Back = Logic__St_2_Fwd;
          } else {
            nr_2_St_2_Back = false;
            ns_2_St_2_Back = Logic__St_2_Back;
          };
          direction_St_5_LineFollowing = direction_St_5_LineFollowing_St_2_Back;
          obstacle_mode_St_5_LineFollowing = obstacle_mode_St_5_LineFollowing_St_2_Back;
          counter_St_5_LineFollowing = counter_St_5_LineFollowing_St_2_Back;
          ns_2 = ns_2_St_2_Back;
          nr_2 = nr_2_St_2_Back;
          break;
        default:
          break;
      };
      _out->direction = direction_St_5_LineFollowing;
      obstacle_mode = obstacle_mode_St_5_LineFollowing;
      counter = counter_St_5_LineFollowing;
      break;
    case Logic__St_5_ObstacleAvoidance:
      if (r_5) {
        pnr_3 = false;
      } else {
        pnr_3 = self->v_19;
      };
      r_3 = pnr_3;
      if (r_5) {
        ck_2 = Logic__St_3_RotateLeft;
      } else {
        ck_2 = self->v_18;
      };
      v_11 = (ir0==0);
      v_10 = (s2>850);
      v_12 = (v_10&&v_11);
      if (v_12) {
        nr_5_St_5_ObstacleAvoidance = true;
        ns_5_St_5_ObstacleAvoidance = Logic__St_5_LineFollowing;
      } else {
        nr_5_St_5_ObstacleAvoidance = false;
        ns_5_St_5_ObstacleAvoidance = Logic__St_5_ObstacleAvoidance;
      };
      ns_5 = ns_5_St_5_ObstacleAvoidance;
      nr_5 = nr_5_St_5_ObstacleAvoidance;
      switch (ck_2) {
        case Logic__St_3_RotateLeft:
          counter_St_5_ObstacleAvoidance_St_3_RotateLeft = 250;
          obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateLeft = true;
          direction_St_5_ObstacleAvoidance_St_3_RotateLeft = 1;
          v_left_St_5_ObstacleAvoidance_St_3_RotateLeft = 0;
          v_right_St_5_ObstacleAvoidance_St_3_RotateLeft = 85;
          v_16 = (ir2==1);
          v_15 = (ir1==1);
          v_17 = (v_15&&v_16);
          if (v_17) {
            nr_3_St_3_RotateLeft = true;
            ns_3_St_3_RotateLeft = Logic__St_3_Follow;
          } else {
            nr_3_St_3_RotateLeft = false;
            ns_3_St_3_RotateLeft = Logic__St_3_RotateLeft;
          };
          v_left_St_5_ObstacleAvoidance = v_left_St_5_ObstacleAvoidance_St_3_RotateLeft;
          v_right_St_5_ObstacleAvoidance = v_right_St_5_ObstacleAvoidance_St_3_RotateLeft;
          direction_St_5_ObstacleAvoidance = direction_St_5_ObstacleAvoidance_St_3_RotateLeft;
          obstacle_mode_St_5_ObstacleAvoidance = obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateLeft;
          counter_St_5_ObstacleAvoidance = counter_St_5_ObstacleAvoidance_St_3_RotateLeft;
          ns_3 = ns_3_St_3_RotateLeft;
          nr_3 = nr_3_St_3_RotateLeft;
          break;
        case Logic__St_3_Follow:
          counter_St_5_ObstacleAvoidance_St_3_Follow = 250;
          obstacle_mode_St_5_ObstacleAvoidance_St_3_Follow = true;
          direction_St_5_ObstacleAvoidance_St_3_Follow = 1;
          v_left_St_5_ObstacleAvoidance_St_3_Follow = 120;
          v_right_St_5_ObstacleAvoidance_St_3_Follow = 75;
          v_14 = (ir1==0);
          if (v_14) {
            nr_3_St_3_Follow = true;
            ns_3_St_3_Follow = Logic__St_3_RotateRight;
          } else {
            nr_3_St_3_Follow = false;
            ns_3_St_3_Follow = Logic__St_3_Follow;
          };
          v_left_St_5_ObstacleAvoidance = v_left_St_5_ObstacleAvoidance_St_3_Follow;
          v_right_St_5_ObstacleAvoidance = v_right_St_5_ObstacleAvoidance_St_3_Follow;
          direction_St_5_ObstacleAvoidance = direction_St_5_ObstacleAvoidance_St_3_Follow;
          obstacle_mode_St_5_ObstacleAvoidance = obstacle_mode_St_5_ObstacleAvoidance_St_3_Follow;
          counter_St_5_ObstacleAvoidance = counter_St_5_ObstacleAvoidance_St_3_Follow;
          ns_3 = ns_3_St_3_Follow;
          nr_3 = nr_3_St_3_Follow;
          break;
        case Logic__St_3_RotateRight:
          counter_St_5_ObstacleAvoidance_St_3_RotateRight = 250;
          obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateRight = true;
          direction_St_5_ObstacleAvoidance_St_3_RotateRight = 1;
          v_left_St_5_ObstacleAvoidance_St_3_RotateRight = 90;
          v_right_St_5_ObstacleAvoidance_St_3_RotateRight = 0;
          v_13 = (ir1==1);
          if (v_13) {
            nr_3_St_3_RotateRight = true;
            ns_3_St_3_RotateRight = Logic__St_3_Follow;
          } else {
            nr_3_St_3_RotateRight = false;
            ns_3_St_3_RotateRight = Logic__St_3_RotateRight;
          };
          v_left_St_5_ObstacleAvoidance = v_left_St_5_ObstacleAvoidance_St_3_RotateRight;
          v_right_St_5_ObstacleAvoidance = v_right_St_5_ObstacleAvoidance_St_3_RotateRight;
          direction_St_5_ObstacleAvoidance = direction_St_5_ObstacleAvoidance_St_3_RotateRight;
          obstacle_mode_St_5_ObstacleAvoidance = obstacle_mode_St_5_ObstacleAvoidance_St_3_RotateRight;
          counter_St_5_ObstacleAvoidance = counter_St_5_ObstacleAvoidance_St_3_RotateRight;
          ns_3 = ns_3_St_3_RotateRight;
          nr_3 = nr_3_St_3_RotateRight;
          break;
        default:
          break;
      };
      _out->direction = direction_St_5_ObstacleAvoidance;
      obstacle_mode = obstacle_mode_St_5_ObstacleAvoidance;
      counter = counter_St_5_ObstacleAvoidance;
      break;
    case Logic__St_5_Parking:
      if (r_5) {
        pnr_4 = false;
      } else {
        pnr_4 = self->v_9;
      };
      r_4 = pnr_4;
      if (r_5) {
        ck_3 = Logic__St_4_Straight;
      } else {
        ck_3 = self->v_8;
      };
      nr_5_St_5_Parking = false;
      ns_5_St_5_Parking = Logic__St_5_Parking;
      ns_5 = ns_5_St_5_Parking;
      nr_5 = nr_5_St_5_Parking;
      switch (ck_3) {
        case Logic__St_4_Straight:
          counter_St_5_Parking_St_4_Straight = 250;
          obstacle_mode_St_5_Parking_St_4_Straight = false;
          direction_St_5_Parking_St_4_Straight = 1;
          v_7 = (ir1==0);
          if (v_7) {
            nr_4_St_4_Straight = true;
            ns_4_St_4_Straight = Logic__St_4_Right;
          } else {
            nr_4_St_4_Straight = false;
            ns_4_St_4_Straight = Logic__St_4_Straight;
          };
          direction_St_5_Parking = direction_St_5_Parking_St_4_Straight;
          obstacle_mode_St_5_Parking = obstacle_mode_St_5_Parking_St_4_Straight;
          counter_St_5_Parking = counter_St_5_Parking_St_4_Straight;
          break;
        case Logic__St_4_Right:
          v_6 = (self->v_5-1);
          v_3 = (r_5||r_4);
          if (self->v_2) {
            v_4 = true;
          } else {
            v_4 = v_3;
          };
          if (v_4) {
            counter_St_5_Parking_St_4_Right = 430;
          } else {
            counter_St_5_Parking_St_4_Right = v_6;
          };
          obstacle_mode_St_5_Parking_St_4_Right = false;
          direction_St_5_Parking_St_4_Right = 1;
          v_left_St_5_Parking_St_4_Right = 130;
          v_right_St_5_Parking_St_4_Right = 25;
          direction_St_5_Parking = direction_St_5_Parking_St_4_Right;
          obstacle_mode_St_5_Parking = obstacle_mode_St_5_Parking_St_4_Right;
          counter_St_5_Parking = counter_St_5_Parking_St_4_Right;
          break;
        case Logic__St_4_Forward:
          counter_St_5_Parking_St_4_Forward = 250;
          obstacle_mode_St_5_Parking_St_4_Forward = false;
          direction_St_5_Parking_St_4_Forward = 1;
          v_left_St_5_Parking_St_4_Forward = 60;
          v_right_St_5_Parking_St_4_Forward = 60;
          v = (ir0==1);
          if (v) {
            nr_4_St_4_Forward = true;
            ns_4_St_4_Forward = Logic__St_4_Stop;
          } else {
            nr_4_St_4_Forward = false;
            ns_4_St_4_Forward = Logic__St_4_Forward;
          };
          direction_St_5_Parking = direction_St_5_Parking_St_4_Forward;
          obstacle_mode_St_5_Parking = obstacle_mode_St_5_Parking_St_4_Forward;
          counter_St_5_Parking = counter_St_5_Parking_St_4_Forward;
          break;
        case Logic__St_4_Stop:
          counter_St_5_Parking_St_4_Stop = 250;
          obstacle_mode_St_5_Parking_St_4_Stop = false;
          direction_St_5_Parking_St_4_Stop = 1;
          v_left_St_5_Parking_St_4_Stop = 0;
          v_right_St_5_Parking_St_4_Stop = 0;
          nr_4_St_4_Stop = false;
          ns_4_St_4_Stop = Logic__St_4_Stop;
          direction_St_5_Parking = direction_St_5_Parking_St_4_Stop;
          obstacle_mode_St_5_Parking = obstacle_mode_St_5_Parking_St_4_Stop;
          counter_St_5_Parking = counter_St_5_Parking_St_4_Stop;
          break;
        default:
          break;
      };
      _out->direction = direction_St_5_Parking;
      obstacle_mode = obstacle_mode_St_5_Parking;
      counter = counter_St_5_Parking;
      break;
    default:
      break;
  };
  switch (self->ck_6) {
    case Logic__St_WhiteLine:
      v_94 = !(obstacle_mode);
      v_95 = (v_93&&v_94);
      v_97 = (v_95&&v_96);
      if (v_97) {
        nr_St_WhiteLine = true;
        ns_St_WhiteLine = Logic__St_BlackLine;
      } else {
        nr_St_WhiteLine = false;
        ns_St_WhiteLine = Logic__St_WhiteLine;
      };
      ns = ns_St_WhiteLine;
      nr = nr_St_WhiteLine;
      break;
    case Logic__St_BlackLine:
      ns = ns_St_BlackLine;
      nr = nr_St_BlackLine;
      break;
    default:
      break;
  };
  switch (self->ck_4) {
    case Logic__St_1_Obs:
      v_41 = (obstacle_mode==false);
      if (v_41) {
        r_1_St_1_Obs = true;
        s_1_St_1_Obs = Logic__St_1_PID;
      } else {
        r_1_St_1_Obs = self->pnr_1;
        s_1_St_1_Obs = Logic__St_1_Obs;
      };
      s_1 = s_1_St_1_Obs;
      r_1 = r_1_St_1_Obs;
      break;
    case Logic__St_1_PID:
      s_1 = s_1_St_1_PID;
      r_1 = r_1_St_1_PID;
      break;
    default:
      break;
  };
  ck_5 = s_1;
  switch (ck_5) {
    case Logic__St_1_PID:
      v_58 = (s1-self->v_57);
      v_59 = (v_58-s3);
      v_61 = (v_59+self->v_60);
      v_62 = (kd3*v_61);
      v_51 = (s0-self->v_50);
      v_52 = (v_51-s4);
      v_54 = (v_52+self->v_53);
      v_55 = (kd2*v_54);
      v_47 = (s1-s3);
      v_48 = (kp3*v_47);
      v_45 = (s0-s4);
      v_46 = (kp2*v_45);
      v_49 = (v_46+v_48);
      v_56 = (v_49+v_55);
      v_63 = (v_56+v_62);
      v_64 = (v_63/24);
      if (self->v_43) {
        v_44 = true;
      } else {
        v_44 = r_1;
      };
      if (v_44) {
        pid_left_St_1_PID = 0;
      } else {
        pid_left_St_1_PID = v_64;
      };
      pid_forward_St_1_PID = 80;
      v_42 = (obstacle_mode==true);
      if (v_42) {
        nr_1_St_1_PID = true;
        ns_1_St_1_PID = Logic__St_1_Obs;
      } else {
        nr_1_St_1_PID = false;
        ns_1_St_1_PID = Logic__St_1_PID;
      };
      pid_forward = pid_forward_St_1_PID;
      pid_left = pid_left_St_1_PID;
      v_80 = (pid_forward+pid_left);
      v_81 = (v_80<=55);
      if (v_81) {
        v_82 = 55;
      } else {
        v_82 = 150;
      };
      v_79 = (pid_forward+pid_left);
      v_76 = (pid_forward+pid_left);
      v_77 = (v_76<150);
      v_74 = (pid_forward+pid_left);
      v_75 = (v_74>55);
      v_78 = (v_75&&v_77);
      if (v_78) {
        vel_out_right_St_1_PID = v_79;
      } else {
        vel_out_right_St_1_PID = v_82;
      };
      v_71 = (pid_forward-pid_left);
      v_72 = (v_71<=55);
      if (v_72) {
        v_73 = 55;
      } else {
        v_73 = 150;
      };
      v_70 = (pid_forward-pid_left);
      v_67 = (pid_forward-pid_left);
      v_68 = (v_67<150);
      v_65 = (pid_forward-pid_left);
      v_66 = (v_65>55);
      v_69 = (v_66&&v_68);
      if (v_69) {
        vel_out_left_St_1_PID = v_70;
      } else {
        vel_out_left_St_1_PID = v_73;
      };
      vel_out_right = vel_out_right_St_1_PID;
      vel_out_left = vel_out_left_St_1_PID;
      ns_1 = ns_1_St_1_PID;
      nr_1 = nr_1_St_1_PID;
      break;
    case Logic__St_1_Obs:
      vel_out_right_St_1_Obs = 45;
      vel_out_left_St_1_Obs = 45;
      pid_left_St_1_Obs = 0;
      pid_forward_St_1_Obs = 0;
      nr_1_St_1_Obs = false;
      ns_1_St_1_Obs = Logic__St_1_Obs;
      pid_forward = pid_forward_St_1_Obs;
      pid_left = pid_left_St_1_Obs;
      vel_out_right = vel_out_right_St_1_Obs;
      vel_out_left = vel_out_left_St_1_Obs;
      ns_1 = ns_1_St_1_Obs;
      nr_1 = nr_1_St_1_Obs;
      break;
    default:
      break;
  };
  switch (self->ck) {
    case Logic__St_5_LineFollowing:
      switch (ck_1) {
        case Logic__St_2_Fwd:
          v_right_St_5_LineFollowing_St_2_Fwd = vel_out_right;
          v_left_St_5_LineFollowing_St_2_Fwd = vel_out_left;
          v_left_St_5_LineFollowing = v_left_St_5_LineFollowing_St_2_Fwd;
          v_right_St_5_LineFollowing = v_right_St_5_LineFollowing_St_2_Fwd;
          break;
        case Logic__St_2_Back:
          v_left_St_5_LineFollowing = v_left_St_5_LineFollowing_St_2_Back;
          v_right_St_5_LineFollowing = v_right_St_5_LineFollowing_St_2_Back;
          break;
        case Logic__St_2_Init:
          v_left_St_5_LineFollowing = v_left_St_5_LineFollowing_St_2_Init;
          v_right_St_5_LineFollowing = v_right_St_5_LineFollowing_St_2_Init;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_5_LineFollowing;
      _out->v_right = v_right_St_5_LineFollowing;
      self->v_36 = nr_2;
      self->v_35 = ns_2;
      break;
    case Logic__St_5_Parking:
      switch (ck_3) {
        case Logic__St_4_Straight:
          v_right_St_5_Parking_St_4_Straight = vel_out_right;
          v_left_St_5_Parking_St_4_Straight = vel_out_left;
          v_left_St_5_Parking = v_left_St_5_Parking_St_4_Straight;
          v_right_St_5_Parking = v_right_St_5_Parking_St_4_Straight;
          ns_4 = ns_4_St_4_Straight;
          nr_4 = nr_4_St_4_Straight;
          break;
        case Logic__St_4_Right:
          v_1 = (counter<=0);
          if (v_1) {
            nr_4_St_4_Right = true;
            ns_4_St_4_Right = Logic__St_4_Stop;
          } else {
            nr_4_St_4_Right = false;
            ns_4_St_4_Right = Logic__St_4_Right;
          };
          v_left_St_5_Parking = v_left_St_5_Parking_St_4_Right;
          v_right_St_5_Parking = v_right_St_5_Parking_St_4_Right;
          ns_4 = ns_4_St_4_Right;
          nr_4 = nr_4_St_4_Right;
          break;
        case Logic__St_4_Stop:
          v_left_St_5_Parking = v_left_St_5_Parking_St_4_Stop;
          v_right_St_5_Parking = v_right_St_5_Parking_St_4_Stop;
          ns_4 = ns_4_St_4_Stop;
          nr_4 = nr_4_St_4_Stop;
          break;
        case Logic__St_4_Forward:
          v_left_St_5_Parking = v_left_St_5_Parking_St_4_Forward;
          v_right_St_5_Parking = v_right_St_5_Parking_St_4_Forward;
          ns_4 = ns_4_St_4_Forward;
          nr_4 = nr_4_St_4_Forward;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_5_Parking;
      _out->v_right = v_right_St_5_Parking;
      self->v_9 = nr_4;
      self->v_8 = ns_4;
      break;
    case Logic__St_5_ObstacleAvoidance:
      _out->v_left = v_left_St_5_ObstacleAvoidance;
      _out->v_right = v_right_St_5_ObstacleAvoidance;
      self->v_19 = nr_3;
      self->v_18 = ns_3;
      break;
    case Logic__St_5_Init:
      _out->v_left = v_left_St_5_Init;
      _out->v_right = v_right_St_5_Init;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck_6 = ns;
  self->pnr_1 = nr_1;
  self->ck_4 = ns_1;
  self->pnr_5 = nr_5;
  switch (ck_5) {
    case Logic__St_1_PID:
      self->v_60 = s3;
      self->v_57 = s1;
      self->v_53 = s4;
      self->v_50 = s0;
      self->v_43 = false;
      break;
    default:
      break;
  };
  switch (self->ck) {
    case Logic__St_5_Parking:
      switch (ck_3) {
        case Logic__St_4_Right:
          self->v_5 = counter;
          self->v_2 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  self->ck = ns_5;;
}

