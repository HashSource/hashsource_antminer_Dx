int __fastcall sub_3EEB4(_DWORD *a1, int a2)
{
  int v2; // r4
  _DWORD *v6; // r0
  char *v7; // r6
  _DWORD *v8; // r0
  char *v9; // r7
  _DWORD *v10; // r0
  char *v11; // r8
  _DWORD *v12; // r0
  size_t v13; // r11
  signed int v14; // r9
  size_t v15; // r0
  _BOOL4 v16; // r3
  int v17; // r10
  void *v18; // r0
  int v19; // r2
  void *v20; // r9
  int v21; // r0
  int v22; // r12
  size_t v23; // r6
  void *v24; // r0
  void *v25; // r0
  void *v26; // r0
  _QWORD *v27; // r0
  _QWORD *v28; // r6
  unsigned int v29; // r8
  int *all_created_runtime; // r0
  int *v31; // r2
  int v32; // t1
  void *v33; // r0
  _WORD *v34; // r0
  _DWORD *v35; // r2
  int v36; // r1
  void *v37; // r0
  char *nptr; // [sp+10h] [bp-1014h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1010h]
  int v40; // [sp+1Ch] [bp-1008h] BYREF
  char v41[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1648) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    v2 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      295,
      100,
      v41);
    return v2;
  }
  v6 = json_array_get(a1, 0);
  v7 = (char *)json_string_value(v6) + 2;
  v8 = json_array_get(a1, 1u);
  v9 = (char *)json_string_value(v8) + 2;
  v10 = json_array_get(a1, 2u);
  v11 = (char *)json_string_value(v10) + 2;
  v12 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v12);
  v13 = strlen(v9);
  v14 = strlen(v7);
  v15 = strlen(v11);
  v16 = v14 == 0;
  if ( !v13 )
    v16 = 1;
  if ( !v15 )
    v16 = 1;
  v17 = v15;
  if ( v16 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v13, v14, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      309,
      100,
      v41);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1584);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1772));
  *(_DWORD *)(a2 + 1748) = v14 >> 1;
  v18 = malloc(v14 >> 1);
  v19 = v14 >> 1;
  v20 = v18;
  v2 = hex2bin((int)v18, (unsigned __int8 *)v7, v19);
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 320;
LABEL_15:
    zlog(
      v21,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      v22,
      100,
      v41);
    if ( v20 )
      free(v20);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1772));
    goto LABEL_18;
  }
  v23 = *(_DWORD *)(a2 + 1748);
  v24 = malloc(v23);
  *(_DWORD *)(a2 + 1740) = v24;
  if ( !v24 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 329;
    goto LABEL_15;
  }
  memcpy(v24, v20, v23);
  free(v20);
  v25 = *(void **)(a2 + 1768);
  if ( v25 )
    free(v25);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1772));
  if ( !*(_DWORD *)(a2 + 1740) )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      346,
      80,
      v41);
LABEL_18:
    pthread_mutex_unlock(mutex);
    v2 = 0;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      392,
      80,
      v41);
    return v2;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1740), *(_DWORD *)(a2 + 1748));
  v26 = *(void **)(a2 + 1580);
  if ( v26 )
    free(v26);
  v27 = calloc(1u, 0x68u);
  v28 = v27;
  *(_DWORD *)(a2 + 1580) = v27;
  if ( v27 )
  {
    hex2bin((int)v27, (unsigned __int8 *)v9, 32);
    hex2bin(a2 + 1480, (unsigned __int8 *)v11, v17);
    v29 = target_to_diff_eth(a2 + 1480);
    *(double *)(a2 + 1512) = (double)v29;
    *(double *)(a2 + 1800) = (double)v29;
    sprintf((char *)(a2 + 1968), "%13.2f", (double)v29);
    v40 = 0;
    all_created_runtime = (int *)get_all_created_runtime(&v40);
    if ( v40 > 0 )
    {
      v31 = &all_created_runtime[v40];
      do
      {
        v32 = *all_created_runtime++;
        *(_DWORD *)(v32 + 392) = v29;
      }
      while ( all_created_runtime != v31 );
    }
    v33 = *(void **)(a2 + 1572);
    if ( v33 )
      free(v33);
    v34 = malloc(6u);
    if ( v34 )
      LOWORD(v35) = 31776;
    *(_DWORD *)(a2 + 1572) = v34;
    if ( v34 )
    {
      HIWORD(v35) = 18;
      v36 = v35[1];
      *(_DWORD *)v34 = *v35;
      v34[2] = v36;
    }
    *(_DWORD *)(a2 + 1528) = get_epoch_number_rvn_0(v28);
    if ( nptr )
      v28[12] = strtoull(nptr, 0, 16);
    else
      v28[12] = 0;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(a2 + 1528), v29);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      383,
      20,
      v41);
    v37 = *(void **)(a2 + 1740);
    if ( v37 )
      free(v37);
    pthread_mutex_unlock(mutex);
  }
  else
  {
    v2 = 0;
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return v2;
}
