int __fastcall setup_serdes_phy_x_y(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v10; // r10
  int v11; // r9
  int v13; // [sp+8h] [bp-101Ch]
  unsigned __int8 v14; // [sp+18h] [bp-100Ch]
  _DWORD var1004[1032]; // [sp+20h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  v13 = a4;
  v14 = a4;
  v10 = -2147422103;
  logfmt_raw((char *)var1004, 0x1000u, 0, "%s PHY%dL%d->PHY%dL%d", "setup_serdes_phy_x_y", a2, v13, a3, a5);
  pthread_mutex_unlock(&stru_3B526C);
  v11 = -2147422207;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "setup_serdes_phy_x_y",
    20,
    11166,
    60,
    var1004);
  if ( a6 != 8 )
  {
    v10 = -2147483543;
    v11 = -2147483647;
  }
  sub_70324(a1, a2, 144, -13);
  sub_70324(a1, a2, 145, v11);
  sub_70324(a1, a2, 144, 8);
  sub_70324(a1, a2, 145, v10);
  sub_70324(a1, a2, 144, 0);
  sub_70324(a1, a2, 145, v11);
  sub_70324(a1, a3, 144, -13);
  sub_70324(a1, a3, 145, v11);
  sub_70324(a1, a3, 144, 8);
  sub_70324(a1, a3, 145, v10);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, v11);
  var1004[2] = 5242881;
  var1004[3] = 255;
  var1004[1] = 0;
  var1004[0] = &loc_1FFFE;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, var1004);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  sub_70324(a1, a2, 112, 0);
  sub_70324(a1, a2, 113, 0);
  sub_70324(a1, a2, 114, 0);
  sub_70324(a1, a2, 115, 0);
  sub_70324(a1, a2, 116, 0);
  sub_70324(a1, a2, 117, 0);
  check_ref_clock_ready((_DWORD *)a1, 0, a2);
  sub_70324(a1, a3, 112, 0);
  sub_70324(a1, a3, 113, 0);
  sub_70324(a1, a3, 114, 0);
  sub_70324(a1, a3, 115, 0);
  sub_70324(a1, a3, 116, 0);
  sub_70324(a1, a3, 117, 0);
  check_ref_clock_ready((_DWORD *)a1, 0, a3);
  sub_70324(a1, a2, 87, 255);
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx((_DWORD *)a1, 0, a6, 17, 0x10u, a2, a3, v14, a5);
  return 0;
}
