int start_http_thread()
{
  void *(*v0)(void *); // r2
  int v1; // r10
  pthread_t v3; // [sp+10h] [bp-1028h] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1024h] BYREF
  char v5[4096]; // [sp+38h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, 1355076);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/common/general/http.c",
    148,
    "start_http_thread",
    17,
    273,
    60,
    v5);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  LOWORD(v0) = -9864;
  HIWORD(v0) = (unsigned int)&loc_D17B0 >> 16;
  v1 = pthread_create(&v3, &attr, v0, 0);
  pthread_detach(v3);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, 1355100, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_godminer-new/common/general/http.c",
           148,
           "start_http_thread",
           17,
           280,
           60,
           v5);
}
