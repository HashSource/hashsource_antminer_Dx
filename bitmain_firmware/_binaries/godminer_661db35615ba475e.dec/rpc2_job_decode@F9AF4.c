int __fastcall rpc2_job_decode(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v3; // r11
  int v6; // r0
  __int64 v7; // r8
  int *v8; // r0
  int v9; // r3
  _DWORD *v10; // r0
  char *v11; // r3
  size_t v12; // r0
  _BOOL4 v13; // r3
  int v14; // r0
  int v15; // r12
  int v16; // r2
  int v18; // r0
  int v19; // r2
  double v20; // d8
  void *v21; // r0
  char *v22; // r0
  void *v23; // r3
  int v24; // r0
  int v25; // r2
  void *v26; // r0
  int v27; // r0
  __int64 v28; // r0
  __int64 v29; // r0
  void *v30; // r3
  char *v31; // [sp+1Ch] [bp-1038h]
  int v32; // [sp+20h] [bp-1034h]
  size_t size; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v37; // [sp+4Ch] [bp-1008h]
  char v38[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1024);
  if ( !*(_BYTE *)(a2 + 1024) )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v38, 0x1000u, v2, "Tried to decode job without JSON-RPC 2.0");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      363,
      100,
      v38);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 960);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid job id");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      371,
      100,
      v38);
    goto LABEL_26;
  }
  if ( *(_DWORD *)v6 == 3 )
    v7 = *(_QWORD *)(v6 + 8);
  else
    v7 = 0;
  s[0] = 32;
  v37 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", v7);
  v8 = (int *)json_object_get(a1, "height");
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid height");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 380;
    goto LABEL_28;
  }
  v9 = *v8;
  if ( *v8 == 3 )
    v9 = v8[2];
  else
    v32 = 0;
  if ( *v8 == 3 )
    v32 = v9;
  v10 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v18 = g_zc;
    v19 = 388;
LABEL_28:
    zlog(
      v18,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v19,
      100,
      v38);
    goto LABEL_26;
  }
  if ( *v10 == 2 )
    v11 = (char *)v10[2];
  else
    v11 = 0;
  v31 = v11;
  V_LOCK();
  logfmt_raw(v38, 0x1000u, 0, "Job id: (%lld-%s) Height %llu hexblob %s", v7, s, v32, v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_job_decode",
    15,
    393,
    20,
    v38);
  v12 = strlen(v31);
  if ( (v12 & 1) != 0 || (v12 - 1 <= 0x4E ? (v13 = 1) : (v13 = v12 > 0x201), v13) )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid blob length");
    V_UNLOCK();
    v14 = g_zc;
    v15 = 100;
    v16 = 396;
LABEL_22:
    zlog(
      v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v16,
      v15,
      v38);
LABEL_26:
    v2 = 0;
    pthread_mutex_unlock(v3);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v38, 0x1000u, 0, "%s", "rpc2_job_decode");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      453,
      80,
      v38);
    return v2;
  }
  if ( !v12 )
    goto LABEL_31;
  size = v12 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1148);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1148));
  ptr = malloc(size);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v31, size) )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v24 = g_zc;
    v25 = 404;
    goto LABEL_39;
  }
  *(_DWORD *)(a2 + 1124) = size;
  v26 = malloc(size);
  *(_DWORD *)(a2 + 1116) = v26;
  if ( !v26 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    v24 = g_zc;
    v25 = 412;
LABEL_39:
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v25,
      100,
      v38);
    if ( ptr )
      free(ptr);
    goto LABEL_41;
  }
  memcpy(v26, ptr, size);
  free(ptr);
  v27 = json_object_get(a1, "difficulty");
  if ( !v27 )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "JSON invalid difficulty");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      422,
      100,
      v38);
LABEL_41:
    pthread_mutex_unlock(mutex);
    goto LABEL_26;
  }
  v28 = json_integer_value(v27);
  LODWORD(v29) = sub_15D994(v28);
  v30 = *(void **)(a2 + 1144);
  *(_QWORD *)(a2 + 1176) = v29;
  if ( v30 )
    free(v30);
  *(_DWORD *)(a2 + 1144) = _strdup((const char *)s);
  pthread_mutex_unlock(mutex);
LABEL_31:
  if ( !*(_DWORD *)(a2 + 1116) )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    v14 = g_zc;
    v15 = 80;
    v16 = 435;
    goto LABEL_22;
  }
  memcpy((void *)(a2 + 448), *(const void **)(a2 + 1116), *(_DWORD *)(a2 + 1124));
  v20 = *(double *)(a2 + 1176);
  memset((void *)(a2 + 704), 0, 0x20u);
  v21 = *(void **)(a2 + 824);
  *(double *)(a2 + 800) = v20;
  *(_QWORD *)(a2 + 728) = (unsigned __int64)(1.84464626e19 / v20);
  if ( v21 )
    free(v21);
  v22 = _strdup((const char *)s);
  v23 = *(void **)(a2 + 1116);
  *(_DWORD *)(a2 + 824) = v22;
  *(_DWORD *)(a2 + 816) = 29;
  *(_DWORD *)(a2 + 820) = v32;
  if ( v23 )
    free(v23);
  pthread_mutex_unlock(v3);
  return v2;
}
