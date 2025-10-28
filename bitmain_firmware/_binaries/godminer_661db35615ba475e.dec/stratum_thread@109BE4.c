int __fastcall stratum_thread(int a1)
{
  int v2; // r9
  pthread_t v3; // r0
  int v4; // r4
  int *v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r11
  char *v9; // r4
  int v10; // r0
  char *v11; // r4
  int v12; // r10
  pthread_mutex_t *v13; // r9
  unsigned int v14; // r4
  unsigned int v15; // r6
  pthread_mutex_t *v16; // r8
  int v17; // r5
  signed __int64 v18; // r0
  int v19; // kr00_4
  int v20; // r4
  struct timespec v21; // r2
  size_t v22; // r0
  int v23; // r0
  void *v24; // r4
  int v25; // r4
  int v26; // r9
  int v27; // r5
  int v28; // r5
  int v29; // r4
  int v30; // r2
  int v31; // r3
  int v32; // r4
  int v33; // r4
  int v34; // r5
  int v35; // r2
  _DWORD *v36; // r3
  unsigned int v37; // r4
  int v38; // r12
  int v39; // r11
  int v40; // r5
  int v41; // r0
  int v42; // lr
  int v43; // r5
  int v44; // lr
  int v45; // r12
  int *v46; // r1
  int v47; // t1
  int v48; // r6
  pthread_t v50; // r5
  _DWORD *v51; // [sp+40h] [bp-10ACh]
  int v52; // [sp+40h] [bp-10ACh]
  int v53; // [sp+44h] [bp-10A8h]
  int v54; // [sp+44h] [bp-10A8h]
  int v55; // [sp+54h] [bp-1098h]
  unsigned int v56; // [sp+64h] [bp-1088h]
  __time_t v57; // [sp+68h] [bp-1084h]
  struct timespec abstime; // [sp+80h] [bp-106Ch] BYREF
  const char *v59; // [sp+88h] [bp-1064h]
  __int64 v60; // [sp+8Ch] [bp-1060h]
  int v61; // [sp+94h] [bp-1058h]
  __int64 v62; // [sp+98h] [bp-1054h]
  int v63; // [sp+A0h] [bp-104Ch]
  int v64; // [sp+A4h] [bp-1048h]
  const char *v65; // [sp+A8h] [bp-1044h]
  int v66; // [sp+ACh] [bp-1040h]
  int v67; // [sp+B0h] [bp-103Ch]
  int v68; // [sp+B4h] [bp-1038h]
  __int64 v69; // [sp+B8h] [bp-1034h]
  int v70; // [sp+C0h] [bp-102Ch]
  int v71; // [sp+C4h] [bp-1028h]
  const char *v72; // [sp+C8h] [bp-1024h]
  int v73; // [sp+CCh] [bp-1020h]
  int v74; // [sp+D0h] [bp-101Ch]
  int v75; // [sp+D4h] [bp-1018h]
  __int64 v76; // [sp+D8h] [bp-1014h]
  int v77; // [sp+E0h] [bp-100Ch]
  int v78; // [sp+E4h] [bp-1008h]
  struct timespec v79; // [sp+E8h] [bp-1004h] BYREF

  v2 = dword_191C84;
  v3 = pthread_self();
  if ( !v2 )
  {
    v50 = v3;
    V_LOCK();
    logfmt_raw((char *)&v79, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      &v79);
    pthread_detach(v50);
    __und(0);
  }
  pthread_detach(v3);
  v4 = *(_DWORD *)(a1 + 44);
  v57 = *(_DWORD *)(v2 + 88);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 12));
  v5 = *(int **)v4;
  if ( v4 == *(_DWORD *)v4 )
  {
    if ( pthread_cond_wait((pthread_cond_t *)(v4 + 40), (pthread_mutex_t *)(v4 + 12))
      || (v5 = *(int **)v4, v4 == *(_DWORD *)v4) )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(v4 + 12));
LABEL_45:
      pthread_mutex_lock(&stru_197BB8);
      __und(0);
    }
  }
  v6 = (_DWORD *)v5[1];
  v7 = *v5;
  v8 = *(v5 - 1);
  *(_DWORD *)(v7 + 4) = v6;
  *v6 = v7;
  *v5 = 0;
  v5[1] = 0;
  free(v5 - 1);
  pthread_mutex_unlock((pthread_mutex_t *)(v4 + 12));
  if ( !v8 )
    goto LABEL_45;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v79, 0x1000u, 0, "stratum_thread pool %s", *(_DWORD *)(v8 + 8));
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/stratum_handler.c",
    138,
    "stratum_thread",
    14,
    227,
    20,
    &v79);
  v9 = (char *)calloc(1u, 0x40u);
  snprintf(v9, 0x40u, "%.10s_%d", "stratum_thread", *(_DWORD *)v8);
  pthread_mutex_lock(&stru_197BB8);
  v10 = syscall(224);
  logfmt_raw((char *)&v79, 0x1000u, 0, "%s on pid %ld", v9, v10);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/stratum_handler.c",
    138,
    "stratum_thread",
    14,
    229,
    60,
    &v79);
  prctl(15, v9);
  v11 = _strdup(*(const char **)(v8 + 8));
  *(_DWORD *)(v8 + 28) = v11;
  if ( v11 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v8 + 1192));
    *(_BYTE *)(v8 + 1272) = 1;
    pthread_mutex_unlock((pthread_mutex_t *)(v8 + 1192));
    v55 = 1;
    pthread_mutex_lock((pthread_mutex_t *)(v8 + 1192));
    *(_BYTE *)(v8 + 1284) = 0;
    v12 = v2;
    v13 = (pthread_mutex_t *)(v8 + 1192);
    pthread_mutex_unlock((pthread_mutex_t *)(v8 + 1192));
    while ( 1 )
    {
      v14 = 0;
      v15 = 0;
      v16 = v13;
      while ( *(_DWORD *)(v8 + 32) == -1 )
      {
        while ( !(*(int (__fastcall **)(int))(v12 + 4))(v8) || !(*(int (__fastcall **)(int, int))(v12 + 20))(v12, v8) )
        {
          (*(void (__fastcall **)(int))(v12 + 8))(v8);
          pthread_mutex_lock(v16);
          *(_BYTE *)(v8 + 1284) = 0;
          pthread_mutex_unlock(v16);
          pthread_mutex_lock(v16);
          v17 = *(unsigned __int8 *)(v8 + 1272);
          *(_BYTE *)(v8 + 1272) = 1;
          pthread_mutex_unlock(v16);
          if ( !v17 )
            sub_1097E0((int *)v8);
          v18 = __PAIR64__(v15, v14);
          v19 = v14 + 1;
          v15 = (__PAIR64__(v15, v14) + 1) >> 32;
          if ( !(v18 % 50) )
          {
            pthread_mutex_lock(&stru_197BB8);
            v25 = *(_DWORD *)v8;
            v59 = "poolno";
            v60 = 0x300000006LL;
            v62 = v25;
            v63 = 0;
            ++dword_197BD4;
            logfmt_raw(
              (char *)&v79,
              0x1000u,
              0,
              v64,
              "poolno",
              6,
              3,
              v61,
              (__int64)v25,
              0,
              v64,
              "...retry after %d seconds failures %d",
              30,
              v19,
              v15);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/stratum_handler.c",
              138,
              "stratum_thread",
              14,
              247,
              100,
              &v79);
          }
          v14 = v19;
          sleep(0x1Eu);
          if ( *(_DWORD *)(v8 + 32) != -1 )
            goto LABEL_15;
        }
        v26 = 0;
        pthread_mutex_lock(&stru_197BB8);
        v27 = *(_DWORD *)v8;
        v53 = *(_DWORD *)(v8 + 28);
        pthread_mutex_lock(&stru_196218);
        v51 = (_DWORD *)dword_196230;
        pthread_mutex_unlock(&stru_196218);
        logfmt_raw((char *)&v79, 0x1000u, 0, "pool %d is active, pool url %s, current_pool %d", v27, v53, *v51);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_thread",
          14,
          251,
          20,
          &v79);
        pthread_mutex_lock(v16);
        v28 = *(unsigned __int8 *)(v8 + 1272);
        *(_BYTE *)(v8 + 1272) = 0;
        pthread_mutex_unlock(v16);
        if ( v28 )
        {
          pthread_mutex_lock(&stru_190E30);
          v34 = dword_190E48;
          v52 = dword_190E48;
          pthread_mutex_unlock(&stru_190E30);
          if ( v34 > 0 )
          {
            v35 = *(_DWORD *)v8;
            if ( v34 > 8 )
            {
              v36 = &unk_190EC0;
              v56 = v14;
              v37 = ((v34 - 9) & 0xFFFFFFF8) + 8;
              v54 = v8;
              do
              {
                v26 += 8;
                v38 = *(v36 - 26);
                v39 = *(v36 - 29) + v35;
                v40 = *(v36 - 28) + v35;
                v41 = *(v36 - 25);
                v42 = *(v36 - 27) + v35;
                __pld(v36);
                *(_BYTE *)(v39 + 312) = 0;
                *(_BYTE *)(v40 + 312) = 0;
                v43 = *(v36 - 24);
                v36 += 8;
                *(_BYTE *)(v42 + 312) = 0;
                v44 = *(v36 - 31);
                *(_BYTE *)(v38 + v35 + 312) = 0;
                v45 = *(v36 - 30);
                *(_BYTE *)(v41 + v35 + 312) = 0;
                *(_BYTE *)(v43 + v35 + 312) = 0;
                *(_BYTE *)(v44 + v35 + 312) = 0;
                *(_BYTE *)(v45 + v35 + 312) = 0;
              }
              while ( v26 != v37 );
              v8 = v54;
              v14 = v56;
            }
            v46 = &dword_190E4C[v26];
            do
            {
              v47 = *v46++;
              ++v26;
              *(_BYTE *)(v47 + v35 + 312) = 0;
            }
            while ( v26 < v52 );
          }
        }
        if ( v55 )
        {
          v55 = 0;
          switch_pools();
        }
      }
LABEL_15:
      v13 = v16;
      pthread_mutex_lock(&stru_196218);
      v20 = dword_196230;
      pthread_mutex_unlock(&stru_196218);
      if ( v8 != v20 )
      {
        clock_gettime(1, &v79);
        v21.tv_nsec = (v79.tv_nsec + 1000) % 1000000000;
        v21.tv_sec = v79.tv_sec + (v79.tv_nsec + 1000) / 1000000000;
        abstime = v21;
        pthread_mutex_lock(&stru_196218);
        if ( v8 != dword_196230 )
          pthread_cond_timedwait(&cond, &stru_196218, &abstime);
        pthread_mutex_unlock(&stru_196218);
      }
      pthread_mutex_lock(&stru_197BB8);
      v22 = strlen(*(const char **)(v8 + 40));
      logfmt_raw((char *)&v79, 0x1000u, 0, "stratum_socket_full sockbuf len %zu", v22);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/stratum_handler.c",
        138,
        "stratum_socket_full",
        19,
        96,
        20,
        &v79);
      if ( **(_BYTE **)(v8 + 40) || socket_full(*(_DWORD *)(v8 + 32), v57) )
      {
        v23 = (*(int (__fastcall **)(int))(v12 + 12))(v8);
        v24 = (void *)v23;
        if ( !v23 )
          goto LABEL_29;
        if ( !(*(int (__fastcall **)(int, int, int))(v12 + 24))(v12, v8, v23) )
          (*(void (__fastcall **)(int, void *, int))(v12 + 28))(v12, v24, v8);
        free(v24);
        pools_active = 1;
      }
      else
      {
        pthread_mutex_lock(&stru_197BB8);
        v29 = *(_DWORD *)v8;
        v66 = 6;
        v65 = "poolno";
        v67 = 3;
        v70 = 0;
        v69 = v29;
        ++dword_197BD4;
        logfmt_raw(
          (char *)&v79,
          0x1000u,
          0,
          v71,
          "poolno",
          6,
          3,
          v68,
          (__int64)v29,
          0,
          v71,
          "stratum connection timeout");
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_thread",
          14,
          272,
          100,
          &v79);
LABEL_29:
        v30 = total_go;
        v31 = *(_DWORD *)(v8 + 1316) + 1;
        pools_active = 0;
        *(_DWORD *)(v8 + 1316) = v31;
        total_go = v30 + 1;
        (*(void (__fastcall **)(int))(v12 + 8))(v8);
        pthread_mutex_lock(v16);
        *(_BYTE *)(v8 + 1284) = 0;
        pthread_mutex_unlock(v16);
        pthread_mutex_lock(v16);
        v32 = *(unsigned __int8 *)(v8 + 1272);
        *(_BYTE *)(v8 + 1272) = 1;
        pthread_mutex_unlock(v16);
        if ( !v32 )
          sub_1097E0((int *)v8);
        pthread_mutex_lock(&stru_197BB8);
        v33 = *(_DWORD *)v8;
        v72 = "poolno";
        v73 = 6;
        v74 = 3;
        v77 = 0;
        v76 = v33;
        ++dword_197BD4;
        logfmt_raw(
          (char *)&v79,
          0x1000u,
          0,
          v78,
          "poolno",
          6,
          3,
          v75,
          (__int64)v33,
          0,
          v78,
          "stratum connection interrupted");
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_thread",
          14,
          284,
          20,
          &v79);
        sleep(0x1Eu);
      }
    }
  }
  pthread_mutex_lock(&stru_197BB8);
  v48 = *(_DWORD *)v8;
  v72 = "poolno";
  v73 = 6;
  v74 = 3;
  v77 = 0;
  v76 = v48;
  ++dword_197BD4;
  logfmt_raw((char *)&v79, 0x1000u, 0, v78, "poolno", 6, 3, v75, (__int64)v48, 0, v78, "stratum thread out");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/stratum_handler.c",
    138,
    "stratum_thread",
    14,
    297,
    60,
    &v79);
  return 0;
}
