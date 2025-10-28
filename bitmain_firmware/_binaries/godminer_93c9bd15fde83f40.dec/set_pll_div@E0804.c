int __fastcall set_pll_div(int a1)
{
  void (__fastcall *v2)(int, __int16 **); // r3
  __int16 *v4; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+14h] [bp-1000h]
  int v6; // [sp+18h] [bp-FFCh]
  int v7; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_pll_div");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_pll_div",
    11,
    271,
    60,
    &v4);
  v6 = 0;
  v4 = &word_20008;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, __int16 **))(a1 + 152);
  v5 = 0;
  LOBYTE(v6) = 1;
  HIWORD(v6) = 24;
  v2(a1, &v4);
  usleep(0x2710u);
  v6 = 1572865;
  v7 = 0;
  v5 = 0;
  v4 = (__int16 *)((char *)&word_20008 + 1);
  (*(void (__fastcall **)(int, __int16 **))(a1 + 152))(a1, &v4);
  usleep(0x2710u);
  return 0;
}
