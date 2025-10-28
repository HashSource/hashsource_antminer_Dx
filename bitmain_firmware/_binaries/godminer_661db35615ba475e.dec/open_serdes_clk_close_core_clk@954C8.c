int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  char *v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "open_serdes_clk_close_core_clk");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_serdes_clk_close_core_clk",
    30,
    264,
    60,
    v4);
  v5 = "new_api";
  v6 = 0;
  v4[1] = 0;
  v4[0] = -2147483642;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep(0x2710u);
  return 0;
}
