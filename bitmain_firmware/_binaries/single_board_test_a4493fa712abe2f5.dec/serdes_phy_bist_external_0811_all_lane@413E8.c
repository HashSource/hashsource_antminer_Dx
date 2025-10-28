int __fastcall serdes_phy_bist_external_0811_all_lane(
        _DWORD *a1,
        int a2,
        pthread_mutex_t *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v10; // r2
  int v11; // r8
  int v12; // r2
  int v13; // r5
  int v14; // r1
  int v15; // r5
  int v16; // r5
  int v17; // r5
  int v18; // r1
  const char *v19; // r2
  unsigned __int8 *v20; // r3
  void (__fastcall *v21)(_DWORD *, int *); // r3
  void (__fastcall *v22)(_DWORD *, int *); // r3
  void (__fastcall *v23)(_DWORD *, int *); // r3
  void (__fastcall *v24)(_DWORD *, int *); // r3
  void (__fastcall *v25)(_DWORD *, int *); // r3
  void (__fastcall *v26)(_DWORD *, int *); // r3
  void (__fastcall *v27)(_DWORD *, int *); // r3
  void (__fastcall *v28)(_DWORD *, int *); // r3
  void (__fastcall *v29)(_DWORD *, int *); // r3
  void (__fastcall *v30)(_DWORD *, int *); // r3
  void (__fastcall *v31)(_DWORD *, int *); // r3
  void (__fastcall *v32)(_DWORD *, int *); // r3
  void (__fastcall *v33)(_DWORD *, int *); // r3
  void (__fastcall *v34)(_DWORD *, int *); // r3
  void (__fastcall *v35)(_DWORD *, int *); // r3
  unsigned int v37; // r3
  unsigned __int8 v38; // r2
  unsigned __int8 *v39; // r5
  unsigned __int8 v40; // t1
  int v41; // [sp+10h] [bp-1044h]
  int v42; // [sp+18h] [bp-103Ch]
  unsigned __int8 *v43; // [sp+1Ch] [bp-1038h]
  int v44; // [sp+20h] [bp-1034h]
  int v45; // [sp+30h] [bp-1024h]
  int v46; // [sp+34h] [bp-1020h]
  int v47; // [sp+38h] [bp-101Ch]
  int v48; // [sp+3Ch] [bp-1018h]
  int v49; // [sp+44h] [bp-1010h]
  int v50; // [sp+48h] [bp-100Ch] BYREF
  char v51; // [sp+4Ch] [bp-1008h]
  _BYTE v52[3]; // [sp+4Dh] [bp-1007h] BYREF
  int v53; // [sp+50h] [bp-1004h] BYREF
  int v54; // [sp+54h] [bp-1000h]
  int v55; // [sp+58h] [bp-FFCh]
  int v56; // [sp+5Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v53, 0x1000u, 0, "%s...", "serdes_phy_bist_external_0811_all_lane");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10361,
    60,
    &v53);
  v10 = -2147422207;
  LOWORD(v11) = -3951;
  if ( a4 != 8 )
    v10 = -2147483647;
  HIWORD(v11) = 0x8000;
  v42 = v10;
  v12 = -2147483503;
  if ( a4 == 8 )
    v13 = -2147422089;
  else
    v13 = -2147483529;
  if ( a4 == 8 )
    v12 = v11;
  v45 = v13;
  v14 = 61441;
  v15 = 61559;
  if ( a4 != 8 )
  {
    v14 = 1;
    v15 = 119;
  }
  v47 = v14;
  v44 = v12;
  v48 = v15;
  v16 = 61585;
  if ( a4 != 8 )
    v16 = 145;
  v49 = v16;
  v17 = 61458;
  if ( a4 != 8 )
    v17 = 18;
  sub_70324(
    (int)a1,
    (unsigned __int8)a3,
    97,
    (16 * a5) & 0x70
  | (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | a5 & 7
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700);
  sub_D19C4((int)a1, (char)a3, v47, 0xFFFFFFF1);
  sub_D19C4((int)a1, (char)a3, v17, (2 * a5) & 0xE);
  sub_D19C4((int)a1, (char)a3, v47, 0);
  if ( a6 )
  {
    v37 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v38 = 0;
      do
      {
        v37 >>= 1;
        ++v38;
      }
      while ( v37 );
      v18 = v38;
      v46 = v38;
    }
    else
    {
      v46 = 0;
      v18 = 0;
    }
  }
  else
  {
    v18 = 1;
    v46 = 1;
  }
  v41 = v18;
  pthread_mutex_lock(&stru_3B526C);
  v19 = "clock";
  if ( a5 )
    v19 = "prbs";
  logfmt_raw((char *)&v53, 0x1000u, 0, "test %d %s...", v41, v19);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10383,
    60,
    &v53);
  switch ( a6 )
  {
    case 2u:
      div2_seq((int)a1, a2, (int)a3, a4);
      break;
    case 4u:
      div4_seq((int)a1, a2, (int)a3, a4);
      break;
    case 8u:
      div8_seq_one_lane((int)a1, a2, (int)a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane((int)a1, a2, (int)a3, a4);
      break;
    default:
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v53, 0x1000u, 0, "do not set div_seq with testcase 4");
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10394,
        60,
        &v53);
      break;
  }
  v50 = 336529925;
  v51 = 28;
  sub_70324((int)a1, (unsigned __int8)a3, 98, 255);
  v20 = (unsigned __int8 *)&v50;
  do
  {
    v43 = v20 + 1;
    enable_rxbist_autostop((int)a1, a2, (unsigned __int8)a3, a4, *v20);
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v53 = -9;
    v21 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v56) = (_BYTE)a3;
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    v21(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9502720;
    v56 = 0;
    v54 = 0;
    v53 = v42;
    v22 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v55) = 1;
    LOBYTE(v56) = (_BYTE)a3;
    v22(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v53 = 8;
    v23 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    LOBYTE(v56) = (_BYTE)a3;
    v23(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v24 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = v44;
    HIWORD(v55) = 145;
    LOBYTE(v55) = 1;
    LOBYTE(v56) = (_BYTE)a3;
    v24(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v53 = -1073741825;
    v25 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    LOBYTE(v56) = (_BYTE)a3;
    v25(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9502721;
    v56 = 0;
    v54 = 0;
    v53 = v42;
    v26 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v56) = (_BYTE)a3;
    v26(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v53 = 0x40000000;
    v27 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    LOBYTE(v56) = (_BYTE)a3;
    v27(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v28 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = v45;
    HIWORD(v55) = 145;
    LOBYTE(v55) = 1;
    LOBYTE(v56) = (_BYTE)a3;
    v28(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v29 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = 0;
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    LOBYTE(v56) = (_BYTE)a3;
    v29(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9502721;
    v56 = 0;
    v54 = 0;
    v53 = v42;
    v30 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v56) = (_BYTE)a3;
    v30(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running(a1, a2, (int)a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep((__useconds_t)&loc_493E0);
    v31 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = -9;
    v54 = 0;
    v55 = 9437185;
    v56 = (unsigned __int8)a3;
    v31(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9502721;
    v56 = 0;
    v54 = 0;
    v53 = v42;
    v32 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    LOBYTE(v56) = (_BYTE)a3;
    v32(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v33 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = 0;
    LOBYTE(v55) = 1;
    HIWORD(v55) = 144;
    LOBYTE(v56) = (_BYTE)a3;
    v33(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 0;
    v56 = 0;
    v54 = 0;
    v34 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = v44;
    HIWORD(v55) = 145;
    LOBYTE(v55) = 1;
    LOBYTE(v56) = (_BYTE)a3;
    v34(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9437184;
    v56 = 0;
    v54 = 0;
    v35 = (void (__fastcall *)(_DWORD *, int *))a1[36];
    v53 = 0;
    LOBYTE(v55) = 1;
    LOBYTE(v56) = (_BYTE)a3;
    v35(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v55 = 9502721;
    v54 = 0;
    v53 = v42;
    v56 = (unsigned __int8)a3;
    ((void (__fastcall *)(_DWORD *, int *))a1[36])(a1, &v53);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    v20 = v43;
  }
  while ( v43 != v52 );
  if ( v46 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, (int)a3, a4);
    v39 = (unsigned __int8 *)&v50;
    do
    {
      v40 = *v39++;
      enable_rxbist_autostop((int)a1, a2, (unsigned __int8)a3, a4, v40);
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      sub_D19C4((int)a1, (char)a3, v47, 0xFFFFFFF7);
      sub_D19C4((int)a1, (char)a3, v49, 8u);
      sub_D19C4((int)a1, (char)a3, v47, 0xBFFFFFFF);
      sub_D19C4((int)a1, (char)a3, v48, 0x40000000u);
      sub_D19C4((int)a1, (char)a3, v47, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running(a1, a2, (int)a3, a4);
      check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
      usleep(0x493E0u);
      sub_D19C4((int)a1, (char)a3, v47, 0xFFFFFFF7);
      sub_D19C4((int)a1, (char)a3, v49, 0);
      sub_D19C4((int)a1, (char)a3, v47, 0);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done(a1, a2, a3, a4);
      check_bist_done(a1, a2, a3, a4);
      check_bist_error(a1, a2, (int)a3, a4);
    }
    while ( v39 != v43 );
  }
  sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
