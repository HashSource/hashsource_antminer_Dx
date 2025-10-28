int dump_target_diff()
{
  int v0; // s0
  int v1; // s1
  int v3; // [sp+4h] [bp-100Ch]
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v4, 0x1000u, 0, "%s, Targetdiff: %f", "dump_target_diff", v3, v0, v1);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/frontend/frontend_grin29/frontend_grin29.c",
           163,
           "dump_target_diff",
           16,
           19,
           20,
           v4);
}
