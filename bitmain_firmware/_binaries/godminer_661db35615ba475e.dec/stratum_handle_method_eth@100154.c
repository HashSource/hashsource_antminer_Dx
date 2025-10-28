int __fastcall stratum_handle_method_eth(int a1, int a2, char arg)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r8
  int v10; // r4
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v16; // r0
  char *v17; // r4
  _DWORD *v18; // r0
  char *v19; // r7
  _DWORD *v20; // r0
  char *v21; // r8
  size_t v22; // r10
  signed int v23; // r11
  size_t v24; // r0
  _BOOL4 v25; // r3
  int v26; // r9
  void *v27; // r11
  int v28; // r12
  void *v29; // r0
  void *v30; // r0
  int v31; // r8
  void *v32; // r0
  _WORD *v33; // r0
  _DWORD *v34; // r3
  int v35; // r1
  void *v36; // r0
  pthread_mutex_t *mutex; // [sp+10h] [bp-110Ch]
  size_t sizea; // [sp+14h] [bp-1108h]
  size_t size; // [sp+14h] [bp-1108h]
  _DWORD v40[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v41[160]; // [sp+78h] [bp-10A4h] BYREF
  char v42[4100]; // [sp+118h] [bp-1004h] BYREF

  v4 = json_loads(arg, 0, (int)v40);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v42, 0x1000u, 0, "JSON decode failed(%d): %s", v40[0], v41);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_handle_method_eth",
      25,
      452,
      100,
      v42);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "id");
  v7 = v6;
  if ( v6 )
  {
    if ( *v6 == 3 )
      v7 = (_DWORD *)v6[2];
    else
      v7 = 0;
  }
  v8 = (_DWORD *)json_object_get(v5, "result");
  v9 = v8;
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(a2 + 1024);
    if ( !*(_BYTE *)(a2 + 1024) )
      goto LABEL_15;
    v11 = *v8 == 1;
    if ( *v8 == 1 )
      v11 = v7 == 0;
    v10 = v11;
    if ( !v11 )
      goto LABEL_15;
    v16 = json_array_get(v8, 0);
    v17 = (char *)json_string_value(v16) + 2;
    v18 = json_array_get(v9, 1u);
    v19 = (char *)json_string_value(v18) + 2;
    v20 = json_array_get(v9, 2u);
    v21 = (char *)json_string_value(v20) + 2;
    v22 = strlen(v19);
    v23 = strlen(v17);
    v24 = strlen(v21);
    v25 = v23 == 0;
    if ( !v22 )
      v25 = 1;
    if ( !v24 )
      v25 = 1;
    v26 = v24;
    if ( v25 )
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v22, v23, v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_eth/frontend_eth.c",
        157,
        "rpc2_job_decode",
        15,
        385,
        100,
        v42);
LABEL_28:
      v10 = 0;
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
      *(_BYTE *)(a2 + 1284) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
      goto LABEL_15;
    }
    mutex = (pthread_mutex_t *)(a2 + 1148);
    sizea = v23 >> 1;
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1148));
    *(_DWORD *)(a2 + 1124) = v23 >> 1;
    v27 = malloc(v23 >> 1);
    v10 = hex2bin((int)v27, (unsigned __int8 *)v17, sizea);
    if ( v10 )
    {
      size = *(_DWORD *)(a2 + 1124);
      v29 = malloc(size);
      *(_DWORD *)(a2 + 1116) = v29;
      if ( v29 )
      {
        memcpy(v29, v27, size);
        free(v27);
        v30 = *(void **)(a2 + 1144);
        if ( v30 )
          free(v30);
        pthread_mutex_unlock(mutex);
        if ( *(_DWORD *)(a2 + 1116) )
        {
          memcpy((void *)(a2 + 448), *(const void **)(a2 + 1116), *(_DWORD *)(a2 + 1124));
          hex2bin(a2 + 736, (unsigned __int8 *)v19, 32);
          hex2bin(a2 + 704, (unsigned __int8 *)v21, v26);
          v31 = be256_target_to_diff_base(a2 + 704);
          v32 = *(void **)(a2 + 824);
          *(double *)(a2 + 800) = (double)(unsigned int)v31;
          *(double *)(a2 + 1176) = (double)(unsigned int)v31;
          if ( v32 )
            free(v32);
          v33 = malloc(6u);
          if ( v33 )
            LOWORD(v34) = 23356;
          *(_DWORD *)(a2 + 824) = v33;
          if ( v33 )
          {
            HIWORD(v34) = 23;
            v35 = v34[1];
            *(_DWORD *)v33 = *v34;
            v33[2] = v35;
          }
          *(_DWORD *)(a2 + 820) = get_epoch_number_eth((const void *)(a2 + 736));
          V_LOCK();
          logfmt_raw(v42, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(a2 + 820), v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_eth/frontend_eth.c",
            157,
            "rpc2_job_decode",
            15,
            425,
            20,
            v42);
          v36 = *(void **)(a2 + 1116);
          if ( v36 )
            free(v36);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
          *(_BYTE *)(a2 + 1284) = 1;
          pthread_cond_broadcast((pthread_cond_t *)(a2 + 1224));
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
          goto LABEL_15;
        }
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Work requested before it was received");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_eth/frontend_eth.c",
          157,
          "rpc2_job_decode",
          15,
          414,
          80,
          v42);
        goto LABEL_34;
      }
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "RPC2 OOM!");
      V_UNLOCK();
      v28 = 402;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "JSON invalid blob");
      V_UNLOCK();
      v28 = 395;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      v28,
      100,
      v42);
    if ( v27 )
      free(v27);
    pthread_mutex_unlock(mutex);
LABEL_34:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      433,
      80,
      v42);
    goto LABEL_28;
  }
  v10 = 0;
LABEL_15:
  if ( v5[1] == -1 )
    return v10;
  v12 = v5 + 1;
  __dmb(0xBu);
  do
  {
    v13 = __ldrex(v12);
    v14 = v13 - 1;
  }
  while ( __strex(v14, v12) );
  if ( v14 )
    return v10;
  json_delete(v5);
  return v10;
}
