int __fastcall serdes_phy_bist_external_0811(
        _DWORD *a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        int a7)
{
  int *v11; // r7
  bool v12; // zf
  int v13; // r10
  int v14; // r11
  int v15; // r2
  const char *v16; // r1
  int v17; // r3
  int v18; // t1
  unsigned int v20; // r3
  int *v21; // r10
  int v22; // r3
  int v23; // t1
  int v24; // [sp+14h] [bp-14h]
  int v25; // [sp+20h] [bp-8h]
  int v26; // [sp+28h] [bp+0h] BYREF
  char v27; // [sp+2Ch] [bp+4h]
  _BYTE varFFF[4115]; // [sp+2Dh] [bp+5h] BYREF

  v11 = &v26;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v26, 0x1000u, 0, "%s...", "serdes_phy_bist_external_0811");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_0811",
    29,
    10047,
    60,
    &v26);
  v12 = a4 == 8;
  v13 = 61441;
  if ( a4 != 8 )
    v13 = 1;
  v14 = 61458;
  if ( !v12 )
    v14 = 18;
  sub_70324(
    (int)a1,
    (unsigned __int8)a3,
    97,
    a5 & 7
  | (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700
  | (16 * a5) & 0x70);
  sub_D19C4((int)a1, (char)a3, v13, 0xFFFFFFF1);
  sub_D19C4((int)a1, (char)a3, v14, (2 * a5) & 0xE);
  sub_D19C4((int)a1, (char)a3, v13, 0);
  if ( a6 )
  {
    v20 = a6 >> 1;
    if ( a6 >> 1 )
    {
      LOBYTE(v15) = 0;
      do
      {
        v20 >>= 1;
        LOBYTE(v15) = v15 + 1;
      }
      while ( v20 );
      v15 = (unsigned __int8)v15;
      v25 = (unsigned __int8)v15;
    }
    else
    {
      v25 = 0;
      v15 = 0;
    }
  }
  else
  {
    v15 = 1;
    v25 = 1;
  }
  v24 = v15;
  pthread_mutex_lock(&stru_3B526C);
  v16 = "clock";
  if ( a5 )
    v16 = "prbs";
  logfmt_raw((char *)&v26, 0x1000u, 0, "group %d test %d %s...", a7, v24, v16);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external_0811",
    29,
    10069,
    60,
    &v26);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
      {
        div2_seq_one_lane((int)a1, a2, (int)a3, 4);
        goto LABEL_32;
      }
      div2_seq_one_lane((int)a1, a2, (int)a3, 7);
      goto LABEL_19;
    case 4u:
      if ( a7 )
      {
        div4_seq_one_lane((int)a1, a2, (int)a3, 4);
        goto LABEL_32;
      }
      div4_seq_one_lane((int)a1, a2, (int)a3, 7);
      goto LABEL_19;
    case 8u:
      if ( a7 )
      {
        div8_seq_one_lane((int)a1, a2, (int)a3, 4);
        goto LABEL_32;
      }
      div8_seq_one_lane((int)a1, a2, (int)a3, 7);
      goto LABEL_19;
  }
  if ( a6 != 32 )
  {
    V_LOCK();
    logfmt_raw((char *)&v26, 0x1000u, 0, "do not set div_seq with testcase 4");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "serdes_phy_bist_external_0811",
      29,
      10092,
      60,
      &v26);
    v27 = 28;
    v26 = 336529925;
    if ( a7 )
      goto LABEL_33;
LABEL_20:
    sub_70324((int)a1, (unsigned __int8)a3, 98, 128);
    goto LABEL_22;
  }
  if ( !a7 )
  {
    div32_20210813_500M_one_lane((int)a1, a2, (int)a3, 7);
LABEL_19:
    v27 = 28;
    v26 = 336529925;
    goto LABEL_20;
  }
  div32_20210813_500M_one_lane((int)a1, a2, (int)a3, 4);
LABEL_32:
  v27 = 28;
  v26 = 336529925;
LABEL_33:
  sub_70324((int)a1, (unsigned __int8)a3, 98, 16);
  do
  {
LABEL_22:
    while ( 1 )
    {
      v18 = *(unsigned __int8 *)v11;
      v11 = (int *)((char *)v11 + 1);
      v17 = v18;
      if ( !a7 )
        break;
      sub_BD2B4((int)a1, a2, (unsigned __int8)a3, v17);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 8);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454831);
      sub_70324((int)a1, (unsigned __int8)a3, 144, -1073741825);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454857);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454831);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 4);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( varFFF == (_BYTE *)v11 )
        goto LABEL_24;
    }
    enable_rxbist_autostop_one_lane((int)a1, a2, (unsigned __int8)a3, 4, v17);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
    sub_70324((int)a1, (unsigned __int8)a3, 144, 8);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467119);
    sub_70324((int)a1, (unsigned __int8)a3, 144, -1073741825);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
    sub_70324((int)a1, (unsigned __int8)a3, 144, 0x40000000);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467145);
    sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
    usleep(0xF4240u);
    check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
    check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
    usleep(0x493E0u);
    sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
    sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467119);
    sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
    sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done_one_lane(a1, a2, (int)a3, 4);
    check_bist_done_one_lane(a1, a2, (int)a3, 7);
    check_bist_error_one_lane(a1, a2, (int)a3, 4);
  }
  while ( varFFF != (_BYTE *)v11 );
LABEL_24:
  if ( v25 == 4 )
  {
    if ( a7 )
      enable_rx_equalizer_tuning_one_lane((int)a1, a2, (int)a3, 7);
    else
      enable_rx_equalizer_tuning_one_lane((int)a1, a2, (int)a3, 4);
    v21 = &v26;
    do
    {
      v23 = *(unsigned __int8 *)v21;
      v21 = (int *)((char *)v21 + 1);
      v22 = v23;
      if ( a7 )
      {
        sub_BD2B4((int)a1, a2, (unsigned __int8)a3, v22);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 8);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454831);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -1073741825);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454857);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
        usleep(0xF4240u);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
        usleep(0x493E0u);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454831);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 7);
      }
      else
      {
        enable_rxbist_autostop_one_lane((int)a1, a2, (unsigned __int8)a3, 4, v22);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 8);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467119);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -1073741825);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467145);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
        usleep(0xF4240u);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
        usleep(0x493E0u);
        sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467119);
        sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
        sub_70324((int)a1, (unsigned __int8)a3, 145, -2147467263);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 4);
      }
    }
    while ( v11 != v21 );
  }
  sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
