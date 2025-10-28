int sub_80948()
{
  int v0; // s0
  int v1; // s1
  int v3; // [sp+4h] [bp-100Ch]
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, "%s, Targetdiff: %f", "dump_target_diff", v3, v0, v1);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/frontend/frontend_grin32/frontend_grin32.c",
           163,
           "dump_target_diff",
           16,
           18,
           20,
           v4);
}
