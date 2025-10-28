void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  unsigned __int64 v3; // r2
  int v4; // t1
  unsigned __int64 v5; // r8
  char *v6; // r0
  int v7; // r9
  int v8; // r3
  const char *v9; // r2
  char *v10; // r7
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r1
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v16; // r7
  int v17; // r0
  int v18; // r3
  int v19; // r12
  int v20; // r3
  int v21; // r1
  int v22; // r6
  char *v23; // r8
  int v24; // r2
  time_t v25; // r0
  int v26; // r3
  int v27; // t1
  int v28; // r3
  int v29; // r1
  unsigned __int64 *v30; // r2
  int v31; // r12
  int v32; // r3
  unsigned __int64 v33; // r6
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r0
  unsigned __int64 v36; // t1
  bool v37; // cf
  int v38; // r3
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r12
  int v43; // r0
  int v44; // r3
  int v45; // r1
  int v46; // r3
  int v47; // r1
  int v48; // r3
  int v49; // r3
  int v50; // r3
  int v51; // r1
  void *v52; // r0
  int lock; // r2
  const char *spins; // r0
  int v55; // [sp+1Ch] [bp-14B0h]
  int v56; // [sp+20h] [bp-14ACh]
  char *v57; // [sp+3Ch] [bp-1490h]
  int v58; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v59; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v61[512]; // [sp+4C8h] [bp-1004h] BYREF

  v58 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v58);
  memset(s, 0, sizeof(s));
  if ( v58 <= 0 )
  {
    v56 = 0;
    v55 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    do
    {
      v4 = *v2++;
      v5 = *(_QWORD *)(v4 + 960);
      if ( v3 > v5 )
        v3 = v5;
    }
    while ( &all_created_runtime[v58] != v2 );
    v56 = (int)v3 / 1000000;
    v55 = 1000 * ((int)v3 % 1000000);
  }
  v6 = (char *)calloc(1u, 0x40u);
  v7 = 0;
  LOWORD(v8) = 2412;
  LOWORD(v9) = 4236;
  HIWORD(v8) = (unsigned int)&unk_130A74 >> 16;
  HIWORD(v9) = (unsigned int)"job has come" >> 16;
  v10 = v6;
  snprintf(v6, 0x40u, v9, v8, 0);
  V_LOCK();
  v11 = syscall(224);
  LOWORD(v12) = 4248;
  HIWORD(v12) = (unsigned int)"" >> 16;
  logfmt_raw((char *)v61, 0x1000u, 0, v12, v10, v11);
  V_UNLOCK();
  LOWORD(v13) = 2412;
  LOWORD(v14) = 4264;
  HIWORD(v13) = (unsigned int)&unk_130A74 >> 16;
  HIWORD(v14) = (unsigned int)"or: jobid %p cancel %d" >> 16;
  zlog(g_zc, v14, 138, v13, 21, 203, 40, v61);
  v57 = (char *)(all_created_runtime - 1);
  prctl(15, v10);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v16 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      LOWORD(v38) = 4404;
      HIWORD(v38) = (unsigned int)"some chip not working" >> 16;
      logfmt_raw((char *)v61, 0x1000u, (int)v16, v38);
      V_UNLOCK();
      LOWORD(v39) = 2412;
      LOWORD(v40) = 4264;
      HIWORD(v39) = (unsigned int)&unk_130A74 >> 16;
      HIWORD(v40) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      zlog(g_zc, v40, 138, v39, 21, 222, 20, v61);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v16[79].__size[8]) )
        goto LABEL_37;
      clock_gettime(1, v61);
      v59.tv_nsec = (v55 + v61[0].tv_nsec) % 1000000000;
      v59.tv_sec = (v55 + v61[0].tv_nsec) / 1000000000 + v61[0].tv_sec + v56;
      v17 = pool_twait_to_be_expected_and_set((int)v16, &v16[79].__size[20], 1, 0, &v59);
      if ( v17 == 1 )
        break;
      if ( v17 == 110 )
      {
        V_LOCK();
        LOWORD(v49) = 4468;
        HIWORD(v49) = (unsigned int)"rking slow" >> 16;
        logfmt_raw((char *)v61, 0x1000u, 0, v49);
        V_UNLOCK();
        v19 = 238;
      }
      else
      {
        V_LOCK();
        LOWORD(v18) = 4496;
        HIWORD(v18) = (unsigned int)"r" >> 16;
        logfmt_raw((char *)v61, 0x1000u, 0, v18);
        V_UNLOCK();
        v19 = 240;
      }
      LOWORD(v20) = 2412;
      LOWORD(v21) = 4264;
      HIWORD(v20) = (unsigned int)&unk_130A74 >> 16;
      HIWORD(v21) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      zlog(g_zc, v21, 138, v20, 21, v19, 20, v61);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v16 + 1592));
      if ( pool_tget(v16, (unsigned __int8 *)&v16[66]) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v16 + 1592));
        V_LOCK();
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v16[65].__spins,
          (unsigned __int8)v16[66].__size[0]);
        V_UNLOCK();
        v42 = 246;
        v43 = g_zc;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v16) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v16->__lock,
          v16[65].__spins);
        V_UNLOCK();
        LOWORD(v50) = 2412;
        LOWORD(v51) = 4264;
        HIWORD(v50) = (unsigned int)&unk_130A74 >> 16;
        HIWORD(v51) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v51, 138, v50, 21, 253, 20, v61);
        v52 = (void *)s[281];
        lock = v16[68].__lock;
        ++*(_QWORD *)&total_getworks;
        v16[68].__lock = lock + 1;
        if ( v52 )
        {
          free(v52);
          s[281] = 0;
        }
        v7 = 1;
        memcpy(s, &v16[19], sizeof(s));
        spins = (const char *)v16[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v16 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = v16[3].__owner;
      if ( v58 > 0 )
      {
        v22 = 0;
        v23 = v57;
        do
        {
          if ( v22 )
            v24 = 0;
          else
            v24 = v7;
          ++v22;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v16, v24);
          ++local_work;
          v25 = time(0);
          v26 = *(_DWORD *)(v0 + 72);
          last_getwork = v25;
          v27 = *((_DWORD *)v23 + 1);
          v23 += 4;
          (*(void (__fastcall **)(int, _DWORD *))(v26 + 4))(v27, s);
        }
        while ( v58 > v22 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v7 )
      {
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000000);
        V_UNLOCK();
        LOWORD(v28) = 2412;
        LOWORD(v29) = 4264;
        HIWORD(v28) = (unsigned int)&unk_130A74 >> 16;
        HIWORD(v29) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v29, 138, v28, 21, 278, 20, v61);
      }
      else
      {
        LOWORD(v46) = 4632;
        HIWORD(v46) = (unsigned int)"iting" >> 16;
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          v46,
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000000);
        V_UNLOCK();
        LOWORD(v47) = 4264;
        LOWORD(v48) = 2412;
        HIWORD(v48) = (unsigned int)&unk_130A74 >> 16;
        HIWORD(v47) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v47, 138, v48, 21, 280, 20, v61);
      }
      clock_gettime(1, &tp);
      v30 = max_timeout_value;
      v31 = 0;
      v32 = 0;
      v33 = -1;
      v34 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18B324) / 1000;
      do
      {
        v36 = *v30++;
        v35 = v36;
        v37 = v36 >= v33;
        if ( v36 < v33 )
          v31 = v32;
        ++v32;
        if ( !v37 )
          v33 = v35;
      }
      while ( v32 != 10 );
      if ( v34 > v33 )
        max_timeout_value[v31] = v34;
      v7 = 0;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v16 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK();
    LOWORD(v41) = 4444;
    HIWORD(v41) = (unsigned int)"ng = J%d:1." >> 16;
    logfmt_raw((char *)v61, 0x1000u, 0, v41);
    V_UNLOCK();
    v42 = 234;
    v43 = g_zc;
LABEL_36:
    LOWORD(v44) = 2412;
    LOWORD(v45) = 4264;
    HIWORD(v44) = (unsigned int)&unk_130A74 >> 16;
    HIWORD(v45) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(v43, v45, 138, v44, 21, v42, 20, v61);
LABEL_37:
    sleep(0);
  }
}
