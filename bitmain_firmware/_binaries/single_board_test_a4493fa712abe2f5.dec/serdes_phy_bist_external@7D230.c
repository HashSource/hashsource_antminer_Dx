int __fastcall serdes_phy_bist_external(_DWORD *a1, int a2, pthread_mutex_t *a3, int a4, unsigned __int8 a5, int a6)
{
  int v10; // r7
  int v11; // r9
  int v12; // r7
  int v13; // r10
  const char *v14; // r2
  int *v15; // r10
  int *v16; // r9
  int v17; // t1
  int v18; // t1
  int v20; // [sp+1Ch] [bp-1008h]
  int v21; // [sp+20h] [bp-1004h] BYREF
  char v22; // [sp+24h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v21, 0x1000u, 0, "%s...", "serdes_phy_bist_external");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external",
    24,
    9507,
    60,
    &v21);
  if ( a4 == 8 )
    v10 = 61559;
  else
    v10 = 119;
  v20 = v10;
  v11 = 61441;
  if ( a4 == 8 )
  {
    v12 = 61585;
  }
  else
  {
    v11 = 1;
    v12 = 145;
  }
  v13 = 61458;
  if ( a4 != 8 )
    v13 = 18;
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
  sub_D19C4((int)a1, (char)a3, v11, 0xFFFFFFF1);
  sub_D19C4((int)a1, (char)a3, v13, (2 * a5) & 0xE);
  sub_D19C4((int)a1, (char)a3, v11, 0);
  pthread_mutex_lock(&stru_3B526C);
  v14 = "clock";
  if ( a5 )
    v14 = "prbs";
  logfmt_raw((char *)&v21, 0x1000u, 0, "test %d %s...", a6, v14);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_external",
    24,
    9530,
    60,
    &v21);
  if ( a6 > 2 )
  {
    sub_70324((int)a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_D19C4((int)a1, (char)a3, v11, 0xFFFFFFFE);
    sub_D19C4((int)a1, (char)a3, v12, 1u);
    sub_D19C4((int)a1, (char)a3, v11, 0xFFBFFFFF);
    sub_D19C4((int)a1, (char)a3, v20, 0x400000u);
    sub_D19C4((int)a1, (char)a3, v11, 0);
    sub_D19C4((int)a1, (char)a3, v11, 0xFFFFFFF7);
    sub_D19C4((int)a1, (char)a3, v12, 8u);
    sub_D19C4((int)a1, (char)a3, v11, 0xBFFFFFFF);
    sub_D19C4((int)a1, (char)a3, v20, 0x40000000u);
    sub_D19C4((int)a1, (char)a3, v11, 0);
    check_bist_tx_running(a1, a2, (int)a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep(0x493E0u);
    sub_D19C4((int)a1, (char)a3, v11, 0xFFFFFFF7);
    sub_D19C4((int)a1, (char)a3, v12, 0);
    sub_D19C4((int)a1, (char)a3, v11, 0);
    sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    return 0;
  }
  else
  {
    v15 = &v21;
    v21 = 336529925;
    v16 = &v21;
    sub_70324((int)a1, (unsigned __int8)a3, 98, 16);
    do
    {
      v17 = *(unsigned __int8 *)v16;
      v16 = (int *)((char *)v16 + 1);
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
    }
    while ( &v22 != (char *)v16 );
    sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
    sub_70324((int)a1, 3u, 83, 0);
    sub_70324((int)a1, (unsigned __int8)a3, 98, 128);
    do
    {
      v18 = *(unsigned __int8 *)v15;
      v15 = (int *)((char *)v15 + 1);
      sub_BD2B4((int)a1, a2, (unsigned __int8)a3, v18);
      sub_70324((int)a1, (unsigned __int8)a3, 144, -13);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 12);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454962);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane((int)a1, a2, (unsigned __int8)a3, 7);
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
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_70324((int)a1, (unsigned __int8)a3, 144, -9);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454831);
      sub_70324((int)a1, (unsigned __int8)a3, 144, 0);
      sub_70324((int)a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
    }
    while ( v15 != v16 );
    sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}
