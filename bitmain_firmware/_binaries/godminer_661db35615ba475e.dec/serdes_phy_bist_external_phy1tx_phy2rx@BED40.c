int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  bool v13; // zf
  int v14; // r8
  int v15; // r9
  int v16; // r1
  const char *v17; // r5
  unsigned __int8 *v18; // r3
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
  unsigned int v32; // r3
  unsigned __int8 v33; // r2
  unsigned __int8 *v34; // r8
  unsigned __int8 v35; // t1
  __useconds_t v36; // [sp+14h] [bp-1048h]
  unsigned __int8 *v37; // [sp+20h] [bp-103Ch]
  int v38; // [sp+3Ch] [bp-1020h]
  int v39; // [sp+44h] [bp-1018h]
  int v40; // [sp+48h] [bp-1014h]
  int v41; // [sp+54h] [bp-1008h] BYREF
  unsigned int v42; // [sp+58h] [bp-1004h] BYREF
  int v43; // [sp+5Ch] [bp-1000h]
  int v44; // [sp+60h] [bp-FFCh]
  int v45; // [sp+64h] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v42, 0x1000u, 0, "%s...", "serdes_phy_bist_external_phy1tx_phy2rx");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10496,
    60,
    &v42);
  v13 = a3 == 8;
  v14 = 61441;
  if ( a3 != 8 )
    v14 = 1;
  v15 = 61458;
  if ( !v13 )
    v15 = 18;
  sub_8F7C8(
    a1,
    a6,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * a4) & 0x70);
  sub_1325F4(a1, a7, v14, 0xFFFFFFF1);
  sub_1325F4(a1, a7, v15, (2 * (_BYTE)a4) & 0xE);
  sub_1325F4(a1, a7, v14, 0);
  if ( a5 )
  {
    v32 = a5 >> 1;
    if ( a5 >> 1 )
    {
      v33 = 0;
      do
      {
        v32 >>= 1;
        ++v33;
      }
      while ( v32 );
      v16 = v33;
      v38 = v33;
    }
    else
    {
      v38 = 0;
      v16 = 0;
    }
  }
  else
  {
    v38 = 1;
    v16 = 1;
  }
  v36 = v16;
  pthread_mutex_lock(&stru_197BB8);
  if ( a4 )
    v17 = "prbs";
  else
    v17 = "clock";
  logfmt_raw((char *)&v42, 0x1000u, 0, "test %d %s...", v36, v17);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10520,
    60,
    &v42);
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane(a1, a2, a6, a8);
      div2_seq_one_lane(a1, a2, a6, a8);
      break;
    case 4u:
      div4_seq_one_lane(a1, a2, a6, a8);
      div4_seq_one_lane(a1, a2, a6, a8);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, a6, a8);
      div8_seq_one_lane(a1, a2, a6, a8);
      break;
    default:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v42, 0x1000u, 0, "do not set div_seq with testcase 4");
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10535,
        60,
        &v42);
      break;
  }
  v41 = 336529925;
  sub_8F7C8(a1, a6, 98, 1 << a8);
  v39 = (unsigned __int16)(a9 << 12) | 1;
  v18 = (unsigned __int8 *)&v41;
  v40 = (unsigned __int16)(a9 << 12) | 0x91;
  do
  {
    v37 = v18 + 1;
    enable_rxbist_autostop_one_lane(a1, a2, a7, a9, *v18);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
    v44 = 9437184;
    v45 = 0;
    v42 = -9;
    v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v19(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000001;
    v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v20(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v43 = 0;
    v44 = 9437185;
    v42 = 8;
    v45 = a7;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000091;
    v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v21(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v43 = 0;
    v44 = 9437185;
    v42 = -1073741825;
    v45 = a7;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000001;
    v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v22(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v43 = 0;
    v44 = 9437185;
    v42 = 0x40000000;
    v45 = a7;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000077;
    v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v23(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9437184;
    v45 = 0;
    v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    v42 = 0;
    LOBYTE(v45) = a7;
    v24(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000001;
    v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v25(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep((__useconds_t)&loc_493E0);
    v42 = -9;
    v44 = 0;
    v45 = 0;
    v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v44) = 144;
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v26(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9502720;
    v45 = 0;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000001;
    v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    LOBYTE(v45) = a7;
    v27(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9437184;
    v45 = 0;
    v28 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    v42 = 0;
    LOBYTE(v45) = a7;
    v28(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v43 = 0;
    v44 = 9502721;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000091;
    v45 = a7;
    (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 9437184;
    v29 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    v43 = 0;
    LOBYTE(v44) = 1;
    v42 = 0;
    v45 = a7;
    v29(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = 1;
    v45 = 0;
    v30 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
    HIWORD(v44) = 145;
    v42 = (unsigned __int16)(a9 << 12) | 0x80000001;
    v43 = 0;
    LOBYTE(v45) = a7;
    v30(a1, &v42);
    usleep((__useconds_t)"ead_unregister_cancel");
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, a6, a9);
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, a7, a9);
    check_bist_error_one_lane(a1, a2, a7, a9);
    v18 = v37;
  }
  while ( v37 != (unsigned __int8 *)&v42 );
  if ( v38 == 4 )
  {
    enable_rx_equalizer_tuning_one_lane(a1, a2, a7, a9);
    v34 = (unsigned __int8 *)&v41;
    do
    {
      v35 = *v34++;
      enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v35);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
      sub_1325F4(a1, a7, v39, 0xFFFFFFF7);
      sub_1325F4(a1, a7, v40, 8u);
      sub_1325F4(a1, a7, v39, 0xBFFFFFFF);
      sub_1325F4(a1, a7, (unsigned __int16)(a9 << 12) | 0x77, 0x40000000u);
      sub_1325F4(a1, a7, v39, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      sub_1325F4(a1, a7, v39, 0xFFFFFFF7);
      sub_1325F4(a1, a7, v40, 0);
      sub_1325F4(a1, a7, v39, 0);
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, a6, a9);
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, a7, a9);
      check_bist_error_one_lane(a1, a2, a7, a9);
    }
    while ( v34 != v37 );
  }
  sub_8F7C8(a1, a6, 98, 0);
  return 0;
}
