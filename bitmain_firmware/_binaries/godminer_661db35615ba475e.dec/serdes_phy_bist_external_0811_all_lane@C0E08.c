int __fastcall serdes_phy_bist_external_0811_all_lane(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v9; // lr
  int v10; // r8
  int v11; // r2
  int v12; // r7
  int v13; // r1
  int v14; // r5
  int v15; // lr
  int v16; // lr
  int v17; // r5
  int v18; // r8
  const char *v19; // r2
  unsigned __int8 *v20; // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  void (__fastcall *v23)(int, int *); // r3
  void (__fastcall *v24)(int, int *); // r3
  void (__fastcall *v25)(int, int *); // r3
  void (__fastcall *v26)(int, int *); // r3
  void (__fastcall *v27)(int, int *); // r3
  void (__fastcall *v28)(int, int *); // r3
  unsigned int v30; // r3
  unsigned __int8 *v31; // r7
  unsigned __int8 v32; // t1
  int v34; // [sp+18h] [bp-103Ch]
  unsigned __int8 *v35; // [sp+1Ch] [bp-1038h]
  int v36; // [sp+20h] [bp-1034h]
  int v37; // [sp+30h] [bp-1024h]
  int v38; // [sp+34h] [bp-1020h]
  int v39; // [sp+38h] [bp-101Ch]
  int v40; // [sp+3Ch] [bp-1018h]
  int v41; // [sp+44h] [bp-1010h]
  int v42; // [sp+48h] [bp-100Ch] BYREF
  char v43; // [sp+4Ch] [bp-1008h]
  _BYTE v44[3]; // [sp+4Dh] [bp-1007h] BYREF
  int v45; // [sp+50h] [bp-1004h] BYREF
  int v46; // [sp+54h] [bp-1000h]
  int v47; // [sp+58h] [bp-FFCh]
  int v48; // [sp+5Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v45, 0x1000u, 0, "%s...", "serdes_phy_bist_external_0811_all_lane");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10361,
    60,
    &v45);
  v9 = -2147422207;
  LOWORD(v10) = -3951;
  if ( a4 != 8 )
    v9 = -2147483647;
  HIWORD(v10) = 0x8000;
  v11 = -2147483503;
  LOWORD(v12) = -3977;
  if ( a4 == 8 )
  {
    v11 = v10;
    v13 = 61441;
  }
  else
  {
    v13 = 1;
  }
  HIWORD(v12) = 0x8000;
  v34 = v9;
  LOWORD(v14) = 119;
  v15 = 61559;
  if ( a4 != 8 )
    v15 = 119;
  HIWORD(v14) = 0x8000;
  if ( a4 == 8 )
    v14 = v12;
  v39 = v13;
  v36 = v11;
  v40 = v15;
  v16 = 61585;
  if ( a4 != 8 )
    v16 = 145;
  v37 = v14;
  v41 = v16;
  if ( a4 == 8 )
    v17 = 61458;
  else
    v17 = 18;
  sub_8F7C8(
    a1,
    (unsigned __int8)a3,
    97,
    (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | a5 & 7
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700
  | (16 * a5) & 0x70);
  sub_1325F4(a1, (char)a3, v39, 0xFFFFFFF1);
  sub_1325F4(a1, (char)a3, v17, (2 * a5) & 0xE);
  sub_1325F4(a1, (char)a3, v39, 0);
  if ( a6 )
  {
    v30 = a6 >> 1;
    if ( a6 >> 1 )
    {
      LOBYTE(v18) = 0;
      do
      {
        v30 >>= 1;
        LOBYTE(v18) = v18 + 1;
      }
      while ( v30 );
      v18 = (unsigned __int8)v18;
      v38 = (unsigned __int8)v18;
    }
    else
    {
      v38 = 0;
      v18 = 0;
    }
  }
  else
  {
    v38 = 1;
    v18 = 1;
  }
  pthread_mutex_lock(&stru_197BB8);
  v19 = "clock";
  if ( a5 )
    v19 = "prbs";
  logfmt_raw((char *)&v45, 0x1000u, 0, "test %d %s...", v18, v19);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10383,
    60,
    &v45);
  switch ( a6 )
  {
    case 2u:
      div2_seq(a1, a2, (int)a3, a4);
      break;
    case 4u:
      div4_seq(a1, a2, (int)a3, a4);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, (int)a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane(a1, a2, (int)a3, a4);
      break;
    default:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v45, 0x1000u, 0, "do not set div_seq with testcase 4");
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10394,
        60,
        &v45);
      break;
  }
  v42 = 336529925;
  v43 = 28;
  sub_8F7C8(a1, (unsigned __int8)a3, 98, 255);
  v20 = (unsigned __int8 *)&v42;
  do
  {
    v35 = v20 + 1;
    enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, *v20);
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    v47 = 0;
    v48 = 0;
    v45 = -9;
    v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v46 = 0;
    LOBYTE(v47) = 1;
    LOBYTE(v48) = (_BYTE)a3;
    HIWORD(v47) = 144;
    v21(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v34;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v48 = 0;
    v46 = 0;
    v47 = 9437185;
    v45 = 8;
    v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v48) = (_BYTE)a3;
    v22(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v36;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v48 = 0;
    v46 = 0;
    v47 = 9437185;
    v45 = -1073741825;
    v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v48) = (_BYTE)a3;
    v23(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v34;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v48 = 0;
    v46 = 0;
    v47 = 9437185;
    v45 = 0x40000000;
    v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v48) = (_BYTE)a3;
    v24(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v37;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v47 = 0;
    v48 = 0;
    v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v46 = 0;
    LOBYTE(v47) = 1;
    v45 = 0;
    HIWORD(v47) = 144;
    LOBYTE(v48) = (_BYTE)a3;
    v25(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v34;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running(a1, a2, (int)a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep((__useconds_t)&loc_493E0);
    v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v45 = -9;
    v46 = 0;
    v47 = 9437185;
    v48 = (unsigned __int8)a3;
    v26(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v34;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v47 = 0;
    v48 = 0;
    v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v46 = 0;
    LOBYTE(v47) = 1;
    v45 = 0;
    HIWORD(v47) = 144;
    LOBYTE(v48) = (_BYTE)a3;
    v27(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v45 = v36;
    v46 = 0;
    v47 = 9502721;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v47 = 0;
    v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v47) = 144;
    v46 = 0;
    LOBYTE(v47) = 1;
    v45 = 0;
    v48 = (unsigned __int8)a3;
    v28(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    v47 = 9502721;
    v45 = v34;
    v46 = 0;
    v48 = (unsigned __int8)a3;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v45);
    usleep((__useconds_t)"ead_unregister_cancel");
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, (int)a3, a4);
    check_bist_done(a1, a2, (int)a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    v20 = v35;
  }
  while ( v35 != v44 );
  if ( v38 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, (int)a3, a4);
    v31 = (unsigned __int8 *)&v42;
    do
    {
      v32 = *v31++;
      enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, v32);
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      sub_1325F4(a1, (char)a3, v39, 0xFFFFFFF7);
      sub_1325F4(a1, (char)a3, v41, 8u);
      sub_1325F4(a1, (char)a3, v39, 0xBFFFFFFF);
      sub_1325F4(a1, (char)a3, v40, 0x40000000u);
      sub_1325F4(a1, (char)a3, v39, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running(a1, a2, (int)a3, a4);
      check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
      usleep(0x493E0u);
      sub_1325F4(a1, (char)a3, v39, 0xFFFFFFF7);
      sub_1325F4(a1, (char)a3, v41, 0);
      sub_1325F4(a1, (char)a3, v39, 0);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done(a1, a2, (int)a3, a4);
      check_bist_done(a1, a2, (int)a3, a4);
      check_bist_error(a1, a2, (int)a3, a4);
    }
    while ( v31 != v35 );
  }
  sub_8F7C8(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
