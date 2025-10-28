int check_pool_worker()
{
  int v0; // r1
  int v1; // r4
  int v2; // r6
  int v3; // r3
  _BYTE *v4; // r3
  int v6; // [sp+14h] [bp-1008h]
  char v7[4100]; // [sp+18h] [bp-1004h] BYREF

  v0 = total_pools;
  if ( total_pools <= 0 )
    goto LABEL_10;
  v1 = 0;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(pools + 4 * v1);
      if ( **(_BYTE **)(v3 + 8) )
        break;
LABEL_3:
      if ( ++v1 >= v0 )
        goto LABEL_8;
    }
    v4 = *(_BYTE **)(v3 + 12);
    if ( *v4 )
    {
      ++v2;
      goto LABEL_3;
    }
    v6 = (unsigned __int8)*v4;
    ++v1;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v7, 0x1000u, v6, 1618724);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "check_pool_worker",
      17,
      416,
      100,
      v7);
    v0 = total_pools;
  }
  while ( v1 < total_pools );
LABEL_8:
  if ( v2 )
    return 0;
LABEL_10:
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, 1618676);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "check_pool_worker",
    17,
    422,
    100,
    v7);
  return -1;
}
