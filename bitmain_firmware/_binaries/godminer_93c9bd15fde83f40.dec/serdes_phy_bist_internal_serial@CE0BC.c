int __fastcall serdes_phy_bist_internal_serial(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5)
{
  int v9; // r11
  int v10; // lr
  int v11; // r12
  int v12; // r6
  int v13; // r10
  int v15; // [sp+10h] [bp-100Ch]
  int v16; // [sp+14h] [bp-1008h]
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  v9 = 61559;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v17, 0x1000u, 0, 1560772, "serdes_phy_bist_internal_serial");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_internal_serial",
    31,
    9315,
    60,
    v17);
  v10 = 61454;
  v11 = 61458;
  if ( a4 != 8 )
  {
    v10 = 14;
    v11 = 18;
  }
  v12 = 61441;
  if ( a4 != 8 )
  {
    v12 = 1;
    v9 = 119;
  }
  v16 = v10;
  v13 = 61585;
  v15 = v11;
  if ( a4 != 8 )
    v13 = 145;
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
  sub_BF774(a1, (char)a3, v15, (2 * a5) & 0xE);
  sub_BF774(a1, (char)a3, v12, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 98, 255);
  check_bist_tx_running(a1, a2, (int)a3, a4);
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF3);
  sub_BF774(a1, (char)a3, v16, 0xCu);
  sub_BF774(a1, (char)a3, v12, 0);
  config_rxifrx_sigdet_ovr(a1, a2, (unsigned __int8)a3, a4);
  read_rx_debug_reg2(a1, a2, a3, a4);
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF7);
  sub_BF774(a1, (char)a3, v13, 8u);
  sub_BF774(a1, (char)a3, v12, 0xBFFFFFFF);
  sub_BF774(a1, (char)a3, v9, 0x40000000u);
  sub_BF774(a1, (char)a3, v12, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF7);
  sub_BF774(a1, (char)a3, v13, 0);
  sub_BF774(a1, (char)a3, v12, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, (int)a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  enable_rx_equalizer_tuning(a1, a2, (int)a3, a4);
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF7);
  sub_BF774(a1, (char)a3, v13, 8u);
  sub_BF774(a1, (char)a3, v12, 0xBFFFFFFF);
  sub_BF774(a1, (char)a3, v9, 0x40000000u);
  sub_BF774(a1, (char)a3, v12, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
  sub_BF774(a1, (char)a3, v12, 0xFFFFFFF7);
  sub_BF774(a1, (char)a3, v13, 0);
  sub_BF774(a1, (char)a3, v12, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, (int)a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
