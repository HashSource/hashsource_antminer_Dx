void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r7
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r8
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  double v10; // d7
  __int64 v11; // kr08_8
  const void *src; // [sp+10h] [bp-163Ch]
  int srca; // [sp+10h] [bp-163Ch]
  size_t n; // [sp+18h] [bp-1634h]
  int v15; // [sp+3Ch] [bp-1610h] BYREF
  void *dest[130]; // [sp+40h] [bp-160Ch] BYREF
  _QWORD v17[127]; // [sp+248h] [bp-1404h] BYREF
  char v18[4100]; // [sp+648h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v15);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v18, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "nonce_submit_thread",
    19,
    324,
    60,
    v18);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    (*(void (__fastcall **)(int, _QWORD *))(v5 + 32))(v5, v17);
    if ( v17[0] >= (unsigned __int64)total_pools )
    {
      pthread_mutex_lock(&stru_1AA810);
      v6 = dword_1AA828;
      pthread_mutex_unlock(&stru_1AA810);
      if ( !v6 )
        goto LABEL_15;
LABEL_4:
      pthread_mutex_lock((pthread_mutex_t *)(v6 + 960));
      if ( dest[96] )
      {
        free(dest[96]);
        dest[96] = 0;
      }
      if ( dest[98] )
        free(dest[98]);
      memcpy(dest, (const void *)(v6 + 440), sizeof(dest));
      v7 = *(const char **)(v6 + 824);
      if ( v7 )
        dest[96] = _strdup(v7);
      src = *(const void **)(v6 + 832);
      if ( src )
      {
        n = *(_DWORD *)(v6 + 828);
        dest[98] = malloc(n);
        memcpy(dest[98], src, n);
      }
      srca = (*(int (__fastcall **)(int, void **, _QWORD *))(v0 + 40))(v6, dest, v17);
      pthread_mutex_unlock((pthread_mutex_t *)(v6 + 960));
      if ( srca == 1 )
      {
        v8 = *(double *)(v6 + 1176);
        v9 = total_diff_stale + v8;
        v10 = *(double *)(v6 + 1184) + v8;
        v11 = *(_QWORD *)&total_stale + 1LL;
        ++*(_DWORD *)(v6 + 1008);
        total_stale = v11;
        total_diff_stale = v9;
        *(double *)(v6 + 1184) = v10;
        dword_1AFE44 = HIDWORD(v11);
      }
      else
      {
        workio_submit_work((int)dest, (int *)v6);
      }
    }
    else
    {
      v6 = *(_DWORD *)(pools + 4 * LODWORD(v17[0]));
      if ( v6 )
        goto LABEL_4;
LABEL_15:
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v18, 0x1000u, v6, "the pool is NULL");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "nonce_submit_thread",
        19,
        339,
        80,
        v18);
    }
  }
}
