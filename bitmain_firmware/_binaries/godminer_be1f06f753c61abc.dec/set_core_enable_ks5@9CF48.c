int __fastcall set_core_enable_ks5(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %u...", "set_core_enable_ks5", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    170,
    "set_core_enable_ks5",
    19,
    118,
    40,
    v5);
  sub_9A5C0(a1, 1, a2);
  usleep(0x2710u);
  return 0;
}
