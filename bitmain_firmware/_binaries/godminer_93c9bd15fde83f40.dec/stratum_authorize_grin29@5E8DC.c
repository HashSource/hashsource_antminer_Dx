int __fastcall stratum_authorize_grin29(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r12
  const char *v10; // r1
  char *v11; // r7
  int v12; // r8
  size_t v13; // r6
  size_t v14; // r0
  const void *v15; // r1
  void *v16; // r6
  char *v18; // r0
  const char *v19; // r1
  _DWORD *v20; // r9
  _DWORD *v21; // r6
  int v22; // r0
  char *v23; // r1
  _DWORD *v24; // r10
  _DWORD *v25; // r0
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v29; // r1
  char *v30; // r1
  _DWORD *v31; // r10
  const void *v32; // r1
  int v33; // r6
  int v34; // r10
  int v35; // r0
  void *v36; // r6
  _DWORD *v37; // r0
  _DWORD *v38; // r8
  int v39; // r0
  int v40; // r3
  int v41; // r1
  int v42; // r3
  int v43; // r1
  int v44; // r1
  int v45; // r3
  int v46; // r1
  _DWORD v47[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v48[160]; // [sp+70h] [bp-10A0h] BYREF
  char v49[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = v6 + strlen(v5);
  if ( *(_BYTE *)(a2 + 1024) )
  {
    v8 = (char *)malloc(v7 + 300);
    LOWORD(v9) = 19424;
    LOWORD(v10) = 19316;
    HIWORD(v9) = (unsigned int)"24G_20210915_update" >> 16;
    HIWORD(v10) = (unsigned int)"_update" >> 16;
    v11 = v8;
    sprintf(v8, v10, v2, v5, v9);
  }
  else
  {
    v18 = (char *)malloc(v7 + 80);
    LOWORD(v19) = 19440;
    HIWORD(v19) = (unsigned int)"ate" >> 16;
    v11 = v18;
    sprintf(v18, v19, v2, v5);
  }
  v12 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( !v12 )
  {
    free(v11);
    return v12;
  }
  if ( *(_BYTE *)(a2 + 1024) )
  {
    v13 = strlen(*(const char **)(a2 + 12));
    v14 = strlen(*(const char **)(a2 + 16));
    memset(v11, 0, v13 + v14 + 300);
    LOWORD(v15) = 19504;
    HIWORD(v15) = (unsigned int)"0819_update" >> 16;
    memcpy(v11, v15, 0x4Au);
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11) )
    {
      v12 = 0;
      free(v11);
      return v12;
    }
  }
  while ( 1 )
  {
    v16 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v16 )
    {
      free(v11);
      return 0;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v16);
  }
  v20 = sub_C479C((int)v16, 0, (int)v47);
  free(v16);
  if ( !v20 )
  {
    v12 = 0;
    V_LOCK();
    logfmt_raw(v49, 0x1000u, 0, 1525596, v47[0], v48);
    V_UNLOCK();
    LOWORD(v29) = 17324;
    HIWORD(v29) = (unsigned int)"nonce" >> 16;
    zlog(g_zc, v29, 163, "stratum_authorize_grin29", 24, 875, 100, v49);
    free(v11);
    return v12;
  }
  v21 = (_DWORD *)json_object_get(v20, "result");
  v22 = json_object_get(v20, "error");
  LOWORD(v23) = 19068;
  v24 = (_DWORD *)v22;
  HIWORD(v23) = (unsigned int)"xnonce1" >> 16;
  v25 = (_DWORD *)json_object_get(v20, v23);
  if ( v25 && *v25 == 3 && v25[2] == 2 && (!v21 || *v21 == 6 || v24 && *v24 != 7) )
  {
    V_LOCK();
    LOWORD(v42) = 19580;
    HIWORD(v42) = (unsigned int)"ebug_seq_update_20210805_500M" >> 16;
    logfmt_raw(v49, 0x1000u, 0, v42);
    V_UNLOCK();
    LOWORD(v43) = 17324;
    HIWORD(v43) = (unsigned int)"nonce" >> 16;
    v12 = 0;
    zlog(g_zc, v43, 163, "stratum_authorize_grin29", 24, 885, 100, v49);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(a2 + 1024) )
  {
    if ( !rpc2_login_decode(v20, a2) )
    {
      v12 = 0;
      goto LABEL_21;
    }
    LOWORD(v30) = 19612;
    HIWORD(v30) = (unsigned int)"BM_debug_seq_16G_update_20210819_500M" >> 16;
    v31 = (_DWORD *)json_object_get(v21, v30);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
    if ( v31 )
      rpc2_job_decode(v31, a2);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
  }
  LOWORD(v32) = 19616;
  HIWORD(v32) = (unsigned int)"ebug_seq_16G_update_20210819_500M" >> 16;
  memcpy(v11, v32, 0x41u);
  v33 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( v33 )
  {
    v34 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v34 )
    {
      v35 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v36 = (void *)v35;
      if ( v35 )
      {
        v37 = sub_C479C(v35, 0, (int)v47);
        v38 = v37;
        if ( v37 )
        {
          v39 = json_object_get(v37, "id");
          if ( json_integer_value(v39) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v36) )
          {
            V_LOCK();
            LOWORD(v40) = 19724;
            HIWORD(v40) = (unsigned int)"enable_rx_equalizer_tuning_ext" >> 16;
            logfmt_raw(v49, 0x1000u, 0, v40);
            V_UNLOCK();
            LOWORD(v41) = 17324;
            HIWORD(v41) = (unsigned int)"nonce" >> 16;
            zlog(g_zc, v41, 163, "stratum_authorize_grin29", 24, 921, 80, v49);
          }
          if ( v38[1] != -1 )
            sub_84ED0(v38);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v49, 0x1000u, 0, 1525596, v47[0], v48);
          V_UNLOCK();
          LOWORD(v44) = 17324;
          HIWORD(v44) = (unsigned int)"nonce" >> 16;
          zlog(g_zc, v44, 163, "stratum_authorize_grin29", 24, 916, 80, v49);
        }
        v12 = v34;
        free(v36);
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v45) = 19684;
      HIWORD(v45) = (unsigned int)"_500M" >> 16;
      logfmt_raw(v49, 0x1000u, 0, v45);
      V_UNLOCK();
      LOWORD(v46) = 17324;
      HIWORD(v46) = (unsigned int)"nonce" >> 16;
      v12 = v33;
      zlog(g_zc, v46, 163, "stratum_authorize_grin29", 24, 908, 20, v49);
    }
  }
LABEL_21:
  free(v11);
  if ( v20[1] == -1 )
    return v12;
  v26 = v20 + 1;
  __dmb(0xBu);
  do
  {
    v27 = __ldrex(v26);
    v28 = v27 - 1;
  }
  while ( __strex(v28, v26) );
  if ( v28 )
    return v12;
  json_delete(v20);
  return v12;
}
