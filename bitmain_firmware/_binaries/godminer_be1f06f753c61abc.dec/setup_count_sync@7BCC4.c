int __fastcall setup_count_sync(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "setup_count_sync");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "setup_count_sync",
    16,
    237,
    20,
    v5);
  sub_790B8(a1, a2, 202, 0);
  sub_790B8(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_790B8(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
