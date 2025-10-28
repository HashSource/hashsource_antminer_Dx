int __fastcall sub_86DE0(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r11
  _DWORD *v10; // r0
  char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r9
  _DWORD *v16; // r0
  char *v17; // r10
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // zf
  int valid; // r4
  size_t v23; // r0
  void *v24; // r0
  void *v25; // r7
  void *v26; // r0
  void *v27; // r8
  size_t v28; // r0
  size_t v29; // r0
  size_t v30; // r0
  const char *owner; // r0
  size_t v32; // r0
  void *v33; // r9
  void *count; // r0
  size_t lock; // r10
  size_t v36; // r11
  char *v37; // r0
  char *v38; // r9
  char *v39; // r0
  signed int v40; // r9
  int v41; // r0
  int v42; // r1
  unsigned int v43; // r2
  int v44; // r3
  int v45; // r10
  int v46; // r0
  unsigned int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r12
  int v51; // r2
  signed int v52; // r3
  signed int v53; // r9
  int v54; // r0
  int v55; // r1
  unsigned int v56; // r2
  int v57; // r3
  unsigned int v58; // r9
  int v59; // r0
  unsigned int v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r12
  int v64; // r2
  _DWORD *v65; // r0
  unsigned __int8 *v66; // r0
  int v67; // r10
  unsigned __int8 *v68; // r11
  void *v69; // r0
  signed int v70; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  pthread_mutex_t *sa; // [sp+14h] [bp-1048h]
  char *v73; // [sp+18h] [bp-1044h]
  bool v74; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v76; // [sp+24h] [bp-1038h]
  int v77; // [sp+2Ch] [bp-1030h] BYREF
  unsigned int v78; // [sp+30h] [bp-102Ch] BYREF
  unsigned int v79; // [sp+34h] [bp-1028h] BYREF
  int v80; // [sp+38h] [bp-1024h] BYREF
  int v81; // [sp+3Ch] [bp-1020h]
  unsigned int v82; // [sp+40h] [bp-101Ch]
  int v83; // [sp+44h] [bp-1018h]
  int v84; // [sp+48h] [bp-1014h]
  unsigned int v85; // [sp+4Ch] [bp-1010h]
  int v86; // [sp+50h] [bp-100Ch]
  int v87; // [sp+54h] [bp-1008h]
  char v88[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v70 = v6[3];
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v73 = (char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = v20 == 0;
  if ( v20 )
    v20 = (_DWORD *)*v20;
  else
    v74 = 0;
  if ( !v21 )
    v74 = v20 == (_DWORD *)5;
  if ( valid_ascii(v9)
    && valid_hex(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(s)
    && (valid = valid_hex(v73)) != 0 )
  {
    v23 = strlen(v11);
    hex2bin((int)&v80, (unsigned __int8 *)v11, v23 >> 1);
    n = strlen(v13) >> 1;
    v24 = calloc(n, 1u);
    v25 = v24;
    if ( !v24 )
    {
      V_LOCK();
      logfmt_raw(v88, 0x1000u, 0, "Failed to calloc pool coinbase1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_notify_ltc",
        18,
        58,
        100,
        v88);
      return 0;
    }
    hex2bin((int)v24, (unsigned __int8 *)v13, n);
    v76 = strlen(v15) >> 1;
    v26 = calloc(v76, 1u);
    v27 = v26;
    if ( v26 )
    {
      hex2bin((int)v26, (unsigned __int8 *)v15, v76);
      v28 = strlen(v17);
      hex2bin((int)&v79, (unsigned __int8 *)v17, v28 >> 1);
      v29 = strlen(s);
      hex2bin((int)&v78, (unsigned __int8 *)s, v29 >> 1);
      v30 = strlen(v73);
      hex2bin((int)&v77, (unsigned __int8 *)v73, v30 >> 1);
      if ( a2 == (pthread_mutex_t *)-440 )
      {
        valid = 0;
      }
      else
      {
        owner = (const char *)a2[34].__owner;
        if ( owner && !strcmp(owner, v9) )
        {
          V_LOCK();
          logfmt_raw(v88, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[34].__owner, v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            75,
            80,
            v88);
        }
        if ( strlen(v9) > 0x3F )
        {
          V_LOCK();
          v32 = strlen(v9);
          logfmt_raw(v88, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v9, v32, 64);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            78,
            80,
            v88);
        }
        sa = a2 + 40;
        pthread_mutex_lock(a2 + 40);
        v33 = (void *)a2[34].__owner;
        a2[34].__owner = (int)_strdup(v9);
        if ( v33 )
          free(v33);
        count = (void *)a2[12].__count;
        if ( count )
          free(count);
        lock = a2[3].__lock;
        v36 = lock + a2[3].__owner + n;
        a2[12].__lock = v76 + v36;
        v37 = (char *)calloc(v76 + v36, 1u);
        v38 = v37;
        a2[12].__count = (unsigned int)v37;
        if ( v37 )
        {
          memcpy(v37, v25, n);
          memcpy(&v38[n], (const void *)a2[3].__count, lock);
          v39 = &v38[v36];
          v40 = 0;
          memcpy(v39, v27, v76);
          v41 = v80;
          v42 = v81;
          v43 = v82;
          v44 = v83;
          a2[3].__kind = n + lock;
          v45 = v79;
          a2[3].__spins = v41;
          a2[4].__lock = v42;
          a2[4].__count = v43;
          a2[4].__owner = v44;
          v46 = v84;
          v47 = v85;
          v48 = v86;
          v49 = v87;
          v50 = v77;
          a2[13].__kind = v45;
          a2[4].__spins = v48;
          v51 = v78;
          a2[5].__lock = v49;
          a2[4].__kind = v46;
          a2[4].__nusers = v47;
          v52 = a2[13].__count;
          a2[14].__lock = v51;
          a2[14].__kind = v50;
          while ( v40 < v52 )
          {
            if ( *(_DWORD *)(a2[13].__owner + 4 * v40) )
            {
              free(*(void **)(a2[13].__owner + 4 * v40));
              v52 = a2[13].__count;
              *(_DWORD *)(a2[13].__owner + 4 * v40) = 0;
            }
            ++v40;
          }
          v53 = 0;
          a2[13].__count = 0;
          if ( v70 )
          {
            a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v70);
            while ( v53 < v70 )
            {
              v65 = json_array_get(v6, v53);
              v66 = (unsigned __int8 *)json_string_value(v65);
              v67 = a2[13].__owner;
              v68 = v66;
              v69 = malloc(0x20u);
              *(_DWORD *)(v67 + 4 * v53++) = v69;
              hex2bin((int)v69, v68, 32);
            }
            a2[13].__count = v70;
          }
          memset(&a2[18].__align + 4, 0, 0x50u);
          v54 = v80;
          v55 = v81;
          v56 = v82;
          v57 = v83;
          a2[18].__nusers = v79;
          v58 = v78;
          a2[18].__spins = v54;
          a2[19].__lock = v55;
          a2[19].__count = v56;
          a2[19].__owner = v57;
          v59 = v84;
          v60 = v85;
          v61 = v86;
          v62 = v87;
          v63 = v77;
          a2[21].__nusers = v58;
          a2[19].__spins = v61;
          v64 = a2->__lock;
          a2[20].__lock = v62;
          a2[19].__kind = v59;
          a2[19].__nusers = v60;
          a2[17].__size[16] = v74;
          a2[21].__kind = v63;
          *((_QWORD *)&a2[18].__align + 1) = v64;
          pthread_mutex_unlock(sa);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v88, 0x1000u, 0, "Failed to calloc pool coinbase");
          V_UNLOCK();
          valid = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            89,
            100,
            v88);
          pthread_mutex_unlock(sa);
        }
      }
      free(v27);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v88, 0x1000u, 0, "Failed to calloc pool coinbase2");
      V_UNLOCK();
      valid = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_notify_ltc",
        18,
        65,
        100,
        v88);
    }
    free(v25);
    return valid;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v88, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ltc/frontend_ltc.c",
      157,
      "stratum_notify_ltc",
      18,
      50,
      100,
      v88);
    return 0;
  }
}
