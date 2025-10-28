void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r5
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r6
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  double v10; // d7
  __int64 v11; // kr08_8
  int v12; // [sp+14h] [bp-102Ch]
  int v13; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v15[375]; // [sp+4A0h] [bp-BA0h] BYREF
  char v16[4100]; // [sp+1058h] [bp+18h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v13);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v16, 0x1000u, 0, 1197936, v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/god-miner.c",
    138,
    "nonce_submit_thread",
    19,
    306,
    40,
    v16);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 40))(v5, v15);
      if ( v15[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v15[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, 1198848);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/god-miner.c",
        138,
        "nonce_submit_thread",
        19,
        321,
        80,
        v16);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1584));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v6 + 448), sizeof(dest));
    v7 = *(const char **)(v6 + 1572);
    if ( v7 )
      dest[281] = _strdup(v7);
    v12 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v0 + 72) + 8))(dest, v6, v15);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1584));
    if ( v12 == 1 )
    {
      v8 = *(double *)(v6 + 1800);
      v9 = total_diff_stale + v8;
      v10 = *(double *)(v6 + 1808) + v8;
      v11 = *(_QWORD *)&total_stale + 1LL;
      ++*(_DWORD *)(v6 + 1632);
      total_stale = v11;
      total_diff_stale = v9;
      *(double *)(v6 + 1808) = v10;
      dword_177E44 = HIDWORD(v11);
    }
    else
    {
      workio_submit_work((int)dest, (unsigned __int8 *)v6);
    }
  }
}
