void __noreturn work_generator_thread()
{
  int v0; // r10
  int *all_created_runtime; // r11
  int v2; // r3
  _DWORD *v3; // r2
  unsigned __int64 v4; // r0
  int v5; // r7
  int v6; // r6
  unsigned int v7; // r4
  unsigned int v8; // r6
  unsigned int v9; // r6
  unsigned __int64 v10; // r4
  __int64 v11; // r6
  int *v12; // r2
  __int64 v13; // r0
  int v14; // t1
  bool v15; // cc
  unsigned int v16; // r4
  char *v17; // r4
  int v18; // r0
  int v19; // r4
  int v20; // r8
  int v21; // r11
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r11
  int v26; // r5
  int *v27; // r8
  int v28; // r2
  time_t v29; // r0
  void (__fastcall *v30)(int, _DWORD *); // r3
  int v31; // t1
  int v32; // r2
  unsigned __int64 v33; // r0
  int v34; // r12
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r2
  unsigned __int64 v37; // r0
  unsigned __int64 v38; // r2
  unsigned __int64 v39; // r0
  unsigned __int64 v40; // r2
  unsigned __int64 v41; // r0
  unsigned __int64 v42; // r2
  unsigned __int64 v43; // r0
  int v44; // r11
  int v45; // r2
  int v46; // r0
  void *v47; // r0
  int v48; // r2
  const char *v49; // r0
  const void *v50; // r5
  size_t v51; // r11
  int v52; // [sp+14h] [bp-1258h]
  int v53; // [sp+20h] [bp-124Ch]
  int v54; // [sp+2Ch] [bp-1240h]
  int v55; // [sp+30h] [bp-123Ch]
  int *v56; // [sp+44h] [bp-1228h]
  int v57; // [sp+54h] [bp-1218h] BYREF
  struct timespec abstime; // [sp+58h] [bp-1214h] BYREF
  _DWORD s[130]; // [sp+60h] [bp-120Ch] BYREF
  struct timespec v60; // [sp+268h] [bp-1004h] BYREF

  v57 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v57);
  memset(s, 0, sizeof(s));
  if ( v57 <= 0 )
  {
    v55 = 0;
    v54 = -1000;
  }
  else
  {
    if ( v57 <= 8 )
    {
      v2 = 0;
      v11 = -1;
    }
    else
    {
      v2 = 0;
      v3 = all_created_runtime + 25;
      v4 = -1;
      do
      {
        v5 = *(v3 - 25);
        v6 = *(v3 - 24);
        v2 += 8;
        __pld(v3);
        v3 += 8;
        v7 = *(_DWORD *)(v5 + 772);
        v8 = *(_DWORD *)(v6 + 772);
        if ( v7 > v8 )
          v7 = v8;
        v9 = v7;
        if ( v7 > *(_DWORD *)(*(v3 - 31) + 772) )
          v9 = *(_DWORD *)(*(v3 - 31) + 772);
        if ( v9 > *(_DWORD *)(*(v3 - 30) + 772) )
          v9 = *(_DWORD *)(*(v3 - 30) + 772);
        if ( v9 > *(_DWORD *)(*(v3 - 29) + 772) )
          v9 = *(_DWORD *)(*(v3 - 29) + 772);
        if ( v9 > *(_DWORD *)(*(v3 - 28) + 772) )
          v9 = *(_DWORD *)(*(v3 - 28) + 772);
        if ( v9 > *(_DWORD *)(*(v3 - 27) + 772) )
          v9 = *(_DWORD *)(*(v3 - 27) + 772);
        v10 = v9;
        if ( v9 > *(_DWORD *)(*(v3 - 26) + 772) )
          v10 = *(unsigned int *)(*(v3 - 26) + 772);
        if ( v4 > v10 )
          v4 = (unsigned int)v10;
      }
      while ( v2 != ((v57 - 9) & 0xFFFFFFF8) + 8 );
      v11 = v4;
    }
    v12 = &all_created_runtime[v2];
    v13 = v11;
    do
    {
      v14 = *v12++;
      v15 = HIDWORD(v13) != 0;
      ++v2;
      v16 = *(_DWORD *)(v14 + 772);
      if ( !HIDWORD(v13) )
        v15 = (unsigned int)v13 > v16;
      if ( v15 )
        v13 = v16;
    }
    while ( v2 < v57 );
    v55 = (int)v13 / 1000000;
    v54 = 1000 * ((int)v13 % 1000000);
  }
  v17 = (char *)calloc(1u, 0x40u);
  snprintf(v17, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v18 = syscall(224);
  logfmt_raw((char *)&v60, 0x1000u, 0, "%s on pid %ld", v17, v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "work_generator_thread",
    21,
    221,
    60,
    &v60);
  v56 = all_created_runtime - 1;
  v53 = 0;
  prctl(15, v17);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  v52 = v0;
LABEL_31:
  while ( 1 )
  {
    pthread_mutex_lock(&stru_1AA810);
    v19 = dword_1AA828;
    pthread_mutex_unlock(&stru_1AA810);
    if ( v19 )
      break;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v60, 0x1000u, 0, "work generator: current pool is NULL");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "work_generator_thread",
      21,
      241,
      20,
      &v60);
  }
  pthread_mutex_lock((pthread_mutex_t *)(v19 + 1192));
  v20 = *(unsigned __int8 *)(v19 + 1272);
  pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
  if ( v20 )
    goto LABEL_85;
  clock_gettime(1, &v60);
  abstime.tv_nsec = (v54 + v60.tv_nsec) % 1000000000;
  abstime.tv_sec = (v54 + v60.tv_nsec) / 1000000000 + v60.tv_sec + v55;
  pthread_mutex_lock((pthread_mutex_t *)(v19 + 1192));
  while ( 1 )
  {
    v21 = 0;
    do
    {
      if ( *(_BYTE *)(v19 + 1284) )
      {
        if ( !v21 )
        {
          *(_BYTE *)(v19 + 1284) = 0;
          pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
          goto LABEL_40;
        }
        pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
        if ( v21 == 1 )
        {
LABEL_83:
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw((char *)&v60, 0x1000u, 0, "pool has been changed");
          pthread_mutex_unlock(&stru_1A8A24);
          v45 = 253;
          v46 = g_zc;
        }
        else
        {
          if ( v21 != 110 )
          {
LABEL_40:
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v60, 0x1000u, 0, "New job has come");
            pthread_mutex_unlock(&stru_1A8A24);
            v23 = 259;
            v24 = g_zc;
            goto LABEL_41;
          }
LABEL_87:
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw((char *)&v60, 0x1000u, 0, "Wait for new job timeout");
          pthread_mutex_unlock(&stru_1A8A24);
          v23 = 257;
          v24 = g_zc;
LABEL_41:
          zlog(
            v24,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "work_generator_thread",
            21,
            v23,
            20,
            &v60);
          pthread_mutex_lock((pthread_mutex_t *)(v19 + 960));
          pthread_mutex_lock((pthread_mutex_t *)(v19 + 1192));
          v25 = *(unsigned __int8 *)(v19 + 904);
          pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
          if ( !v25 )
          {
            if ( (*(int (__fastcall **)(_DWORD *, int))(v52 + 44))(s, v19) == 2 )
            {
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v60, 0x1000u, 0, "work generator switched to new job %s", *(_DWORD *)(v19 + 824));
              pthread_mutex_unlock(&stru_1A8A24);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/god-miner.c",
                132,
                "work_generator_thread",
                21,
                271,
                20,
                &v60);
              v47 = (void *)s[96];
              v48 = *(_DWORD *)(v19 + 1000);
              ++*(_QWORD *)&total_getworks;
              *(_DWORD *)(v19 + 1000) = v48 + 1;
              if ( v47 )
              {
                free(v47);
                s[96] = 0;
              }
              if ( s[98] )
                free((void *)s[98]);
              memcpy(s, (const void *)(v19 + 440), sizeof(s));
              v49 = *(const char **)(v19 + 824);
              if ( v49 )
                s[96] = _strdup(v49);
              v50 = *(const void **)(v19 + 832);
              if ( v50 )
              {
                v51 = *(_DWORD *)(v19 + 828);
                v53 = 1;
                s[98] = malloc(v51);
                memcpy((void *)s[98], v50, v51);
              }
              else
              {
                v53 = 1;
              }
            }
            pthread_mutex_unlock((pthread_mutex_t *)(v19 + 960));
            if ( s[96] )
            {
              if ( v57 > 0 )
              {
                v26 = 0;
                v27 = v56;
                do
                {
                  if ( v26 )
                    v28 = 0;
                  else
                    v28 = v53;
                  (*(void (__fastcall **)(_DWORD *, int, int))(v52 + 48))(s, v19, v28);
                  ++v26;
                  ++local_work;
                  v29 = time(0);
                  v30 = *(void (__fastcall **)(int, _DWORD *))(v52 + 32);
                  last_getwork = v29;
                  v31 = v27[1];
                  ++v27;
                  v30(v31, s);
                }
                while ( v57 > v26 );
              }
              pthread_mutex_lock(&stru_1A8A24);
              clock_gettime(1, &tp);
              if ( v53 )
              {
                logfmt_raw(
                  (char *)&v60,
                  0x1000u,
                  0,
                  "New job pushed after %lld ms",
                  1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1AB210) / 1000000);
                pthread_mutex_unlock(&stru_1A8A24);
                v32 = 296;
              }
              else
              {
                logfmt_raw(
                  (char *)&v60,
                  0x1000u,
                  0,
                  "Updated job pushed after %lld ms",
                  1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1AB210) / 1000000);
                pthread_mutex_unlock(&stru_1A8A24);
                v32 = 298;
              }
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/god-miner.c",
                132,
                "work_generator_thread",
                21,
                v32,
                20,
                &v60);
              clock_gettime(1, &tp);
              v33 = qword_1A3D90[0];
              if ( (unsigned __int64)max_timeout_value <= qword_1A3D90[0] )
                v33 = max_timeout_value;
              v34 = (unsigned __int64)max_timeout_value > qword_1A3D90[0];
              v35 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_1AB210) / 1000;
              v36 = qword_1A3D98;
              if ( qword_1A3D98 < v33 )
                v34 = 2;
              else
                v36 = v33;
              v37 = qword_1A3DA0;
              if ( qword_1A3DA0 < v36 )
                v34 = 3;
              else
                v37 = v36;
              v38 = qword_1A3DA8;
              if ( qword_1A3DA8 < v37 )
                v34 = 4;
              else
                v38 = v37;
              v39 = qword_1A3DB0;
              if ( v38 > qword_1A3DB0 )
                v34 = 5;
              else
                v39 = v38;
              v40 = qword_1A3DB8;
              if ( v39 > qword_1A3DB8 )
                v34 = 6;
              else
                v40 = v39;
              v41 = qword_1A3DC0;
              if ( v40 > qword_1A3DC0 )
                v34 = 7;
              else
                v41 = v40;
              v42 = qword_1A3DC8;
              if ( v41 > qword_1A3DC8 )
                v34 = 8;
              else
                v42 = v41;
              v43 = qword_1A3DD0;
              if ( v42 > qword_1A3DD0 )
                v34 = 9;
              else
                v43 = v42;
              if ( v35 > v43 )
                qword_1A3D90[v34 - 1] = v35;
              v53 = 0;
              clock_gettime(1, (struct timespec *)&send_job_timer);
            }
            goto LABEL_31;
          }
          pthread_mutex_unlock((pthread_mutex_t *)(v19 + 960));
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(
            (char *)&v60,
            0x1000u,
            0,
            "work generator: jobid %p cancel %d",
            *(_DWORD *)(v19 + 824),
            *(unsigned __int8 *)(v19 + 904));
          pthread_mutex_unlock(&stru_1A8A24);
          v45 = 265;
          v46 = g_zc;
        }
        zlog(
          v46,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "work_generator_thread",
          21,
          v45,
          20,
          &v60);
LABEL_85:
        sleep(0);
        goto LABEL_31;
      }
      v22 = pthread_cond_timedwait((pthread_cond_t *)(v19 + 1224), (pthread_mutex_t *)(v19 + 1192), &abstime);
      v21 = v22;
      if ( v22 == 110 )
      {
        pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
        goto LABEL_87;
      }
    }
    while ( v22 );
    pthread_mutex_lock(&stru_1AA810);
    v44 = dword_1AA828;
    pthread_mutex_unlock(&stru_1AA810);
    if ( v19 != v44 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(v19 + 1192));
      goto LABEL_83;
    }
  }
}
