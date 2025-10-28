int __fastcall open_core_by_steps(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  void (__fastcall *v5)(int, int *); // r3
  __int64 v6; // kr08_8
  unsigned int v7; // r12
  unsigned int v8; // r3
  int v9; // lr
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  int v14; // r2
  unsigned int v15; // lr
  __int64 v16; // kr20_8
  int v17; // r1
  unsigned int v18; // kr00_4
  void (__fastcall *v19)(int, int *); // r3
  void (__fastcall *v20)(int, int *); // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  __int64 v23; // kr30_8
  unsigned int v24; // r12
  unsigned int v25; // r3
  int v26; // lr
  void (__fastcall *v27)(int, int *); // r3
  void (__fastcall *v28)(int, int *); // r3
  void (__fastcall *v29)(int, int *); // r3
  void (__fastcall *v30)(int, int *); // r3
  void (__fastcall *v31)(int, int *); // r3
  __int64 v32; // kr38_8
  unsigned int v33; // r12
  int v34; // r3
  unsigned int v35; // r3
  int v36; // lr
  void (__fastcall *v37)(int, int *); // r3
  void (__fastcall *v38)(int, int *); // r3
  void (__fastcall *v39)(int, int *); // r3
  void (__fastcall *v40)(int, int *); // r3
  __int64 v41; // kr48_8
  unsigned int v42; // r12
  int v43; // r3
  unsigned int v44; // r3
  int v45; // lr
  void (__fastcall *v46)(int, int *); // r3
  unsigned int v47; // r2
  unsigned int v48; // r3
  unsigned int v49; // lr
  int v50; // r8
  unsigned int v51; // r12
  void (__fastcall *v52)(int, int *); // r3
  void (__fastcall *v53)(int, int *); // r3
  void (__fastcall *v54)(int, int *); // r3
  void (__fastcall *v55)(int, int *); // r3
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  void (__fastcall *v58)(int, int *); // r3
  __int64 v59; // kr58_8
  unsigned int v60; // r12
  unsigned int v61; // r10
  void (__fastcall *v62)(int, int *); // r3
  void (__fastcall *v63)(int, int *); // r3
  void (__fastcall *v64)(int, int *); // r3
  void (__fastcall *v65)(int, int *); // r3
  void (__fastcall *v66)(int, int *); // r3
  void (__fastcall *v67)(int, int *); // r3
  void (__fastcall *v68)(int, int *); // r3
  unsigned int v69; // r8
  unsigned int v70; // r3
  unsigned int v71; // r12
  int v72; // lr
  unsigned int v73; // r2
  void (__fastcall *v74)(int, int *); // r3
  void (__fastcall *v75)(int, int *); // r3
  void (__fastcall *v76)(int, int *); // r3
  void (__fastcall *v77)(int, int *); // r3
  void (__fastcall *v78)(int, int *); // r3
  void (__fastcall *v79)(int, int *); // r3
  void (__fastcall *v80)(int, int *); // r3
  __int64 v81; // kr60_8
  __int64 v82; // kr68_8
  void (__fastcall *v83)(int, int *); // r3
  void (__fastcall *v84)(int, int *); // r3
  void (__fastcall *v85)(int, int *); // r3
  void (__fastcall *v86)(int, int *); // r3
  void (__fastcall *v87)(int, int *); // r3
  void (__fastcall *v88)(int, int *); // r3
  void (__fastcall *v89)(int, int *); // r3
  void (__fastcall *v90)(int, int *); // r3
  __int64 v91; // kr78_8
  unsigned int v92; // r12
  unsigned int v93; // r10
  void (__fastcall *v94)(int, int *); // r3
  void (__fastcall *v95)(int, int *); // r3
  void (__fastcall *v96)(int, int *); // r3
  void (__fastcall *v97)(int, int *); // r3
  void (__fastcall *v98)(int, int *); // r3
  void (__fastcall *v99)(int, int *); // r3
  void (__fastcall *v100)(int, int *); // r3
  void (__fastcall *v101)(int, int *); // r3
  __int64 v102; // kr88_8
  __int64 v103; // kr90_8
  void (__fastcall *v104)(int, int *); // r3
  void (__fastcall *v105)(int, int *); // r3
  void (__fastcall *v106)(int, int *); // r3
  void (__fastcall *v107)(int, int *); // r3
  void (__fastcall *v108)(int, int *); // r3
  void (__fastcall *v109)(int, int *); // r3
  void (__fastcall *v110)(int, int *); // r3
  __int64 v111; // kr98_8
  unsigned int v112; // r3
  unsigned int v113; // r12
  void (__fastcall *v114)(int, int *); // r3
  void (__fastcall *v115)(int, int *); // r3
  void (__fastcall *v116)(int, int *); // r3
  void (__fastcall *v117)(int, int *); // r3
  void (__fastcall *v118)(int, int *); // r3
  void (__fastcall *v119)(int, int *); // r3
  void (__fastcall *v120)(int, int *); // r3
  void (__fastcall *v121)(int, int *); // r3
  __int64 v122; // krA0_8
  __int64 v123; // krA8_8
  void (__fastcall *v124)(int, int *); // r3
  void (__fastcall *v125)(int, int *); // r3
  void (__fastcall *v126)(int, int *); // r3
  void (__fastcall *v127)(int, int *); // r3
  void (__fastcall *v128)(int, int *); // r3
  void (__fastcall *v129)(int, int *); // r3
  void (__fastcall *v130)(int, int *); // r3
  void (__fastcall *v131)(int, int *); // r3
  __int64 v132; // krB8_8
  __int64 v133; // krC0_8
  __int64 v134; // krC8_8
  _DWORD *v136; // [sp+14h] [bp-1038h]
  int v137; // [sp+48h] [bp-1004h] BYREF
  int v138; // [sp+4Ch] [bp-1000h]
  int v139; // [sp+50h] [bp-FFCh]
  int v140; // [sp+54h] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s...", "open_core_by_steps");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11776,
    60,
    &v137);
  v136 = calloc(1u, 0x59u);
  memset(v136 + 4, 0, 0x20u);
  v140 = 255;
  v138 = 0;
  v137 = 0;
  v139 = 13172737;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11785);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11785,
    60,
    &v137);
  v139 = 13172736;
  v140 = 0;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v140 = 0;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 0;
  v138 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v2(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 0;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v140 = 0;
  v138 = 0;
  v137 = 1;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 7;
  v3(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 7;
  v138 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v4(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 7;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174528;
  v140 = 7;
  v138 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v5(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v6 = qword_1A24F0;
  v7 = HIDWORD(qword_1A24F8);
  LODWORD(qword_1A24F0) = qword_1A24F0 + 1;
  v8 = qword_1A24F8;
  *(_QWORD *)v136 = v6;
  v9 = qword_1A24F8;
  v136[3] = v7;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v6 + 1) >> 32;
  v136[2] = v9;
  qword_1A24F8 = __PAIR64__(v7, v8) + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11806);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11806,
    60,
    &v137);
  v139 = 13172736;
  v140 = 1;
  v138 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v10(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v140 = 1;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 1;
  v138 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v11(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 1;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v140 = 6;
  v138 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v12(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 6;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 6;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174528;
  v140 = 6;
  v138 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v13(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v15 = HIDWORD(qword_1A24F0);
  v14 = qword_1A24F0;
  v16 = qword_1A24F8;
  v18 = qword_1A24F0;
  v17 = qword_1A24F0 + 1;
  v136[1] = HIDWORD(qword_1A24F0);
  LODWORD(qword_1A24F0) = v17;
  HIDWORD(qword_1A24F0) = (__PAIR64__(v15, v18) + 1) >> 32;
  LODWORD(qword_1A24F8) = v16 + 1;
  v136[3] = HIDWORD(v16);
  *v136 = v14;
  v136[2] = v16;
  HIDWORD(qword_1A24F8) = __CFADD__((_DWORD)v16, 1) + HIDWORD(v16);
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11827);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11827,
    60,
    &v137);
  v139 = 13172736;
  v140 = 2;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172736;
  v140 = 0;
  v138 = 0;
  v19 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 2;
  LOBYTE(v140) = 2;
  v137 = 1;
  v19(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 2;
  v138 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v20(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 2;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v140 = 5;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 5;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 5;
  v138 = 0;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v21(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174528;
  v140 = 5;
  v138 = 0;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v22(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = qword_1A24F0;
  v24 = HIDWORD(qword_1A24F8);
  ++qword_1A24F0;
  v25 = qword_1A24F8;
  *(_QWORD *)v136 = v23;
  v26 = qword_1A24F8;
  v136[3] = v24;
  LODWORD(qword_1A24F8) = v25 + 1;
  v136[2] = v26;
  HIDWORD(qword_1A24F8) = (__PAIR64__(v24, v25) + 1) >> 32;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11848);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11848,
    60,
    &v137);
  v139 = 13172736;
  v140 = 3;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v140 = 3;
  v138 = 0;
  v27 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v27(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 3;
  v138 = 0;
  v28 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v28(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 3;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v140 = 3;
  v138 = 0;
  v29 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v29(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v138 = 0;
  v140 = 3;
  v30 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v30(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 3;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174528;
  v140 = 3;
  v138 = 0;
  v31 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v31(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v32 = qword_1A24F0;
  v33 = HIDWORD(qword_1A24F8);
  v34 = qword_1A24F0 + 1;
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v34;
  v35 = qword_1A24F8;
  v136[1] = HIDWORD(v32);
  v36 = qword_1A24F8;
  v136[3] = v33;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v32 + 1) >> 32;
  v136[2] = v36;
  qword_1A24F8 = __PAIR64__(v33, v35) + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11869);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11869,
    60,
    &v137);
  v138 = 0;
  v139 = 13172736;
  v140 = 5;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v140 = 5;
  v138 = 0;
  v37 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v37(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 5;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 5;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v140 = 2;
  v138 = 0;
  v38 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v38(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 2;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 2;
  v138 = 0;
  v39 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v39(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174528;
  v140 = 2;
  v138 = 0;
  v40 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v40(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v41 = qword_1A24F0;
  v42 = HIDWORD(qword_1A24F8);
  v43 = qword_1A24F0 + 1;
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v43;
  v44 = qword_1A24F8;
  v136[1] = HIDWORD(v41);
  v45 = qword_1A24F8;
  v136[3] = v42;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v41 + 1) >> 32;
  v136[2] = v45;
  qword_1A24F8 = __PAIR64__(v42, v44) + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11890);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11890,
    60,
    &v137);
  v138 = 0;
  v139 = 13172736;
  v140 = 6;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v140 = 6;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v138 = 0;
  v140 = 6;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174272;
  v140 = 6;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172992;
  v138 = 0;
  v140 = 1;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 1;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 1;
  v138 = 0;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v138 = 0;
  v46 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 7;
  LOBYTE(v140) = 1;
  v137 = 1;
  HIWORD(v139) = 201;
  v46(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v47 = qword_1A24F0;
  v48 = qword_1A24F8;
  v49 = HIDWORD(qword_1A24F0);
  v50 = qword_1A24F0 + 1;
  v51 = HIDWORD(qword_1A24F8);
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v50;
  v136[3] = v51;
  v136[2] = v48;
  v136[1] = v49;
  HIDWORD(qword_1A24F0) = (__PAIR64__(v49, v47) + 1) >> 32;
  qword_1A24F8 = __PAIR64__(v51, v48) + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11911);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11911,
    60,
    &v137);
  v138 = 0;
  v52 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13172736;
  v140 = 7;
  v137 = 1;
  v52(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v53 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 7;
  BYTE1(v139) = 2;
  HIWORD(v139) = 201;
  v137 = 1;
  v53(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1024;
  v140 = 7;
  v54 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  v137 = 1;
  v54(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13174272;
  v140 = 7;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v55 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  BYTE1(v139) = 1;
  v137 = 1;
  v55(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 768;
  v140 = 0;
  v56 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  v56(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1280;
  v140 = 0;
  v57 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  v57(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1792;
  v140 = 0;
  v58 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  v58(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v59 = qword_1A24F0;
  v60 = HIDWORD(qword_1A24F8);
  *(_QWORD *)v136 = qword_1A24F0;
  v61 = qword_1A24F8;
  qword_1A24F0 = v59 + 1;
  v136[2] = qword_1A24F8;
  v136[3] = v60;
  qword_1A24F8 = __PAIR64__(v60, v61) + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11932);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11932,
    60,
    &v137);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v62 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  LOBYTE(v140) = 8;
  v137 = 1;
  v62(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13173248;
  v140 = 0;
  v63 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 8;
  v137 = 1;
  v63(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13172736;
  v140 = 8;
  v64 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 4;
  v137 = 1;
  v64(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13174272;
  v140 = 8;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v65 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  BYTE1(v139) = 1;
  v137 = 1;
  LOBYTE(v140) = 15;
  v65(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 768;
  v140 = 0;
  v66 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  LOBYTE(v140) = 15;
  v66(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1280;
  v140 = 0;
  v67 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  LOBYTE(v140) = 15;
  v67(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1792;
  v140 = 0;
  v68 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  HIWORD(v139) = 201;
  LOBYTE(v140) = 15;
  v68(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v69 = qword_1A24F0;
  v70 = qword_1A24F8;
  v71 = HIDWORD(qword_1A24F0);
  v72 = qword_1A24F0 + 1;
  v73 = HIDWORD(qword_1A24F8);
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v72;
  v136[2] = v70;
  v136[3] = v73;
  v136[1] = v71;
  qword_1A24F8 = __PAIR64__(v73, v70) + 1;
  HIDWORD(qword_1A24F0) = (__PAIR64__(v71, v69) + 1) >> 32;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11953);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11953,
    60,
    &v137);
  v138 = 0;
  v139 = 13172736;
  v140 = 0;
  v74 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 9;
  v137 = 1;
  v74(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13173248;
  v140 = 9;
  v75 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v75(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13173760;
  v140 = 9;
  v137 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v140 = 9;
  v139 = 1536;
  v76 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  HIWORD(v139) = 201;
  v137 = 1;
  v76(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v77 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 14;
  v138 = 0;
  BYTE1(v139) = 1;
  HIWORD(v139) = 201;
  v137 = 1;
  v77(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 768;
  v140 = 0;
  v78 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  LOBYTE(v140) = 14;
  HIWORD(v139) = 201;
  v137 = 1;
  v78(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13172736;
  v140 = 0;
  v138 = 0;
  v79 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 5;
  v137 = 1;
  LOBYTE(v140) = 14;
  v79(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v140 = 0;
  v80 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 14;
  v139 = 13174528;
  v138 = 0;
  v137 = 1;
  v80(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v81 = qword_1A24F0;
  v82 = qword_1A24F8;
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v81 + 1;
  v136[1] = HIDWORD(v81);
  *((_QWORD *)v136 + 1) = v82;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v81 + 1) >> 32;
  qword_1A24F8 = v82 + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11974);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11974,
    60,
    &v137);
  v137 = 1;
  v83 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13172736;
  v140 = 10;
  v138 = 0;
  v83(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 512;
  v140 = 0;
  v84 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  LOBYTE(v140) = 10;
  HIWORD(v139) = 201;
  v137 = 1;
  v84(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 0;
  v138 = 0;
  v85 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  LOBYTE(v140) = 10;
  v85(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 1536;
  v140 = 10;
  v86 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  HIWORD(v139) = 201;
  v137 = 1;
  v86(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v87 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 13;
  v138 = 0;
  BYTE1(v139) = 1;
  HIWORD(v139) = 201;
  v137 = 1;
  v87(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 13;
  v138 = 0;
  v88 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v88(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13174016;
  v140 = 13;
  v138 = 0;
  v89 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v89(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 1792;
  v140 = 13;
  v90 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  HIWORD(v139) = 201;
  v137 = 1;
  v90(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v91 = qword_1A24F0;
  v92 = HIDWORD(qword_1A24F8);
  *(_QWORD *)v136 = qword_1A24F0;
  v93 = qword_1A24F8;
  v136[3] = v92;
  LODWORD(qword_1A24F0) = v91 + 1;
  v136[2] = v93;
  qword_1A24F8 = __PAIR64__(v92, v93) + 1;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v91 + 1) >> 32;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 11995);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11995,
    60,
    &v137);
  v137 = 1;
  v94 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13172736;
  v140 = 11;
  v138 = 0;
  v94(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 512;
  v140 = 0;
  v95 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  LOBYTE(v140) = 11;
  HIWORD(v139) = 201;
  v137 = 1;
  v95(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 0;
  v138 = 0;
  v96 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  LOBYTE(v140) = 11;
  v96(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 1536;
  v140 = 0;
  v97 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  LOBYTE(v140) = 11;
  HIWORD(v139) = 201;
  v137 = 1;
  v97(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v98 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  BYTE1(v139) = 1;
  HIWORD(v139) = 201;
  v137 = 1;
  LOBYTE(v140) = 11;
  v98(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173504;
  v140 = 0;
  v138 = 0;
  v99 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  LOBYTE(v140) = 11;
  v99(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 1280;
  v140 = 0;
  v100 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  LOBYTE(v140) = 11;
  HIWORD(v139) = 201;
  v137 = 1;
  v100(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v140 = 0;
  v101 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 11;
  v139 = 13174528;
  v138 = 0;
  v137 = 1;
  v101(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v102 = qword_1A24F0;
  v103 = qword_1A24F8;
  *(_QWORD *)v136 = qword_1A24F0;
  *((_QWORD *)v136 + 1) = v103;
  qword_1A24F8 = v103 + 1;
  qword_1A24F0 = v102 + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 12016);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12016,
    60,
    &v137);
  v137 = 1;
  v139 = 13172736;
  v140 = 13;
  v138 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173248;
  v137 = 1;
  v104 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v140 = 13;
  v138 = 0;
  v104(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 13173760;
  v140 = 13;
  v138 = 0;
  v105 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  v105(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v140 = 13;
  v139 = 0;
  v106 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 6;
  v138 = 0;
  v137 = 1;
  HIWORD(v139) = 201;
  v106(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 256;
  v140 = 10;
  v107 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  v137 = 1;
  HIWORD(v139) = 201;
  v107(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v108 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 3;
  LOBYTE(v140) = 10;
  v138 = 0;
  v137 = 1;
  HIWORD(v139) = 201;
  v108(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v139 = 0;
  v140 = 0;
  v109 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 5;
  LOBYTE(v140) = 10;
  v138 = 0;
  v137 = 1;
  HIWORD(v139) = 201;
  v109(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v140 = 10;
  v139 = 0;
  v110 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v138 = 0;
  BYTE1(v139) = 7;
  v137 = 1;
  HIWORD(v139) = 201;
  v110(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v111 = qword_1A24F0;
  v112 = qword_1A24F8;
  *(_QWORD *)v136 = qword_1A24F0;
  v113 = HIDWORD(qword_1A24F8);
  LODWORD(qword_1A24F8) = v112 + 1;
  v136[3] = HIDWORD(qword_1A24F8);
  v136[2] = v112;
  HIDWORD(qword_1A24F8) = (__PAIR64__(v113, v112) + 1) >> 32;
  qword_1A24F0 = v111 + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 12037);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12037,
    60,
    &v137);
  v138 = 0;
  v114 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13172736;
  v140 = 14;
  v137 = 1;
  v114(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v115 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 2;
  v137 = 1;
  HIWORD(v139) = 201;
  LOBYTE(v140) = 14;
  v115(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v116 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13173760;
  v140 = 14;
  v137 = 1;
  v116(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 1536;
  v140 = 14;
  v117 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  v137 = 1;
  v117(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v118 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 9;
  HIWORD(v139) = 201;
  v137 = 1;
  BYTE1(v139) = 1;
  v118(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v137 = 1;
  v119 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  BYTE1(v139) = 3;
  LOBYTE(v140) = 9;
  v119(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v137 = 1;
  v120 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v139) = 201;
  BYTE1(v139) = 5;
  LOBYTE(v140) = 9;
  v120(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 13172736;
  v140 = 0;
  v121 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  LOBYTE(v140) = 9;
  BYTE1(v139) = 7;
  v121(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v122 = qword_1A24F0;
  v123 = qword_1A24F8;
  *v136 = qword_1A24F0;
  LODWORD(qword_1A24F0) = v122 + 1;
  v136[3] = HIDWORD(v123);
  v136[1] = HIDWORD(v122);
  v136[2] = v123;
  HIDWORD(qword_1A24F0) = (unsigned __int64)(v122 + 1) >> 32;
  qword_1A24F8 = v123 + 1;
  push_work_base(a1, (int)v136);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v137, 0x1000u, 0, "%s %d", "open_core_by_steps", 12058);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12058,
    60,
    &v137);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v124 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  LOBYTE(v140) = 15;
  HIWORD(v139) = 201;
  v124(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v125 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 2;
  v137 = 1;
  LOBYTE(v140) = 15;
  HIWORD(v139) = 201;
  v125(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v126 = *(void (__fastcall **)(int, int *))(a1 + 156);
  BYTE1(v139) = 4;
  v137 = 1;
  LOBYTE(v140) = 15;
  HIWORD(v139) = 201;
  v126(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v127 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v140) = 15;
  BYTE1(v139) = 6;
  v137 = 1;
  HIWORD(v139) = 201;
  v127(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v128 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v137 = 1;
  BYTE1(v139) = 1;
  HIWORD(v139) = 201;
  LOBYTE(v140) = 8;
  v128(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v129 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13173504;
  v140 = 8;
  v137 = 1;
  v129(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v130 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13174016;
  v140 = 8;
  v137 = 1;
  v130(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v138 = 0;
  v131 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v139 = 13174528;
  v140 = 8;
  v137 = 1;
  v131(a1, &v137);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  v132 = qword_1A24F0;
  v133 = qword_1A24F8;
  v134 = qword_1A24F0 + 1;
  LODWORD(qword_1A24F0) = qword_1A24F0 + 1;
  *(_QWORD *)v136 = v132;
  *((_QWORD *)v136 + 1) = v133;
  HIDWORD(qword_1A24F0) = HIDWORD(v134);
  qword_1A24F8 = v133 + 1;
  push_work_base(a1, (int)v136);
  return 0;
}
