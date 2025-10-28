int start_heartbeat_thread()
{
  char *v0; // r4
  bool v1; // zf
  pthread_attr_t *v2; // r0
  void *v3; // r3
  const pthread_attr_t *v4; // r1
  void *(*v5)(void *); // r2
  int v6; // r5
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = (char *)calloc(1u, 0x30u);
  *(_DWORD *)v0 = 5;
  v1 = platform_is_pic_mcu_en() == 0;
  v2 = (pthread_attr_t *)(v0 + 8);
  if ( v1 )
  {
    pthread_attr_init(v2);
    LOWORD(v5) = -6840;
    v3 = v0;
    v4 = (const pthread_attr_t *)(v0 + 8);
    HIWORD(v5) = (unsigned int)&loc_4BBE0 >> 16;
  }
  else
  {
    pthread_attr_init(v2);
    LOWORD(v5) = -7208;
    v3 = v0;
    v4 = (const pthread_attr_t *)(v0 + 8);
    HIWORD(v5) = (unsigned int)&loc_4BA70 >> 16;
  }
  v6 = pthread_create((pthread_t *)v0 + 1, v4, v5, v3);
  pthread_attr_destroy((pthread_attr_t *)(v0 + 8));
  if ( v6 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, 1288248);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/check_heartbeat.c",
      155,
      "start_heartbeat_thread",
      22,
      132,
      100,
      v8);
    return 5;
  }
  else
  {
    pthread_detach(*((_DWORD *)v0 + 1));
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, 1288280);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/check_heartbeat.c",
      155,
      "start_heartbeat_thread",
      22,
      136,
      60,
      v8);
    return 0;
  }
}
