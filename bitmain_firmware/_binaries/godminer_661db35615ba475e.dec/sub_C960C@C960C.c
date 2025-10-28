int __fastcall sub_C960C(int a1, _DWORD *a2)
{
  int v2; // r5
  _DWORD *v5; // r7
  void *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  void *v9; // r0
  void *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r2
  int v14; // r9
  int v16; // r0
  _DWORD *v17; // r9
  _DWORD *v18; // r0
  int v19; // r10
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  const char *v23; // r0
  int v24; // r10
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  _BOOL4 v28; // r3
  _DWORD *v29; // [sp+1Ch] [bp-1108h]
  _DWORD v30[23]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v31[160]; // [sp+80h] [bp-10A4h] BYREF
  char v32[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = (const char *)a2[17];
    if ( v7 )
      v8 = strlen(v7) + 128;
    else
      v8 = 128;
    v9 = malloc(v8);
    v10 = v9;
    if ( v2 )
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
      v12 = 77;
    }
    else
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/1.0.0\", null]}";
      v12 = 76;
    }
    memcpy(v9, v11, v12);
    if ( !(*(int (__fastcall **)(_DWORD *, void *))(a1 + 16))(a2, v10) )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, "stratum_subscribe send failed");
      pthread_mutex_unlock(&stru_197BB8);
      v13 = 131;
LABEL_10:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_base.c",
        145,
        "stratum_subscribe_base",
        22,
        v13,
        100,
        v32);
LABEL_11:
      if ( !v10 )
      {
        if ( !v5 )
          goto LABEL_14;
        if ( v5[1] == -1 )
          goto LABEL_14;
        v25 = v5 + 1;
        __dmb(0xBu);
        do
        {
          v26 = __ldrex(v25);
          v27 = v26 - 1;
        }
        while ( __strex(v27, v25) );
        if ( v27 )
          goto LABEL_14;
        v14 = 0;
LABEL_48:
        json_delete(v5);
        goto LABEL_34;
      }
      free(v10);
      if ( !v5 )
        goto LABEL_14;
      v14 = 0;
      goto LABEL_30;
    }
    if ( !socket_full(a2[8], 30) )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, "stratum_subscribe timed out");
      pthread_mutex_unlock(&stru_197BB8);
      v13 = 136;
      goto LABEL_10;
    }
    v16 = (*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    v6 = (void *)v16;
    if ( !v16 )
      goto LABEL_11;
    v5 = json_loads(v16, 0, (int)v30);
    free(v6);
    if ( !v5 )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, "JSON decode failed(%d): %s", v30[0], v31);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_base.c",
        145,
        "stratum_subscribe_base",
        22,
        147,
        100,
        v32);
      if ( v10 )
        free(v10);
      goto LABEL_14;
    }
    v29 = (_DWORD *)json_object_get(v5, "result");
    v17 = (_DWORD *)json_object_get(v5, "error");
    v18 = (_DWORD *)json_object_get(v5, "id");
    v19 = (int)v18;
    if ( v18 )
    {
      if ( *v18 == 3 )
      {
        v19 = v18[2];
        v28 = v29 == 0;
        if ( v19 != 1 )
          v28 = 1;
        if ( !v28 )
        {
          if ( *v29 != 7 )
          {
            if ( !v17 || *v17 == 7 )
            {
              v14 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 64))(a1, a2);
              if ( v14 )
              {
                v23 = (const char *)a2[7];
                a2[322] = 2;
                if ( v23 )
                {
                  if ( strstr(v23, "nicehash") )
                  {
                    a2[322] = 3;
                    sprintf((char *)v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
                    v24 = (*(int (__fastcall **)(_DWORD *, void *))(a1 + 16))(a2, v10);
                    if ( v24 )
                    {
                      v14 = socket_full(a2[8], 30);
                      if ( v14 )
                        (*(void (__fastcall **)(_DWORD *))(a1 + 12))(a2);
                      else
                        v14 = v24;
                    }
LABEL_43:
                    free(v10);
                    goto LABEL_30;
                  }
                }
              }
              goto LABEL_29;
            }
            if ( !v2 )
            {
LABEL_28:
              v14 = 0;
              goto LABEL_29;
            }
            v19 = 1;
            goto LABEL_54;
          }
          v19 = 1;
        }
      }
      else
      {
        v19 = 0;
      }
    }
    if ( !v2 )
      goto LABEL_28;
    if ( !v17 )
    {
      v10 = malloc(0x11u);
      if ( v10 )
        strcpy((char *)v10, "(unknown reason)");
      goto LABEL_55;
    }
LABEL_54:
    v10 = json_dumps(v17, 3);
LABEL_55:
    v14 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v32, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v10, v19);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_subscribe_base",
      22,
      162,
      100,
      v32);
LABEL_29:
    if ( v10 )
      goto LABEL_43;
LABEL_30:
    if ( v5[1] != -1 )
    {
      v20 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v21 = __ldrex(v20);
        v22 = v21 - 1;
      }
      while ( __strex(v22, v20) );
      if ( !v22 )
        goto LABEL_48;
    }
LABEL_34:
    if ( v14 )
      return v14;
LABEL_14:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
