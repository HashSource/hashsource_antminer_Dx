int start_api_thread()
{
  void *(*v0)(void *); // r2
  int v1; // r5
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_178540 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_178544[1]);
  LOWORD(v0) = -4416;
  HIWORD(v0) = (unsigned int)&loc_4C558 >> 16;
  v1 = pthread_create(dword_178544, (const pthread_attr_t *)&dword_178544[1], v0, &dword_178540);
  pthread_attr_destroy((pthread_attr_t *)&dword_178544[1]);
  if ( !v1 )
    return 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, 1288772);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "start_api_thread",
    16,
    139,
    100,
    v3);
  return 5;
}
