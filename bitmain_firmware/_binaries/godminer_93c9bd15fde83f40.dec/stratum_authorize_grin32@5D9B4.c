int __fastcall stratum_authorize_grin32(int a1, int a2)
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
  _DWORD *v26; // r0
  _DWORD *v27; // r10
  _BYTE *v28; // r0
  _BYTE *v29; // r11
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r1
  unsigned int *v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r2
  int v37; // r1
  char *v38; // r1
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r10
  int *v42; // r1
  int v43; // r3
  int *v44; // r2
  int v45; // r11
  int v46; // lr
  int v47; // r12
  int v48; // r0
  int v49; // r3
  int v50; // r1
  char *v51; // r1
  _DWORD *v52; // r6
  const void *v53; // r1
  int v54; // r6
  int v55; // r10
  int v56; // r0
  void *v57; // r6
  _DWORD *v58; // r0
  _DWORD *v59; // r8
  int v60; // r0
  int v61; // r3
  int v62; // r1
  int v63; // r3
  int v64; // r0
  int v65; // r2
  int v66; // r1
  int v67; // r3
  int v68; // r1
  int v69; // r3
  int v70; // r3
  int v71; // r3
  int v72; // r1
  int v73; // r3
  int v74; // r1
  _DWORD v75[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v76[160]; // [sp+70h] [bp-10A4h] BYREF
  char v77[4100]; // [sp+110h] [bp-1004h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = strlen(v5) + v6;
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
LABEL_11:
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
      v12 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v16);
  }
  v20 = sub_C479C((int)v16, 0, (int)v75);
  free(v16);
  if ( !v20 )
  {
    v12 = 0;
    V_LOCK();
    logfmt_raw(v77, 0x1000u, 0, 1525596, v75[0], v76);
    V_UNLOCK();
    LOWORD(v37) = 17132;
    HIWORD(v37) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
    zlog(g_zc, v37, 163, "stratum_authorize_grin32", 24, 868, 100, v77);
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
    LOWORD(v67) = 19580;
    HIWORD(v67) = (unsigned int)"ebug_seq_update_20210805_500M" >> 16;
    logfmt_raw(v77, 0x1000u, 0, v67);
    V_UNLOCK();
    LOWORD(v68) = 17132;
    HIWORD(v68) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
    v12 = 0;
    zlog(g_zc, v68, 163, "stratum_authorize_grin32", 24, 878, 100, v77);
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(a2 + 1024) )
    goto LABEL_38;
  v26 = (_DWORD *)json_object_get(v20, "result");
  v27 = v26;
  if ( !v26 )
  {
    V_LOCK();
    LOWORD(v63) = 17856;
    HIWORD(v63) = (unsigned int)" \"%s\"]}" >> 16;
    logfmt_raw(v77, 0x1000u, 0, v63);
    V_UNLOCK();
    v64 = g_zc;
    v65 = 89;
LABEL_49:
    LOWORD(v66) = 17132;
    HIWORD(v66) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
    zlog(v64, v66, 163, "rpc2_login_decode", 17, v65, 100, v77);
    goto LABEL_22;
  }
  v28 = json_string_value(v26);
  v29 = v28;
  if ( v28 )
  {
    if ( *v28 != 111 || v28[1] != 107 || v28[2] )
    {
      V_LOCK();
      LOWORD(v30) = 17904;
      HIWORD(v30) = (unsigned int)"\"getjobtemplate\", \"params\": null}" >> 16;
      logfmt_raw(v77, 0x1000u, 0, v30, v29);
      V_UNLOCK();
      LOWORD(v31) = 17132;
      HIWORD(v31) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
      zlog(g_zc, v31, 163, "rpc2_login_decode", 17, 100, 100, v77);
LABEL_22:
      v12 = 0;
      V_LOCK();
      LOWORD(v32) = 17984;
      HIWORD(v32) = (unsigned int)", \"method\": \"mining.extranonce.subscribe\", \"params\": []}" >> 16;
      logfmt_raw(v77, 0x1000u, 0, v32, "rpc2_login_decode");
      V_UNLOCK();
      LOWORD(v33) = 17132;
      HIWORD(v33) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
      zlog(g_zc, v33, 163, "rpc2_login_decode", 17, 141, 80, v77);
      goto LABEL_23;
    }
  }
  else if ( v27 != dword_1A24DC )
  {
    V_LOCK();
    LOWORD(v70) = 17876;
    HIWORD(v70) = (unsigned int)"\"jsonrpc\": \"2.0\", \"method\": \"getjobtemplate\", \"params\": null}" >> 16;
    logfmt_raw(v77, 0x1000u, 0, v70);
    V_UNLOCK();
    v64 = g_zc;
    v65 = 95;
    goto LABEL_49;
  }
  LOWORD(v38) = 19068;
  HIWORD(v38) = (unsigned int)"xnonce1" >> 16;
  v39 = (_DWORD *)json_object_get(v20, v38);
  if ( !v39 )
  {
    V_LOCK();
    LOWORD(v69) = 17932;
    HIWORD(v69) = (unsigned int)"null}" >> 16;
    logfmt_raw(v77, 0x1000u, 0, v69);
    V_UNLOCK();
    v64 = g_zc;
    v65 = 108;
    goto LABEL_49;
  }
  v40 = json_string_value(v39);
  v41 = v40;
  if ( !v40 )
  {
    V_LOCK();
    LOWORD(v71) = 17948;
    HIWORD(v71) = (unsigned int)"authentication failed" >> 16;
    logfmt_raw(v77, 0x1000u, 0, v71);
    V_UNLOCK();
    v64 = g_zc;
    v65 = 113;
    goto LABEL_49;
  }
  v42 = v40;
  v43 = a2 + 1052;
  v44 = v40 + 16;
  do
  {
    v45 = *v42;
    v42 += 4;
    v46 = *(v42 - 3);
    v43 += 16;
    v47 = *(v42 - 2);
    v48 = *(v42 - 1);
    *(_DWORD *)(v43 - 16) = v45;
    *(_DWORD *)(v43 - 12) = v46;
    *(_DWORD *)(v43 - 8) = v47;
    *(_DWORD *)(v43 - 4) = v48;
  }
  while ( v42 != v44 );
  V_LOCK();
  LOWORD(v49) = 17972;
  HIWORD(v49) = (unsigned int)"job" >> 16;
  logfmt_raw(v77, 0x1000u, 0, v49, v41);
  V_UNLOCK();
  LOWORD(v50) = 17132;
  HIWORD(v50) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
  zlog(g_zc, v50, 163, "rpc2_login_decode", 17, 119, 20, v77);
  LOWORD(v51) = 19612;
  HIWORD(v51) = (unsigned int)"BM_debug_seq_16G_update_20210819_500M" >> 16;
  v52 = (_DWORD *)json_object_get(v21, v51);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
  if ( v52 )
    sub_5D310(v52, a2);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
LABEL_38:
  LOWORD(v53) = 19616;
  HIWORD(v53) = (unsigned int)"ebug_seq_16G_update_20210819_500M" >> 16;
  memcpy(v11, v53, 0x41u);
  v54 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( v54 )
  {
    v55 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v55 )
    {
      v56 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v57 = (void *)v56;
      if ( v56 )
      {
        v58 = sub_C479C(v56, 0, (int)v75);
        v59 = v58;
        if ( v58 )
        {
          v60 = json_object_get(v58, "id");
          if ( json_integer_value(v60) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v57) )
          {
            V_LOCK();
            LOWORD(v61) = 19724;
            HIWORD(v61) = (unsigned int)"enable_rx_equalizer_tuning_ext" >> 16;
            logfmt_raw(v77, 0x1000u, 0, v61);
            V_UNLOCK();
            LOWORD(v62) = 17132;
            HIWORD(v62) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
            zlog(g_zc, v62, 163, "stratum_authorize_grin32", 24, 914, 80, v77);
          }
          if ( v59[1] != -1 )
            sub_84ED0(v59);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v77, 0x1000u, 0, 1525596, v75[0], v76);
          V_UNLOCK();
          LOWORD(v72) = 17132;
          HIWORD(v72) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
          zlog(g_zc, v72, 163, "stratum_authorize_grin32", 24, 909, 80, v77);
        }
        v12 = v55;
        free(v57);
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v73) = 19684;
      HIWORD(v73) = (unsigned int)"_500M" >> 16;
      logfmt_raw(v77, 0x1000u, 0, v73);
      V_UNLOCK();
      LOWORD(v74) = 17132;
      HIWORD(v74) = (unsigned int)"miner_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
      v12 = v54;
      zlog(g_zc, v74, 163, "stratum_authorize_grin32", 24, 901, 20, v77);
    }
  }
LABEL_23:
  free(v11);
  if ( v20[1] == -1 )
    return v12;
  v34 = v20 + 1;
  __dmb(0xBu);
  do
  {
    v35 = __ldrex(v34);
    v36 = v35 - 1;
  }
  while ( __strex(v36, v34) );
  if ( v36 )
    return v12;
  json_delete(v20);
  return v12;
}
