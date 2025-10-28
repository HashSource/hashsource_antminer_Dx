int start_http_thread()
{
  int v0; // r11
  pthread_t v2; // [sp+10h] [bp-102Ch] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1028h] BYREF
  char v4[4100]; // [sp+38h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, 1607924);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/http.c",
    142,
    "start_http_thread",
    17,
    272,
    60,
    v4);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  v0 = pthread_create(&v2, &attr, (void *(*)(void *))httpListenThread, 0);
  pthread_detach(v2);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, 1608092, v0);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/common/general/http.c",
           142,
           "start_http_thread",
           17,
           279,
           60,
           v4);
}
