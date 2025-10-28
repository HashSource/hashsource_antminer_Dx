int __fastcall set_debug_ctrl(int a1, int a2)
{
  _DWORD v5[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v5, 0x1000u, 0, "%s...", "set_debug_ctrl");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_debug_ctrl",
    14,
    280,
    60,
    v5);
  v5[0] = a2;
  v5[2] = 5242881;
  v5[1] = 0;
  v5[3] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v5);
  usleep(0x2710u);
  return 0;
}
