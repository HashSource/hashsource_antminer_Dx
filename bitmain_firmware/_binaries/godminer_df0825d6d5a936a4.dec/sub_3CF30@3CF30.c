bool __fastcall sub_3CF30(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r6
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  const char *v12; // r10
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  char *v16; // r11
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r6
  const char *kind; // r0
  size_t v23; // r0
  void *v24; // r7
  int owner; // r1
  signed int count; // r2
  int v27; // r3
  int v28; // r3
  signed int i; // r6
  void *v30; // r0
  void *v31; // r7
  char *v32; // r2
  signed int v33; // r7
  _DWORD *v34; // r0
  unsigned __int8 *v35; // r0
  int v36; // r6
  unsigned __int8 *v37; // r8
  void *v38; // r11
  const char *v39; // [sp+18h] [bp-1144h]
  signed int ptr; // [sp+1Ch] [bp-1140h]
  void *ptra; // [sp+1Ch] [bp-1140h]
  const char *v42; // [sp+20h] [bp-113Ch]
  const char *v43; // [sp+24h] [bp-1138h]
  _BOOL4 v44; // [sp+28h] [bp-1134h]
  void *src; // [sp+2Ch] [bp-1130h]
  unsigned int v46; // [sp+30h] [bp-112Ch]
  size_t n; // [sp+34h] [bp-1128h]
  size_t nmemb; // [sp+3Ch] [bp-1120h]
  char *v49; // [sp+40h] [bp-111Ch]
  const char *v50; // [sp+44h] [bp-1118h]
  int v51; // [sp+64h] [bp-10F8h]
  char s[228]; // [sp+74h] [bp-10E8h] BYREF
  char v53[4100]; // [sp+158h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  ptr = (signed int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (const char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  v39 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v43 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v42 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v44 = v21;
  }
  else
  {
    v44 = 0;
  }
  if ( valid_ascii(v10)
    && valid_hex(v12)
    && valid_hex(v14)
    && valid_hex(v16)
    && valid_hex(v39)
    && valid_hex(v43)
    && valid_hex(v42) )
  {
    settime_based_notify_ntime(v42);
    if ( a2 != (pthread_mutex_t *)-448 )
    {
      kind = (const char *)a2[65].__kind;
      if ( kind && !strcmp(kind, v10) )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[65].__kind, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          88,
          80,
          v53);
      }
      if ( strlen(v10) > 0x3F )
      {
        V_LOCK();
        v23 = strlen(v10);
        logfmt_raw(v53, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", v10, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          91,
          80,
          v53);
      }
      pthread_mutex_lock(a2 + 66);
      v24 = (void *)a2[65].__kind;
      a2[65].__kind = (int)_strdup(v10);
      if ( v24 )
        free(v24);
      snprintf(&a2[3].__size[20], 0x41u, "%s", v12);
      nmemb = strlen(v14) >> 1;
      n = strlen(v16) >> 1;
      snprintf(&a2[13].__size[12], 9u, "%s", v39);
      snprintf((char *)&a2[14], 9u, "%s", v43);
      snprintf(&a2[14].__size[12], 9u, "%s", v42);
      owner = a2[3].__owner;
      count = a2[13].__count;
      v27 = nmemb + a2[3].__lock;
      a2[13].__lock = v27;
      a2[18].__size[4] = v21;
      v46 = n + owner + v27;
      a2[12].__lock = v46;
      if ( count > 0 )
      {
        v28 = a2[13].__owner;
        for ( i = 0; i < count; ++i )
        {
          if ( *(_DWORD *)(v28 + 4 * i) )
          {
            free(*(void **)(v28 + 4 * i));
            v28 = a2[13].__owner;
            count = a2[13].__count;
            *(_DWORD *)(v28 + 4 * i) = 0;
          }
        }
      }
      if ( ptr )
      {
        a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * ptr);
        v33 = 0;
        v49 = v16;
        v50 = v10;
        do
        {
          v51 = 4 * v33;
          if ( ptr <= v33 )
          {
            v16 = v49;
            v10 = v50;
            goto LABEL_30;
          }
          v34 = json_array_get(v6, v33);
          v35 = (unsigned __int8 *)json_string_value(v34);
          v36 = a2[13].__owner;
          v37 = v35;
          v38 = malloc(0x20u);
          *(_DWORD *)(v36 + 4 * v33) = v38;
          if ( !v38 )
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              165,
              "stratum_notify_dash",
              19,
              119,
              100,
              v53);
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Sweep error string = %s.", "M:1");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              165,
              "stratum_notify_dash",
              19,
              120,
              100,
              v53);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "merkle %d: %s", v33, v37);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              165,
              "stratum_notify_dash",
              19,
              123,
              20,
              v53);
          }
          ++v33;
        }
        while ( hex2bin(*(_DWORD *)(a2[13].__owner + v51), v37, 32) );
        v7 = 0;
        v16 = v49;
        v10 = v50;
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        ptra = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          128,
          100,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "Sweep error string = %s.", "M:1");
        V_UNLOCK();
        src = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          129,
          100,
          v53);
      }
      else
      {
LABEL_30:
        a2[13].__count = ptr;
        if ( v44 )
          *((_QWORD *)&a2[12].__align + 2) = 0;
        snprintf(
          s,
          0xE1u,
          "%s%s%s%s%s%s%s",
          &a2[13].__size[12],
          &a2[3].__size[20],
          "0000000000000000000000000000000000000000000000000000000000000000",
          &a2[14].__size[12],
          (const char *)&a2[14],
          "00000000",
          workpadding);
        v7 = hex2bin((int)&a2[6].__nusers, (unsigned __int8 *)s, 112);
        if ( v7 )
        {
          src = calloc(nmemb, 1u);
          v7 = hex2bin((int)src, (unsigned __int8 *)v14, nmemb);
          if ( v7 )
          {
            ptra = calloc(n, 1u);
            v7 = hex2bin((int)ptra, (unsigned __int8 *)v16, n);
            if ( v7 )
            {
              v30 = (void *)a2[12].__count;
              if ( v30 )
                free(v30);
              if ( (v46 & 3) != 0 )
                v46 = (v46 & 0xFFFFFFFC) + 4;
              v31 = calloc(v46, 1u);
              a2[12].__count = (unsigned int)v31;
              if ( !v31 )
              {
                V_LOCK();
                logfmt_raw(v53, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                  165,
                  "stratum_notify_dash",
                  19,
                  170,
                  100,
                  v53);
              }
              memcpy((void *)a2[12].__count, src, nmemb);
              memcpy((void *)(a2[12].__count + nmemb), (const void *)a2[3].__count, a2[3].__lock);
              memcpy((void *)(a2[12].__count + a2[3].__lock + a2[3].__owner + nmemb), ptra, n);
              *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
            }
            else
            {
              V_LOCK();
              logfmt_raw(v53, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                165,
                "stratum_notify_dash",
                19,
                163,
                100,
                v53);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
            V_UNLOCK();
            ptra = 0;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              165,
              "stratum_notify_dash",
              19,
              156,
              100,
              v53);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v53, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
          V_UNLOCK();
          ptra = 0;
          src = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            165,
            "stratum_notify_dash",
            19,
            149,
            100,
            v53);
        }
      }
      pthread_mutex_unlock(a2 + 66);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "job_id: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          188,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "prev_hash: %s", v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          189,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "coinbase1: %s", v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          190,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "coinbase2: %s", v16);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          191,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "bbversion: %s", v39);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          192,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "nbit: %s", v43);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          193,
          20,
          v53);
        V_LOCK();
        logfmt_raw(v53, 0x1000u, 0, "ntime: %s", v42);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          194,
          20,
          v53);
        V_LOCK();
        v32 = "yes";
        if ( !v44 )
          v32 = "no";
        logfmt_raw(v53, 0x1000u, 0, "clean: %s", v32);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          165,
          "stratum_notify_dash",
          19,
          195,
          20,
          v53);
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
  logfmt_raw(v53, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_dash/frontend_dash.c",
    165,
    "stratum_notify_dash",
    19,
    80,
    100,
    v53);
  return 0;
}
