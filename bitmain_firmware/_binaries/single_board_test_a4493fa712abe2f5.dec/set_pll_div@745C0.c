int __fastcall set_pll_div(int a1)
{
  void (__fastcall *v2)(int, void **); // r3
  void *v4; // [sp+10h] [bp-1000h] BYREF
  int v5; // [sp+14h] [bp-FFCh]
  int v6; // [sp+18h] [bp-FF8h]
  int v7; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_pll_div");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_pll_div",
    11,
    271,
    60,
    &v4);
  v4 = &loc_20008;
  v6 = 0;
  v5 = 0;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, void **))(a1 + 140);
  LOBYTE(v6) = 1;
  HIWORD(v6) = 24;
  v2(a1, &v4);
  usleep(0x2710u);
  v6 = 1572865;
  v5 = 0;
  v7 = 0;
  v4 = &loc_20008;
  (*(void (__fastcall **)(int, void **))(a1 + 140))(a1, &v4);
  usleep(0x2710u);
  return 0;
}
