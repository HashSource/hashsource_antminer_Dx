int __fastcall disable_cores(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "disable_cores");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "disable_cores",
    13,
    856,
    20,
    v3);
  sub_78F8C(a1, 13, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
