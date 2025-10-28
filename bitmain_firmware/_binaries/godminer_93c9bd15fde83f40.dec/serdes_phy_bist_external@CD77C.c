int __fastcall serdes_phy_bist_external(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5, int a6)
{
  char *v8; // r7
  int v11; // lr
  int v12; // r12
  int v13; // r8
  int v14; // r10
  char *v15; // r3
  int *v16; // r8
  int v17; // t1
  int *v18; // r9
  int v19; // t1
  int v21; // [sp+10h] [bp-100Ch]
  int v22; // [sp+14h] [bp-1008h]
  int v23; // [sp+18h] [bp-1004h] BYREF
  char v24; // [sp+1Ch] [bp-1000h] BYREF

  v8 = (char *)a5;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v23, 0x1000u, 0, 1560772, "serdes_phy_bist_external");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9507,
    60,
    &v23);
  v11 = 61559;
  v12 = 61585;
  if ( a4 != 8 )
  {
    v11 = 119;
    v12 = 145;
  }
  v13 = 61441;
  if ( a4 != 8 )
    v13 = 1;
  v22 = v11;
  v14 = 61458;
  v21 = v12;
  if ( a4 != 8 )
    v14 = 18;
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
  sub_BF774(a1, (char)a3, v13, 0xFFFFFFF1);
  sub_BF774(a1, (char)a3, v14, (2 * a5) & 0xE);
  sub_BF774(a1, (char)a3, v13, 0);
  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v15) = -12152;
  if ( !a5 )
    v8 = "clock";
  HIWORD(v15) = 23;
  if ( a5 )
    v8 = v15;
  logfmt_raw((char *)&v23, 0x1000u, 0, 1560764, a6, v8);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9530,
    60,
    &v23);
  if ( a6 > 2 )
  {
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_BF774(a1, (char)a3, v13, 0xFFFFFFFE);
    sub_BF774(a1, (char)a3, v21, 1u);
    sub_BF774(a1, (char)a3, v13, 0xFFBFFFFF);
    sub_BF774(a1, (char)a3, v22, 0x400000u);
    sub_BF774(a1, (char)a3, v13, 0);
    sub_BF774(a1, (char)a3, v13, 0xFFFFFFF7);
    sub_BF774(a1, (char)a3, v21, 8u);
    sub_BF774(a1, (char)a3, v13, 0xBFFFFFFF);
    sub_BF774(a1, (char)a3, v22, 0x40000000u);
    sub_BF774(a1, (char)a3, v13, 0);
    check_bist_tx_running(a1, a2, (int)a3, a4);
    check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
    usleep(0x493E0u);
    sub_BF774(a1, (char)a3, v13, 0xFFFFFFF7);
    sub_BF774(a1, (char)a3, v21, 0);
    sub_BF774(a1, (char)a3, v13, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, (int)a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    return 0;
  }
  else
  {
    v23 = 336529925;
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 16);
    v16 = &v23;
    do
    {
      v17 = *(unsigned __int8 *)v16;
      v16 = (int *)((char *)v16 + 1);
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
      usleep(0xF4240u);
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
    while ( &v24 != (char *)v16 );
    v18 = &v23;
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 0);
    sub_DAF1C(a1, 3u, 83, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 128);
    do
    {
      v19 = *(unsigned __int8 *)v18;
      v18 = (int *)((char *)v18 + 1);
      sub_953DC(a1, a2, (unsigned __int8)a3, v19);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, -13);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 12);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454962);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, (unsigned __int8)a3, 7);
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
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, -9);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
      sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
    }
    while ( v18 != v16 );
    sub_DAF1C(a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}
