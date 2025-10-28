int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        _DWORD *a1,
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
  int v14; // r9
  int v15; // r10
  int v16; // r2
  const char *v17; // r5
  unsigned __int8 *v18; // r3
  void (__fastcall *v19)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v20)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v21)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v22)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v23)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v24)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v25)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v26)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v27)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v28)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v29)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v30)(_DWORD *, unsigned int *); // r3
  unsigned int v32; // r3
  unsigned __int8 *v33; // r9
  unsigned __int8 v34; // t1
  __useconds_t v35; // [sp+14h] [bp-1048h]
  unsigned __int8 *v36; // [sp+20h] [bp-103Ch]
  int v37; // [sp+3Ch] [bp-1020h]
  int v38; // [sp+44h] [bp-1018h]
  int v39; // [sp+48h] [bp-1014h]
  int v40; // [sp+54h] [bp-1008h] BYREF
  unsigned int v41; // [sp+58h] [bp-1004h] BYREF
  int v42; // [sp+5Ch] [bp-1000h]
  int v43; // [sp+60h] [bp-FFCh]
  int v44; // [sp+64h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v41, 0x1000u, 0, "%s...", "serdes_phy_bist_external_phy1tx_phy2rx");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10496,
    60,
    &v41);
  v13 = a3 == 8;
  v14 = 61441;
  if ( a3 != 8 )
    v14 = 1;
  v15 = 61458;
  if ( !v13 )
    v15 = 18;
  sub_70324(
    (int)a1,
    a6,
    97,
    a4 & 7
  | (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | (a4 << 8) & 0x700
  | (16 * a4) & 0x70);
  sub_D19C4((int)a1, a7, v14, 0xFFFFFFF1);
  sub_D19C4((int)a1, a7, v15, (2 * a4) & 0xE);
  sub_D19C4((int)a1, a7, v14, 0);
  if ( a5 )
  {
    v32 = a5 >> 1;
    if ( a5 >> 1 )
    {
      LOBYTE(v16) = 0;
      do
      {
        v32 >>= 1;
        LOBYTE(v16) = v16 + 1;
      }
      while ( v32 );
      v16 = (unsigned __int8)v16;
      v37 = (unsigned __int8)v16;
    }
    else
    {
      v37 = 0;
      v16 = 0;
    }
  }
  else
  {
    v16 = 1;
    v37 = 1;
  }
  v35 = v16;
  pthread_mutex_lock(&stru_3B526C);
  if ( a4 )
    v17 = "prbs";
  else
    v17 = "clock";
  logfmt_raw((char *)&v41, 0x1000u, 0, "test %d %s...", v35, v17);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10520,
    60,
    &v41);
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane((int)a1, a2, a6, a8);
      div2_seq_one_lane((int)a1, a2, a6, a8);
      break;
    case 4u:
      div4_seq_one_lane((int)a1, a2, a6, a8);
      div4_seq_one_lane((int)a1, a2, a6, a8);
      break;
    case 8u:
      div8_seq_one_lane((int)a1, a2, a6, a8);
      div8_seq_one_lane((int)a1, a2, a6, a8);
      break;
    default:
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v41, 0x1000u, 0, "do not set div_seq with testcase 4");
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10535,
        60,
        &v41);
      break;
  }
  v40 = 336529925;
  sub_70324((int)a1, a6, 98, 1 << a8);
  v38 = (unsigned __int16)(a9 << 12) | 1;
  v18 = (unsigned __int8 *)&v40;
  v39 = (unsigned __int16)(a9 << 12) | 0x91;
  do
  {
    v36 = v18 + 1;
    enable_rxbist_autostop_one_lane((int)a1, a2, a7, a9, *v18);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v41 = -9;
    v19 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    LOBYTE(v43) = 1;
    HIWORD(v43) = 144;
    LOBYTE(v44) = a7;
    v19(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v20 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    v41 = (unsigned __int16)(a9 << 12) | 0x80000001;
    HIWORD(v43) = 145;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v20(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v42 = 0;
    v43 = 9437185;
    v41 = 8;
    v44 = a7;
    ((void (__fastcall *)(_DWORD *, unsigned int *))a1[36])(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v21 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    HIWORD(v43) = 145;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000091;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v21(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v42 = 0;
    v43 = 9437185;
    v41 = -1073741825;
    v44 = a7;
    ((void (__fastcall *)(_DWORD *, unsigned int *))a1[36])(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v22 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    HIWORD(v43) = 145;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000001;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v22(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v42 = 0;
    v43 = 9437185;
    v41 = 0x40000000;
    v44 = a7;
    ((void (__fastcall *)(_DWORD *, unsigned int *))a1[36])(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v23 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    HIWORD(v43) = 145;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000077;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v23(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v24 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    LOBYTE(v43) = 1;
    HIWORD(v43) = 144;
    v41 = 0;
    LOBYTE(v44) = a7;
    v24(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v25 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    HIWORD(v43) = 145;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000001;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v25(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep((__useconds_t)&loc_493E0);
    v26 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    v41 = -9;
    v42 = 0;
    v43 = 9437185;
    v44 = a7;
    v26(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v27 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    v41 = (unsigned __int16)(a9 << 12) | 0x80000001;
    HIWORD(v43) = 145;
    LOBYTE(v43) = 1;
    LOBYTE(v44) = a7;
    v27(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 0;
    v44 = 0;
    v42 = 0;
    v28 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    LOBYTE(v43) = 1;
    HIWORD(v43) = 144;
    v41 = 0;
    LOBYTE(v44) = a7;
    v28(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 9502721;
    v42 = 0;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000091;
    v44 = a7;
    ((void (__fastcall *)(_DWORD *, unsigned int *))a1[36])(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 9437184;
    v44 = 0;
    v42 = 0;
    v29 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    LOBYTE(v43) = 1;
    v41 = 0;
    LOBYTE(v44) = a7;
    v29(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v43 = 1;
    v44 = 0;
    v42 = 0;
    v30 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
    HIWORD(v43) = 145;
    v41 = (unsigned __int16)(a9 << 12) | 0x80000001;
    LOBYTE(v44) = a7;
    v30(a1, &v41);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, a6, a9);
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, a7, a9);
    check_bist_error_one_lane(a1, a2, a7, a9);
    v18 = v36;
  }
  while ( v36 != (unsigned __int8 *)&v41 );
  if ( v37 == 4 )
  {
    enable_rx_equalizer_tuning_one_lane((int)a1, a2, a7, a9);
    v33 = (unsigned __int8 *)&v40;
    do
    {
      v34 = *v33++;
      enable_rxbist_autostop_one_lane((int)a1, a2, a7, a9, v34);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
      sub_D19C4((int)a1, a7, v38, 0xFFFFFFF7);
      sub_D19C4((int)a1, a7, v39, 8u);
      sub_D19C4((int)a1, a7, v38, 0xBFFFFFFF);
      sub_D19C4((int)a1, a7, (unsigned __int16)(a9 << 12) | 0x77, 0x40000000u);
      sub_D19C4((int)a1, a7, v38, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      sub_D19C4((int)a1, a7, v38, 0xFFFFFFF7);
      sub_D19C4((int)a1, a7, v39, 0);
      sub_D19C4((int)a1, a7, v38, 0);
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, a6, a9);
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, a7, a9);
      check_bist_error_one_lane(a1, a2, a7, a9);
    }
    while ( v33 != v36 );
  }
  sub_70324((int)a1, a6, 98, 0);
  return 0;
}
