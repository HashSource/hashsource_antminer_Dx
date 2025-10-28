bool __fastcall sub_63940(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r4
  _DWORD *v9; // r0
  const char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  const char *owner; // r0
  size_t v23; // r0
  int v24; // r3
  signed int count; // r1
  int v26; // r2
  int v27; // r2
  signed int i; // r7
  unsigned int *v29; // r5
  void *v30; // r10
  unsigned __int8 *v31; // r7
  unsigned __int8 *v32; // r3
  unsigned __int8 *v33; // r1
  bool v34; // cf
  unsigned int v35; // t1
  bool v36; // cc
  _BOOL4 v37; // r2
  int v38; // t1
  _BOOL4 v39; // r2
  unsigned int v40; // r2
  void *v41; // r8
  void *v42; // r0
  void *v43; // r9
  unsigned int v44; // r12
  unsigned int v45; // r3
  unsigned int v46; // r0
  unsigned int v47; // lr
  unsigned int v48; // r0
  unsigned int v49; // r12
  unsigned int v50; // r3
  void *v51; // r0
  unsigned int v52; // r10
  _DWORD *v53; // r0
  unsigned __int8 *v54; // r4
  void *v55; // r0
  int v56; // r1
  int v57; // lr
  signed int v58; // [sp+10h] [bp-103Ch]
  const char *v59; // [sp+14h] [bp-1038h]
  unsigned int v60; // [sp+14h] [bp-1038h]
  char *s; // [sp+18h] [bp-1034h]
  _DWORD *v62; // [sp+1Ch] [bp-1030h]
  pthread_mutex_t *mutex; // [sp+24h] [bp-1028h]
  void *ptr; // [sp+28h] [bp-1024h]
  size_t ptra; // [sp+28h] [bp-1024h]
  size_t nmemb; // [sp+2Ch] [bp-1020h]
  size_t n; // [sp+30h] [bp-101Ch]
  size_t v68; // [sp+34h] [bp-1018h]
  int v69; // [sp+38h] [bp-1014h]
  int v70; // [sp+44h] [bp-1008h]
  _DWORD v71[1025]; // [sp+48h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (char *)json_string_value(v11);
  v58 = v6[3];
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  v19 = (const char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v59 = (const char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  if ( v21 )
    v21 = (_DWORD *)(*v21 == 5);
  v62 = v21;
  if ( valid_ascii(v10) && valid_hex(v12) && valid_hex(v14) && valid_hex(v17) && valid_hex(v19) && valid_hex(v59) )
  {
    if ( a2 == (pthread_mutex_t *)-440 )
      return 0;
    owner = (const char *)a2[34].__owner;
    if ( owner && !strcmp(owner, v10) )
    {
      V_LOCK();
      logfmt_raw(
        (char *)v71,
        0x1000u,
        0,
        "Stratum notify: new job's job_id doesnot change, %s, %s",
        a2[34].__owner,
        v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_notify_dcr",
        18,
        111,
        80,
        v71);
    }
    if ( strlen(v10) > 0x1F )
    {
      V_LOCK();
      v23 = strlen(v10);
      logfmt_raw((char *)v71, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_notify_dcr",
        18,
        114,
        80,
        v71);
    }
    mutex = a2 + 40;
    pthread_mutex_lock(a2 + 40);
    ptr = (void *)a2[34].__owner;
    a2[34].__owner = (int)_strdup(v10);
    if ( ptr )
      free(ptr);
    snprintf(&a2[3].__size[20], 0x41u, "%s", v12);
    ptra = strlen(v12) >> 1;
    nmemb = strlen(v17) >> 1;
    n = strlen(v14) >> 1;
    v68 = strlen(s) >> 1;
    snprintf(&a2[13].__size[12], 9u, "%s", v17);
    snprintf((char *)&a2[14], 9u, "%s", v19);
    snprintf(&a2[14].__size[12], 9u, "%s", v59);
    strcpy(&a2[39].__size[12], v59);
    v24 = a2[3].__owner;
    count = a2[13].__count;
    v26 = n + a2[3].__lock;
    a2[17].__size[16] = (char)v21;
    a2[13].__lock = v26;
    v60 = v68 + v24 + v26;
    a2[12].__lock = v60;
    if ( count > 0 )
    {
      v27 = a2[13].__owner;
      for ( i = 0; i < count; ++i )
      {
        while ( *(_DWORD *)(v27 + 4 * i) )
        {
          free(*(void **)(v27 + 4 * i));
          v27 = a2[13].__owner;
          count = a2[13].__count;
          *(_DWORD *)(v27 + 4 * i++) = 0;
          if ( i >= count )
            goto LABEL_26;
        }
      }
    }
LABEL_26:
    if ( v58 )
    {
      a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v58);
      if ( v58 > 0 )
      {
        v52 = 0;
        while ( 1 )
        {
          v53 = json_array_get(v6, v52);
          v54 = (unsigned __int8 *)json_string_value(v53);
          v70 = a2[13].__owner;
          v69 = 4 * v52;
          v55 = malloc(0x20u);
          *(_DWORD *)(v70 + 4 * v52) = v55;
          if ( !v55 )
          {
            V_LOCK();
            logfmt_raw((char *)v71, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dcr/frontend_dcr.c",
              157,
              "stratum_notify_dcr",
              18,
              145,
              100,
              v71);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw((char *)v71, 0x1000u, 0, "merkle %d: %s", v52, v54);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dcr/frontend_dcr.c",
              157,
              "stratum_notify_dcr",
              18,
              147,
              20,
              v71);
          }
          ++v52;
          if ( !hex2bin(*(_DWORD *)(a2[13].__owner + v69), v54, 32) )
            break;
          if ( v58 == v52 )
            goto LABEL_27;
        }
        v7 = 0;
        V_LOCK();
        logfmt_raw((char *)v71, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_dcr/frontend_dcr.c",
          157,
          "stratum_notify_dcr",
          18,
          152,
          100,
          v71);
        pthread_mutex_unlock(mutex);
        return v7;
      }
    }
LABEL_27:
    a2[13].__count = v58;
    if ( v62 )
      *((_QWORD *)&a2[12].__align + 2) = 0;
    v29 = (unsigned int *)calloc(ptra, 1u);
    v7 = hex2bin((int)v29, (unsigned __int8 *)v12, ptra);
    if ( !v7 )
    {
      V_LOCK();
      logfmt_raw((char *)v71, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_notify_dcr",
        18,
        165,
        100,
        v71);
      pthread_mutex_unlock(mutex);
      if ( !v29 )
        return v7;
      v41 = 0;
      v31 = 0;
      v30 = 0;
      goto LABEL_54;
    }
    v30 = calloc(nmemb, 1u);
    if ( hex2bin((int)v30, (unsigned __int8 *)v17, nmemb) )
    {
      v31 = (unsigned __int8 *)calloc(n, 1u);
      if ( hex2bin((int)v31, (unsigned __int8 *)v14, n) )
      {
        v32 = v31 + 32;
        v33 = v31 + 160;
        v34 = v31[32] == 255;
        if ( v31[32] != 255 )
          v34 = v32 >= v33;
        if ( !v34 )
        {
          do
          {
            v35 = *++v32;
            v36 = v35 > 0xFF;
            if ( v35 != 255 )
              v36 = v33 > v32;
          }
          while ( v36 );
        }
        v37 = *v32 == 255;
        if ( v32 >= v33 )
          v37 = 0;
        if ( v37 )
        {
          do
          {
            v38 = *++v32;
            v39 = v38 == 255;
            if ( v33 <= v32 )
              v39 = 0;
          }
          while ( v39 );
        }
        if ( *(v32 - 1) == 255 && *(v32 - 2) == 255 )
        {
          v56 = v32[1];
          v40 = (unsigned __int16)(v32[2] + (v32[3] << 8));
          if ( v56 == 3 )
          {
            v40 += v32[4] << 16;
          }
          else if ( v56 == 4 )
          {
            v40 += (v32[4] + (v32[5] << 8)) << 16;
          }
        }
        else
        {
          v40 = 0;
        }
        a2[42].__count = v40;
        v41 = calloc(v68, 1u);
        v7 = hex2bin((int)v41, (unsigned __int8 *)s, v68);
        if ( v7 )
        {
          v42 = (void *)a2[12].__count;
          if ( v42 )
            free(v42);
          if ( (v60 & 3) != 0 )
            v60 = (v60 & 0xFFFFFFFC) + 4;
          v43 = calloc(v60, 1u);
          a2[12].__count = (unsigned int)v43;
          if ( !v43 )
          {
            V_LOCK();
            logfmt_raw((char *)v71, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_dcr/frontend_dcr.c",
              157,
              "stratum_notify_dcr",
              18,
              196,
              100,
              v71);
          }
          v44 = v29[1];
          v45 = v29[3];
          v46 = bswap32(v29[2]);
          v71[0] = bswap32(*v29);
          v71[2] = v46;
          v47 = v29[4];
          v48 = v29[6];
          v71[1] = bswap32(v44);
          v71[3] = bswap32(v45);
          v49 = v29[5];
          v50 = v29[7];
          v71[4] = bswap32(v47);
          v71[6] = bswap32(v48);
          v51 = (void *)a2[12].__count;
          v71[5] = bswap32(v49);
          v71[7] = bswap32(v50);
          memcpy(v51, v31, n);
          memcpy(&a2[18].__align + 4, v30, nmemb);
          memcpy(&a2[18].__size[nmemb + 16], v71, ptra);
          memcpy(&a2[18].__size[ptra + 16 + nmemb], v31, n);
          memcpy(&a2[24].__align + 4, (const void *)a2[3].__count, a2[3].__lock);
          memcpy(&a2[26], v41, v68);
          *((_QWORD *)&a2[18].__align + 1) = a2->__lock;
          pthread_mutex_unlock(mutex);
          goto LABEL_54;
        }
        V_LOCK();
        logfmt_raw((char *)v71, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
        V_UNLOCK();
        v57 = 189;
      }
      else
      {
        V_LOCK();
        v41 = 0;
        logfmt_raw((char *)v71, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
        V_UNLOCK();
        v57 = 181;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_notify_dcr",
        18,
        v57,
        100,
        v71);
    }
    else
    {
      V_LOCK();
      v41 = 0;
      logfmt_raw((char *)v71, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
      V_UNLOCK();
      v31 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_notify_dcr",
        18,
        173,
        100,
        v71);
    }
    pthread_mutex_unlock(mutex);
    if ( !v29 )
    {
      v7 = 0;
      goto LABEL_55;
    }
    v7 = 0;
LABEL_54:
    free(v29);
LABEL_55:
    if ( v30 )
      free(v30);
    if ( v31 )
      free(v31);
    if ( v41 )
      free(v41);
    return v7;
  }
  V_LOCK();
  logfmt_raw((char *)v71, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dcr/frontend_dcr.c",
    157,
    "stratum_notify_dcr",
    18,
    105,
    100,
    v71);
  return 0;
}
