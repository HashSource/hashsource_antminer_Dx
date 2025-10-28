int __fastcall serdes_phy_bist_external_0811(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        int a7)
{
  bool v11; // zf
  int v12; // r10
  int v13; // r11
  int v14; // r2
  char *v15; // r7
  int *v16; // r7
  int v17; // r3
  int v18; // t1
  unsigned int v20; // r3
  int v21; // r8
  int v22; // r3
  int *v23; // r9
  int v24; // r3
  int v25; // t1
  int v26; // [sp+18h] [bp-101Ch]
  int v27; // [sp+28h] [bp-100Ch]
  int v28; // [sp+30h] [bp-1004h] BYREF
  char v29; // [sp+34h] [bp-1000h]
  _BYTE _35[4107]; // [sp+35h] [bp-FFFh] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v28, 0x1000u, 0, 1560772, "serdes_phy_bist_external_0811");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811",
    29,
    10047,
    60,
    &v28);
  v11 = a4 == 8;
  v12 = 61441;
  if ( a4 != 8 )
    v12 = 1;
  v13 = 61458;
  if ( !v11 )
    v13 = 18;
  sub_DAF1C(
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
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF1);
  sub_BF774(a1, (char)a3, v13, (2 * a5) & 0xE);
  sub_BF774(a1, (char)a3, v12, 0);
  if ( a6 )
  {
    v20 = a6 >> 1;
    if ( a6 >> 1 )
    {
      LOBYTE(v14) = 0;
      do
      {
        v20 >>= 1;
        LOBYTE(v14) = v14 + 1;
      }
      while ( v20 );
      v14 = (unsigned __int8)v14;
      v27 = (unsigned __int8)v14;
    }
    else
    {
      v27 = 0;
      v14 = 0;
    }
  }
  else
  {
    v27 = 1;
    v14 = 1;
  }
  v26 = v14;
  pthread_mutex_lock(&stru_1A8A24);
  if ( a5 )
    v15 = "prbs";
  else
    v15 = "clock";
  logfmt_raw((char *)&v28, 0x1000u, 0, 1560840, a7, v26, v15);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811",
    29,
    10069,
    60,
    &v28);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
      {
        div2_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div2_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_21;
    case 4u:
      if ( a7 )
      {
        div4_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div4_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_21;
    case 8u:
      if ( a7 )
      {
        div8_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div8_seq_one_lane(a1, a2, (int)a3, 7);
LABEL_21:
      v29 = 28;
      v28 = 336529925;
      goto LABEL_22;
    case 0x20u:
      if ( a7 )
      {
        div32_20210813_500M_one_lane(a1, a2, (int)a3, 4);
LABEL_35:
        v29 = 28;
        v28 = 336529925;
LABEL_36:
        sub_DAF1C(a1, (unsigned __int8)a3, 98, 16);
        goto LABEL_23;
      }
      div32_20210813_500M_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_21;
  }
  V_LOCK();
  logfmt_raw((char *)&v28, 0x1000u, 0, 1560780);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811",
    29,
    10092,
    60,
    &v28);
  v29 = 28;
  v28 = 336529925;
  if ( a7 )
    goto LABEL_36;
LABEL_22:
  sub_DAF1C(a1, (unsigned __int8)a3, 98, 128);
LABEL_23:
  v16 = &v28;
  do
  {
    while ( 1 )
    {
      v18 = *(unsigned __int8 *)v16;
      v16 = (int *)((char *)v16 + 1);
      v17 = v18;
      if ( !a7 )
        break;
      sub_953DC(a1, a2, (unsigned __int8)a3, v17);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 8);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 4);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( _35 == (_BYTE *)v16 )
        goto LABEL_27;
    }
    enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4, v17);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467263);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 8);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467119);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -1073741825);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467263);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x40000000);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467145);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467263);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
    check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
    usleep(0x493E0u);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467263);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467119);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467263);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done_one_lane(a1, a2, (int)a3, 4);
    check_bist_done_one_lane(a1, a2, (int)a3, 7);
    check_bist_error_one_lane(a1, a2, (int)a3, 4);
  }
  while ( _35 != (_BYTE *)v16 );
LABEL_27:
  if ( v27 == 4 )
  {
    LOWORD(v21) = 16385;
    if ( a7 )
      v22 = 7;
    else
      v22 = 4;
    enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, v22);
    HIWORD(v21) = 0x8000;
    v23 = &v28;
    do
    {
      v25 = *(unsigned __int8 *)v23;
      v23 = (int *)((char *)v23 + 1);
      v24 = v25;
      if ( a7 )
      {
        sub_953DC(a1, a2, (unsigned __int8)a3, v24);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 8);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454857);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
        usleep(0x493E0u);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 7);
      }
      else
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4, v24);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, v21);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 8);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, v21);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467145);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, v21);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
        usleep(0x493E0u);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, v21);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
        sub_DAF1C(a1, (unsigned __int8)a3, 145, v21);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 4);
      }
    }
    while ( v16 != v23 );
  }
  sub_DAF1C(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
