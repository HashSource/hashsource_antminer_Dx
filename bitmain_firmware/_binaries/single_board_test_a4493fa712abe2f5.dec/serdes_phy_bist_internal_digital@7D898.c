int __fastcall serdes_phy_bist_internal_digital(_DWORD *a1, int a2, pthread_mutex_t *a3, int a4, unsigned __int8 a5)
{
  int v9; // r11
  int v10; // r3
  int v11; // r6
  int v12; // r10
  int v14; // [sp+10h] [bp-100Ch]
  int v15; // [sp+14h] [bp-1008h]
  char v16[4100]; // [sp+18h] [bp-1004h] BYREF

  v9 = 61513;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v16, 0x1000u, 0, "%s...", "serdes_phy_bist_internal_digital");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist_internal_digital",
    32,
    9437,
    60,
    v16);
  if ( a4 == 8 )
    v10 = 61441;
  else
    v10 = 1;
  if ( a4 == 8 )
  {
    v11 = 61559;
  }
  else
  {
    v11 = 119;
    v9 = 73;
  }
  v14 = v10;
  v12 = 61585;
  v15 = v11;
  if ( a4 == 8 )
    v11 = 61458;
  else
    v12 = 145;
  if ( a4 != 8 )
    v11 = 18;
  sub_D19C4((int)a1, (char)a3, v10, 0xFFFFFDF7);
  sub_D19C4((int)a1, (char)a3, v9, 0x208u);
  sub_D19C4((int)a1, (char)a3, v14, 0);
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
  sub_D19C4((int)a1, (char)a3, v14, 0xFFFFFFF1);
  sub_D19C4((int)a1, (char)a3, v11, (2 * a5) & 0xE);
  sub_D19C4((int)a1, (char)a3, v14, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 98, 255);
  sub_D19C4((int)a1, (char)a3, v14, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v12, 8u);
  sub_D19C4((int)a1, (char)a3, v14, 0xBFFFFFFF);
  sub_D19C4((int)a1, (char)a3, v15, 0x40000000u);
  sub_D19C4((int)a1, (char)a3, v14, 0);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  check_bist_tx_running(a1, a2, (int)a3, a4);
  check_bist_rx_running(a1, a2, (unsigned int)a3, a4);
  sub_D19C4((int)a1, (char)a3, v14, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v12, 0);
  sub_D19C4((int)a1, (char)a3, v14, 0);
  sub_70324((int)a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
