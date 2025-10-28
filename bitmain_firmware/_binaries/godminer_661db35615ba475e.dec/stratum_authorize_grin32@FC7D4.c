int __fastcall stratum_authorize_grin32(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r7
  int v9; // r8
  size_t v10; // r6
  size_t v11; // r0
  void *v12; // r6
  _DWORD *v14; // r9
  _DWORD *v15; // r6
  _DWORD *v16; // r10
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r10
  _BYTE *v20; // r0
  _BYTE *v21; // r11
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r10
  int *v28; // r1
  int v29; // r3
  int *v30; // r2
  int v31; // r11
  int v32; // lr
  int v33; // r12
  int v34; // r0
  _DWORD *v35; // r6
  int v36; // r6
  int v37; // r10
  int v38; // r0
  void *v39; // r6
  _DWORD *v40; // r0
  _DWORD *v41; // r8
  int v42; // r0
  int v43; // r0
  int v44; // r2
  _DWORD v45[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v46[160]; // [sp+70h] [bp-10A4h] BYREF
  char v47[4100]; // [sp+110h] [bp-1004h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = strlen(v5) + v6;
  if ( *(_BYTE *)(a2 + 1024) )
  {
    v8 = (char *)malloc(v7 + 300);
    sprintf(
      v8,
      "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"a"
      "gent\": \"%s\"}}",
      v2,
      v5,
      "GodMiner/1.0.0");
  }
  else
  {
    v8 = (char *)malloc(v7 + 80);
    sprintf(v8, "{\"id\": 2, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v2, v5);
  }
  v9 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( !v9 )
  {
LABEL_11:
    free(v8);
    return v9;
  }
  if ( *(_BYTE *)(a2 + 1024) )
  {
    v10 = strlen(*(const char **)(a2 + 12));
    v11 = strlen(*(const char **)(a2 + 16));
    memset(v8, 0, v10 + v11 + 300);
    strcpy(v8, "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"getjobtemplate\", \"params\": null}");
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8) )
    {
      v9 = 0;
      free(v8);
      return v9;
    }
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v12 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v14 = json_loads((int)v12, 0, (int)v45);
  free(v12);
  if ( !v14 )
  {
    v9 = 0;
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "JSON decode failed(%d): %s", v45[0], v46);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_authorize_grin32",
      24,
      868,
      100,
      v47);
    free(v8);
    return v9;
  }
  v15 = (_DWORD *)json_object_get(v14, "result");
  v16 = (_DWORD *)json_object_get(v14, "error");
  v17 = (_DWORD *)json_object_get(v14, "id");
  if ( v17 && *v17 == 3 && v17[2] == 2 && (!v15 || *v15 == 6 || v16 && *v16 != 7) )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "Stratum authentication failed");
    V_UNLOCK();
    v9 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_authorize_grin32",
      24,
      878,
      100,
      v47);
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(a2 + 1024) )
    goto LABEL_38;
  v18 = (_DWORD *)json_object_get(v14, "result");
  v19 = v18;
  if ( !v18 )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "JSON invalid result");
    V_UNLOCK();
    v43 = g_zc;
    v44 = 89;
LABEL_49:
    zlog(
      v43,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_login_decode",
      17,
      v44,
      100,
      v47);
    goto LABEL_22;
  }
  v20 = json_string_value(v18);
  v21 = v20;
  if ( v20 )
  {
    if ( *v20 != 111 || v20[1] != 107 || v20[2] )
    {
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "JSON returned status \"%s\"", v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "rpc2_login_decode",
        17,
        100,
        100,
        v47);
LABEL_22:
      v9 = 0;
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "%s: fail", "rpc2_login_decode");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "rpc2_login_decode",
        17,
        141,
        80,
        v47);
      goto LABEL_23;
    }
  }
  else if ( v19 != dword_190774 )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "JSON returned status false");
    V_UNLOCK();
    v43 = g_zc;
    v44 = 95;
    goto LABEL_49;
  }
  v25 = (_DWORD *)json_object_get(v14, "id");
  if ( !v25 )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "JSON inval id");
    V_UNLOCK();
    v43 = g_zc;
    v44 = 108;
    goto LABEL_49;
  }
  v26 = json_string_value(v25);
  v27 = v26;
  if ( !v26 )
  {
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "JSON id is not a string");
    V_UNLOCK();
    v43 = g_zc;
    v44 = 113;
    goto LABEL_49;
  }
  v28 = v26;
  v29 = a2 + 1052;
  v30 = v26 + 16;
  do
  {
    v31 = *v28;
    v28 += 4;
    v32 = *(v28 - 3);
    v29 += 16;
    v33 = *(v28 - 2);
    v34 = *(v28 - 1);
    *(_DWORD *)(v29 - 16) = v31;
    *(_DWORD *)(v29 - 12) = v32;
    *(_DWORD *)(v29 - 8) = v33;
    *(_DWORD *)(v29 - 4) = v34;
  }
  while ( v28 != v30 );
  V_LOCK();
  logfmt_raw(v47, 0x1000u, 0, "Auth id: %s", v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "rpc2_login_decode",
    17,
    119,
    20,
    v47);
  v35 = (_DWORD *)json_object_get(v15, "job");
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
  if ( v35 )
    sub_F944C(v35, a2);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
LABEL_38:
  strcpy(v8, "{\"id\": 3, \"method\": \"mining.extranonce.subscribe\", \"params\": []}");
  v36 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( v36 )
  {
    v37 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v37 )
    {
      v38 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v39 = (void *)v38;
      if ( v38 )
      {
        v40 = json_loads(v38, 0, (int)v45);
        v41 = v40;
        if ( v40 )
        {
          v42 = json_object_get(v40, "id");
          if ( json_integer_value(v42) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v39) )
          {
            V_LOCK();
            logfmt_raw(v47, 0x1000u, 0, "Stratum answer id is not correct!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin32/frontend_grin32.c",
              163,
              "stratum_authorize_grin32",
              24,
              914,
              80,
              v47);
          }
          if ( v41[1] != -1 )
            sub_F8BC0(v41);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v47, 0x1000u, 0, "JSON decode failed(%d): %s", v45[0], v46);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "stratum_authorize_grin32",
            24,
            909,
            80,
            v47);
        }
        v9 = v37;
        free(v39);
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "stratum extranonce subscribe timed out");
      V_UNLOCK();
      v9 = v36;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "stratum_authorize_grin32",
        24,
        901,
        20,
        v47);
    }
  }
LABEL_23:
  free(v8);
  if ( v14[1] == -1 )
    return v9;
  v22 = v14 + 1;
  __dmb(0xBu);
  do
  {
    v23 = __ldrex(v22);
    v24 = v23 - 1;
  }
  while ( __strex(v24, v22) );
  if ( v24 )
    return v9;
  json_delete(v14);
  return v9;
}
