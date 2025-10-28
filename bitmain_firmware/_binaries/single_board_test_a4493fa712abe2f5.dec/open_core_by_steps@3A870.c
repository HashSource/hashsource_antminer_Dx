int __fastcall open_core_by_steps(int a1)
{
  _DWORD *v2; // r10
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  void (__fastcall *v6)(int, int *); // r3
  __int64 v7; // kr18_8
  unsigned int v8; // r6
  unsigned __int64 v9; // r2
  int v10; // r6
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  unsigned int v15; // r2
  unsigned int v16; // lr
  unsigned int v17; // r6
  unsigned __int64 v18; // kr28_8
  int v19; // r6
  void (__fastcall *v20)(int, int *); // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  void (__fastcall *v23)(int, int *); // r3
  void (__fastcall *v24)(int, int *); // r3
  void (__fastcall *v25)(int, int *); // r3
  void (__fastcall *v26)(int, int *); // r3
  unsigned int v27; // r2
  unsigned int v28; // lr
  unsigned int v29; // r6
  unsigned __int64 v30; // kr38_8
  int v31; // r6
  void (__fastcall *v32)(int, int *); // r3
  void (__fastcall *v33)(int, int *); // r3
  void (__fastcall *v34)(int, int *); // r3
  void (__fastcall *v35)(int, int *); // r3
  void (__fastcall *v36)(int, int *); // r3
  void (__fastcall *v37)(int, int *); // r3
  void (__fastcall *v38)(int, int *); // r3
  unsigned int v39; // r2
  unsigned int v40; // lr
  unsigned int v41; // r6
  unsigned __int64 v42; // kr48_8
  int v43; // r6
  void (__fastcall *v44)(int, int *); // r3
  void (__fastcall *v45)(int, int *); // r3
  void (__fastcall *v46)(int, int *); // r3
  void (__fastcall *v47)(int, int *); // r3
  void (__fastcall *v48)(int, int *); // r3
  void (__fastcall *v49)(int, int *); // r3
  void (__fastcall *v50)(int, int *); // r3
  unsigned int v51; // r2
  unsigned int v52; // lr
  unsigned int v53; // r6
  unsigned __int64 v54; // kr58_8
  int v55; // r6
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  void (__fastcall *v58)(int, int *); // r3
  unsigned int v59; // lr
  unsigned int v60; // r6
  unsigned int v61; // r3
  void (__fastcall *v62)(int, int *); // r3
  void (__fastcall *v63)(int, int *); // r3
  void (__fastcall *v64)(int, int *); // r3
  void (__fastcall *v65)(int, int *); // r3
  void (__fastcall *v66)(int, int *); // r3
  void (__fastcall *v67)(int, int *); // r3
  void (__fastcall *v68)(int, int *); // r3
  unsigned int v69; // r2
  __int64 v70; // kr60_8
  unsigned int v71; // r12
  void (__fastcall *v72)(int, int *); // r3
  void (__fastcall *v73)(int, int *); // r3
  void (__fastcall *v74)(int, int *); // r3
  void (__fastcall *v75)(int, int *); // r3
  __int64 v76; // kr68_8
  unsigned int v77; // r3
  unsigned int v78; // r7
  unsigned __int64 v79; // kr78_8
  int v80; // r7
  void (__fastcall *v81)(int, int *); // r3
  void (__fastcall *v82)(int, int *); // r3
  void (__fastcall *v83)(int, int *); // r3
  void (__fastcall *v84)(int, int *); // r3
  __int64 v85; // kr80_8
  unsigned int v86; // r3
  unsigned __int64 v87; // kr90_8
  void (__fastcall *v88)(int, int *); // r3
  void (__fastcall *v89)(int, int *); // r3
  void (__fastcall *v90)(int, int *); // r3
  void (__fastcall *v91)(int, int *); // r3
  void (__fastcall *v92)(int, int *); // r3
  void (__fastcall *v93)(int, int *); // r3
  void (__fastcall *v94)(int, int *); // r3
  __int64 v95; // kr98_8
  __int64 v96; // krA0_8
  void (__fastcall *v97)(int, int *); // r3
  void (__fastcall *v98)(int, int *); // r3
  void (__fastcall *v99)(int, int *); // r3
  void (__fastcall *v100)(int, int *); // r3
  void (__fastcall *v101)(int, int *); // r3
  void (__fastcall *v102)(int, int *); // r3
  void (__fastcall *v103)(int, int *); // r3
  __int64 v104; // krA8_8
  unsigned int v105; // r3
  unsigned int v106; // r7
  unsigned __int64 v107; // krB8_8
  int v108; // r7
  __int64 v109; // krC0_8
  unsigned int v110; // r3
  unsigned int v111; // r7
  unsigned int v112; // kr10_4
  int v113; // r3
  void (__fastcall *v114)(int, int *); // r3
  void (__fastcall *v115)(int, int *); // r3
  void (__fastcall *v116)(int, int *); // r3
  unsigned int v117; // r2
  unsigned int v118; // r6
  unsigned __int64 v119; // kr20_8
  __int64 v120; // krC8_8
  unsigned int v122; // [sp+28h] [bp-28h]
  unsigned int v123; // [sp+28h] [bp-28h]
  unsigned int v124; // [sp+28h] [bp-28h]
  unsigned int v125; // [sp+28h] [bp-28h]
  unsigned int v126; // [sp+48h] [bp-8h]
  int v127; // [sp+50h] [bp+0h] BYREF
  int v128; // [sp+54h] [bp+4h]
  int v129; // [sp+58h] [bp+8h]
  int v130; // [sp+5Ch] [bp+Ch]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s...", "open_core_by_steps");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11775,
    60,
    &v127);
  v2 = calloc(1u, 0x59u);
  memset(v2 + 4, 0, 0x20u);
  sub_70478(a1, 201, 0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11784);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11784,
    60,
    &v127);
  sub_D1990(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1958(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1920(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18E8(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18B0(a1, 7u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1878(a1, 7u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1840(a1, 7u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1808(a1, 7u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v3 = HIDWORD(qword_1284A0);
  v4 = qword_1284A8;
  v5 = qword_1284A0 + 1;
  *v2 = qword_1284A0;
  v2[1] = v3;
  *((_QWORD *)v2 + 1) = v4;
  qword_1284A0 = v5;
  qword_1284A8 = v4 + 1;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11805);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11805,
    60,
    &v127);
  sub_D1990(a1, 1u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 1;
  v127 = 1;
  v6(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1920(a1, 1u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18E8(a1, 1u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18B0(a1, 6u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1878(a1, 6u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1840(a1, 6u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1808(a1, 6u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v7 = qword_1284A0 + 1;
  v8 = qword_1284A8;
  *v2 = qword_1284A0;
  LODWORD(qword_1284A0) = v7;
  v9 = __PAIR64__(HIDWORD(qword_1284A8), v8) + 1;
  v2[1] = HIDWORD(qword_1284A0);
  HIDWORD(qword_1284A0) = HIDWORD(v7);
  v2[2] = qword_1284A8;
  v10 = HIDWORD(qword_1284A8);
  qword_1284A8 = v9;
  v2[3] = v10;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11826);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11826,
    60,
    &v127);
  sub_D1990(a1, 2u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1958(a1, 2u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1920(a1, 2u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18E8(a1, 2u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  HIWORD(v129) = 201;
  v127 = 1;
  LOBYTE(v130) = 5;
  v11(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v128 = 0;
  v130 = 5;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  v127 = 1;
  BYTE1(v129) = 3;
  v12(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 5;
  LOBYTE(v130) = 5;
  HIWORD(v129) = 201;
  v127 = 1;
  v13(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174528;
  v128 = 0;
  v130 = 5;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v127 = 1;
  v14(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v15 = qword_1284A0;
  v122 = qword_1284A8;
  v16 = HIDWORD(qword_1284A0);
  *v2 = qword_1284A0;
  v17 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v15 + 1;
  v2[1] = v16;
  v18 = __PAIR64__(v17, v122) + 1;
  LODWORD(qword_1284A8) = v122 + 1;
  HIDWORD(qword_1284A0) = (__PAIR64__(v16, v15) + 1) >> 32;
  v2[2] = v122;
  v19 = HIDWORD(qword_1284A8);
  HIDWORD(qword_1284A8) = HIDWORD(v18);
  v2[3] = v19;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11847);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11847,
    60,
    &v127);
  sub_D1990(a1, 3u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 3;
  v127 = 1;
  v20(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 4;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 3;
  v127 = 1;
  v21(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v128 = 0;
  v130 = 3;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  v127 = 1;
  BYTE1(v129) = 6;
  v22(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 3;
  v127 = 1;
  v23(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 3;
  LOBYTE(v130) = 3;
  HIWORD(v129) = 201;
  v127 = 1;
  v24(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1280;
  v130 = 0;
  v128 = 0;
  v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 3;
  v127 = 1;
  v25(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174528;
  v130 = 0;
  v128 = 0;
  v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 3;
  v127 = 1;
  v26(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v27 = qword_1284A0;
  v123 = qword_1284A8;
  v28 = HIDWORD(qword_1284A0);
  *v2 = qword_1284A0;
  v29 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v27 + 1;
  v2[1] = v28;
  v30 = __PAIR64__(v29, v123) + 1;
  LODWORD(qword_1284A8) = v123 + 1;
  HIDWORD(qword_1284A0) = (__PAIR64__(v28, v27) + 1) >> 32;
  v2[2] = v123;
  v31 = HIDWORD(qword_1284A8);
  HIDWORD(qword_1284A8) = HIDWORD(v30);
  v2[3] = v31;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11868);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11868,
    60,
    &v127);
  sub_D1990(a1, 5u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 5;
  v127 = 1;
  v32(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 4;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 5;
  v127 = 1;
  v33(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1536;
  v130 = 0;
  v128 = 0;
  v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 5;
  v127 = 1;
  v34(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 2;
  v128 = 0;
  v35 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  HIWORD(v129) = 201;
  v127 = 1;
  v35(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v36 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 2;
  BYTE1(v129) = 3;
  HIWORD(v129) = 201;
  v127 = 1;
  v36(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v37 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 2;
  BYTE1(v129) = 5;
  HIWORD(v129) = 201;
  v127 = 1;
  v37(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1792;
  v130 = 0;
  v128 = 0;
  v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 2;
  v127 = 1;
  v38(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v39 = qword_1284A0;
  v124 = qword_1284A8;
  v40 = HIDWORD(qword_1284A0);
  *v2 = qword_1284A0;
  v41 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v39 + 1;
  v2[1] = v40;
  v42 = __PAIR64__(v41, v124) + 1;
  LODWORD(qword_1284A8) = v124 + 1;
  HIDWORD(qword_1284A0) = (__PAIR64__(v40, v39) + 1) >> 32;
  v2[2] = v124;
  v43 = HIDWORD(qword_1284A8);
  HIDWORD(qword_1284A8) = HIDWORD(v42);
  v2[3] = v43;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11889);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11889,
    60,
    &v127);
  sub_D1990(a1, 6u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 6;
  v127 = 1;
  v44(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v45 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 4;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 6;
  v127 = 1;
  v45(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 6;
  LOBYTE(v130) = 6;
  HIWORD(v129) = 201;
  v127 = 1;
  v46(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v47 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 1;
  v127 = 1;
  v47(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 3;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 1;
  v127 = 1;
  v48(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v49 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 5;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 1;
  v127 = 1;
  v49(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 7;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 1;
  v127 = 1;
  v50(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v51 = qword_1284A0;
  v125 = qword_1284A8;
  v52 = HIDWORD(qword_1284A0);
  *v2 = qword_1284A0;
  v53 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v51 + 1;
  v2[1] = v52;
  v54 = __PAIR64__(v53, v125) + 1;
  LODWORD(qword_1284A8) = v125 + 1;
  HIDWORD(qword_1284A0) = (__PAIR64__(v52, v51) + 1) >> 32;
  v2[2] = v125;
  v55 = HIDWORD(qword_1284A8);
  HIDWORD(qword_1284A8) = HIDWORD(v54);
  v2[3] = v55;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11910);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11910,
    60,
    &v127);
  sub_D1990(a1, 7u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v128 = 0;
  v130 = 7;
  v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  v127 = 1;
  v56(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v130 = 0;
  v128 = 0;
  v57 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 7;
  v127 = 1;
  v57(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174272;
  v128 = 0;
  v130 = 7;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v128 = 0;
  v130 = 0;
  v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  HIWORD(v129) = 201;
  v127 = 1;
  v58(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1878(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1840(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1808(a1, 0, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v59 = HIDWORD(qword_1284A0);
  v126 = qword_1284A0;
  v60 = HIDWORD(qword_1284A8);
  v61 = qword_1284A8;
  *(_QWORD *)v2 = qword_1284A0;
  v2[3] = v60;
  qword_1284A0 = __PAIR64__(v59, v126) + 1;
  v2[2] = v61;
  qword_1284A8 = __PAIR64__(v60, v61) + 1;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11931);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11931,
    60,
    &v127);
  sub_D1990(a1, 8u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v127 = 1;
  v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  LOBYTE(v130) = 8;
  v62(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v130 = 0;
  v63 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  LOBYTE(v130) = 8;
  v63(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 6;
  v128 = 0;
  HIWORD(v129) = 201;
  v130 = 8;
  v127 = 1;
  v64(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v65 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  v127 = 1;
  LOBYTE(v130) = 15;
  HIWORD(v129) = 201;
  v65(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 3;
  v130 = 15;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v66(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v67 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 5;
  v130 = 15;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v67(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 7;
  v130 = 15;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v68(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v69 = qword_1284A0;
  v70 = qword_1284A8;
  v71 = HIDWORD(qword_1284A0);
  *v2 = qword_1284A0;
  LODWORD(qword_1284A0) = v69 + 1;
  v2[1] = v71;
  *((_QWORD *)v2 + 1) = v70;
  qword_1284A8 = v70 + 1;
  HIDWORD(qword_1284A0) = (__PAIR64__(v71, v69) + 1) >> 32;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11952);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11952,
    60,
    &v127);
  sub_D1990(a1, 9u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v72 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 2;
  v130 = 9;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v72(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v130 = 0;
  v128 = 0;
  v73 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 9;
  v127 = 1;
  HIWORD(v129) = 201;
  v73(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v127 = 1;
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v74 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 6;
  LOBYTE(v130) = 9;
  HIWORD(v129) = 201;
  v74(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 256;
  v130 = 0;
  v128 = 0;
  v127 = 1;
  v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 14;
  HIWORD(v129) = 201;
  v75(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13173504;
  v130 = 14;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174016;
  v130 = 14;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174528;
  v130 = 14;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v76 = qword_1284A0;
  v77 = qword_1284A8;
  *(_QWORD *)v2 = qword_1284A0;
  v78 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v76 + 1;
  v2[2] = v77;
  v79 = __PAIR64__(v78, v77) + 1;
  v80 = HIDWORD(qword_1284A8);
  qword_1284A8 = v79;
  v2[3] = v80;
  HIDWORD(qword_1284A0) = (unsigned __int64)(v76 + 1) >> 32;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11973);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11973,
    60,
    &v127);
  sub_D1990(a1, 0xAu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v81 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v127 = 1;
  LOBYTE(v130) = 10;
  HIWORD(v129) = 201;
  v81(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v130 = 0;
  v128 = 0;
  v82 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 10;
  v127 = 1;
  HIWORD(v129) = 201;
  v82(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1536;
  v130 = 0;
  v128 = 0;
  v83 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 10;
  v127 = 1;
  HIWORD(v129) = 201;
  v83(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 256;
  v130 = 0;
  v128 = 0;
  v127 = 1;
  v84 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 13;
  HIWORD(v129) = 201;
  v84(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13173504;
  v130 = 13;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174016;
  v130 = 13;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 13174528;
  v130 = 13;
  v128 = 0;
  v127 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v85 = qword_1284A0;
  v86 = qword_1284A8;
  *(_QWORD *)v2 = qword_1284A0;
  v2[2] = v86;
  v87 = __PAIR64__(HIDWORD(qword_1284A8), v86) + 1;
  LODWORD(qword_1284A8) = v86 + 1;
  qword_1284A0 = v85 + 1;
  v2[3] = HIDWORD(qword_1284A8);
  HIDWORD(qword_1284A8) = HIDWORD(v87);
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 11994);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    11994,
    60,
    &v127);
  sub_D1990(a1, 0xBu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 0;
  v128 = 0;
  v88 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v127 = 1;
  LOBYTE(v130) = 11;
  HIWORD(v129) = 201;
  v88(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v130 = 0;
  v128 = 0;
  v89 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 11;
  v127 = 1;
  HIWORD(v129) = 201;
  v89(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1536;
  v130 = 11;
  v128 = 0;
  v90 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v127 = 1;
  HIWORD(v129) = 201;
  v90(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 0;
  v128 = 0;
  v91 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  LOBYTE(v130) = 11;
  v127 = 1;
  HIWORD(v129) = 201;
  v91(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 768;
  v130 = 0;
  v128 = 0;
  v92 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 11;
  v127 = 1;
  HIWORD(v129) = 201;
  v92(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1280;
  v130 = 0;
  v128 = 0;
  v93 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 11;
  v127 = 1;
  HIWORD(v129) = 201;
  v93(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v130 = 0;
  v94 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 11;
  v128 = 0;
  v129 = 13174528;
  v127 = 1;
  v94(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v95 = qword_1284A0;
  v96 = qword_1284A8;
  LODWORD(qword_1284A0) = qword_1284A0 + 1;
  *(_QWORD *)v2 = v95;
  v2[2] = v96;
  HIDWORD(qword_1284A0) = (unsigned __int64)(v95 + 1) >> 32;
  v2[3] = HIDWORD(v96);
  qword_1284A8 = v96 + 1;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 12015);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    12015,
    60,
    &v127);
  sub_D1990(a1, 0xDu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 13;
  v128 = 0;
  v127 = 1;
  v97 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v129) = 201;
  v97(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1024;
  v98 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v130 = 13;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v98(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1536;
  v130 = 0;
  v128 = 0;
  v99 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 13;
  v127 = 1;
  HIWORD(v129) = 201;
  v99(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 0;
  v130 = 10;
  v128 = 0;
  v100 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v129) = 1;
  v127 = 1;
  HIWORD(v129) = 201;
  v100(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 768;
  v101 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v130 = 10;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v101(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1280;
  v130 = 0;
  v128 = 0;
  v102 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 10;
  v127 = 1;
  HIWORD(v129) = 201;
  v102(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v130 = 0;
  v103 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 10;
  v128 = 0;
  v129 = 13174528;
  v127 = 1;
  v103(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v104 = qword_1284A0;
  v105 = qword_1284A8;
  *v2 = qword_1284A0;
  v106 = HIDWORD(qword_1284A8);
  LODWORD(qword_1284A0) = v104 + 1;
  v2[1] = HIDWORD(v104);
  v107 = __PAIR64__(v106, v105) + 1;
  v108 = HIDWORD(qword_1284A8);
  v2[2] = v105;
  HIDWORD(qword_1284A0) = (unsigned __int64)(v104 + 1) >> 32;
  v2[3] = v108;
  qword_1284A8 = v107;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 12036);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    12036,
    60,
    &v127);
  sub_D1990(a1, 0xEu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1958(a1, 0xEu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1920(a1, 0xEu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18E8(a1, 0xEu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18B0(a1, 9u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1878(a1, 9u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1840(a1, 9u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1808(a1, 9u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v109 = qword_1284A0;
  v110 = qword_1284A8;
  *v2 = qword_1284A0;
  v111 = HIDWORD(qword_1284A8);
  v112 = v110;
  v2[2] = v110;
  v113 = HIDWORD(qword_1284A8);
  v2[1] = HIDWORD(v109);
  LODWORD(qword_1284A0) = v109 + 1;
  v2[3] = v113;
  HIDWORD(qword_1284A0) = (unsigned __int64)(v109 + 1) >> 32;
  qword_1284A8 = __PAIR64__(v111, v112) + 1;
  push_work_base(a1, (int)v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v127, 0x1000u, 0, "%s %d", "open_core_by_steps", 12057);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_core_by_steps",
    18,
    12057,
    60,
    &v127);
  sub_D1990(a1, 0xFu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 512;
  v130 = 15;
  v128 = 0;
  v114 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v127 = 1;
  HIWORD(v129) = 201;
  v114(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1920(a1, 0xFu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18E8(a1, 0xFu, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D18B0(a1, 8u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  sub_D1878(a1, 8u, 201, 1);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1280;
  v115 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v130 = 8;
  v128 = 0;
  v127 = 1;
  HIWORD(v129) = 201;
  v115(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v129 = 1792;
  v130 = 0;
  v128 = 0;
  v116 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v130) = 8;
  v127 = 1;
  HIWORD(v129) = 201;
  v116(a1, &v127);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v119 = qword_1284A0;
  v118 = HIDWORD(v119);
  v117 = v119;
  v120 = qword_1284A8;
  ++qword_1284A0;
  *(_QWORD *)v2 = __PAIR64__(v118, v117);
  *((_QWORD *)v2 + 1) = v120;
  qword_1284A8 = v120 + 1;
  push_work_base(a1, (int)v2);
  return 0;
}
