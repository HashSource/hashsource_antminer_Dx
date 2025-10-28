void sub_135DE0()
{
  pthread_t v0; // r0
  int v1; // r4
  _DWORD *v2; // r5
  char *v3; // r4
  int v4; // r5
  int v5; // r7
  void *v6; // r0
  char *v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r7
  void *v12; // r0
  const char *v13; // r0
  char *v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r4
  _DWORD *v19; // r5
  _DWORD *v20; // r10
  pthread_t v21; // r0
  int v22; // r4
  char *v23; // r6
  int v24; // r2
  _DWORD *v25; // r0
  _DWORD *v26; // r5
  _DWORD *v27; // r3
  bool v28; // zf
  int v29; // r6
  int v30; // r5
  int *v31; // r2
  int v32; // r0
  int v33; // r1
  int v34; // t1
  int v35; // r3
  int v36; // r2
  int v37; // r1
  int v38; // r9
  int v39; // r3
  bool v40; // cc
  _DWORD *v41; // r3
  int *v42; // r12
  int *v43; // r0
  _DWORD *v44; // lr
  _DWORD *v45; // r12
  _DWORD *v46; // r0
  int v47; // r8
  int *v48; // lr
  int v49; // r7
  int *v50; // r12
  int v51; // r0
  int *v52; // r4
  int **v53; // r1
  int *v54; // r0
  int v55; // r4
  int *v56; // r5
  int *v57; // r4
  int v58; // t1
  int v59; // r4
  _DWORD *v60; // r5
  int v61; // r6
  int v62; // r5
  int v63; // r4
  int v64; // r4
  void **v65; // r5
  void *v66; // r0
  void *v67; // t1
  _DWORD *v68; // r5
  _DWORD *v69; // [sp+18h] [bp-10A4h]
  int v70; // [sp+1Ch] [bp-10A0h]
  int v71; // [sp+24h] [bp-1098h]
  int v72; // [sp+2Ch] [bp-1090h]
  int v73; // [sp+30h] [bp-108Ch]
  _DWORD v74[32]; // [sp+38h] [bp-1084h] BYREF
  char v75[4100]; // [sp+B8h] [bp-1004h] BYREF

  v70 = total_pools;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v75, 0x1000u, 0, "pool_change_function");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "pool_change_function",
    20,
    673,
    20,
    v75);
  v0 = pthread_self();
  pthread_detach(v0);
  if ( dword_1B0504 )
  {
    v73 = 1;
    pthread_cancel(dword_1B0504);
    dword_1B0504 = 0;
    usleep((__useconds_t)&stru_18694.st_info);
  }
  else
  {
    v73 = 0;
  }
  if ( v70 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD **)(pools + 4 * v1++);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v75, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v2, v2[2]);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        689,
        20,
        v75);
    }
    while ( v70 != v1 );
  }
  if ( dword_1AA884 > 0 )
  {
    v3 = s2;
    v4 = 0;
    do
    {
      v16 = ++dword_1AB188;
      if ( dword_1AB188 > total_pools )
      {
        add_pool();
        v16 = dword_1AB188;
      }
      sub_133DB4(
        (void **)(*(_DWORD *)(pools + 4 * (v16 + 0x3FFFFFFF)) + 8),
        (_BYTE *)(*(_DWORD *)(pools + 4 * (v16 + 0x3FFFFFFF)) + 24),
        v3);
      v17 = ++dword_1AA880;
      if ( dword_1AA880 > total_pools )
      {
        add_pool();
        v17 = dword_1AA880;
      }
      v5 = *(_DWORD *)(pools + 4 * (v17 + 0x3FFFFFFF));
      v6 = *(void **)(v5 + 12);
      if ( v6 )
        free(v6);
      v7 = _strdup(v3 + 256);
      v8 = dword_1AA87C;
      v9 = total_pools;
      *(_DWORD *)(v5 + 12) = v7;
      v10 = v8 + 1;
      dword_1AA87C = v10;
      if ( v10 > v9 )
      {
        add_pool();
        v10 = dword_1AA87C;
      }
      v11 = *(_DWORD *)(pools + 4 * (v10 + 0x3FFFFFFF));
      v12 = *(void **)(v11 + 16);
      if ( v12 )
      {
        free(v12);
        ++v4;
        v13 = v3 + 512;
      }
      else
      {
        v13 = v3 + 512;
        ++v4;
      }
      v14 = _strdup(v13);
      v15 = dword_1AA884;
      v3 += 768;
      *(_DWORD *)(v11 + 16) = v14;
    }
    while ( v15 > v4 );
  }
  if ( total_pools == v70 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v75, 0x1000u, 0, "Input pool error, try again");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      699,
      100,
      v75);
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v75, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v70);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      703,
      20,
      v75);
    if ( total_pools > 0 )
    {
      v18 = 0;
      do
      {
        v19 = *(_DWORD **)(pools + 4 * v18++);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v75, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v19, v19[2]);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/pool.c",
          127,
          "pool_change_function",
          20,
          706,
          20,
          v75);
      }
      while ( total_pools > v18 );
    }
    if ( v70 > 0 )
    {
      v20 = &unk_1AFEC8;
      v69 = v74;
      do
      {
        v21 = *(v20 - 12);
        __pld(v20);
        v22 = *(_DWORD *)pools;
        if ( v21 )
        {
          pthread_cancel(v21);
          *(v20 - 12) = 0;
        }
        v23 = (char *)*(v20 - 2);
        if ( v23 )
        {
          v24 = **(_DWORD **)v23;
          v25 = (_DWORD *)(*(_DWORD *)v23 - 4);
          v26 = (_DWORD *)(v24 - 4);
          if ( v23 != *(char **)v23 )
          {
            do
            {
              v27 = (_DWORD *)v25[2];
              *(_DWORD *)(v24 + 4) = v27;
              *v27 = v24;
              free(v25);
              v25 = v26;
              v24 = v26[1];
              v28 = v23 == (char *)(v26 + 1);
              v26 = (_DWORD *)(v24 - 4);
            }
            while ( !v28 );
          }
          pthread_cond_destroy((pthread_cond_t *)(v23 + 40));
          pthread_mutex_destroy((pthread_mutex_t *)(v23 + 12));
          free(v23);
          *(v20 - 2) = 0;
        }
        pthread_mutex_lock((pthread_mutex_t *)(v22 + 1192));
        *(_BYTE *)(v22 + 1284) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(v22 + 1192));
        pthread_mutex_lock((pthread_mutex_t *)(v22 + 1192));
        *(_BYTE *)(v22 + 1272) = 1;
        pthread_mutex_unlock((pthread_mutex_t *)(v22 + 1192));
        v29 = total_pools;
        --dword_1AA87C;
        --dword_1AA880;
        v30 = total_pools - 1;
        --dword_1AB188;
        if ( total_pools > 0 )
        {
          v31 = (int *)pools;
          v32 = pools + 4 * total_pools;
          do
          {
            v34 = *v31++;
            v33 = v34;
            v35 = *(_DWORD *)(v34 + 4);
            if ( v35 > *(_DWORD *)(v22 + 4) )
              *(_DWORD *)(v33 + 4) = v35 - 1;
          }
          while ( (int *)v32 != v31 );
        }
        v36 = *(_DWORD *)v22;
        if ( v30 > *(_DWORD *)v22 )
        {
          v37 = v36 + 1;
          v38 = v29 - 8;
          v39 = v36 + 1;
          v40 = v29 <= -2147483640;
          if ( v29 >= -2147483640 )
            v40 = v38 <= v37;
          v71 = pools;
          if ( !v40 )
          {
            v72 = v22;
            v41 = (_DWORD *)(pools + 4 * (v36 + 20));
            do
            {
              v42 = (int *)*(v41 - 19);
              v43 = (int *)*(v41 - 18);
              v44 = (_DWORD *)*(v41 - 17);
              *(v41 - 20) = v42;
              __pld(v41);
              __pld(v41 - 1);
              v41 += 8;
              *v42 = v36;
              v45 = (_DWORD *)*(v41 - 24);
              *(v41 - 27) = v43;
              *v43 = v37;
              v37 += 8;
              v46 = (_DWORD *)*(v41 - 23);
              *(v41 - 26) = v44;
              *v44 = v36 + 2;
              v47 = v36 + 6;
              v48 = (int *)*(v41 - 22);
              *(v41 - 25) = v45;
              *v45 = v36 + 3;
              v49 = v36 + 5;
              v50 = (int *)*(v41 - 21);
              *(v41 - 24) = v46;
              *v46 = v36 + 4;
              v51 = v36 + 7;
              v52 = (int *)*(v41 - 20);
              v36 += 8;
              *(v41 - 23) = v48;
              *v48 = v49;
              *(v41 - 22) = v50;
              *v50 = v47;
              *(v41 - 21) = v52;
              *v52 = v51;
            }
            while ( v38 > v37 );
            v22 = v72;
            v39 = v36 + 1;
          }
          v53 = (int **)(v71 + 4 * v36);
          while ( 1 )
          {
            v54 = v53[1];
            *v53++ = v54;
            *v54 = v36;
            v36 = v39;
            if ( v30 <= v39 )
              break;
            ++v39;
          }
        }
        v20 += 12;
        *(_DWORD *)v22 = v29;
        *v69++ = v22;
        total_pools = v30;
      }
      while ( &v74[v70] != v69 );
    }
    pthread_mutex_lock(&stru_1A9B48);
    v55 = dword_1A9B60;
    pthread_mutex_unlock(&stru_1A9B48);
    if ( v55 > 0 )
    {
      v56 = dword_1A9B64;
      v57 = &dword_1A9B64[v55];
      do
      {
        v58 = *v56++;
        memset((void *)(v58 + 336), 1, 0x20u);
      }
      while ( v57 != v56 );
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v75, 0x1000u, 0, "total_pools after removed = %d", total_pools);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      731,
      20,
      v75);
    if ( total_pools > 0 )
    {
      v59 = 0;
      do
      {
        v60 = *(_DWORD **)(pools + 4 * v59++);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v75, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v60, v60[2]);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/pool.c",
          127,
          "pool_change_function",
          20,
          734,
          20,
          v75);
      }
      while ( total_pools > v59 );
    }
    v61 = 0;
    create_pool_stratum_threads();
    do
    {
      ++v61;
      sleep(1u);
      if ( v61 == 8 )
        v62 = 0;
      else
        v62 = ((unsigned __int8)pools_active ^ 1) & 1;
    }
    while ( v62 );
    set_miner_start_time();
    local_work = 0;
    last_getwork = 0;
    new_blocks = 0;
    *(_QWORD *)&total_getworks = 0;
    *(_QWORD *)&total_stale = 0;
    *(_QWORD *)&total_discarded = 0;
    *(_QWORD *)&dword_1AB198 = 0;
    total_rejected = 0;
    dbl_1AB190 = 0.0;
    total_accepted = 0;
    total_diff1 = 0;
    v63 = (unsigned __int8)pools_active;
    total_diff_accepted = 0.0;
    total_diff_rejected = 0.0;
    total_diff_stale = 0.0;
    dword_1AB18C = 0;
    total_go = 0;
    total_ro = 0;
    if ( !pools_active )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v75, 0x1000u, 0, "error pool input");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        748,
        100,
        v75);
      if ( total_pools > 0 )
      {
        do
        {
          v68 = *(_DWORD **)(pools + 4 * v63++);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v75, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s\n", *v68, v68[2], v68[3], v68[4]);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "pool_change_function",
            20,
            751,
            100,
            v75);
        }
        while ( total_pools > v63 );
      }
    }
  }
  if ( v73 )
  {
    dword_1B0500 = 2;
    pthread_attr_init(&attr);
    v64 = pthread_create((pthread_t *)&dword_1B0504, &attr, (void *(*)(void *))watchpool_thread, &dword_1B0500);
    pthread_attr_destroy(&attr);
    if ( v64 )
    {
      V_LOCK();
      logfmt_raw(v75, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        761,
        100,
        v75);
      exit(1);
    }
  }
  sleep(0xAu);
  if ( v70 > 0 )
  {
    v65 = (void **)v74;
    do
    {
      v67 = *v65++;
      v66 = v67;
      if ( v67 )
        free(v66);
    }
    while ( v65 != &v74[v70] );
  }
  dword_1AA860 = 0;
}
