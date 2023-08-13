/* --- Generated the 30/3/2023 at 20:41 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 6 12:7:46 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s valet -hepts logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__valet_reset(Logic__valet_mem* self) {
  self->v_15 = false;
  self->v_14 = Logic__St_1_Init;
  self->pnr = false;
  self->pnr_2 = false;
  self->ck = Logic__St_2_Init;
  self->v_28 = true;
  self->v_20 = true;
  self->ck_2 = Logic__St_PID;
}

void Logic__valet_step(int s0, int s1, int s2, int s3, int s4,
                       Logic__valet_out* _out, Logic__valet_mem* self) {
  
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int nr_1_St_1_Back;
  Logic__st_1 ns_1_St_1_Back;
  int direction_St_2_LineFollowing_St_1_Back;
  int v_right_St_2_LineFollowing_St_1_Back;
  int v_left_St_2_LineFollowing_St_1_Back;
  int nr_1_St_1_Fwd;
  Logic__st_1 ns_1_St_1_Fwd;
  int direction_St_2_LineFollowing_St_1_Fwd;
  int v_right_St_2_LineFollowing_St_1_Fwd;
  int v_left_St_2_LineFollowing_St_1_Fwd;
  int nr_1_St_1_Init;
  Logic__st_1 ns_1_St_1_Init;
  int direction_St_2_LineFollowing_St_1_Init;
  int v_right_St_2_LineFollowing_St_1_Init;
  int v_left_St_2_LineFollowing_St_1_Init;
  Logic__st_1 ck_1;
  Logic__st_1 ns_1;
  int r_1;
  int nr_1;
  int pnr_1;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int nr_2_St_2_LineFollowing;
  Logic__st_2 ns_2_St_2_LineFollowing;
  int direction_St_2_LineFollowing;
  int v_right_St_2_LineFollowing;
  int v_left_St_2_LineFollowing;
  int nr_2_St_2_Init;
  Logic__st_2 ns_2_St_2_Init;
  int direction_St_2_Init;
  int v_right_St_2_Init;
  int v_left_St_2_Init;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_44;
  int v_43;
  int v_41;
  int v_40;
  int v_39;
  int v_37;
  int v_36;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_22;
  int v_21;
  int nr_St_PID;
  Logic__st ns_St_PID;
  int pid_left_St_PID;
  int pid_forward_St_PID;
  int vel_out_left_St_PID;
  int vel_out_right_St_PID;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  Logic__st_2 ns_2;
  int r_2;
  int nr_2;
  Logic__st ns;
  int r;
  int nr;
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
  r = self->pnr;
  r_2 = self->pnr_2;
  kd3 = 2;
  kd2 = 2;
  kd1 = 2;
  kp3 = 3;
  kp2 = 4;
  kp1 = 1;
  thrs = 640;
  v_4 = (s4>thrs);
  if (v_4) {
    ss4 = true;
  } else {
    ss4 = false;
  };
  v_3 = (s3>thrs);
  if (v_3) {
    ss3 = true;
  } else {
    ss3 = false;
  };
  v_2 = (s2>thrs);
  if (v_2) {
    ss2 = true;
  } else {
    ss2 = false;
  };
  v_1 = (s1>thrs);
  if (v_1) {
    ss1 = true;
  } else {
    ss1 = false;
  };
  v = (s0>thrs);
  if (v) {
    ss0 = true;
  } else {
    ss0 = false;
  };
  switch (self->ck_2) {
    case Logic__St_PID:
      v_43 = (s1-self->v_42);
      v_44 = (v_43-s3);
      v_46 = (v_44+self->v_45);
      v_47 = (kd3*v_46);
      v_36 = (s0-self->v_35);
      v_37 = (v_36-s4);
      v_39 = (v_37+self->v_38);
      v_40 = (kd2*v_39);
      v_32 = (s1-s3);
      v_33 = (kp3*v_32);
      v_30 = (s0-s4);
      v_31 = (kp2*v_30);
      v_34 = (v_31+v_33);
      v_41 = (v_34+v_40);
      v_48 = (v_41+v_47);
      v_49 = (v_48/16);
      if (self->v_28) {
        v_29 = true;
      } else {
        v_29 = r;
      };
      if (v_29) {
        pid_left_St_PID = 0;
      } else {
        pid_left_St_PID = v_49;
      };
      v_24 = (s2-self->v_23);
      v_25 = (kd1*v_24);
      v_22 = (kp1*s2);
      v_26 = (v_22+v_25);
      v_27 = (v_26/12);
      if (self->v_20) {
        v_21 = true;
      } else {
        v_21 = r;
      };
      if (v_21) {
        pid_forward_St_PID = 0;
      } else {
        pid_forward_St_PID = v_27;
      };
      nr_St_PID = false;
      ns_St_PID = Logic__St_PID;
      pid_forward = pid_forward_St_PID;
      pid_left = pid_left_St_PID;
      v_65 = (pid_forward+pid_left);
      v_66 = (v_65<=0);
      if (v_66) {
        v_67 = 0;
      } else {
        v_67 = 255;
      };
      v_64 = (pid_forward+pid_left);
      v_61 = (pid_forward+pid_left);
      v_62 = (v_61<255);
      v_59 = (pid_forward+pid_left);
      v_60 = (v_59>0);
      v_63 = (v_60&&v_62);
      if (v_63) {
        vel_out_right_St_PID = v_64;
      } else {
        vel_out_right_St_PID = v_67;
      };
      v_56 = (pid_forward-pid_left);
      v_57 = (v_56<=0);
      if (v_57) {
        v_58 = 0;
      } else {
        v_58 = 255;
      };
      v_55 = (pid_forward-pid_left);
      v_52 = (pid_forward-pid_left);
      v_53 = (v_52<255);
      v_50 = (pid_forward-pid_left);
      v_51 = (v_50>0);
      v_54 = (v_51&&v_53);
      if (v_54) {
        vel_out_left_St_PID = v_55;
      } else {
        vel_out_left_St_PID = v_58;
      };
      vel_out_right = vel_out_right_St_PID;
      vel_out_left = vel_out_left_St_PID;
      ns = ns_St_PID;
      nr = nr_St_PID;
      break;
    default:
      break;
  };
  switch (self->ck) {
    case Logic__St_2_Init:
      direction_St_2_Init = 1;
      v_right_St_2_Init = 0;
      v_left_St_2_Init = 0;
      v_16 = (ss0||ss1);
      v_17 = (v_16||ss2);
      v_18 = (v_17||ss3);
      v_19 = (v_18||ss4);
      if (v_19) {
        nr_2_St_2_Init = true;
        ns_2_St_2_Init = Logic__St_2_LineFollowing;
      } else {
        nr_2_St_2_Init = false;
        ns_2_St_2_Init = Logic__St_2_Init;
      };
      ns_2 = ns_2_St_2_Init;
      nr_2 = nr_2_St_2_Init;
      _out->v_left = v_left_St_2_Init;
      _out->v_right = v_right_St_2_Init;
      _out->direction = direction_St_2_Init;
      break;
    case Logic__St_2_LineFollowing:
      if (r_2) {
        pnr_1 = false;
      } else {
        pnr_1 = self->v_15;
      };
      r_1 = pnr_1;
      if (r_2) {
        ck_1 = Logic__St_1_Init;
      } else {
        ck_1 = self->v_14;
      };
      nr_2_St_2_LineFollowing = false;
      ns_2_St_2_LineFollowing = Logic__St_2_LineFollowing;
      ns_2 = ns_2_St_2_LineFollowing;
      nr_2 = nr_2_St_2_LineFollowing;
      switch (ck_1) {
        case Logic__St_1_Init:
          v_right_St_2_LineFollowing_St_1_Init = 0;
          v_left_St_2_LineFollowing_St_1_Init = 0;
          direction_St_2_LineFollowing_St_1_Init = 1;
          if (ss2) {
            nr_1_St_1_Init = true;
            ns_1_St_1_Init = Logic__St_1_Fwd;
          } else {
            nr_1_St_1_Init = false;
            ns_1_St_1_Init = Logic__St_1_Init;
          };
          v_left_St_2_LineFollowing = v_left_St_2_LineFollowing_St_1_Init;
          v_right_St_2_LineFollowing = v_right_St_2_LineFollowing_St_1_Init;
          direction_St_2_LineFollowing = direction_St_2_LineFollowing_St_1_Init;
          ns_1 = ns_1_St_1_Init;
          nr_1 = nr_1_St_1_Init;
          break;
        case Logic__St_1_Fwd:
          direction_St_2_LineFollowing_St_1_Fwd = 1;
          v_right_St_2_LineFollowing_St_1_Fwd = vel_out_right;
          v_left_St_2_LineFollowing_St_1_Fwd = vel_out_left;
          v_9 = (ss0||ss1);
          v_10 = (v_9||ss2);
          v_11 = (v_10||ss3);
          v_12 = (v_11||ss4);
          v_13 = (v_12==false);
          if (v_13) {
            nr_1_St_1_Fwd = true;
            ns_1_St_1_Fwd = Logic__St_1_Back;
          } else {
            nr_1_St_1_Fwd = false;
            ns_1_St_1_Fwd = Logic__St_1_Fwd;
          };
          v_left_St_2_LineFollowing = v_left_St_2_LineFollowing_St_1_Fwd;
          v_right_St_2_LineFollowing = v_right_St_2_LineFollowing_St_1_Fwd;
          direction_St_2_LineFollowing = direction_St_2_LineFollowing_St_1_Fwd;
          ns_1 = ns_1_St_1_Fwd;
          nr_1 = nr_1_St_1_Fwd;
          break;
        case Logic__St_1_Back:
          v_right_St_2_LineFollowing_St_1_Back = 100;
          v_left_St_2_LineFollowing_St_1_Back = 100;
          direction_St_2_LineFollowing_St_1_Back = 0;
          v_5 = (ss0||ss1);
          v_6 = (v_5||ss2);
          v_7 = (v_6||ss3);
          v_8 = (v_7||ss4);
          if (v_8) {
            nr_1_St_1_Back = true;
            ns_1_St_1_Back = Logic__St_1_Fwd;
          } else {
            nr_1_St_1_Back = false;
            ns_1_St_1_Back = Logic__St_1_Back;
          };
          v_left_St_2_LineFollowing = v_left_St_2_LineFollowing_St_1_Back;
          v_right_St_2_LineFollowing = v_right_St_2_LineFollowing_St_1_Back;
          direction_St_2_LineFollowing = direction_St_2_LineFollowing_St_1_Back;
          ns_1 = ns_1_St_1_Back;
          nr_1 = nr_1_St_1_Back;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_2_LineFollowing;
      _out->v_right = v_right_St_2_LineFollowing;
      _out->direction = direction_St_2_LineFollowing;
      self->v_15 = nr_1;
      self->v_14 = ns_1;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->pnr_2 = nr_2;
  self->ck = ns_2;
  switch (self->ck_2) {
    case Logic__St_PID:
      self->v_45 = s3;
      self->v_42 = s1;
      self->v_38 = s4;
      self->v_35 = s0;
      self->v_28 = false;
      self->v_23 = s2;
      self->v_20 = false;
      break;
    default:
      break;
  };
  self->ck_2 = ns;;
}

