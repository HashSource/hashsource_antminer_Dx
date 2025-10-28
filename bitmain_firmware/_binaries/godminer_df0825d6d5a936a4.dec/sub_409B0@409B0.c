bool __fastcall sub_409B0(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _BOOL4 v4; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r0
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  const char *kind; // r0
  size_t v23; // r0
  void *v24; // r4
  size_t v25; // r4
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r4
  unsigned __int64 *v29; // r9
  int v30; // r3
  pthread_mutex_t *v31; // r10
  size_t lock; // r2
  const void *count; // r1
  size_t v34; // r0
  size_t v35; // r7
  char *v36; // r0
  _BYTE *i; // r2
  char v38; // t1
  size_t v39; // r3
  char *v40; // r0
  _BYTE *j; // r2
  char v42; // t1
  size_t v43; // r3
  char *v44; // r0
  _BYTE *k; // r2
  char v46; // t1
  size_t v47; // r3
  _BYTE *v48; // r1
  unsigned __int64 *v49; // r2
  char v50; // t1
  int *v51; // r1
  char *v52; // r2
  char v53; // t1
  char *v54; // r1
  signed int v55; // r2
  char v56; // t1
  bool v57; // cc
  int v58; // r0
  size_t v59; // r7
  char *v60; // r1
  _BYTE *m; // r3
  char v62; // t1
  size_t v63; // r7
  _BYTE *v64; // r2
  unsigned __int64 *v65; // r3
  char v66; // t1
  size_t v67; // r3
  size_t v68; // r7
  size_t v69; // r7
  int v70; // r0
  int v71; // [sp+4h] [bp-10A0h]
  char *src; // [sp+10h] [bp-1094h]
  char *v73; // [sp+14h] [bp-1090h]
  char *s; // [sp+18h] [bp-108Ch]
  char *sa; // [sp+18h] [bp-108Ch]
  char *v76; // [sp+24h] [bp-1080h]
  char *v77; // [sp+28h] [bp-107Ch]
  char *v78; // [sp+2Ch] [bp-1078h]
  void *v79; // [sp+30h] [bp-1074h]
  signed int v80; // [sp+34h] [bp-1070h]
  signed int v81; // [sp+38h] [bp-106Ch]
  signed int v82; // [sp+3Ch] [bp-1068h]
  signed int v83; // [sp+40h] [bp-1064h]
  void *v84; // [sp+44h] [bp-1060h]
  signed int v85; // [sp+48h] [bp-105Ch]
  size_t n; // [sp+4Ch] [bp-1058h]
  size_t nmemb; // [sp+50h] [bp-1054h]
  void *ptr; // [sp+58h] [bp-104Ch]
  _BYTE v89[20]; // [sp+6Ch] [bp-1038h] BYREF
  unsigned __int64 dest[4]; // [sp+80h] [bp-1024h] BYREF
  _DWORD v91[1025]; // [sp+A0h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 )
    return 0;
  v7 = json_array_get(a3, 0);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 1u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 2u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 3u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 4u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  s = (char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v19 = (char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v73 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  if ( valid_ascii(v8)
    && valid_hex(v10)
    && valid_hex(v14)
    && valid_hex(v12)
    && valid_hex(v16)
    && valid_hex(s)
    && valid_hex(v19)
    && valid_hex(v73)
    && valid_hex(src) )
  {
    settime_based_notify_ntime(src);
    if ( a2 == (pthread_mutex_t *)-448 )
      return 0;
    kind = (const char *)a2[65].__kind;
    if ( kind && !strcmp(kind, v8) )
    {
      V_LOCK();
      logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[65].__kind, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/frontend/frontend_hns/frontend_hns.c",
        163,
        "stratum_notify_hns",
        18,
        142,
        80,
        v91);
    }
    if ( strlen(v8) > 0x1F )
    {
      V_LOCK();
      v23 = strlen(v8);
      logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v8, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/frontend/frontend_hns/frontend_hns.c",
        163,
        "stratum_notify_hns",
        18,
        145,
        80,
        v91);
    }
    pthread_mutex_lock(a2 + 66);
    v24 = (void *)a2[65].__kind;
    a2[65].__kind = (int)_strdup(v8);
    if ( v24 )
      free(v24);
    snprintf(&a2[3].__size[20], 0x41u, "%s", v10);
    v80 = strlen(v10) >> 1;
    v81 = strlen(v12) >> 1;
    v82 = strlen(v14) >> 1;
    v85 = strlen(v16) >> 1;
    v83 = strlen(s) >> 1;
    v25 = strlen(v19);
    nmemb = strlen(src) >> 1;
    n = v25 >> 1;
    snprintf(&a2[13].__size[12], v25 + 1, "%s", v19);
    v26 = strlen(v73);
    snprintf((char *)&a2[14], v26 + 1, "%s", v73);
    v27 = strlen(src);
    snprintf(&a2[14].__size[12], v27 + 1, "%s", src);
    strcpy(&a2[64].__size[12], src);
    a2[18].__size[4] = 1;
    v28 = strlen(v73);
    ptr = calloc(v28, 1u);
    v4 = hex2bin((int)ptr, (unsigned __int8 *)v73, v28 >> 1);
    if ( v4 )
    {
      v84 = calloc(nmemb, 1u);
      v4 = hex2bin((int)v84, (unsigned __int8 *)src, nmemb);
      if ( v4 )
      {
        v79 = calloc(n, 1u);
        v4 = hex2bin((int)v79, (unsigned __int8 *)v19, n);
        if ( v4 )
        {
          v78 = (char *)calloc(v81, 1u);
          v4 = hex2bin((int)v78, (unsigned __int8 *)v12, v81);
          if ( v4 )
          {
            a2[68].__count = 0;
            v77 = (char *)calloc(v82, 1u);
            v4 = hex2bin((int)v77, (unsigned __int8 *)v14, v82);
            if ( v4 )
            {
              v76 = (char *)calloc(v83, 1u);
              v4 = hex2bin((int)v76, (unsigned __int8 *)s, v83);
              if ( v4 )
              {
                sa = (char *)calloc(v85, 1u);
                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v85);
                if ( v4 )
                {
                  v29 = (unsigned __int64 *)calloc(v80, 1u);
                  v4 = hex2bin((int)v29, (unsigned __int8 *)v10, v80);
                  if ( v4 )
                  {
                    v30 = sa == 0;
                    if ( !v29 )
                      v30 = 1;
                    if ( v30 )
                    {
                      V_LOCK();
                      logfmt_raw((char *)v91, 0x1000u, 0, "%s input value error", "hns_padding");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        163,
                        "hns_padding",
                        11,
                        82,
                        100,
                        v91);
                    }
                    else
                    {
                      do
                      {
                        v89[v30] = *((_BYTE *)v29 + v30) ^ sa[v30];
                        ++v30;
                      }
                      while ( v30 != 20 );
                    }
                    if ( memcmp(v29, &dword_165B0C, 0x20u) )
                    {
                      dword_165B0C = *(_DWORD *)v29;
                      memset(dest, 0, sizeof(dest));
                      memset(&unk_165B2C, 0, 0x20u);
                      memset(v91, 0, 0xF0u);
                      hs_blake2b_init(v91, 32);
                      hs_blake2b_update((int)v91, v29, 0x20u);
                      hs_blake2b_update((int)v91, dest, 0x20u);
                      hs_blake2b_final((int)v91, &unk_165B2C, 0x20u);
                    }
                    v31 = a2 + 19;
                    lock = a2[3].__lock;
                    count = (const void *)a2[3].__count;
                    memset(dest, 0, 22);
                    memcpy(dest, count, lock);
                    memset(&a2[19], 0, 0x100u);
                    v34 = strlen(v73);
                    memcpy(&a2[19], ptr, v34 >> 1);
                    v35 = strlen(v73) >> 1;
                    memcpy((char *)&a2[19] + v35, v79, n);
                    v36 = &v78[v81];
                    for ( i = (char *)&a2[19] + v35 + n; v81 > i - ((char *)&a2[19] + v35 + n); ++i )
                    {
                      v38 = *--v36;
                      *i = v38;
                    }
                    v39 = v35 + n + v81;
                    v40 = &v77[v82];
                    for ( j = (char *)v31 + v39; v82 > j - ((char *)v31 + v39); ++j )
                    {
                      v42 = *--v40;
                      *j = v42;
                    }
                    v43 = v39 + v82;
                    v44 = &v76[v83];
                    for ( k = (char *)v31 + v43; k - ((char *)v31 + v43) < v83; ++k )
                    {
                      v46 = *--v44;
                      *k = v46;
                    }
                    v47 = v43 + v83;
                    v48 = (char *)v31 + v47;
                    v49 = (unsigned __int64 *)((char *)&dest[2] + 6);
                    do
                    {
                      v50 = *((_BYTE *)v49 - 1);
                      v49 = (unsigned __int64 *)((char *)v49 - 1);
                      *v48++ = v50;
                    }
                    while ( dest != v49 );
                    v51 = &dword_165B4C;
                    v52 = &v31->__size[v47 + 21];
                    do
                    {
                      v53 = *((_BYTE *)v51 - 1);
                      v51 = (int *)((char *)v51 - 1);
                      *++v52 = v53;
                    }
                    while ( &unk_165B2C != (_UNKNOWN *)v51 );
                    v54 = &sa[v85];
                    v55 = 0;
                    while ( 1 )
                    {
                      v57 = v85 <= v55;
                      v58 = (int)v31 + v47 + v55++;
                      if ( v57 )
                        break;
                      v56 = *--v54;
                      *(_BYTE *)(v58 + 54) = v56;
                    }
                    v59 = v47 + v85 + 54;
                    v60 = (char *)v29 + v80;
                    for ( m = (char *)v31 + v59; m - ((char *)v31 + v59) < v80; ++m )
                    {
                      v62 = *--v60;
                      *m = v62;
                    }
                    v63 = v59 + v80;
                    v64 = (char *)v31 + v63;
                    v65 = dest;
                    do
                    {
                      v66 = *((_BYTE *)v65 - 1);
                      v65 = (unsigned __int64 *)((char *)v65 - 1);
                      *v64++ = v66;
                    }
                    while ( v89 != (_BYTE *)v65 );
                    v67 = v63 + 20;
                    v68 = v63 + 24;
                    *(int *)((char *)&v31->__lock + v67) = 0;
                    memcpy((char *)v31 + v68, v84, nmemb);
                    v69 = v68 + nmemb;
                    *(int *)((char *)&v31->__lock + v69) = 0;
                    *(_WORD *)&v31->__size[v69 + 4] = 0;
                    *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
                    goto LABEL_63;
                  }
                  V_LOCK();
                  logfmt_raw((char *)v91, 0x1000u, 0, "parse prev_hash failed!");
                  V_UNLOCK();
                  v70 = 233;
                }
                else
                {
                  V_LOCK();
                  v29 = 0;
                  logfmt_raw((char *)v91, 0x1000u, 0, "parse nameroot failed!");
                  V_UNLOCK();
                  v70 = 225;
                }
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  163,
                  "stratum_notify_hns",
                  18,
                  v70,
                  100,
                  v91);
              }
              else
              {
                V_LOCK();
                sa = 0;
                v29 = 0;
                logfmt_raw((char *)v91, 0x1000u, 0, "parse reserved_root failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  163,
                  "stratum_notify_hns",
                  18,
                  217,
                  100,
                  v91);
              }
            }
            else
            {
              V_LOCK();
              v76 = 0;
              v29 = 0;
              logfmt_raw((char *)v91, 0x1000u, 0, "parse witness failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                163,
                "stratum_notify_hns",
                18,
                209,
                100,
                v91);
              sa = 0;
            }
          }
          else
          {
            V_LOCK();
            v76 = 0;
            v29 = 0;
            logfmt_raw((char *)v91, 0x1000u, 0, "parse merkle failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
              163,
              "stratum_notify_hns",
              18,
              197,
              100,
              v91);
            sa = 0;
            v77 = 0;
          }
        }
        else
        {
          V_LOCK();
          v76 = 0;
          v29 = 0;
          logfmt_raw((char *)v91, 0x1000u, 0, "parse bloc_version failed!");
          V_UNLOCK();
          sa = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            163,
            "stratum_notify_hns",
            18,
            189,
            100,
            v91);
          v77 = 0;
          v78 = 0;
        }
LABEL_63:
        pthread_mutex_unlock(a2 + 66);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "job_id: %s", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          163,
          "stratum_notify_hns",
          18,
          303,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "prev_hash: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          163,
          "stratum_notify_hns",
          18,
          304,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "nbit: %s", v73);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          163,
          "stratum_notify_hns",
          18,
          305,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "ntime: %s", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          163,
          "stratum_notify_hns",
          18,
          306,
          20,
          v91);
        if ( ptr )
          free(ptr);
        if ( v84 )
          free(v84);
        if ( v79 )
          free(v79);
        if ( v78 )
          free(v78);
        if ( v77 )
          free(v77);
        if ( v76 )
          free(v76);
        if ( sa )
          free(sa);
        if ( v29 )
          free(v29);
        return v4;
      }
      V_LOCK();
      v76 = 0;
      logfmt_raw((char *)v91, 0x1000u, 0, "parse ntime failed!");
      V_UNLOCK();
      v71 = 181;
      sa = 0;
      v77 = 0;
    }
    else
    {
      V_LOCK();
      v84 = 0;
      logfmt_raw((char *)v91, 0x1000u, 0, "parse nbits failed!");
      V_UNLOCK();
      v71 = 173;
      v76 = 0;
      sa = 0;
      v77 = 0;
    }
    v29 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_hns/frontend_hns.c",
      163,
      "stratum_notify_hns",
      18,
      v71,
      100,
      v91);
    v78 = 0;
    v79 = 0;
    goto LABEL_63;
  }
  V_LOCK();
  logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/frontend/frontend_hns/frontend_hns.c",
    163,
    "stratum_notify_hns",
    18,
    134,
    100,
    v91);
  return 0;
}
