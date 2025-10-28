bool __fastcall sub_C89F8(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r2
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  _DWORD *v9; // r0
  const char *v10; // r6
  _DWORD *v11; // r2
  _DWORD *v12; // r0
  const char *v13; // r7
  signed int v14; // r8
  _DWORD *v15; // r2
  _DWORD *v16; // r0
  char *v17; // r10
  _DWORD *v18; // r2
  _DWORD *v19; // r0
  char *v20; // r11
  _DWORD *v21; // r2
  _DWORD *v22; // r0
  _DWORD *v23; // r2
  _DWORD *v24; // r0
  _DWORD *v25; // r2
  _DWORD *v26; // r0
  _DWORD *v27; // r2
  _DWORD *v28; // r9
  const char *v29; // r0
  size_t v30; // r0
  int v31; // r1
  int v32; // r3
  size_t v33; // r2
  int v34; // r2
  int i; // r9
  void *v36; // r0
  void *v37; // r8
  int v38; // r5
  char *v39; // r2
  signed int v40; // r6
  _DWORD *v41; // r0
  unsigned __int8 *v42; // r0
  int v43; // r9
  unsigned __int8 *v44; // r7
  void *v45; // r0
  int v46; // r12
  const char *v47; // [sp+1Ch] [bp-1138h]
  const char *v48; // [sp+20h] [bp-1134h]
  const char *v49; // [sp+24h] [bp-1130h]
  _DWORD *v50; // [sp+28h] [bp-112Ch]
  void *ptr; // [sp+2Ch] [bp-1128h]
  void *ptra; // [sp+2Ch] [bp-1128h]
  void *src; // [sp+30h] [bp-1124h]
  const char *srca; // [sp+30h] [bp-1124h]
  size_t nmemb; // [sp+34h] [bp-1120h]
  size_t n; // [sp+38h] [bp-111Ch]
  unsigned int v57; // [sp+3Ch] [bp-1118h]
  const char *v58; // [sp+44h] [bp-1110h]
  pthread_mutex_t *mutex; // [sp+48h] [bp-110Ch]
  int v60; // [sp+5Ch] [bp-10F8h]
  char s[228]; // [sp+6Ch] [bp-10E8h] BYREF
  char v62[4100]; // [sp+150h] [bp-1004h] BYREF

  v4 = json_array_get(a3, 4u);
  v6 = v4;
  if ( !v4 || *v4 != 1 )
    return 0;
  v9 = json_array_get(v5, 0);
  v10 = (const char *)json_string_value(v9);
  v12 = json_array_get(v11, 1u);
  v13 = (const char *)json_string_value(v12);
  v14 = v6[3];
  v16 = json_array_get(v15, 2u);
  v17 = (char *)json_string_value(v16);
  v19 = json_array_get(v18, 3u);
  v20 = (char *)json_string_value(v19);
  v22 = json_array_get(v21, 5u);
  v47 = (const char *)json_string_value(v22);
  v24 = json_array_get(v23, 6u);
  v49 = (const char *)json_string_value(v24);
  v26 = json_array_get(v25, 7u);
  v48 = (const char *)json_string_value(v26);
  v28 = json_array_get(v27, 8u);
  if ( v28 )
    v28 = (_DWORD *)(*v28 == 5);
  v50 = v28;
  if ( valid_ascii(v10)
    && valid_hex(v13)
    && valid_hex(v17)
    && valid_hex(v20)
    && valid_hex(v47)
    && valid_hex(v49)
    && valid_hex(v48) )
  {
    if ( a2 != -440 )
    {
      v29 = *(const char **)(a2 + 824);
      if ( v29 && !strcmp(v29, v10) )
      {
        V_LOCK();
        logfmt_raw(
          v62,
          0x1000u,
          0,
          "Stratum notify: new job's job_id doesnot change, %s, %s",
          *(_DWORD *)(a2 + 824),
          v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          88,
          80,
          v62);
      }
      if ( strlen(v10) > 0x1F )
      {
        V_LOCK();
        v30 = strlen(v10);
        logfmt_raw(v62, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v30);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          91,
          80,
          v62);
      }
      mutex = (pthread_mutex_t *)(a2 + 960);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
      ptr = *(void **)(a2 + 824);
      *(_DWORD *)(a2 + 824) = _strdup(v10);
      if ( ptr )
        free(ptr);
      snprintf((char *)(a2 + 92), 0x41u, "%s", v13);
      nmemb = strlen(v17) >> 1;
      n = strlen(v20) >> 1;
      snprintf((char *)(a2 + 324), 9u, "%s", v47);
      snprintf((char *)(a2 + 336), 9u, "%s", v49);
      snprintf((char *)(a2 + 348), 9u, "%s", v48);
      v31 = *(_DWORD *)(a2 + 80);
      v32 = *(_DWORD *)(a2 + 316);
      v33 = nmemb + *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a2 + 312) = v33;
      *(_BYTE *)(a2 + 424) = (_BYTE)v28;
      v57 = n + v31 + v33;
      *(_DWORD *)(a2 + 288) = v57;
      if ( v32 > 0 )
      {
        v34 = *(_DWORD *)(a2 + 320);
        for ( i = 0; i < v32; ++i )
        {
          while ( *(_DWORD *)(v34 + 4 * i) )
          {
            free(*(void **)(v34 + 4 * i));
            v34 = *(_DWORD *)(a2 + 320);
            v32 = *(_DWORD *)(a2 + 316);
            *(_DWORD *)(v34 + 4 * i++) = 0;
            if ( v32 <= i )
              goto LABEL_27;
          }
        }
      }
LABEL_27:
      if ( v14 )
      {
        srca = v10;
        v40 = 0;
        *(_DWORD *)(a2 + 320) = realloc(*(void **)(a2 + 320), 4 * v14);
        v58 = v13;
        while ( 1 )
        {
          v60 = 4 * v40;
          if ( v14 <= v40 )
            break;
          v41 = json_array_get(v6, v40);
          v42 = (unsigned __int8 *)json_string_value(v41);
          v43 = *(_DWORD *)(a2 + 320);
          v44 = v42;
          v45 = malloc(0x20u);
          *(_DWORD *)(v43 + 4 * v40) = v45;
          if ( !v45 )
          {
            V_LOCK();
            logfmt_raw(v62, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dash/frontend_dash.c",
              159,
              "stratum_notify_dash",
              19,
              119,
              100,
              v62);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v62, 0x1000u, 0, "merkle %d: %s", v40, v44);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dash/frontend_dash.c",
              159,
              "stratum_notify_dash",
              19,
              121,
              20,
              v62);
          }
          ++v40;
          if ( !hex2bin(*(_DWORD *)(*(_DWORD *)(a2 + 320) + v60), v44, 32) )
          {
            v7 = 0;
            v10 = srca;
            v13 = v58;
            V_LOCK();
            logfmt_raw(v62, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
            V_UNLOCK();
            v46 = 126;
            goto LABEL_58;
          }
        }
        v10 = srca;
        v13 = v58;
      }
      *(_DWORD *)(a2 + 316) = v14;
      if ( v50 )
        *(_QWORD *)(a2 + 304) = 0;
      snprintf(
        s,
        0xE1u,
        "%s%s%s%s%s%s%s",
        (const char *)(a2 + 324),
        (const char *)(a2 + 92),
        "0000000000000000000000000000000000000000000000000000000000000000",
        (const char *)(a2 + 348),
        (const char *)(a2 + 336),
        "00000000",
        workpadding);
      v7 = hex2bin(a2 + 160, (unsigned __int8 *)s, 112);
      if ( v7 )
      {
        src = calloc(nmemb, 1u);
        v7 = hex2bin((int)src, (unsigned __int8 *)v17, nmemb);
        if ( v7 )
        {
          ptra = calloc(n, 1u);
          v7 = hex2bin((int)ptra, (unsigned __int8 *)v20, n);
          if ( v7 )
          {
            v36 = *(void **)(a2 + 292);
            if ( v36 )
              free(v36);
            if ( (v57 & 3) != 0 )
              v57 = (v57 & 0xFFFFFFFC) + 4;
            v37 = calloc(v57, 1u);
            *(_DWORD *)(a2 + 292) = v37;
            if ( !v37 )
            {
              V_LOCK();
              logfmt_raw(v62, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/frontend/frontend_dash/frontend_dash.c",
                159,
                "stratum_notify_dash",
                19,
                167,
                100,
                v62);
            }
            v38 = a2 + 448;
            memcpy(*(void **)(v38 - 156), src, nmemb);
            memcpy((void *)(*(_DWORD *)(v38 - 156) + nmemb), *(const void **)(v38 - 372), *(_DWORD *)(v38 - 376));
            memcpy((void *)(*(_DWORD *)(v38 - 156) + *(_DWORD *)(v38 - 376) + *(_DWORD *)(v38 - 368) + nmemb), ptra, n);
            *(_QWORD *)(v38 - 8) = *(int *)(v38 - 448);
          }
          else
          {
            V_LOCK();
            logfmt_raw(v62, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dash/frontend_dash.c",
              159,
              "stratum_notify_dash",
              19,
              160,
              100,
              v62);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v62, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
          V_UNLOCK();
          ptra = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_dash/frontend_dash.c",
            159,
            "stratum_notify_dash",
            19,
            153,
            100,
            v62);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
        V_UNLOCK();
        v46 = 146;
LABEL_58:
        ptra = 0;
        src = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          v46,
          100,
          v62);
      }
      pthread_mutex_unlock(mutex);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "job_id: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          185,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "prev_hash: %s", v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          186,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "coinbase1: %s", v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          187,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "coinbase2: %s", v20);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          188,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "bbversion: %s", v47);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          189,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "nbit: %s", v49);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          190,
          20,
          v62);
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, "ntime: %s", v48);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          191,
          20,
          v62);
        V_LOCK();
        v39 = "yes";
        if ( !v50 )
          v39 = "no";
        logfmt_raw(v62, 0x1000u, 0, "clean: %s", v39);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dash/frontend_dash.c",
          159,
          "stratum_notify_dash",
          19,
          192,
          20,
          v62);
      }
      if ( src )
        free(src);
      if ( ptra )
        free(ptra);
      return v7;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v62, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dash/frontend_dash.c",
    159,
    "stratum_notify_dash",
    19,
    82,
    100,
    v62);
  return 0;
}
