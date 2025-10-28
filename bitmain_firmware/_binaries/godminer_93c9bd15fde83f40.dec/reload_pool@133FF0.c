int reload_pool()
{
  int result; // r0
  int v1; // r2
  int v2; // r0
  int v3; // r1
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_1AA860 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v4, 0x1000u, 0, "config too fast, pool is changing, please wait");
    pthread_mutex_unlock(&stru_1A8A24);
    v1 = 783;
    v2 = g_zc;
    LOWORD(v3) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/r"
                                   "elease/build/godminer-origin_master/pool.c";
LABEL_5:
    HIWORD(v3) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/relea"
                               "se/build/godminer-origin_master/pool.c" >> 16;
    return zlog(v2, v3, 127, "reload_pool", 11, v1, 100, v4);
  }
  result = pthread_create((pthread_t *)&dword_1AA860, 0, (void *(*)(void *))sub_135DE0, 0);
  if ( result )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v4, 0x1000u, 0, "Failed to create pool_change_thread");
    pthread_mutex_unlock(&stru_1A8A24);
    v1 = 781;
    v2 = g_zc;
    LOWORD(v3) = -2144;
    goto LABEL_5;
  }
  return result;
}
