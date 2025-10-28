int __fastcall setup_serdes_phy(int a1)
{
  char *v1; // r7
  int v3; // r3
  int v4; // r4
  void (__fastcall *v5)(int, unsigned int *); // r3
  void (__fastcall *v6)(int, unsigned int *); // r3
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r2
  int v16; // r3
  int v17; // r5
  void (__fastcall *v18)(int, unsigned int *); // r2
  void (__fastcall *v19)(int, unsigned int *); // r2
  void (__fastcall *v20)(int, unsigned int *); // r2
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r2
  void (__fastcall *v25)(int, unsigned int *); // r2
  void (__fastcall *v26)(int, unsigned int *); // r2
  void (__fastcall *v27)(int, unsigned int *); // r2
  void (__fastcall *v28)(int, unsigned int *); // r2
  void (__fastcall *v29)(int, unsigned int *); // r2
  void (__fastcall *v30)(int, unsigned int *); // r3
  void (__fastcall *v31)(int, unsigned int *); // r3
  void (__fastcall *v32)(int, unsigned int *); // r3
  void (__fastcall *v33)(int, unsigned int *); // r3
  void (__fastcall *v34)(int, unsigned int *); // r3
  void (__fastcall *v35)(int, unsigned int *); // r3
  void (__fastcall *v36)(int, unsigned int *); // r3
  void (__fastcall *v37)(int, unsigned int *); // r3
  void (__fastcall *v38)(int, unsigned int *); // r3
  void (__fastcall *v39)(int, unsigned int *); // r3
  void (__fastcall *v40)(int, unsigned int *); // r3
  void (__fastcall *v41)(int, unsigned int *); // r3
  void (__fastcall *v42)(int, unsigned int *); // r3
  void (__fastcall *v43)(int, unsigned int *); // r3
  void (__fastcall *v44)(int, unsigned int *); // r3
  void (__fastcall *v45)(int, unsigned int *); // r3
  void (__fastcall *v46)(int, unsigned int *); // r3
  void (__fastcall *v47)(int, unsigned int *); // r3
  void (__fastcall *v48)(int, unsigned int *); // r3
  void (__fastcall *v49)(int, unsigned int *); // r3
  void (__fastcall *v50)(int, unsigned int *); // r3
  void (__fastcall *v51)(int, unsigned int *); // r3
  void (__fastcall *v52)(int, unsigned int *); // r3
  void (__fastcall *v53)(int, unsigned int *); // r3
  void (__fastcall *v54)(int, unsigned int *); // r3
  void (__fastcall *v55)(int, unsigned int *); // r3
  void (__fastcall *v56)(int, unsigned int *); // r3
  void (__fastcall *v57)(int, unsigned int *); // r3
  void (__fastcall *v58)(int, unsigned int *); // r3
  void (__fastcall *v59)(int, unsigned int *); // r3
  void (__fastcall *v60)(int, unsigned int *); // r3
  void (__fastcall *v61)(int, unsigned int *); // r3
  void (__fastcall *v62)(int, unsigned int *); // r3
  void (__fastcall *v63)(int, unsigned int *); // r3
  void (__fastcall *v64)(int, unsigned int *); // r3
  void (__fastcall *v65)(int, unsigned int *); // r3
  void (__fastcall *v66)(int, unsigned int *); // r3
  void (__fastcall *v67)(int, unsigned int *); // r3
  int result; // r0
  int v69; // r3
  _WORD *v70; // r5
  int v71; // r4
  int v72; // t1
  void (__fastcall *v73)(int, unsigned int *); // lr
  int v74; // r2
  void (__fastcall *v75)(int, unsigned int *); // r3
  char *v76; // r0
  unsigned int v77; // r7
  void (__fastcall *v78)(int, unsigned int *); // r2
  void (__fastcall *v79)(int, unsigned int *); // r2
  _BOOL4 v80; // r3
  __int16 v81; // [sp+14h] [bp-14D8h]
  int v82; // [sp+14h] [bp-14D8h]
  __useconds_t useconds; // [sp+18h] [bp-14D4h]
  int v84; // [sp+1Ch] [bp-14D0h]
  char v85; // [sp+30h] [bp-14BCh]
  int v86; // [sp+34h] [bp-14B8h]
  char *v87; // [sp+38h] [bp-14B4h]
  _DWORD v88[4]; // [sp+44h] [bp-14A8h] BYREF
  __int16 v89; // [sp+54h] [bp-1498h] BYREF
  _DWORD v90[4]; // [sp+58h] [bp-1494h]
  _BYTE s[128]; // [sp+68h] [bp-1484h] BYREF
  _BYTE v92[1024]; // [sp+E8h] [bp-1404h] BYREF
  unsigned int v93; // [sp+4E8h] [bp-1004h] BYREF
  int v94; // [sp+4ECh] [bp-1000h]
  int v95; // [sp+4F0h] [bp-FFCh]
  int v96; // [sp+4F4h] [bp-FF8h]

  v1 = "ead_unregister_cancel";
  v3 = 0;
  HIBYTE(v88[0]) = 0;
  do
  {
    v4 = v3 + 1;
    v88[0] = v3 + 1;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v93, 0x1000u, 0, "%s try cmn lock times %d", "setup_serdes_phy", v4);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "setup_serdes_phy",
      16,
      12465,
      60,
      &v93);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v93, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_initial_seq_1_by_vendor",
      30,
      3346,
      60,
      &v93);
    v93 = 252182532;
    v94 = 0;
    v95 = 9437185;
    v96 = 0;
    v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v5(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 0;
    v93 = -2147438529;
    v94 = 0;
    v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v6(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437185;
    v96 = 0;
    v93 = 839027724;
    v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v94 = 0;
    v7(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 0;
    v93 = -2147438590;
    v94 = 0;
    v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v8(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437184;
    v96 = 0;
    v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v94 = 0;
    v93 = -1073676160;
    v9(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 0;
    v93 = -2147438589;
    v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v94 = 0;
    v10(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = 252182532;
    v95 = 9437185;
    v96 = 0;
    v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v94 = 0;
    v11(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 0;
    v93 = -2147434433;
    v94 = 0;
    v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v12(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = 839027724;
    v95 = 9437185;
    v96 = 0;
    v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v94 = 0;
    v13(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 0;
    v93 = -2147434494;
    v94 = 0;
    v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v14(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -1073676160;
    v95 = 0;
    v96 = 0;
    v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 144;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v94 = 0;
    v15(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502721;
    v96 = 255;
    v93 = -2147434493;
    v94 = 0;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v93);
    usleep((__useconds_t)v1);
    LOWORD(v16) = 0;
    do
    {
      v17 = (__int16)v16;
      v81 = v16;
      v93 = 17694978;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v95) = 144;
      LOBYTE(v95) = 1;
      LOBYTE(v96) = -1;
      v18(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502721;
      v96 = 0;
      v93 = v17 | 0x8000006E;
      v94 = 0;
      v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v19(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9437185;
      v96 = 0;
      v93 = 134283265;
      v94 = 0;
      v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v20(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502721;
      v96 = 0;
      v93 = v17 | 0x8000001D;
      v94 = 0;
      v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v21(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9437184;
      v96 = 0;
      v93 = 504234034;
      v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v95) = 1;
      LOBYTE(v96) = -1;
      v94 = 0;
      v22(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502721;
      v96 = 0;
      v93 = v17 | 0x8000002A;
      v94 = 0;
      v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v23(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9437184;
      v96 = 0;
      v93 = 267913217;
      v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v95) = 1;
      LOBYTE(v96) = -1;
      v94 = 0;
      v24(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502721;
      v96 = 0;
      v93 = v17 | 0x80000019;
      v94 = 0;
      v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v25(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9437185;
      v96 = 0;
      v93 = -1610579952;
      v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v96) = -1;
      v94 = 0;
      v26(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502720;
      v96 = 0;
      v93 = v17 | 0x8000001A;
      v94 = 0;
      v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v95) = 1;
      LOBYTE(v96) = -1;
      v27(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9437184;
      v96 = 0;
      v28 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v95) = 1;
      v93 = 338179136;
      LOBYTE(v96) = -1;
      v94 = 0;
      v28(a1, &v93);
      usleep((__useconds_t)v1);
      v95 = 9502720;
      v96 = 0;
      v29 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v93 = v17 | 0x80000047;
      LOBYTE(v95) = 1;
      LOBYTE(v96) = -1;
      v94 = 0;
      v29(a1, &v93);
      usleep((__useconds_t)v1);
      v16 = (unsigned __int16)(v81 + 4096);
    }
    while ( v16 != 0x8000 );
    SOC_24G_seq1_20210922_update(a1, 0, 255, 8);
    memset(s, 0, sizeof(s));
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v93, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", 255);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist",
      15,
      10898,
      60,
      &v93);
    v96 = 0;
    v94 = 0;
    v93 = -241;
    v95 = 9437185;
    v30 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v30(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 9502721;
    v31 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = -2147422207;
    v31(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v32 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 144;
    v93 = 80;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v32(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422202;
    v95 = 9502721;
    v33 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v33(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437440;
    v96 = 2;
    v94 = 0;
    v93 = 64;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9502976;
    v96 = 2;
    v94 = 0;
    v93 = -2147479546;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -13;
    v95 = 9437185;
    v34 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v34(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v35 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v35(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = 8;
    v95 = 9437185;
    v36 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v36(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422103;
    v95 = 9502721;
    v37 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v37(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -4;
    v95 = 9437185;
    v38 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v38(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v39 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v39(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = 2;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v40 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 144;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v40(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422206;
    v95 = 9502721;
    v41 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v41(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -4;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v42 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 144;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v42(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v43 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v43(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437184;
    v96 = 0;
    v94 = 0;
    v44 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v93 = 0;
    v44(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422205;
    v95 = 9502721;
    v45 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v45(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = 0x7FFFFFFF;
    v95 = 9437185;
    v46 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v46(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v47 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v47(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437184;
    v96 = 0;
    v94 = 0;
    v48 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v93 = 0;
    v48(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422181;
    v95 = 9502721;
    v49 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v49(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2;
    v95 = 9437185;
    v50 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v50(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v51 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v51(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437184;
    v96 = 0;
    v94 = 0;
    v52 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v93 = 0;
    v52(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422180;
    v95 = 9502721;
    v53 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v53(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v54 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 144;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v54(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v55 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v55(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = 100663296;
    v95 = 9437185;
    v56 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v56(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v93 = -2147422148;
    v95 = 9502721;
    v57 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v57(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 9437184;
    v96 = 0;
    v94 = 0;
    v58 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v93 = 0;
    v58(a1, &v93);
    usleep((__useconds_t)v1);
    v93 = -2147422207;
    v95 = 0;
    v96 = 0;
    v94 = 0;
    v59 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v95) = 145;
    LOBYTE(v95) = 1;
    LOBYTE(v96) = -1;
    v59(a1, &v93);
    usleep((__useconds_t)v1);
    v95 = 5242881;
    v96 = 0;
    v94 = 0;
    v93 = (unsigned int)&loc_1FFFC + 3;
    v60 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v60(a1, &v93);
    usleep((__useconds_t)v1);
    usleep(0x2710u);
    v96 = 0;
    v94 = 0;
    v95 = 7340033;
    v61 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v61(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 7405569;
    v62 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v62(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 7471105;
    v63 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v63(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 7536641;
    v64 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v64(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 7602177;
    v65 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v65(a1, &v93);
    usleep((__useconds_t)v1);
    v96 = 0;
    v94 = 0;
    v95 = 7667713;
    v66 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v96) = -1;
    v93 = 0;
    v66(a1, &v93);
    usleep((__useconds_t)v1);
    check_tx_rx_status(a1, 0, 255);
    if ( !check_ref_clock_ready_ext(a1, 0, (_DWORD *)0xFF, 8, s) || (++dword_196BB0, dword_196BB0 > 2) )
    {
      v95 = 5701633;
      v96 = 255;
      v94 = 0;
      v67 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v93 = 255;
      v67(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      usleep(0x2710u);
      serdes_phy_bist_external_all_phy(a1, 0, 8, 119);
      v95 = 10354689;
      v96 = 255;
      v94 = 0;
      v93 = 2;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      return check_mac_done(a1, 0, 255, 0);
    }
    V_LOCK();
    logfmt_raw((char *)&v93, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist",
      15,
      11089,
      60,
      &v93);
    memset(v92, 0, sizeof(v92));
    v86 = 0;
    v82 = 0;
    useconds = (__useconds_t)v1;
    v88[1] = 100991489;
    v88[2] = 235735561;
    v88[3] = 134677248;
    v89 = 3851;
    v69 = 0;
    v87 = v92;
    do
    {
      v84 = 16 * v69;
      v85 = v69;
      v70 = (_WORD *)((char *)v88 + 3);
      do
      {
        while ( 1 )
        {
          v72 = *((unsigned __int8 *)v70 + 1);
          v70 = (_WORD *)((char *)v70 + 1);
          v71 = v72;
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            (char *)&v93,
            0x1000u,
            0,
            "%s chip %x core %x cmn status %x",
            "check_cmn_lock_and_reset_worse_phy",
            v82,
            v71,
            (unsigned __int8)s[v84 + v71]);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_cmn_lock_and_reset_worse_phy",
            34,
            650,
            20,
            &v93);
          if ( s[v84 + v72] )
            break;
          if ( (__int16 *)((char *)&v89 + 1) == v70 )
            goto LABEL_23;
        }
        v73 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        v90[0] = 50462721;
        v90[1] = 117834757;
        v90[2] = 185206793;
        v90[3] = 252578829;
        switch ( v71 )
        {
          case 1:
LABEL_26:
            v74 = v71;
            break;
          case 2:
            v74 = 3;
            break;
          case 5:
            goto LABEL_26;
          case 6:
            v74 = 7;
            break;
          case 9:
            goto LABEL_26;
          case 10:
            v74 = 11;
            break;
          case 13:
            goto LABEL_26;
          case 14:
            v74 = 15;
            break;
          default:
            v95 = 5242880;
            BYTE1(v95) = v85;
            v94 = 0;
            v93 = 0;
            v96 = (unsigned __int8)v71;
            v73(a1, &v93);
            usleep(useconds);
            usleep(useconds);
            v95 = 5242880;
            v96 = 0;
            v93 = 0x10000;
            BYTE1(v95) = v85;
            v94 = 0;
            v75 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            LOBYTE(v96) = v71;
            v75(a1, &v93);
            usleep(useconds);
            usleep(useconds);
LABEL_21:
            v76 = v87;
            v87 += 4;
            sprintf(v76, "%1x-%1x ", v82, v71);
            goto LABEL_22;
        }
        v94 = 0;
        v93 = 0;
        v95 = 0;
        v96 = 0;
        v77 = *((unsigned __int8 *)v90 + v74);
        LOBYTE(v96) = v71;
        BYTE1(v95) = v85;
        HIWORD(v95) = 80;
        v73(a1, &v93);
        usleep(useconds);
        usleep(useconds);
        v95 = 5242880;
        v96 = 0;
        BYTE1(v95) = v85;
        v93 = 0x10000;
        v94 = 0;
        v78 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        LOBYTE(v96) = v71;
        v78(a1, &v93);
        usleep(useconds);
        usleep(useconds);
        v95 = 5242880;
        v96 = 0;
        BYTE1(v95) = v85;
        v79 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        LOBYTE(v96) = v77;
        v94 = 0;
        v93 = 0;
        v79(a1, &v93);
        usleep(useconds);
        usleep(useconds);
        v93 = 0x10000;
        v95 = 5242880;
        v96 = (unsigned __int8)v77;
        v94 = 0;
        BYTE1(v95) = v85;
        (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v93);
        usleep(useconds);
        usleep(useconds);
        v80 = v71 != v77;
        if ( v77 > 0xF )
          v80 = 0;
        if ( !v80 )
          goto LABEL_21;
        sprintf(v87, "%1x-%1x-%1x ", v82, v71, v77);
        v87 += 6;
LABEL_22:
        ++v86;
      }
      while ( (__int16 *)((char *)&v89 + 1) != v70 );
LABEL_23:
      v69 = ++v82;
    }
    while ( v82 != 8 );
    v1 = (char *)useconds;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v93, 0x1000u, 0, "%s (%d) %s", "check_cmn_lock_and_reset_worse_phy", v86, v92);
    pthread_mutex_unlock(&stru_197BB8);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_cmn_lock_and_reset_worse_phy",
               34,
               664,
               60,
               &v93);
    v3 = v88[0];
  }
  while ( v88[0] != 3 );
  return result;
}
