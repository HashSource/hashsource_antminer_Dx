int __fastcall serdes_phy_bist_internal_serial(_DWORD *a1, int a2, pthread_mutex_t *a3, int a4, unsigned __int8 a5)
{
  int v9; // r11
  bool v10; // zf
  int v11; // r7
  int v12; // r6
  int v13; // r10
  int v15; // [sp+10h] [bp-100Ch]
  int v16; // [sp+14h] [bp-1008h]
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  v9 = 61559;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v17, 0x1000u, 0, "%s...", "serdes_phy_bist_internal_serial");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_internal_serial",
    31,
    9315,
    60,
    v17);
  v16 = a4;
  v10 = a4 == 8;
  if ( a4 == 8 )
    v11 = 61454;
  else
    v11 = 14;
  v12 = 61441;
  if ( !v10 )
  {
    v12 = 1;
    v9 = 119;
  }
  v13 = 61585;
  v15 = v11;
  if ( v10 )
    v11 = 61458;
  else
    v13 = 145;
  if ( !v10 )
    v11 = 18;
  sub_70324(
    (int)a1,
    (unsigned __int8)a3,
    97,
    (16 * a5) & 0x70
  | a5 & 7
  | (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF1);
  sub_D19C4((int)a1, (char)a3, v11, (2 * a5) & 0xE);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 98, 255);
  check_bist_tx_running(a1, a2, (int)a3, v16);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF3);
  sub_D19C4((int)a1, (char)a3, v15, 0xCu);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  config_rxifrx_sigdet_ovr((int)a1, a2, (unsigned __int8)a3, v16);
  read_rx_debug_reg2(a1, a2, a3, v16);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v13, 8u);
  sub_D19C4((int)a1, (char)a3, v12, 0xBFFFFFFF);
  sub_D19C4((int)a1, (char)a3, v9, 0x40000000u);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  check_bist_rx_running(a1, a2, (unsigned int)a3, v16);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v13, 0);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, v16);
  check_bist_error(a1, a2, (int)a3, v16);
  enable_rx_equalizer_tuning(a1, a2, (int)a3, v16);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v13, 8u);
  sub_D19C4((int)a1, (char)a3, v12, 0xBFFFFFFF);
  sub_D19C4((int)a1, (char)a3, v9, 0x40000000u);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  check_bist_rx_running(a1, a2, (unsigned int)a3, v16);
  sub_D19C4((int)a1, (char)a3, v12, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v13, 0);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, v16);
  check_bist_error(a1, a2, (int)a3, v16);
  return 0;
}
