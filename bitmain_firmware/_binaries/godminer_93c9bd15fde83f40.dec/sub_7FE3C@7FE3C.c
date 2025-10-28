int sub_7FE3C()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v1, 0x1000u, 0, "frontend runtime type not set");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_interface.c",
    150,
    "frontend_runtime_instance",
    25,
    72,
    100,
    v1);
  return 0;
}
