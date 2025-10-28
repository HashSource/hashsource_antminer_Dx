int pre_check_pool_connect()
{
  int v0; // r5
  int v2; // r4
  const char *v3; // r6
  bool v4; // zf
  bool v5; // r0
  char v6[4100]; // [sp+18h] [bp-1004h] BYREF

  sub_4EA68();
  if ( pre_pool_stratum_connect() )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, 1289188);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/check_pool.c",
      150,
      "pre_check_pool_connect",
      22,
      198,
      100,
      v6);
  }
  v0 = (unsigned __int8)pools_active;
  if ( pools_active )
    return 0;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, v0, 1288924);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    202,
    100,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, v0, 1288984);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    203,
    100,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, v0, 1289060);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    204,
    100,
    v6);
  if ( total_pools > 0 )
  {
    do
    {
      v2 = *(_DWORD *)(pools + 4 * v0);
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        1288800,
        *(_DWORD *)v2,
        *(_DWORD *)(v2 + 8),
        *(_DWORD *)(v2 + 12),
        *(_DWORD *)(v2 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/check_pool.c",
        150,
        "pre_check_pool_connect",
        22,
        210,
        80,
        v6);
      if ( *(_DWORD *)(v2 + 16) )
      {
        v3 = *(const char **)(v2 + 12);
        if ( v3 )
        {
          v4 = strstr(*(const char **)(v2 + 16), "stats") == 0;
          v5 = 1;
          if ( v4 )
            v5 = strcmp(v3, "benchmark") == 0;
          *(_BYTE *)(v2 + 1640) = v5;
        }
      }
      ++v0;
    }
    while ( total_pools > v0 );
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1288856);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    216,
    100,
    v6);
  while ( !pools_active )
  {
    pre_pool_stratum_connect();
    sleep(1u);
  }
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1288884);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    222,
    60,
    v6);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1289220);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    223,
    60,
    v6);
  return 35;
}
