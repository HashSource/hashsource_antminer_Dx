int __fastcall serdes_phy_bist_external(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5, int a6)
{
  int v10; // lr
  int v11; // r12
  int v12; // r8
  int v13; // r10
  const char *v14; // r7
  int *v15; // r8
  int v16; // t1
  int *v17; // r9
  int v18; // t1
  int v20; // [sp+10h] [bp-100Ch]
  int v21; // [sp+14h] [bp-1008h]
  int v22; // [sp+18h] [bp-1004h] BYREF
  char v23; // [sp+1Ch] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v22, 0x1000u, 0, "%s...", "serdes_phy_bist_external");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9507,
    60,
    &v22);
  v10 = 61559;
  v11 = 61585;
  if ( a4 != 8 )
  {
    v10 = 119;
    v11 = 145;
  }
  v12 = 61441;
  if ( a4 != 8 )
    v12 = 1;
  v21 = v10;
  v13 = 61458;
  v20 = v11;
  if ( a4 != 8 )
    v13 = 18;
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
  sub_1325F4(a1, (char)a3, v12, 0xFFFFFFF1);
  sub_1325F4(a1, (char)a3, v13, (2 * a5) & 0xE);
  sub_1325F4(a1, (char)a3, v12, 0);
  pthread_mutex_lock(&stru_197BB8);
  if ( a5 )
    v14 = "prbs";
  else
    v14 = "clock";
  logfmt_raw((char *)&v22, 0x1000u, 0, "test %d %s...", a6, v14);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9530,
    60,
    &v22);
  if ( a6 > 2 )
  {
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_1325F4(a1, (char)a3, v12, 0xFFFFFFFE);
    sub_1325F4(a1, (char)a3, v20, 1u);
    sub_1325F4(a1, (char)a3, v12, 0xFFBFFFFF);
    sub_1325F4(a1, (char)a3, v21, 0x400000u);
    sub_1325F4(a1, (char)a3, v12, 0);
    sub_1325F4(a1, (char)a3, v12, 0xFFFFFFF7);
    sub_1325F4(a1, (char)a3, v20, 8u);
    sub_1325F4(a1, (char)a3, v12, 0xBFFFFFFF);
    sub_1325F4(a1, (char)a3, v21, 0x40000000u);
    sub_1325F4(a1, (char)a3, v12, 0);
    check_bist_tx_running(a1, a2, (int)a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep(0x493E0u);
    sub_1325F4(a1, (char)a3, v12, 0xFFFFFFF7);
    sub_1325F4(a1, (char)a3, v20, 0);
    sub_1325F4(a1, (char)a3, v12, 0);
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, (int)a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    return 0;
  }
  else
  {
    v22 = 336529925;
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 16);
    v15 = &v22;
    do
    {
      v16 = *(unsigned __int8 *)v15;
      v15 = (int *)((char *)v15 + 1);
      sub_4A084(a1, a2, (unsigned __int8)a3, v16);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -9);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 8);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -9);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 4);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
    }
    while ( &v23 != (char *)v15 );
    v17 = &v22;
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 0);
    sub_8F7C8(a1, 3u, 83, 0);
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 128);
    do
    {
      v18 = *(unsigned __int8 *)v17;
      v17 = (int *)((char *)v17 + 1);
      sub_4A084(a1, a2, (unsigned __int8)a3, v18);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -13);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 12);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454962);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, (unsigned __int8)a3, 7);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -9);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 8);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, -9);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_8F7C8(a1, (unsigned __int8)a3, 144, 0);
      sub_8F7C8(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
    }
    while ( v17 != v15 );
    sub_8F7C8(a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}
