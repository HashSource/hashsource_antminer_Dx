int __fastcall sub_7FEE4(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v3, 0x1000u, 0, "%s unknow temp type %d", a1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/set_pwm_by_temp.c",
    149,
    "get_temp",
    8,
    133,
    100,
    v3);
  return 0x7FFFFFFF;
}
