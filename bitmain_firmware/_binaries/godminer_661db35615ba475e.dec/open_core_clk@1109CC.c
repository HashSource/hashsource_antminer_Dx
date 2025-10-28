int __fastcall open_core_clk(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "open_core_clk");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_clk",
    13,
    11668,
    60,
    v3);
  v3[2] = 983041;
  v3[3] = 255;
  v3[1] = 0;
  v3[0] = 1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v3);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
