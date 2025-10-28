int sub_4EBB4()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_godminer-new/miner_util/check_pool.c",
           150,
           "set_lowprio",
           11,
           18,
           20,
           v1);
}
