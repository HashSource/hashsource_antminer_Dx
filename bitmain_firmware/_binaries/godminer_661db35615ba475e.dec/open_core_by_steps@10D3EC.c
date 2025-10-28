int __fastcall open_core_by_steps(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  __int64 v5; // kr08_8
  unsigned int v6; // r12
  int v7; // r3
  unsigned int v8; // r3
  int v9; // lr
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  int v15; // r2
  unsigned int v16; // lr
  __int64 v17; // kr20_8
  int v18; // r1
  unsigned int v19; // kr00_4
  void (__fastcall *v20)(int, int *); // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  void (__fastcall *v23)(int, int *); // r3
  int v24; // r2
  unsigned int v25; // lr
  __int64 v26; // kr38_8
  int v27; // r1
  unsigned int v28; // kr04_4
  void (__fastcall *v29)(int, int *); // r3
  void (__fastcall *v30)(int, int *); // r3
  void (__fastcall *v31)(int, int *); // r3
  void (__fastcall *v32)(int, int *); // r3
  void (__fastcall *v33)(int, int *); // r3
  __int64 v34; // kr48_8
  unsigned int v35; // r12
  int v36; // r3
  unsigned int v37; // r3
  int v38; // lr
  void (__fastcall *v39)(int, int *); // r3
  void (__fastcall *v40)(int, int *); // r3
  void (__fastcall *v41)(int, int *); // r3
  void (__fastcall *v42)(int, int *); // r3
  __int64 v43; // kr58_8
  unsigned int v44; // r12
  int v45; // r3
  unsigned int v46; // r3
  int v47; // lr
  void (__fastcall *v48)(int, int *); // r3
  void (__fastcall *v49)(int, int *); // r3
  void (__fastcall *v50)(int, int *); // r3
  void (__fastcall *v51)(int, int *); // r3
  void (__fastcall *v52)(int, int *); // r3
  void (__fastcall *v53)(int, int *); // r3
  __int64 v54; // kr68_8
  __int64 v55; // kr70_8
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  void (__fastcall *v58)(int, int *); // r3
  void (__fastcall *v59)(int, int *); // r3
  void (__fastcall *v60)(int, int *); // r3
  void (__fastcall *v61)(int, int *); // r3
  void (__fastcall *v62)(int, int *); // r3
  void (__fastcall *v63)(int, int *); // r3
  unsigned int v64; // lr
  unsigned int v65; // r2
  unsigned int v66; // r12
  unsigned int v67; // r3
  void (__fastcall *v68)(int, int *); // r3
  void (__fastcall *v69)(int, int *); // r3
  void (__fastcall *v70)(int, int *); // r3
  void (__fastcall *v71)(int, int *); // r3
  void (__fastcall *v72)(int, int *); // r3
  void (__fastcall *v73)(int, int *); // r3
  void (__fastcall *v74)(int, int *); // r3
  void (__fastcall *v75)(int, int *); // r3
  __int64 v76; // kr88_8
  __int64 v77; // kr90_8
  void (__fastcall *v78)(int, int *); // r3
  void (__fastcall *v79)(int, int *); // r3
  void (__fastcall *v80)(int, int *); // r3
  __int64 v81; // krA0_8
  __int64 v82; // krA8_8
  __int64 v83; // krB8_8
  __int64 v84; // krC0_8
  __int64 v85; // krC8_8
  __int64 v86; // krD0_8
  void (__fastcall *v87)(int, int *); // r3
  void (__fastcall *v88)(int, int *); // r3
  void (__fastcall *v89)(int, int *); // r3
  void (__fastcall *v90)(int, int *); // r3
  void (__fastcall *v91)(int, int *); // r3
  void (__fastcall *v92)(int, int *); // r3
  void (__fastcall *v93)(int, int *); // r3
  __int64 v94; // krD8_8
  unsigned int v95; // r12
  unsigned int v96; // r11
  void (__fastcall *v97)(int, int *); // r3
  void (__fastcall *v98)(int, int *); // r3
  void (__fastcall *v99)(int, int *); // r3
  void (__fastcall *v100)(int, int *); // r3
  void (__fastcall *v101)(int, int *); // r3
  void (__fastcall *v102)(int, int *); // r3
  void (__fastcall *v103)(int, int *); // r3
  unsigned int v104; // r2
  unsigned int v105; // r3
  unsigned int v106; // lr
  int v107; // r10
  unsigned int v108; // r12
  void (__fastcall *v109)(int, int *); // r3
  void (__fastcall *v110)(int, int *); // r3
  void (__fastcall *v111)(int, int *); // r3
  void (__fastcall *v112)(int, int *); // r3
  void (__fastcall *v113)(int, int *); // r3
  void (__fastcall *v114)(int, int *); // r3
  void (__fastcall *v115)(int, int *); // r3
  void (__fastcall *v116)(int, int *); // r3
  __int64 v117; // krE8_8
  __int64 v118; // krF0_8
  __int64 v119; // krF8_8
  _DWORD *v121; // [sp+10h] [bp-103Ch]
  int v122; // [sp+48h] [bp-1004h] BYREF
  int v123; // [sp+4Ch] [bp-1000h]
  int v124; // [sp+50h] [bp-FFCh]
  int v125; // [sp+54h] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s...", "open_core_by_steps");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11775,
    60,
    &v122);
  v121 = calloc(1u, 0x59u);
  memset(v121 + 4, 0, 0x20u);
  v125 = 255;
  v123 = 0;
  v122 = 0;
  v124 = 13172737;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11784);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11784,
    60,
    &v122);
  v124 = 13172736;
  v125 = 0;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 0;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 0;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 0;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 0;
  v123 = 0;
  v122 = 1;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 7;
  v2(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 7;
  v123 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v3(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 7;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 7;
  v123 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v4(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v5 = qword_1907B0;
  v6 = HIDWORD(qword_1907B8);
  v7 = qword_1907B0 + 1;
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v7;
  v8 = qword_1907B8;
  v121[1] = HIDWORD(v5);
  v9 = qword_1907B8;
  v121[3] = v6;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v5 + 1) >> 32;
  v121[2] = v9;
  qword_1907B8 = __PAIR64__(v6, v8) + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11805);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11805,
    60,
    &v122);
  v124 = 13172736;
  v125 = 1;
  v123 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v10(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 1;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 1;
  v123 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v11(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 1;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 6;
  v123 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v12(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 6;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 6;
  v123 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v13(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 6;
  v123 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v14(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v16 = HIDWORD(qword_1907B0);
  v15 = qword_1907B0;
  v17 = qword_1907B8;
  v19 = qword_1907B0;
  v18 = qword_1907B0 + 1;
  v121[1] = HIDWORD(qword_1907B0);
  LODWORD(qword_1907B0) = v18;
  HIDWORD(qword_1907B0) = (__PAIR64__(v16, v19) + 1) >> 32;
  LODWORD(qword_1907B8) = v17 + 1;
  v121[3] = HIDWORD(v17);
  *v121 = v15;
  v121[2] = v17;
  HIDWORD(qword_1907B8) = __CFADD__((_DWORD)v17, 1) + HIDWORD(v17);
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11826);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11826,
    60,
    &v122);
  v124 = 13172736;
  v125 = 2;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172736;
  v125 = 0;
  v123 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 2;
  LOBYTE(v125) = 2;
  v122 = 1;
  v20(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 2;
  v123 = 0;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v21(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 2;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 5;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 5;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 5;
  v123 = 0;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v22(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 5;
  v123 = 0;
  v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v23(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v25 = HIDWORD(qword_1907B0);
  v24 = qword_1907B0;
  v26 = qword_1907B8;
  v28 = qword_1907B0;
  v27 = qword_1907B0 + 1;
  v121[1] = HIDWORD(qword_1907B0);
  LODWORD(qword_1907B0) = v27;
  HIDWORD(qword_1907B0) = (__PAIR64__(v25, v28) + 1) >> 32;
  LODWORD(qword_1907B8) = v26 + 1;
  v121[3] = HIDWORD(v26);
  *v121 = v24;
  v121[2] = v26;
  HIDWORD(qword_1907B8) = __CFADD__((_DWORD)v26, 1) + HIDWORD(v26);
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11847);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11847,
    60,
    &v122);
  v124 = 13172736;
  v125 = 3;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 3;
  v123 = 0;
  v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v29(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 3;
  v123 = 0;
  v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v30(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 3;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 3;
  v123 = 0;
  v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v31(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 3;
  v123 = 0;
  v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v32(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 3;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 3;
  v123 = 0;
  v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v33(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v34 = qword_1907B0;
  v35 = HIDWORD(qword_1907B8);
  v36 = qword_1907B0 + 1;
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v36;
  v37 = qword_1907B8;
  v121[1] = HIDWORD(v34);
  v38 = qword_1907B8;
  v121[3] = v35;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v34 + 1) >> 32;
  v121[2] = v38;
  qword_1907B8 = __PAIR64__(v35, v37) + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11868);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11868,
    60,
    &v122);
  v123 = 0;
  v124 = 13172736;
  v125 = 5;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 5;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 5;
  v123 = 0;
  v39 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v39(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 5;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 2;
  v123 = 0;
  v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v40(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 2;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 2;
  v123 = 0;
  v41 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v41(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 2;
  v123 = 0;
  v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v42(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v43 = qword_1907B0;
  v44 = HIDWORD(qword_1907B8);
  v45 = qword_1907B0 + 1;
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v45;
  v46 = qword_1907B8;
  v121[1] = HIDWORD(v43);
  v47 = qword_1907B8;
  v121[3] = v44;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v43 + 1) >> 32;
  v121[2] = v47;
  qword_1907B8 = __PAIR64__(v44, v46) + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11889);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11889,
    60,
    &v122);
  v123 = 0;
  v124 = 13172736;
  v125 = 6;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 0;
  v123 = 0;
  v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 6;
  v122 = 1;
  v48(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 1024;
  v123 = 0;
  v125 = 0;
  v49 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 6;
  HIWORD(v124) = 201;
  v122 = 1;
  v49(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 6;
  v123 = 0;
  v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v50(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v123 = 0;
  v125 = 1;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 0;
  v123 = 0;
  v51 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 1;
  v122 = 1;
  v51(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 0;
  v123 = 0;
  v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 1;
  v122 = 1;
  v52(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 1792;
  v125 = 0;
  v123 = 0;
  v53 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v124) = 201;
  LOBYTE(v125) = 1;
  v122 = 1;
  v53(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v54 = qword_1907B0;
  v55 = qword_1907B8;
  *v121 = qword_1907B0;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v54 + 1) >> 32;
  v121[1] = HIDWORD(v54);
  LODWORD(qword_1907B0) = v54 + 1;
  *((_QWORD *)v121 + 1) = v55;
  qword_1907B8 = v55 + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11910);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11910,
    60,
    &v122);
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 7;
  HIWORD(v124) = 201;
  v122 = 1;
  v56(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v57 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 7;
  BYTE1(v124) = 2;
  HIWORD(v124) = 201;
  v122 = 1;
  v57(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 4;
  HIWORD(v124) = 201;
  LOBYTE(v125) = 7;
  v122 = 1;
  v58(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 1536;
  v125 = 7;
  v59 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v124) = 201;
  v122 = 1;
  v59(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 1;
  HIWORD(v124) = 201;
  v122 = 1;
  v60(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 768;
  v125 = 0;
  v61 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  HIWORD(v124) = 201;
  v61(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 1280;
  v125 = 0;
  v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  HIWORD(v124) = 201;
  v62(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 1792;
  v125 = 0;
  v63 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  HIWORD(v124) = 201;
  v63(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v64 = HIDWORD(qword_1907B0);
  v65 = qword_1907B0;
  v66 = HIDWORD(qword_1907B8);
  *(_QWORD *)v121 = qword_1907B0;
  v121[3] = v66;
  qword_1907B0 = __PAIR64__(v64, v65) + 1;
  v67 = qword_1907B8;
  v121[2] = qword_1907B8;
  qword_1907B8 = __PAIR64__(v66, v67) + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11931);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11931,
    60,
    &v122);
  v123 = 0;
  v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13172736;
  v125 = 8;
  v122 = 1;
  v68(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 13173248;
  v125 = 0;
  v69 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  LOBYTE(v125) = 8;
  v69(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v70 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 4;
  HIWORD(v124) = 201;
  v122 = 1;
  LOBYTE(v125) = 8;
  v70(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 1536;
  v125 = 8;
  v71 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v124) = 201;
  v122 = 1;
  v71(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 256;
  v125 = 0;
  v72 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  HIWORD(v124) = 201;
  LOBYTE(v125) = 15;
  v72(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v73 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 3;
  HIWORD(v124) = 201;
  v122 = 1;
  LOBYTE(v125) = 15;
  v73(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v74 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 5;
  HIWORD(v124) = 201;
  v122 = 1;
  LOBYTE(v125) = 15;
  v74(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 7;
  HIWORD(v124) = 201;
  v122 = 1;
  LOBYTE(v125) = 15;
  v75(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v76 = qword_1907B0;
  v77 = qword_1907B8;
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v76 + 1;
  v121[1] = HIDWORD(v76);
  *((_QWORD *)v121 + 1) = v77;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v76 + 1) >> 32;
  qword_1907B8 = v77 + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11952);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11952,
    60,
    &v122);
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v78 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 9;
  HIWORD(v124) = 201;
  v122 = 1;
  v78(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 512;
  v125 = 9;
  v79 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v124) = 201;
  v122 = 1;
  v79(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 13173760;
  v125 = 9;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 13174272;
  v125 = 9;
  v80 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  v80(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 14;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 14;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 14;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v125 = 14;
  v124 = 13174528;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v81 = qword_1907B0;
  v82 = qword_1907B8;
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v81 + 1;
  v121[3] = HIDWORD(v82);
  v121[1] = HIDWORD(v81);
  v121[2] = v82;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v81 + 1) >> 32;
  qword_1907B8 = v82 + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11973);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11973,
    60,
    &v122);
  v124 = 13172736;
  v125 = 10;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 10;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 10;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 10;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 13;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 13;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 13;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174528;
  v125 = 13;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v83 = qword_1907B0;
  v84 = qword_1907B8;
  *(_QWORD *)v121 = qword_1907B0;
  *((_QWORD *)v121 + 1) = v84;
  qword_1907B8 = v84 + 1;
  qword_1907B0 = v83 + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 11994);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11994,
    60,
    &v122);
  v122 = 1;
  v124 = 13172736;
  v125 = 11;
  v123 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174272;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13172992;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173504;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13174016;
  v125 = 11;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v125 = 11;
  v124 = 13174528;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v85 = qword_1907B0;
  v86 = qword_1907B8;
  *(_QWORD *)v121 = qword_1907B0;
  *((_QWORD *)v121 + 1) = v86;
  qword_1907B8 = v86 + 1;
  qword_1907B0 = v85 + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 12015);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12015,
    60,
    &v122);
  v122 = 1;
  v124 = 13172736;
  v125 = 13;
  v87 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  v87(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173248;
  v122 = 1;
  v125 = 0;
  v88 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v125) = 13;
  v123 = 0;
  v88(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 13173760;
  v125 = 13;
  v123 = 0;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v125 = 13;
  v124 = 0;
  v89 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  BYTE1(v124) = 6;
  v122 = 1;
  HIWORD(v124) = 201;
  v89(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 256;
  v125 = 0;
  v90 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  LOBYTE(v125) = 10;
  v122 = 1;
  HIWORD(v124) = 201;
  v90(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 768;
  v125 = 0;
  v91 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  LOBYTE(v125) = 10;
  v122 = 1;
  HIWORD(v124) = 201;
  v91(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v124 = 1280;
  v125 = 0;
  v92 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  LOBYTE(v125) = 10;
  v122 = 1;
  HIWORD(v124) = 201;
  v92(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v125 = 10;
  v124 = 0;
  v93 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v123 = 0;
  BYTE1(v124) = 7;
  v122 = 1;
  HIWORD(v124) = 201;
  v93(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v94 = qword_1907B0;
  v95 = HIDWORD(qword_1907B8);
  *(_QWORD *)v121 = qword_1907B0;
  v96 = qword_1907B8;
  LODWORD(qword_1907B0) = v94 + 1;
  v121[3] = v95;
  HIDWORD(qword_1907B0) = (unsigned __int64)(v94 + 1) >> 32;
  LODWORD(qword_1907B8) = v96 + 1;
  v121[2] = v96;
  HIDWORD(qword_1907B8) = (__PAIR64__(v95, v96) + 1) >> 32;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 12036);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12036,
    60,
    &v122);
  v123 = 0;
  v97 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13172736;
  v125 = 14;
  v122 = 1;
  v97(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v98 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  LOBYTE(v125) = 14;
  BYTE1(v124) = 2;
  HIWORD(v124) = 201;
  v98(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v99 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 4;
  v122 = 1;
  LOBYTE(v125) = 14;
  HIWORD(v124) = 201;
  v99(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 13174272;
  v125 = 14;
  v122 = 1;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v100 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  BYTE1(v124) = 1;
  HIWORD(v124) = 201;
  LOBYTE(v125) = 9;
  v100(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v101 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13173504;
  v125 = 9;
  v122 = 1;
  v101(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v102 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13174016;
  v125 = 9;
  v122 = 1;
  v102(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 9;
  v103 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  HIWORD(v124) = 201;
  BYTE1(v124) = 7;
  v103(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v104 = qword_1907B0;
  v105 = qword_1907B8;
  v106 = HIDWORD(qword_1907B0);
  v107 = qword_1907B0 + 1;
  v108 = HIDWORD(qword_1907B8);
  *v121 = qword_1907B0;
  LODWORD(qword_1907B0) = v107;
  v121[3] = v108;
  v121[2] = v105;
  v121[1] = v106;
  HIDWORD(qword_1907B0) = (__PAIR64__(v106, v104) + 1) >> 32;
  qword_1907B8 = __PAIR64__(v108, v105) + 1;
  push_work_base(a1, (int)v121);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v122, 0x1000u, 0, "%s %d", "open_core_by_steps", 12057);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    12057,
    60,
    &v122);
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v109 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  LOBYTE(v125) = 15;
  HIWORD(v124) = 201;
  v109(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v110 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 2;
  v122 = 1;
  LOBYTE(v125) = 15;
  HIWORD(v124) = 201;
  v110(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v111 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v124) = 4;
  v122 = 1;
  LOBYTE(v125) = 15;
  HIWORD(v124) = 201;
  v111(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 15;
  v112 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  BYTE1(v124) = 6;
  HIWORD(v124) = 201;
  v112(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v113 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v122 = 1;
  BYTE1(v124) = 1;
  HIWORD(v124) = 201;
  LOBYTE(v125) = 8;
  v113(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v114 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13173504;
  v125 = 8;
  v122 = 1;
  v114(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v115 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13174016;
  v125 = 8;
  v122 = 1;
  v115(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v123 = 0;
  v116 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v124 = 13174528;
  v125 = 8;
  v122 = 1;
  v116(a1, &v122);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep((__useconds_t)"ead_unregister_cancel");
  v117 = qword_1907B0;
  v118 = qword_1907B8;
  v119 = qword_1907B0 + 1;
  LODWORD(qword_1907B0) = qword_1907B0 + 1;
  *(_QWORD *)v121 = v117;
  *((_QWORD *)v121 + 1) = v118;
  HIDWORD(qword_1907B0) = HIDWORD(v119);
  qword_1907B8 = v118 + 1;
  push_work_base(a1, (int)v121);
  return 0;
}
