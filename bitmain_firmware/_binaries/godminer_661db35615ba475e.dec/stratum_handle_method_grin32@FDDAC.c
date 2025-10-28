unsigned int __fastcall stratum_handle_method_grin32(int a1, int a2, char arg)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  const char *v7; // r8
  int *v8; // r7
  unsigned int v9; // r5
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  _DWORD *v14; // r9
  int v15; // r10
  _DWORD *v16; // r5
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r7
  unsigned int *v20; // r3
  unsigned int v21; // r2
  char *v22; // r8
  _DWORD *v23; // r0
  double v24; // d8
  int v25; // r0
  const char *v26; // r1
  _BOOL4 v27; // r0
  int v28; // r9
  int v29; // r11
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  unsigned int v33; // r1
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  const char *v36; // r3
  int v37; // r2
  int v38; // r2
  _DWORD *v39; // r0
  char *v40; // r8
  _DWORD *v41; // r0
  int v42; // r0
  int v43; // r7
  void *v44; // r0
  size_t v45; // r9
  void *v46; // r0
  int v47; // r12
  int v48; // r2
  int v49; // r0
  const char *v50; // r3
  _DWORD *v51; // r0
  const char *v52; // r8
  _DWORD *v53; // r0
  int v54; // r7
  _BOOL4 v55; // r5
  size_t v56; // r0
  char *v57; // r9
  void *v58; // r0
  _DWORD *v59; // r0
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  int *v62; // r0
  int v63; // r2
  bool v64; // zf
  bool v65; // zf
  signed int v66; // r7
  int v67; // r1
  const char *v68; // r0
  char *v69; // r0
  _DWORD *v70; // r3
  _DWORD *v71; // r10
  _DWORD *v72; // r0
  const char *v73; // r0
  unsigned __int8 *v74; // r4
  void *v75; // r0
  char *i; // r7
  void *v77; // r0
  void *v78; // t1
  signed int v79; // r10
  size_t v80; // r7
  size_t v81; // r8
  void *v82; // r0
  size_t v83; // r1
  char *v84; // r0
  int v85; // r12
  const char *v86; // r0
  void *v87; // r0
  int v88; // r7
  int v89; // r0
  _DWORD *v90; // r2
  int v91; // r3
  void *v92; // r1
  signed int v93; // r3
  void *v94; // r2
  unsigned int v95; // [sp+10h] [bp-117Ch]
  unsigned __int8 *v96; // [sp+10h] [bp-117Ch]
  unsigned __int8 *v97; // [sp+14h] [bp-1178h]
  char *s2; // [sp+18h] [bp-1174h]
  unsigned __int8 *v99; // [sp+1Ch] [bp-1170h]
  int v100; // [sp+20h] [bp-116Ch]
  char *v101; // [sp+24h] [bp-1168h]
  char *v102; // [sp+28h] [bp-1164h]
  unsigned int v103; // [sp+2Ch] [bp-1160h]
  unsigned __int8 *v104; // [sp+2Ch] [bp-1160h]
  unsigned __int8 *v105; // [sp+30h] [bp-115Ch]
  _DWORD *ptr; // [sp+34h] [bp-1158h]
  char *ptra; // [sp+34h] [bp-1158h]
  _DWORD *v108; // [sp+38h] [bp-1154h]
  signed int v109; // [sp+3Ch] [bp-1150h]
  char s[64]; // [sp+4Ch] [bp-1140h] BYREF
  int v111[23]; // [sp+8Ch] [bp-1100h] BYREF
  char v112[160]; // [sp+E8h] [bp-10A4h] BYREF
  char v113[4100]; // [sp+188h] [bp-1004h] BYREF

  v4 = json_loads(arg, 0, (int)v111);
  v5 = v4;
  if ( !v4 )
  {
    v9 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v113, 0x1000u, 0, "JSON decode failed(%d): %s", v111[0], v112);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      739,
      100,
      v113);
    return v9;
  }
  v6 = (_DWORD *)json_object_get(v4, "method");
  if ( !v6 )
    goto LABEL_13;
  if ( *v6 != 2 )
    goto LABEL_13;
  v7 = (const char *)v6[2];
  if ( !v7 )
    goto LABEL_13;
  v8 = (int *)json_object_get(v5, "params");
  if ( !v8 )
    v8 = (int *)json_object_get(v5, "result");
  v9 = *(unsigned __int8 *)(a2 + 1024);
  if ( *(_BYTE *)(a2 + 1024) )
  {
    if ( !strcasecmp(v7, "getjobtemplate") || !strcasecmp(v7, "job") )
    {
      v9 = sub_F944C(v8, a2);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
      if ( v9 )
      {
        *(_BYTE *)(a2 + 1284) = 1;
        pthread_cond_broadcast((pthread_cond_t *)(a2 + 1224));
      }
      else
      {
        *(_BYTE *)(a2 + 1284) = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v14 = (_DWORD *)json_object_get(v5, "id");
  if ( !strcasecmp(v7, "mining.notify") )
  {
    memset(s, 0, sizeof(s));
    snprintf(s, 0x40u, "%s", *(const char **)&aNoncePopHandle_3[4 * opt_algo + 728]);
    v25 = strcmp(s, "lbry");
    LOWORD(v26) = (unsigned __int16)"phi2";
    v27 = v25 != 0;
    if ( !v8 )
      v27 = 1;
    HIWORD(v26) = (unsigned int)"phi2" >> 16;
    if ( v27 )
    {
      v28 = strcmp(s, v26);
    }
    else
    {
      v49 = strcmp(s, v26);
      v28 = v49;
      if ( *v8 == 1 )
      {
        v38 = v8[3];
        if ( v38 == 10 )
        {
          v29 = *v8;
          if ( !v49 )
            goto LABEL_89;
          v28 = 0;
          goto LABEL_56;
        }
      }
    }
    if ( v28 )
    {
      v28 = 0;
      v29 = 0;
      goto LABEL_56;
    }
    if ( !v8 )
    {
      v29 = 0;
      goto LABEL_56;
    }
    v29 = 0;
    if ( *v8 == 1 )
    {
      v38 = v8[3];
LABEL_89:
      v28 = v38 == 10;
    }
LABEL_56:
    v30 = json_array_get(v8, 0);
    if ( v30 )
    {
      if ( *v30 == 2 )
        s2 = (char *)v30[2];
      else
        s2 = 0;
    }
    else
    {
      s2 = 0;
    }
    v31 = json_array_get(v8, 1u);
    if ( v31 )
    {
      if ( *v31 == 2 )
        v97 = (unsigned __int8 *)v31[2];
      else
        v97 = 0;
    }
    else
    {
      v97 = 0;
    }
    v32 = json_array_get(v8, 2u);
    if ( v29 )
    {
      if ( !v32 || *v32 != 2 || (v36 = (const char *)v32[2], (v99 = (unsigned __int8 *)v36) == 0) || strlen(v36) != 64 )
      {
        V_LOCK();
        logfmt_raw(v113, 0x1000u, 0, "Stratum notify: invalid claim parameter");
        V_UNLOCK();
        v37 = 192;
        goto LABEL_84;
      }
    }
    else
    {
      if ( !v28 )
      {
        v33 = 3;
        v95 = 4;
        v103 = 5;
        v100 = 2;
        v99 = 0;
LABEL_65:
        if ( v32 )
        {
          if ( *v32 == 2 )
            v102 = (char *)v32[2];
          else
            v102 = 0;
        }
        else
        {
          v102 = 0;
        }
        v34 = json_array_get(v8, v33);
        if ( v34 )
        {
          if ( *v34 == 2 )
            v101 = (char *)v34[2];
          else
            v101 = 0;
        }
        else
        {
          v101 = 0;
        }
        v35 = json_array_get(v8, v95);
        if ( !v35 || *v35 != 1 )
          goto LABEL_73;
        ptr = v35;
        v59 = json_array_get(v8, v103);
        v96 = (unsigned __int8 *)json_string_value(v59);
        v60 = json_array_get(v8, v100 + 4);
        v104 = (unsigned __int8 *)json_string_value(v60);
        v61 = json_array_get(v8, v100 + 5);
        v105 = (unsigned __int8 *)json_string_value(v61);
        v62 = json_array_get(v8, v100 + 6);
        if ( v62 )
          v63 = *v62;
        else
          LOBYTE(v100) = 0;
        if ( v62 )
          LOBYTE(v100) = v63 == 5;
        v64 = v97 == 0;
        if ( v97 )
          v64 = s2 == 0;
        if ( !v64 )
        {
          v65 = v101 == 0;
          if ( v101 )
            v65 = v102 == 0;
          if ( !v65 )
          {
            if ( v96 )
              v66 = v104 == 0;
            else
              v66 = 1;
            if ( !v105 )
              v66 = 1;
            if ( !v66
              && strlen((const char *)v97) == 64
              && strlen((const char *)v96) == 8
              && strlen((const char *)v104) == 8
              && strlen((const char *)v105) == 8 )
            {
              v109 = ptr[3];
              v69 = (char *)malloc(4 * v109);
              v70 = ptr;
              ptra = v69;
              v71 = v70;
              v108 = v5;
              while ( v109 > v66 )
              {
                v72 = json_array_get(v71, v66);
                v73 = (const char *)json_string_value(v72);
                v74 = (unsigned __int8 *)v73;
                if ( !v73 || strlen(v73) != 64 )
                {
                  v5 = v108;
                  for ( i = &ptra[4 * v66]; ptra != i; i -= 4 )
                  {
                    v78 = (void *)*((_DWORD *)i - 1);
                    v77 = v78;
                    if ( v78 )
                      free(v77);
                  }
                  if ( ptra )
                    free(ptra);
                  V_LOCK();
                  logfmt_raw(v113, 0x1000u, 0, "Stratum notify: invalid Merkle branch");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/frontend/frontend_grin32/frontend_grin32.c",
                    163,
                    "stratum_notify",
                    14,
                    228,
                    100,
                    v113);
                  goto LABEL_73;
                }
                v75 = malloc(0x20u);
                *(_DWORD *)&ptra[4 * v66++] = v75;
                hex2bin((int)v75, v74, 32);
              }
              v79 = 0;
              v5 = v108;
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
              v80 = strlen(v102) >> 1;
              v81 = strlen(v101) >> 1;
              v82 = *(void **)(a2 + 292);
              v83 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v80 + v81;
              *(_DWORD *)(a2 + 288) = v83;
              v84 = (char *)realloc(v82, v83);
              v85 = *(_DWORD *)(a2 + 72);
              *(_DWORD *)(a2 + 292) = v84;
              *(_DWORD *)(a2 + 296) = &v84[v80 + v85];
              hex2bin((int)v84, (unsigned __int8 *)v102, v80);
              memcpy((void *)(*(_DWORD *)(a2 + 292) + v80), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
              v86 = *(const char **)(a2 + 88);
              if ( !v86 || strcmp(v86, s2) )
                memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
              hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v101, v81);
              v87 = *(void **)(a2 + 88);
              if ( v87 )
                free(v87);
              *(_DWORD *)(a2 + 88) = _strdup(s2);
              hex2bin(a2 + 92, v97, 32);
              if ( v29 )
                hex2bin(a2 + 360, v99, 32);
              if ( v28 )
                hex2bin(a2 + 360, v99, 64);
              v88 = 0;
              v89 = sub_1FD8C(*(_DWORD *)(a2 + 292));
              v90 = *(_DWORD **)(a2 + 320);
              v91 = *(_DWORD *)(a2 + 316);
              *(_DWORD *)(a2 + 1012) = v89;
              while ( v88 < v91 )
              {
                v92 = (void *)v90[v88++];
                if ( v92 )
                {
                  free(v92);
                  v90 = *(_DWORD **)(a2 + 320);
                  v91 = *(_DWORD *)(a2 + 316);
                }
              }
              if ( v90 )
                free(v90);
              *(_DWORD *)(a2 + 320) = ptra;
              v93 = v109;
              *(_DWORD *)(a2 + 316) = v109;
              while ( v79 < v93 )
              {
                v94 = *(void **)&ptra[4 * v79++];
                if ( v94 )
                {
                  free(v94);
                  v93 = *(_DWORD *)(a2 + 316);
                }
              }
              if ( ptra )
                free(ptra);
              hex2bin(a2 + 324, v96, 4);
              hex2bin(a2 + 336, v104, 4);
              hex2bin(a2 + 348, v105, 4);
              v9 = 1;
              *(_BYTE *)(a2 + 424) = v100;
              *(_QWORD *)(a2 + 432) = *(_QWORD *)(a2 + 1176);
              pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
              *(_BYTE *)(a2 + 1284) = 1;
              pthread_cond_broadcast((pthread_cond_t *)(a2 + 1224));
              pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
              goto LABEL_14;
            }
          }
        }
        V_LOCK();
        logfmt_raw(v113, 0x1000u, 0, "Stratum notify: invalid parameters");
        V_UNLOCK();
        v37 = 217;
LABEL_84:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_notify",
          14,
          v37,
          100,
          v113);
LABEL_73:
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
        *(_BYTE *)(a2 + 1284) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
        goto LABEL_14;
      }
      if ( !v32 || *v32 != 2 || (v50 = (const char *)v32[2], (v99 = (unsigned __int8 *)v50) == 0) || strlen(v50) != 128 )
      {
        V_LOCK();
        logfmt_raw(v113, 0x1000u, 0, "Stratum notify: invalid UTXO root parameter");
        V_UNLOCK();
        v37 = 199;
        goto LABEL_84;
      }
    }
    v32 = json_array_get(v8, 3u);
    v33 = 4;
    v95 = 5;
    v103 = 6;
    v100 = 3;
    goto LABEL_65;
  }
  v15 = strcasecmp(v7, "mining.ping");
  if ( !v15 )
  {
    V_LOCK();
    logfmt_raw(v113, 0x1000u, 0, "Pool ping");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      775,
      20,
      v113);
    if ( v14 && *v14 != 7 )
    {
      if ( *v14 == 3 )
        v15 = v14[2];
      sprintf(v113, "{\"id\":%d,\"result\":\"pong\",\"error\":null}", v15);
      v9 = stratum_send_line((int *)a2, v113);
    }
    goto LABEL_14;
  }
  if ( !strcasecmp(v7, "mining.set_difficulty") )
  {
    v23 = json_array_get(v8, 0);
    if ( v23 )
    {
      if ( *v23 == 3 )
      {
        LODWORD(v24) = sub_15D994(*((_QWORD *)v23 + 1));
        HIDWORD(v24) = v67;
LABEL_47:
        if ( v24 != 0.0 )
        {
          v9 = 1;
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
          *(double *)(a2 + 1176) = v24;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      if ( *v23 == 4 )
      {
        v24 = *((double *)v23 + 1);
        goto LABEL_47;
      }
    }
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  if ( strcasecmp(v7, "mining.set_extranonce") )
  {
    if ( strcasecmp(v7, "client.reconnect") )
    {
      if ( !strcasecmp(v7, "client.get_algo") )
      {
        V_LOCK();
        logfmt_raw(v113, 0x1000u, v9, "Pool asked your algo parameter");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_handle_method_grin32",
          28,
          793,
          60,
          v113);
        v9 = (unsigned int)sub_FD9BC((int *)a2, v14);
      }
      else if ( !strcasecmp(v7, "client.get_stats") )
      {
        v9 = (unsigned int)sub_FD614(a2, v14);
      }
      else if ( !strcasecmp(v7, "client.get_version") )
      {
        v9 = (unsigned int)sub_FDB1C((int *)a2, v14);
      }
      else if ( !strcasecmp(v7, "client.show_message") )
      {
        v16 = json_array_get(v8, 0);
        if ( v16 )
        {
          V_LOCK();
          v17 = json_string_value(v16);
          logfmt_raw(v113, 0x1000u, 0, "MESSAGE FROM SERVER: %s", v17);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "stratum_show_message",
            20,
            693,
            60,
            v113);
        }
        if ( !v14 || *v14 == 7 )
        {
          v9 = 1;
        }
        else
        {
          v18 = json_object();
          v19 = v18;
          if ( v14[1] != -1 )
          {
            v20 = v14 + 1;
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 + 1, v20) );
            __dmb(0xBu);
          }
          json_object_set_new(v18, "id", v14);
          json_object_set_new(v19, "error", dword_190784);
          json_object_set_new(v19, "result", dword_190774);
          v22 = json_dumps(v19, 0);
          v9 = stratum_send_line((int *)a2, v22);
          if ( v19 && v19[1] != -1 )
            sub_F8BC0(v19);
          free(v22);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v113, 0x1000u, 0, "unknown stratum method %s!", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_handle_method_grin32",
          28,
          813,
          80,
          v113);
        v9 = (unsigned int)sub_FDC34((int *)a2, v14);
      }
      goto LABEL_14;
    }
    v51 = json_array_get(v8, 0);
    v52 = (const char *)json_string_value(v51);
    v53 = json_array_get(v8, 1u);
    if ( v53 && *v53 == 2 )
    {
      v68 = (const char *)json_string_value(v53);
      v54 = strtol(v68, 0, 10);
    }
    else
    {
      v54 = json_integer_value((int)v53);
    }
    if ( v52 )
      v55 = v54 == 0;
    else
      v55 = 1;
    if ( !v55 )
    {
      v56 = strlen(v52);
      v57 = (char *)malloc(v56 + 32);
      sprintf(v57, "stratum+tcp://%s:%d", v52, v54);
      V_LOCK();
      logfmt_raw(v113, 0x1000u, 0, "Server requested reconnection to %s", v57);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "stratum_reconnect",
        17,
        469,
        60,
        v113);
      v58 = *(void **)(a2 + 28);
      if ( v58 )
        free(v58);
      *(_DWORD *)(a2 + 28) = v57;
      free(v57);
      v9 = 1;
      stratum_disconnect((int *)a2);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v39 = json_array_get(v8, v9);
  v40 = (char *)json_string_value(v39);
  if ( v40 )
  {
    v41 = json_array_get(v8, 1u);
    v42 = json_integer_value((int)v41);
    v43 = v42;
    if ( v42 )
    {
      if ( (unsigned int)(v42 - 2) > 0xE )
      {
        V_LOCK();
        logfmt_raw(v113, 0x1000u, v9, "Failed to get valid n2size in parse_extranonce");
        V_UNLOCK();
        v47 = 40;
        v48 = 324;
      }
      else
      {
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
        v44 = *(void **)(a2 + 76);
        if ( v44 )
          free(v44);
        v45 = strlen(v40) >> 1;
        *(_DWORD *)(a2 + 72) = v45;
        v46 = calloc(1u, v45);
        *(_DWORD *)(a2 + 76) = v46;
        if ( !v46 )
        {
          V_LOCK();
          logfmt_raw(v113, 0x1000u, 0, "Failed to alloc xnonce1");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "stratum_parse_extranonce",
            24,
            333,
            100,
            v113);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
          goto LABEL_14;
        }
        hex2bin((int)v46, (unsigned __int8 *)v40, v45);
        *(_DWORD *)(a2 + 80) = v43;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
        v9 = 1;
        V_LOCK();
        logfmt_raw(v113, 0x1000u, 0, "Stratum set nonce %s with extranonce2 size=%d", v40, v43);
        V_UNLOCK();
        v47 = 20;
        v48 = 343;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v113, 0x1000u, v9, "Failed to get extranonce2_size");
      V_UNLOCK();
      v47 = 100;
      v48 = 320;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v113, 0x1000u, v9, "Failed to get extranonce1");
    V_UNLOCK();
    v47 = 100;
    v48 = 315;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "stratum_parse_extranonce",
    24,
    v48,
    v47,
    v113);
LABEL_14:
  if ( v5[1] != -1 )
  {
    v10 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v11 = __ldrex(v10);
      v12 = v11 - 1;
    }
    while ( __strex(v12, v10) );
    if ( !v12 )
      json_delete(v5);
  }
  return v9;
}
