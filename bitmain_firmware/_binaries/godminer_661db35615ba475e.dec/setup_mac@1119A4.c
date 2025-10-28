int __fastcall setup_mac(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "setup_mac");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_mac",
    9,
    11528,
    60,
    v3);
  v3[2] = 10420225;
  v3[3] = 255;
  v3[1] = 0;
  v3[0] = -1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v3);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
