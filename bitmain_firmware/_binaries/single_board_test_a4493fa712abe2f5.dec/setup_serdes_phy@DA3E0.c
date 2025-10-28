int __fastcall setup_serdes_phy(int a1)
{
  int v2; // r3
  int v3; // r4
  void (__fastcall *v4)(int, unsigned int *); // r3
  void (__fastcall *v5)(int, unsigned int *); // r3
  void (__fastcall *v6)(int, unsigned int *); // r3
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  int v9; // r2
  int v10; // r4
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  void (__fastcall *v17)(int, unsigned int *); // r3
  void (__fastcall *v18)(int, unsigned int *); // r3
  void (__fastcall *v19)(int, unsigned int *); // r3
  void (__fastcall *v20)(int, unsigned int *); // r3
  void (__fastcall *v21)(int, unsigned int *); // r3
  void (__fastcall *v22)(int, unsigned int *); // r3
  void (__fastcall *v23)(int, unsigned int *); // r3
  void (__fastcall *v24)(int, unsigned int *); // r3
  void (__fastcall *v25)(int, unsigned int *); // r3
  void (__fastcall *v26)(int, unsigned int *); // r3
  void (__fastcall *v27)(int, unsigned int *); // r3
  void (__fastcall *v28)(int, unsigned int *); // r3
  void (__fastcall *v29)(int, unsigned int *); // r3
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
  int result; // r0
  _WORD *v51; // r5
  int v52; // r4
  int v53; // t1
  void (__fastcall *v54)(int, unsigned int *); // r7
  int v55; // r3
  char *v56; // r0
  unsigned int v57; // r6
  void (__fastcall *v58)(int, unsigned int *); // r2
  void (__fastcall *v59)(int, unsigned int *); // r2
  _BOOL4 v60; // r2
  __int16 v61; // [sp+18h] [bp-4D0h]
  int v62; // [sp+18h] [bp-4D0h]
  int v63; // [sp+1Ch] [bp-4CCh]
  int v64; // [sp+34h] [bp-4B4h]
  char *v65; // [sp+38h] [bp-4B0h]
  _DWORD v66[4]; // [sp+44h] [bp-4A4h] BYREF
  __int16 v67; // [sp+54h] [bp-494h] BYREF
  _DWORD v68[4]; // [sp+58h] [bp-490h]
  _BYTE v69[128]; // [sp+68h] [bp-480h] BYREF
  _BYTE s[1024]; // [sp+E8h] [bp-400h] BYREF
  unsigned int v71; // [sp+4E8h] [bp+0h] BYREF
  int v72; // [sp+4ECh] [bp+4h]
  int v73; // [sp+4F0h] [bp+8h]
  int v74; // [sp+4F4h] [bp+Ch]

  v2 = 0;
  HIBYTE(v66[0]) = 0;
  do
  {
    v3 = v2 + 1;
    v66[0] = v2 + 1;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v71, 0x1000u, 0, "%s try cmn lock times %d", "setup_serdes_phy", v3);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "setup_serdes_phy",
      16,
      12465,
      60,
      &v71);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v71, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "serdes_initial_seq_1_by_vendor",
      30,
      3346,
      60,
      &v71);
    v74 = 255;
    v72 = 0;
    v71 = 252182532;
    v73 = 9437185;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v74 = 255;
    v72 = 0;
    v71 = -2147438529;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9437185;
    v4 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v71 = 839027724;
    v4(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v72 = 0;
    v74 = 255;
    v71 = -2147438590;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9437185;
    v74 = 0;
    v72 = 0;
    v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = -1073676160;
    v5(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v74 = 255;
    v72 = 0;
    v71 = -2147438589;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = 252182532;
    v73 = 0;
    v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v73) = 144;
    LOBYTE(v73) = 1;
    v74 = 255;
    v72 = 0;
    v6(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v74 = 255;
    v72 = 0;
    v71 = -2147434433;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = 839027724;
    v73 = 9437185;
    v74 = 0;
    v72 = 0;
    v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v7(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v74 = 255;
    v72 = 0;
    v71 = -2147434494;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -1073676160;
    v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v73 = 9437185;
    v74 = 255;
    v72 = 0;
    v8(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502721;
    v74 = 255;
    v72 = 0;
    v71 = -2147434493;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    LOWORD(v9) = 0;
    do
    {
      v10 = (__int16)v9;
      v74 = 255;
      v72 = 0;
      v73 = 9437185;
      v71 = 17694978;
      v61 = v9;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v74 = 255;
      v72 = 0;
      v71 = v10 | 0x8000006E;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9437185;
      v74 = 255;
      v72 = 0;
      v71 = 134283265;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v72 = 0;
      v74 = 255;
      v71 = v10 | 0x8000001D;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9437185;
      v74 = 255;
      v72 = 0;
      v71 = 504234034;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v72 = 0;
      v74 = 255;
      v71 = v10 | 0x8000002A;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9437185;
      v74 = 255;
      v72 = 0;
      v71 = 267913217;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v72 = 0;
      v74 = 255;
      v71 = v10 | 0x80000019;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9437185;
      v74 = 255;
      v72 = 0;
      v71 = -1610579952;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v72 = 0;
      v74 = 255;
      v71 = v10 | 0x8000001A;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9437185;
      v74 = 255;
      v72 = 0;
      v71 = 338179136;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v73 = 9502721;
      v71 = v10 | 0x80000047;
      v74 = 0;
      v72 = 0;
      v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v74) = -1;
      v11(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v9 = (unsigned __int16)(v61 + 4096);
    }
    while ( v9 != 0x8000 );
    SOC_24G_seq1_20210922_update(a1, 0, 255, 8);
    memset(v69, 0, sizeof(v69));
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v71, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", 255);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "serdes_phy_bist",
      15,
      10898,
      60,
      &v71);
    v74 = 0;
    v72 = 0;
    v71 = -241;
    v73 = 9437185;
    v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v12(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 9502721;
    v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = -2147422207;
    v13(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 80;
    v73 = 9437185;
    v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v14(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422202;
    v73 = 9502721;
    v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v15(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9437440;
    v74 = 2;
    v72 = 0;
    v71 = 64;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = 9502976;
    v74 = 2;
    v72 = 0;
    v71 = -2147479546;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -13;
    v73 = 9437185;
    v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v16(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v73 = 9502721;
    v17(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 8;
    v73 = 9437185;
    v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v18(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422103;
    v73 = 9502721;
    v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v19(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -4;
    v73 = 9437185;
    v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v20(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v73 = 9502721;
    v21(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = 2;
    v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v73 = 9437185;
    v22(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422206;
    v73 = 9502721;
    v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v23(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -4;
    v73 = 0;
    v74 = 0;
    v72 = 0;
    v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v73) = 144;
    LOBYTE(v73) = 1;
    LOBYTE(v74) = -1;
    v24(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v73 = 9502720;
    v74 = 0;
    v72 = 0;
    v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v73) = 1;
    LOBYTE(v74) = -1;
    v25(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 0;
    v73 = 9437185;
    v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v26(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422205;
    v73 = 9502721;
    v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v27(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 0x7FFFFFFF;
    v73 = 9437185;
    v28 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v28(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v73 = 9502720;
    v74 = 0;
    v72 = 0;
    v29 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v73) = 1;
    LOBYTE(v74) = -1;
    v29(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 0;
    v73 = 9437185;
    v30 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v30(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422181;
    v73 = 9502721;
    v31 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v31(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2;
    v73 = 9437185;
    v32 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v32(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v73 = 9502720;
    v74 = 0;
    v72 = 0;
    v33 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v73) = 1;
    LOBYTE(v74) = -1;
    v33(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 0;
    v73 = 9437185;
    v34 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v34(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422180;
    v73 = 9502721;
    v35 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v35(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2;
    v36 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v73 = 9437185;
    v36(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v37 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v74 = 255;
    v72 = 0;
    v73 = 9502721;
    v37(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 100663296;
    v73 = 9437185;
    v38 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v38(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = -2147422148;
    v73 = 9502721;
    v39 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v39(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = 0;
    v73 = 9437185;
    v40 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v40(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v71 = -2147422207;
    v73 = 0;
    v74 = 0;
    v72 = 0;
    v41 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v73) = 145;
    LOBYTE(v73) = 1;
    LOBYTE(v74) = -1;
    v41(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v71 = (unsigned int)&loc_1FFFE;
    v73 = 5242881;
    v42 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v42(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep(0x2710u);
    v74 = 0;
    v72 = 0;
    v73 = 7340033;
    v43 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v43(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 7405569;
    v44 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v44(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 7471105;
    v45 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v45(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 7536641;
    v46 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v46(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 7602177;
    v47 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v47(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = 0;
    v72 = 0;
    v73 = 7667713;
    v48 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    LOBYTE(v74) = -1;
    v71 = 0;
    v48(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    check_tx_rx_status((_DWORD *)a1, 0, 255);
    if ( !check_ref_clock_ready_ext((_DWORD *)a1, 0, (_BYTE *)0xFF, 8, v69) || (++dword_3B5478, dword_3B5478 > 2) )
    {
      v74 = 0;
      v72 = 0;
      v73 = 5701633;
      v49 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v74) = -1;
      v71 = 255;
      v49(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      usleep(0x2710u);
      serdes_phy_bist_external_all_phy((_DWORD *)a1, 0, 8, 119);
      v73 = 10354689;
      v74 = 255;
      v72 = 0;
      v71 = 2;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      return check_mac_done((_DWORD *)a1, 0, (char *)0xFF, 0);
    }
    V_LOCK();
    logfmt_raw((char *)&v71, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    v62 = 0;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "serdes_phy_bist",
      15,
      11089,
      60,
      &v71);
    memset(s, 0, sizeof(s));
    v65 = s;
    v66[1] = 100991489;
    v66[2] = 235735561;
    v66[3] = 134677248;
    v64 = 0;
    v67 = 3851;
    do
    {
      v51 = (_WORD *)((char *)v66 + 3);
      v63 = 16 * v62;
      do
      {
        while ( 1 )
        {
          v53 = *((unsigned __int8 *)v51 + 1);
          v51 = (_WORD *)((char *)v51 + 1);
          v52 = v53;
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)&v71,
            0x1000u,
            0,
            "%s chip %x core %x cmn status %x",
            "check_cmn_lock_and_reset_worse_phy",
            v62,
            v52,
            (unsigned __int8)v69[v63 + v52]);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_cmn_lock_and_reset_worse_phy",
            34,
            650,
            20,
            &v71);
          if ( v69[v63 + v53] )
            break;
          if ( (__int16 *)((char *)&v67 + 1) == v51 )
            goto LABEL_23;
        }
        v54 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        v68[0] = 50462721;
        v68[1] = 117834757;
        v68[2] = 185206793;
        v68[3] = 252578829;
        switch ( v52 )
        {
          case 1:
LABEL_26:
            v55 = v52;
            break;
          case 2:
            v55 = 3;
            break;
          case 5:
            goto LABEL_26;
          case 6:
            v55 = 7;
            break;
          case 9:
            goto LABEL_26;
          case 10:
            v55 = 11;
            break;
          case 13:
            goto LABEL_26;
          case 14:
            v55 = 15;
            break;
          default:
            LOBYTE(v73) = 0;
            v72 = 0;
            BYTE1(v73) = v62;
            v71 = 0;
            v74 = (unsigned __int8)v52;
            HIWORD(v73) = 80;
            v54(a1, &v71);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            LOBYTE(v73) = 0;
            HIWORD(v73) = 80;
            v72 = 0;
            v71 = 0x10000;
            v74 = (unsigned __int8)v52;
            BYTE1(v73) = v62;
            (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
LABEL_21:
            v56 = v65;
            v65 += 4;
            sprintf(v56, "%1x-%1x ", v62, v52);
            goto LABEL_22;
        }
        LOBYTE(v73) = 0;
        v72 = 0;
        BYTE1(v73) = v62;
        HIWORD(v73) = 80;
        v71 = 0;
        v74 = (unsigned __int8)v52;
        v57 = *((unsigned __int8 *)v68 + v55);
        v54(a1, &v71);
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        v73 = 5242880;
        v74 = 0;
        v72 = 0;
        v58 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        LOBYTE(v74) = v52;
        BYTE1(v73) = v62;
        v71 = 0x10000;
        v58(a1, &v71);
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        LOBYTE(v73) = 0;
        HIWORD(v73) = 80;
        v72 = 0;
        v71 = 0;
        v74 = (unsigned __int8)v57;
        BYTE1(v73) = v62;
        (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v71);
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        v71 = 0x10000;
        v73 = 5242880;
        v74 = 0;
        v72 = 0;
        v59 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
        LOBYTE(v74) = v57;
        BYTE1(v73) = v62;
        v59(a1, &v71);
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
        v60 = v52 != v57;
        if ( v57 > 0xF )
          v60 = 0;
        if ( !v60 )
          goto LABEL_21;
        sprintf(v65, "%1x-%1x-%1x ", v62, v52, v57);
        v65 += 6;
LABEL_22:
        ++v64;
      }
      while ( (__int16 *)((char *)&v67 + 1) != v51 );
LABEL_23:
      ++v62;
    }
    while ( v62 != 8 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v71, 0x1000u, 0, "%s (%d) %s", "check_cmn_lock_and_reset_worse_phy", v64, s);
    pthread_mutex_unlock(&stru_3B526C);
    result = zlog(
               g_zc,
               "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
               71,
               "check_cmn_lock_and_reset_worse_phy",
               34,
               664,
               60,
               &v71);
    v2 = v66[0];
  }
  while ( v66[0] != 3 );
  return result;
}
