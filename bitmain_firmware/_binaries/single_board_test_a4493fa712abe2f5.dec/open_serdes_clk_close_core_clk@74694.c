int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "open_serdes_clk_close_core_clk");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "open_serdes_clk_close_core_clk",
    30,
    264,
    60,
    v3);
  v3[1] = 0;
  v3[2] = 1441793;
  v3[3] = 0;
  v3[0] = -2147483642;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
  usleep(0x2710u);
  return 0;
}
