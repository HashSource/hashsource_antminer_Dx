int start_watchpool_thread()
{
  void *(*v0)(void *); // r2
  int v1; // r5
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_178510 = 2;
  pthread_attr_init(&attr);
  LOWORD(v0) = -5044;
  HIWORD(v0) = (unsigned int)&loc_4C2E4 >> 16;
  v1 = pthread_create((pthread_t *)&dword_178514, &attr, v0, &dword_178510);
  pthread_attr_destroy(&attr);
  if ( !v1 )
    return 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, 1288740);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "start_watchpool_thread",
    22,
    127,
    100,
    v3);
  return 5;
}
