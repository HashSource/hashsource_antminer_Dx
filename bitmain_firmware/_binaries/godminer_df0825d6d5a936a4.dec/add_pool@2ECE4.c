char *add_pool()
{
  char *v0; // r4
  int v1; // r3
  void *v2; // r0
  _DWORD *v3; // r0
  int v4; // r2
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x7C8u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, 1201432);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/pool.c",
      133,
      "add_pool",
      8,
      122,
      100,
      v6);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, 1198464, 1201468);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/pool.c",
      133,
      "add_pool",
      8,
      123,
      100,
      v6);
    exit(1);
  }
  v1 = total_pools;
  v2 = (void *)pools;
  *((_DWORD *)v0 + 1) = total_pools;
  *(_DWORD *)v0 = v1;
  v3 = realloc(v2, 4 * (v1 + 2));
  v4 = total_pools;
  pools = (int)v3;
  ++total_pools;
  v3[v4] = v0;
  *((_DWORD *)v0 + 8) = -1;
  *((_DWORD *)v0 + 10) = 0;
  v0[1640] = 0;
  v0[1648] = 0;
  *((_DWORD *)v0 + 435) = 0;
  *((_DWORD *)v0 + 437) = 0;
  v0[24] = 1;
  *((_QWORD *)v0 + 220) = 0;
  *((_DWORD *)v0 + 442) = 0;
  memset(v0 + 1676, 0, 0x40u);
  *((_QWORD *)v0 + 225) = 0;
  pthread_mutex_init((pthread_mutex_t *)v0 + 66, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1816), 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 460);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 460, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 1848), (const pthread_condattr_t *)v0 + 460);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 44), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 66, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1772), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1652), 0);
  v0[1896] = 1;
  v0[1908] = 0;
  *((_DWORD *)v0 + 475) = -1;
  return v0;
}
