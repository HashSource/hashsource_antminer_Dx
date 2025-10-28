int __fastcall sub_5D310(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v3; // r11
  int v6; // r0
  int *v7; // r0
  int v8; // r3
  _DWORD *v9; // r0
  char *v10; // r8
  size_t v11; // r0
  _BOOL4 v12; // r3
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v17; // r0
  int v18; // r2
  double v19; // d8
  void *v20; // r0
  char *v21; // r0
  void *v22; // r3
  int v23; // r0
  int v24; // r2
  void *v25; // r0
  int v26; // r0
  __int64 v27; // r0
  __int64 v28; // r0
  void *v29; // r3
  __int64 size; // [sp+18h] [bp-103Ch]
  size_t sizea; // [sp+18h] [bp-103Ch]
  int v32; // [sp+20h] [bp-1034h]
  pthread_mutex_t *mutex; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v36; // [sp+4Ch] [bp-1008h]
  char v37[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1024);
  if ( !*(_BYTE *)(a2 + 1024) )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v37, 0x1000u, v2, "Tried to decode job without JSON-RPC 2.0");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      356,
      100,
      v37);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 960);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "JSON invalid job id");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      364,
      100,
      v37);
    goto LABEL_19;
  }
  if ( *(_DWORD *)v6 == 3 )
    size = *(_QWORD *)(v6 + 8);
  else
    size = 0;
  s[0] = 32;
  v36 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", size);
  v7 = (int *)json_object_get(a1, "height");
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "JSON invalid height");
    V_UNLOCK();
    v17 = g_zc;
    v18 = 373;
LABEL_25:
    zlog(
      v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v18,
      100,
      v37);
    goto LABEL_19;
  }
  v8 = *v7;
  if ( *v7 == 3 )
    v8 = v7[2];
  else
    v32 = 0;
  if ( *v7 == 3 )
    v32 = v8;
  v9 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v9 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v17 = g_zc;
    v18 = 381;
    goto LABEL_25;
  }
  v10 = (char *)json_string_value(v9);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "Job id: (%lld-%s) Height %llu hexblob %s", size, s, v32, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "rpc2_job_decode",
    15,
    386,
    20,
    v37);
  v11 = strlen(v10);
  if ( (v11 & 1) != 0 || (v11 - 1 <= 0x4E ? (v12 = 1) : (v12 = v11 > 0x201), v12) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "JSON invalid blob length");
    V_UNLOCK();
    v13 = g_zc;
    v14 = 100;
    v15 = 389;
LABEL_18:
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v15,
      v14,
      v37);
LABEL_19:
    v2 = 0;
    pthread_mutex_unlock(v3);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v37, 0x1000u, 0, "%s", "rpc2_job_decode");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      446,
      80,
      v37);
    return v2;
  }
  if ( v11 )
  {
    sizea = v11 >> 1;
    mutex = (pthread_mutex_t *)(a2 + 1148);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1148));
    ptr = malloc(sizea);
    if ( hex2bin((int)ptr, (unsigned __int8 *)v10, sizea) )
    {
      *(_DWORD *)(a2 + 1124) = sizea;
      v25 = malloc(sizea);
      *(_DWORD *)(a2 + 1116) = v25;
      if ( v25 )
      {
        memcpy(v25, ptr, sizea);
        free(ptr);
        v26 = json_object_get(a1, "difficulty");
        if ( v26 )
        {
          v27 = json_integer_value(v26);
          LODWORD(v28) = sub_16E7EC(v27);
          v29 = *(void **)(a2 + 1144);
          *(_QWORD *)(a2 + 1176) = v28;
          if ( v29 )
            free(v29);
          *(_DWORD *)(a2 + 1144) = _strdup((const char *)s);
          pthread_mutex_unlock(mutex);
          goto LABEL_28;
        }
        V_LOCK();
        logfmt_raw(v37, 0x1000u, 0, "JSON invalid difficulty");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "rpc2_job_decode",
          15,
          415,
          100,
          v37);
LABEL_38:
        pthread_mutex_unlock(mutex);
        goto LABEL_19;
      }
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "RPC2 OOM!");
      V_UNLOCK();
      v23 = g_zc;
      v24 = 405;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "JSON invalid blob");
      V_UNLOCK();
      v23 = g_zc;
      v24 = 397;
    }
    zlog(
      v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v24,
      100,
      v37);
    if ( ptr )
      free(ptr);
    goto LABEL_38;
  }
LABEL_28:
  if ( !*(_DWORD *)(a2 + 1116) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    v13 = g_zc;
    v14 = 80;
    v15 = 428;
    goto LABEL_18;
  }
  memcpy((void *)(a2 + 448), *(const void **)(a2 + 1116), *(_DWORD *)(a2 + 1124));
  v19 = *(double *)(a2 + 1176);
  memset((void *)(a2 + 704), 0, 0x20u);
  v20 = *(void **)(a2 + 824);
  *(double *)(a2 + 800) = v19;
  *(_QWORD *)(a2 + 728) = (unsigned __int64)(1.84464626e19 / v19);
  if ( v20 )
    free(v20);
  v21 = _strdup((const char *)s);
  v22 = *(void **)(a2 + 1116);
  *(_DWORD *)(a2 + 824) = v21;
  *(_DWORD *)(a2 + 816) = 29;
  *(_DWORD *)(a2 + 820) = v32;
  if ( v22 )
    free(v22);
  pthread_mutex_unlock(v3);
  return v2;
}
