bool __fastcall sub_6446C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  _DWORD *v9; // r0
  const char *v10; // r6
  _DWORD *v11; // r0
  const char *v12; // r7
  signed int v13; // r8
  _DWORD *v14; // r0
  char *v15; // r10
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r9
  const char *v22; // r0
  size_t v23; // r0
  int v24; // r1
  int v25; // r3
  size_t v26; // r2
  int v27; // r2
  int i; // r9
  void *v29; // r0
  void *v30; // r8
  int v31; // r5
  char *v32; // r2
  signed int v33; // r6
  _DWORD *v34; // r0
  unsigned __int8 *v35; // r0
  int v36; // r9
  unsigned __int8 *v37; // r7
  void *v38; // r0
  int v39; // r12
  const char *v40; // [sp+1Ch] [bp-1138h]
  const char *v41; // [sp+20h] [bp-1134h]
  const char *v42; // [sp+24h] [bp-1130h]
  _DWORD *v43; // [sp+28h] [bp-112Ch]
  void *ptr; // [sp+2Ch] [bp-1128h]
  void *ptra; // [sp+2Ch] [bp-1128h]
  void *src; // [sp+30h] [bp-1124h]
  const char *srca; // [sp+30h] [bp-1124h]
  size_t nmemb; // [sp+34h] [bp-1120h]
  size_t n; // [sp+38h] [bp-111Ch]
  unsigned int v50; // [sp+3Ch] [bp-1118h]
  const char *v51; // [sp+44h] [bp-1110h]
  pthread_mutex_t *mutex; // [sp+48h] [bp-110Ch]
  int v53; // [sp+5Ch] [bp-10F8h]
  char s[228]; // [sp+6Ch] [bp-10E8h] BYREF
  char v55[4100]; // [sp+150h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (const char *)json_string_value(v11);
  v13 = v6[3];
  v14 = json_array_get(a3, 2u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 3u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 5u);
  v40 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 6u);
  v42 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 7u);
  v41 = (const char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  if ( v21 )
    v21 = (_DWORD *)(*v21 == 5);
  v43 = v21;
  if ( valid_ascii(v10)
    && valid_hex(v12)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(v40)
    && valid_hex(v42)
    && valid_hex(v41) )
  {
    if ( a2 != -440 )
    {
      v22 = *(const char **)(a2 + 824);
      if ( v22 && !strcmp(v22, v10) )
      {
        V_LOCK();
        logfmt_raw(
          v55,
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
          v55);
      }
      if ( strlen(v10) > 0x1F )
      {
        V_LOCK();
        v23 = strlen(v10);
        logfmt_raw(v55, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v23);
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
          v55);
      }
      mutex = (pthread_mutex_t *)(a2 + 960);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
      ptr = *(void **)(a2 + 824);
      *(_DWORD *)(a2 + 824) = _strdup(v10);
      if ( ptr )
        free(ptr);
      snprintf((char *)(a2 + 92), 0x41u, "%s", v12);
      nmemb = strlen(v15) >> 1;
      n = strlen(v17) >> 1;
      snprintf((char *)(a2 + 324), 9u, "%s", v40);
      snprintf((char *)(a2 + 336), 9u, "%s", v42);
      snprintf((char *)(a2 + 348), 9u, "%s", v41);
      v24 = *(_DWORD *)(a2 + 80);
      v25 = *(_DWORD *)(a2 + 316);
      v26 = nmemb + *(_DWORD *)(a2 + 72);
      *(_DWORD *)(a2 + 312) = v26;
      *(_BYTE *)(a2 + 424) = (_BYTE)v21;
      v50 = n + v24 + v26;
      *(_DWORD *)(a2 + 288) = v50;
      if ( v25 > 0 )
      {
        v27 = *(_DWORD *)(a2 + 320);
        for ( i = 0; i < v25; ++i )
        {
          while ( *(_DWORD *)(v27 + 4 * i) )
          {
            free(*(void **)(v27 + 4 * i));
            v27 = *(_DWORD *)(a2 + 320);
            v25 = *(_DWORD *)(a2 + 316);
            *(_DWORD *)(v27 + 4 * i++) = 0;
            if ( v25 <= i )
              goto LABEL_27;
          }
        }
      }
LABEL_27:
      if ( v13 )
      {
        srca = v10;
        v33 = 0;
        *(_DWORD *)(a2 + 320) = realloc(*(void **)(a2 + 320), 4 * v13);
        v51 = v12;
        while ( 1 )
        {
          v53 = 4 * v33;
          if ( v13 <= v33 )
            break;
          v34 = json_array_get(v6, v33);
          v35 = (unsigned __int8 *)json_string_value(v34);
          v36 = *(_DWORD *)(a2 + 320);
          v37 = v35;
          v38 = malloc(0x20u);
          *(_DWORD *)(v36 + 4 * v33) = v38;
          if ( !v38 )
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
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
              v55);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "merkle %d: %s", v33, v37);
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
              v55);
          }
          ++v33;
          if ( !hex2bin(*(_DWORD *)(*(_DWORD *)(a2 + 320) + v53), v37, 32) )
          {
            v7 = 0;
            v10 = srca;
            v12 = v51;
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
            V_UNLOCK();
            v39 = 126;
            goto LABEL_58;
          }
        }
        v10 = srca;
        v12 = v51;
      }
      *(_DWORD *)(a2 + 316) = v13;
      if ( v43 )
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
        v7 = hex2bin((int)src, (unsigned __int8 *)v15, nmemb);
        if ( v7 )
        {
          ptra = calloc(n, 1u);
          v7 = hex2bin((int)ptra, (unsigned __int8 *)v17, n);
          if ( v7 )
          {
            v29 = *(void **)(a2 + 292);
            if ( v29 )
              free(v29);
            if ( (v50 & 3) != 0 )
              v50 = (v50 & 0xFFFFFFFC) + 4;
            v30 = calloc(v50, 1u);
            *(_DWORD *)(a2 + 292) = v30;
            if ( !v30 )
            {
              V_LOCK();
              logfmt_raw(v55, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
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
                v55);
            }
            v31 = a2 + 448;
            memcpy(*(void **)(v31 - 156), src, nmemb);
            memcpy((void *)(*(_DWORD *)(v31 - 156) + nmemb), *(const void **)(v31 - 372), *(_DWORD *)(v31 - 376));
            memcpy((void *)(*(_DWORD *)(v31 - 156) + *(_DWORD *)(v31 - 376) + *(_DWORD *)(v31 - 368) + nmemb), ptra, n);
            *(_QWORD *)(v31 - 8) = *(int *)(v31 - 448);
          }
          else
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
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
              v55);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v55, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
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
            v55);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
        V_UNLOCK();
        v39 = 146;
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
          v39,
          100,
          v55);
      }
      pthread_mutex_unlock(mutex);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "job_id: %s", v10);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "prev_hash: %s", v12);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "coinbase1: %s", v15);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "coinbase2: %s", v17);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "bbversion: %s", v40);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "nbit: %s", v42);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "ntime: %s", v41);
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
          v55);
        V_LOCK();
        v32 = "yes";
        if ( !v43 )
          v32 = "no";
        logfmt_raw(v55, 0x1000u, 0, "clean: %s", v32);
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
          v55);
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
  logfmt_raw(v55, 0x1000u, 0, "Stratum notify: invalid parameters");
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
    v55);
  return 0;
}
