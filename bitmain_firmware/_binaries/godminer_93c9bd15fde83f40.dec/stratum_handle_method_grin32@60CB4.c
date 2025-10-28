unsigned int __fastcall stratum_handle_method_grin32(int a1, int a2, int a3)
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
  char *v32; // r0
  char *v33; // r3
  unsigned int v34; // r1
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  const char *v37; // r3
  int v38; // r2
  int v39; // r2
  _DWORD *v40; // r0
  char *v41; // r8
  _DWORD *v42; // r0
  int v43; // r0
  int v44; // r7
  void *v45; // r0
  size_t v46; // r9
  void *v47; // r0
  int v48; // r12
  int v49; // r2
  int v50; // r0
  const char *v51; // r0
  _DWORD *v52; // r0
  const char *v53; // r8
  _DWORD *v54; // r0
  int v55; // r7
  _BOOL4 v56; // r5
  size_t v57; // r0
  char *v58; // r9
  void *v59; // r0
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  _DWORD *v62; // r0
  int *v63; // r0
  int v64; // r2
  bool v65; // zf
  bool v66; // zf
  signed int v67; // r7
  int v68; // r1
  const char *v69; // r0
  char *v70; // r0
  _DWORD *v71; // r3
  _DWORD *v72; // r10
  _DWORD *v73; // r0
  const char *v74; // r0
  unsigned __int8 *v75; // r4
  void *v76; // r0
  char *i; // r7
  void *v78; // r0
  void *v79; // t1
  signed int v80; // r10
  size_t v81; // r7
  size_t v82; // r8
  void *v83; // r0
  size_t v84; // r1
  char *v85; // r0
  int v86; // r12
  const char *v87; // r0
  void *v88; // r0
  int v89; // r7
  int v90; // r0
  _DWORD *v91; // r2
  int v92; // r3
  void *v93; // r1
  signed int v94; // r3
  void *v95; // r2
  unsigned int v96; // [sp+10h] [bp-117Ch]
  unsigned __int8 *v97; // [sp+10h] [bp-117Ch]
  unsigned __int8 *v98; // [sp+14h] [bp-1178h]
  char *s2; // [sp+18h] [bp-1174h]
  unsigned __int8 *v100; // [sp+1Ch] [bp-1170h]
  int v101; // [sp+20h] [bp-116Ch]
  char *v102; // [sp+24h] [bp-1168h]
  char *v103; // [sp+28h] [bp-1164h]
  unsigned int v104; // [sp+2Ch] [bp-1160h]
  unsigned __int8 *v105; // [sp+2Ch] [bp-1160h]
  unsigned __int8 *v106; // [sp+30h] [bp-115Ch]
  _DWORD *ptr; // [sp+34h] [bp-1158h]
  char *ptra; // [sp+34h] [bp-1158h]
  _DWORD *v109; // [sp+38h] [bp-1154h]
  signed int v110; // [sp+3Ch] [bp-1150h]
  char s[64]; // [sp+4Ch] [bp-1140h] BYREF
  int v112[23]; // [sp+8Ch] [bp-1100h] BYREF
  char v113[160]; // [sp+E8h] [bp-10A4h] BYREF
  char v114[4100]; // [sp+188h] [bp-1004h] BYREF

  v4 = sub_C479C(a3, 0, (int)v112);
  v5 = v4;
  if ( !v4 )
  {
    v9 = 0;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v114, 0x1000u, 0, "JSON decode failed(%d): %s", v112[0], v113);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      739,
      100,
      v114);
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
      v9 = sub_5D310(v8, a2);
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
    snprintf(s, 0x40u, "%s", off_176C30[opt_algo]);
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
      v50 = strcmp(s, v26);
      v28 = v50;
      if ( *v8 == 1 )
      {
        v39 = v8[3];
        if ( v39 == 10 )
        {
          v29 = *v8;
          if ( !v50 )
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
      v39 = v8[3];
LABEL_89:
      v28 = v39 == 10;
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
        v98 = (unsigned __int8 *)v31[2];
      else
        v98 = 0;
    }
    else
    {
      v98 = 0;
    }
    v32 = (char *)json_array_get(v8, 2u);
    v33 = v32;
    if ( v29 )
    {
      if ( !v32
        || *(_DWORD *)v32 != 2
        || (v37 = (const char *)*((_DWORD *)v32 + 2), (v100 = (unsigned __int8 *)v37) == 0)
        || strlen(v37) != 64 )
      {
        V_LOCK();
        logfmt_raw(v114, 0x1000u, 0, "Stratum notify: invalid claim parameter");
        V_UNLOCK();
        v38 = 192;
        goto LABEL_84;
      }
    }
    else
    {
      if ( !v28 )
      {
        v34 = 3;
        v96 = 4;
        v104 = 5;
        v101 = 2;
        v100 = 0;
        goto LABEL_65;
      }
      v51 = (const char *)json_string_value(v32);
      v100 = (unsigned __int8 *)v51;
      if ( !v51 || strlen(v51) != 128 )
      {
        V_LOCK();
        logfmt_raw(v114, 0x1000u, 0, "Stratum notify: invalid UTXO root parameter");
        V_UNLOCK();
        v38 = 199;
        goto LABEL_84;
      }
    }
    v33 = (char *)json_array_get(v8, 3u);
    v96 = 5;
    v104 = 6;
    v34 = 4;
    v101 = 3;
LABEL_65:
    if ( v33 )
    {
      if ( *(_DWORD *)v33 == 2 )
      {
        v103 = (char *)*((_DWORD *)v33 + 2);
LABEL_68:
        v35 = json_array_get(v8, v34);
        if ( v35 )
        {
          if ( *v35 == 2 )
            v102 = (char *)v35[2];
          else
            v102 = 0;
        }
        else
        {
          v102 = 0;
        }
        v36 = json_array_get(v8, v96);
        if ( !v36 || *v36 != 1 )
          goto LABEL_73;
        ptr = v36;
        v60 = json_array_get(v8, v104);
        v97 = (unsigned __int8 *)json_string_value(v60);
        v61 = json_array_get(v8, v101 + 4);
        v105 = (unsigned __int8 *)json_string_value(v61);
        v62 = json_array_get(v8, v101 + 5);
        v106 = (unsigned __int8 *)json_string_value(v62);
        v63 = json_array_get(v8, v101 + 6);
        if ( v63 )
          v64 = *v63;
        else
          LOBYTE(v101) = 0;
        if ( v63 )
          LOBYTE(v101) = v64 == 5;
        v65 = v98 == 0;
        if ( v98 )
          v65 = s2 == 0;
        if ( !v65 )
        {
          v66 = v102 == 0;
          if ( v102 )
            v66 = v103 == 0;
          if ( !v66 )
          {
            if ( v97 )
              v67 = v105 == 0;
            else
              v67 = 1;
            if ( !v106 )
              v67 = 1;
            if ( !v67
              && strlen((const char *)v98) == 64
              && strlen((const char *)v97) == 8
              && strlen((const char *)v105) == 8
              && strlen((const char *)v106) == 8 )
            {
              v110 = ptr[3];
              v70 = (char *)malloc(4 * v110);
              v71 = ptr;
              ptra = v70;
              v72 = v71;
              v109 = v5;
              while ( v110 > v67 )
              {
                v73 = json_array_get(v72, v67);
                v74 = (const char *)json_string_value(v73);
                v75 = (unsigned __int8 *)v74;
                if ( !v74 || strlen(v74) != 64 )
                {
                  v5 = v109;
                  for ( i = &ptra[4 * v67]; ptra != i; i -= 4 )
                  {
                    v79 = (void *)*((_DWORD *)i - 1);
                    v78 = v79;
                    if ( v79 )
                      free(v78);
                  }
                  if ( ptra )
                    free(ptra);
                  V_LOCK();
                  logfmt_raw(v114, 0x1000u, 0, "Stratum notify: invalid Merkle branch");
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
                    v114);
                  goto LABEL_73;
                }
                v76 = malloc(0x20u);
                *(_DWORD *)&ptra[4 * v67++] = v76;
                hex2bin((int)v76, v75, 32);
              }
              v80 = 0;
              v5 = v109;
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
              v81 = strlen(v103) >> 1;
              v82 = strlen(v102) >> 1;
              v83 = *(void **)(a2 + 292);
              v84 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v81 + v82;
              *(_DWORD *)(a2 + 288) = v84;
              v85 = (char *)realloc(v83, v84);
              v86 = *(_DWORD *)(a2 + 72);
              *(_DWORD *)(a2 + 292) = v85;
              *(_DWORD *)(a2 + 296) = &v85[v81 + v86];
              hex2bin((int)v85, (unsigned __int8 *)v103, v81);
              memcpy((void *)(*(_DWORD *)(a2 + 292) + v81), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
              v87 = *(const char **)(a2 + 88);
              if ( !v87 || strcmp(v87, s2) )
                memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
              hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v102, v82);
              v88 = *(void **)(a2 + 88);
              if ( v88 )
                free(v88);
              *(_DWORD *)(a2 + 88) = _strdup(s2);
              hex2bin(a2 + 92, v98, 32);
              if ( v29 )
                hex2bin(a2 + 360, v100, 32);
              if ( v28 )
                hex2bin(a2 + 360, v100, 64);
              v89 = 0;
              v90 = sub_20CA8(*(_DWORD *)(a2 + 292));
              v91 = *(_DWORD **)(a2 + 320);
              v92 = *(_DWORD *)(a2 + 316);
              *(_DWORD *)(a2 + 1012) = v90;
              while ( v89 < v92 )
              {
                v93 = (void *)v91[v89++];
                if ( v93 )
                {
                  free(v93);
                  v91 = *(_DWORD **)(a2 + 320);
                  v92 = *(_DWORD *)(a2 + 316);
                }
              }
              if ( v91 )
                free(v91);
              *(_DWORD *)(a2 + 320) = ptra;
              v94 = v110;
              *(_DWORD *)(a2 + 316) = v110;
              while ( v80 < v94 )
              {
                v95 = *(void **)&ptra[4 * v80++];
                if ( v95 )
                {
                  free(v95);
                  v94 = *(_DWORD *)(a2 + 316);
                }
              }
              if ( ptra )
                free(ptra);
              hex2bin(a2 + 324, v97, 4);
              hex2bin(a2 + 336, v105, 4);
              hex2bin(a2 + 348, v106, 4);
              v9 = 1;
              *(_BYTE *)(a2 + 424) = v101;
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
        logfmt_raw(v114, 0x1000u, 0, "Stratum notify: invalid parameters");
        V_UNLOCK();
        v38 = 217;
LABEL_84:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_notify",
          14,
          v38,
          100,
          v114);
LABEL_73:
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
        *(_BYTE *)(a2 + 1284) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
        goto LABEL_14;
      }
      v33 = 0;
    }
    v103 = v33;
    goto LABEL_68;
  }
  v15 = strcasecmp(v7, "mining.ping");
  if ( !v15 )
  {
    V_LOCK();
    logfmt_raw(v114, 0x1000u, 0, "Pool ping");
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
      v114);
    if ( v14 && *v14 != 7 )
    {
      if ( *v14 == 3 )
        v15 = v14[2];
      sprintf(v114, "{\"id\":%d,\"result\":\"pong\",\"error\":null}", v15);
      v9 = stratum_send_line((int *)a2, v114);
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
        LODWORD(v24) = sub_16E7EC(*((_QWORD *)v23 + 1));
        HIDWORD(v24) = v68;
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
        logfmt_raw(v114, 0x1000u, v9, "Pool asked your algo parameter");
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
          v114);
        v9 = (unsigned int)sub_878C4((int *)a2, v14);
      }
      else if ( !strcasecmp(v7, "client.get_stats") )
      {
        v9 = (unsigned int)sub_87514(a2, v14);
      }
      else if ( !strcasecmp(v7, "client.get_version") )
      {
        v9 = (unsigned int)sub_60A20((int *)a2, v14);
      }
      else if ( !strcasecmp(v7, "client.show_message") )
      {
        v16 = json_array_get(v8, 0);
        if ( v16 )
        {
          V_LOCK();
          v17 = json_string_value(v16);
          logfmt_raw(v114, 0x1000u, 0, "MESSAGE FROM SERVER: %s", v17);
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
            v114);
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
          json_object_set_new(v19, "error", dword_1A25D8);
          json_object_set_new(v19, "result", dword_1A24DC);
          v22 = (char *)json_dumps(v19, 0);
          v9 = stratum_send_line((int *)a2, v22);
          if ( v19 && v19[1] != -1 )
            sub_84ED0(v19);
          free(v22);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v114, 0x1000u, 0, "unknown stratum method %s!", v7);
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
          v114);
        v9 = (unsigned int)sub_60B38((int *)a2, v14);
      }
      goto LABEL_14;
    }
    v52 = json_array_get(v8, 0);
    v53 = (const char *)json_string_value(v52);
    v54 = json_array_get(v8, 1u);
    if ( v54 && *v54 == 2 )
    {
      v69 = (const char *)json_string_value(v54);
      v55 = strtol(v69, 0, 10);
    }
    else
    {
      v55 = json_integer_value((int)v54);
    }
    if ( v53 )
      v56 = v55 == 0;
    else
      v56 = 1;
    if ( !v56 )
    {
      v57 = strlen(v53);
      v58 = (char *)malloc(v57 + 32);
      sprintf(v58, "stratum+tcp://%s:%d", v53, v55);
      V_LOCK();
      logfmt_raw(v114, 0x1000u, 0, "Server requested reconnection to %s", v58);
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
        v114);
      v59 = *(void **)(a2 + 28);
      if ( v59 )
        free(v59);
      *(_DWORD *)(a2 + 28) = v58;
      free(v58);
      v9 = 1;
      stratum_disconnect((int *)a2);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v40 = json_array_get(v8, v9);
  v41 = (char *)json_string_value(v40);
  if ( v41 )
  {
    v42 = json_array_get(v8, 1u);
    v43 = json_integer_value((int)v42);
    v44 = v43;
    if ( v43 )
    {
      if ( (unsigned int)(v43 - 2) > 0xE )
      {
        V_LOCK();
        logfmt_raw(v114, 0x1000u, v9, "Failed to get valid n2size in parse_extranonce");
        V_UNLOCK();
        v48 = 40;
        v49 = 324;
      }
      else
      {
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
        v45 = *(void **)(a2 + 76);
        if ( v45 )
          free(v45);
        v46 = strlen(v41) >> 1;
        *(_DWORD *)(a2 + 72) = v46;
        v47 = calloc(1u, v46);
        *(_DWORD *)(a2 + 76) = v47;
        if ( !v47 )
        {
          V_LOCK();
          logfmt_raw(v114, 0x1000u, 0, "Failed to alloc xnonce1");
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
            v114);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
          goto LABEL_14;
        }
        hex2bin((int)v47, (unsigned __int8 *)v41, v46);
        *(_DWORD *)(a2 + 80) = v44;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
        v9 = 1;
        V_LOCK();
        logfmt_raw(v114, 0x1000u, 0, "Stratum set nonce %s with extranonce2 size=%d", v41, v44);
        V_UNLOCK();
        v48 = 20;
        v49 = 343;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v114, 0x1000u, v9, "Failed to get extranonce2_size");
      V_UNLOCK();
      v48 = 100;
      v49 = 320;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v114, 0x1000u, v9, "Failed to get extranonce1");
    V_UNLOCK();
    v48 = 100;
    v49 = 315;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "stratum_parse_extranonce",
    24,
    v49,
    v48,
    v114);
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
