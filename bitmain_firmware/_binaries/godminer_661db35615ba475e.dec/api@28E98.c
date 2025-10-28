int api()
{
  struct addrinfo *v0; // r4
  struct addrinfo *i; // r3
  int v2; // r0
  int v3; // r6
  time_t v4; // r9
  int *v5; // r0
  char *v6; // r5
  char *v7; // r10
  int servlen; // r4
  int v9; // r0
  ssize_t v10; // r3
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  int v13; // r0
  int v14; // r8
  int v15; // r9
  int v16; // r3
  int v17; // r5
  int v18; // r8
  unsigned int *v19; // r5
  int v20; // r6
  unsigned int v21; // r9
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  _DWORD *v25; // r0
  _DWORD *v26; // r5
  unsigned int v27; // r3
  char *v28; // r0
  char *v29; // r5
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r2
  int v33; // r0
  _DWORD *v34; // r9
  _DWORD *v35; // r5
  bool v36; // zf
  const char *v37; // r1
  _DWORD *v38; // r4
  int *v39; // r10
  _DWORD *v40; // r9
  bool v41; // zf
  char **v42; // r6
  int v43; // r5
  const char *v44; // r8
  char *v45; // t1
  int *v46; // r0
  unsigned int *v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r2
  int v50; // r0
  unsigned int *v51; // r3
  unsigned int v52; // r2
  unsigned int v53; // r2
  _DWORD *v54; // r0
  _DWORD *v55; // r8
  char *v56; // r0
  char *v57; // r5
  unsigned int *v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r2
  unsigned int *v61; // r3
  unsigned int v62; // r2
  int *v63; // r0
  char *v64; // r0
  int *v66; // r7
  unsigned int v67; // r9
  int v68; // r3
  _DWORD *v69; // r6
  char *v70; // r6
  int v71; // r12
  unsigned int v72; // r7
  _DWORD *v73; // r2
  bool v74; // zf
  int v75; // r3
  unsigned int v76; // r3
  _DWORD *v77; // r4
  bool v78; // zf
  const char *v79; // r1
  int *v80; // r7
  _DWORD *v81; // r10
  bool v82; // zf
  _DWORD *v83; // r0
  _DWORD *v84; // r0
  unsigned int *v85; // r2
  unsigned int v86; // r1
  unsigned int v87; // r1
  const char *v88; // r0
  int *v89; // r0
  char *v90; // r0
  int v91; // [sp+18h] [bp-F55Ch]
  int v92; // [sp+20h] [bp-F554h]
  int v93; // [sp+24h] [bp-F550h]
  _DWORD *v94; // [sp+2Ch] [bp-F548h]
  char *v95; // [sp+30h] [bp-F544h]
  _DWORD *v96; // [sp+38h] [bp-F53Ch]
  int *v97; // [sp+44h] [bp-F530h]
  _DWORD *v98; // [sp+4Ch] [bp-F528h]
  char *v99; // [sp+50h] [bp-F524h]
  socklen_t addr_len; // [sp+5Ch] [bp-F518h] BYREF
  int fd; // [sp+60h] [bp-F514h] BYREF
  int v102; // [sp+64h] [bp-F510h] BYREF
  struct addrinfo *pai; // [sp+68h] [bp-F50Ch] BYREF
  int optval; // [sp+6Ch] [bp-F508h] BYREF
  char service[12]; // [sp+70h] [bp-F504h] BYREF
  char v106[4]; // [sp+7Ch] [bp-F4F8h] BYREF
  int v107; // [sp+80h] [bp-F4F4h]
  int v108; // [sp+84h] [bp-F4F0h]
  int v109; // [sp+88h] [bp-F4ECh]
  char v110[4]; // [sp+8Ch] [bp-F4E8h] BYREF
  int v111; // [sp+90h] [bp-F4E4h]
  int v112; // [sp+94h] [bp-F4E0h]
  int v113; // [sp+98h] [bp-F4DCh]
  char s1[4]; // [sp+9Ch] [bp-F4D8h] BYREF
  int v115; // [sp+A0h] [bp-F4D4h]
  int v116; // [sp+A4h] [bp-F4D0h]
  int v117; // [sp+A8h] [bp-F4CCh]
  _DWORD v118[5]; // [sp+ACh] [bp-F4C8h] BYREF
  struct addrinfo v119; // [sp+C0h] [bp-F4B4h] BYREF
  struct sockaddr addr; // [sp+E0h] [bp-F494h] BYREF
  char v121[16]; // [sp+160h] [bp-F414h] BYREF
  char v122[252]; // [sp+25Ch] [bp-F318h] BYREF
  char src[256]; // [sp+358h] [bp-F21Ch] BYREF
  _DWORD v124[70]; // [sp+458h] [bp-F11Ch] BYREF
  char s[4096]; // [sp+570h] [bp-F004h] BYREF
  char v126[4048]; // [sp+1570h] [bp-E004h] BYREF
  char v127[4048]; // [sp+2570h] [bp-D004h] BYREF
  char v128[3984]; // [sp+3570h] [bp-C004h] BYREF
  char v129[3984]; // [sp+4570h] [bp-B004h] BYREF
  char v130[3984]; // [sp+5570h] [bp-A004h] BYREF
  char v131[3984]; // [sp+6570h] [bp-9004h] BYREF
  char v132[3984]; // [sp+7570h] [bp-8004h] BYREF
  char v133[3984]; // [sp+8570h] [bp-7004h] BYREF
  char v134[3984]; // [sp+9570h] [bp-6004h] BYREF
  char v135[3984]; // [sp+A570h] [bp-5004h] BYREF
  char v136[3984]; // [sp+B570h] [bp-4004h] BYREF
  char v137[3984]; // [sp+C570h] [bp-3004h] BYREF
  char v138[8196]; // [sp+D570h] [bp-2004h] BYREF

  v102 = -1;
  fd = -1;
  memset(v138, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  *(_DWORD *)v110 = 0;
  *(_DWORD *)v106 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v126, 0x1000u, 0, "Start %s function\n", "api");
  pthread_mutex_unlock(&stru_197BB8);
  v91 = 2;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "api",
    3,
    2143,
    60,
    v126);
  v0 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v124, 0);
  if ( v0 )
  {
    sub_21898(&v102);
    _pthread_unwind_next((__pthread_unwind_buf_t *)v124);
LABEL_169:
    v3 = (int)v0;
    goto LABEL_9;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)v124);
  sprintf(service, "%d", 4028);
  memset(&v119.ai_family, 0, 28);
  v119.ai_flags = 1;
  v93 = getaddrinfo("0.0.0.0", service, &v119, &pai);
  if ( v93 )
  {
    V_LOCK();
    v70 = v136;
    logfmt_raw(v136, 0x1000u, 0, "%s: exec getaddrinfo() failed\n", "api_init_socket");
    V_UNLOCK();
    v71 = 1762;
    goto LABEL_119;
  }
  v0 = pai;
  if ( !pai )
    goto LABEL_169;
  for ( i = pai; ; i = pai )
  {
    v2 = socket(i->ai_family, 1, 0);
    if ( v2 > 0 )
    {
      v3 = v2;
      goto LABEL_9;
    }
    v0 = v0->ai_next;
    if ( !v0 )
      break;
  }
  v3 = v2;
  if ( v2 == -1 )
  {
    V_LOCK();
    v70 = v135;
    logfmt_raw(v135, 0x1000u, 0, "%s: exec socket() failed\n", "api_init_socket");
    V_UNLOCK();
    v71 = 1775;
LABEL_119:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      v71,
      100,
      v70);
    goto LABEL_116;
  }
LABEL_9:
  optval = 1;
  setsockopt(v3, 1, 2, &optval, 4u);
  v4 = time(0);
  while ( bind(v3, v0->ai_addr, v0->ai_addrlen) < 0 )
  {
    v5 = _errno_location();
    v6 = strerror(*v5);
    if ( time(0) - v4 > 61 )
    {
      freeaddrinfo(pai);
      V_LOCK();
      logfmt_raw(v133, 0x1000u, 0, "api bind to port %d, failed (%s)", 4028, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/api_new.c",
        130,
        "api_init_socket",
        15,
        1798,
        100,
        v133);
      goto LABEL_116;
    }
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v134, 0x1000u, 0, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", 4028);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1790,
      80,
      v134);
    sleep(0x1Eu);
  }
  freeaddrinfo(pai);
  if ( listen(v3, 100) < 0 )
  {
    V_LOCK();
    v89 = _errno_location();
    v90 = strerror(*v89);
    logfmt_raw(v132, 0x1000u, 0, "%s: exec listen() failed (%s)", "api_init_socket", v90);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1803,
      100,
      v132);
    close(v3);
    goto LABEL_116;
  }
  if ( v3 >= 0 )
  {
    v7 = byte_190870;
    v102 = v3;
    while ( 1 )
    {
      servlen = (unsigned __int8)*v7;
      if ( *v7 )
      {
LABEL_104:
        _pthread_unregister_cancel((__pthread_unwind_buf_t *)v124);
        sub_21898(&v102);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v127, 0x1000u, 0, "End %s function !!!", "api");
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2214,
          60,
          v127);
        return close(v102);
      }
      addr_len = 128;
      v9 = accept(v102, &addr, &addr_len);
      fd = v9;
      if ( v9 < 0 )
      {
        pthread_mutex_lock(&stru_197BB8);
        v63 = _errno_location();
        v64 = strerror(*v63);
        logfmt_raw(v129, 0x1000u, servlen, "%s: exec accept failed (%s)", "api", v64);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2157,
          100,
          v129);
        goto LABEL_104;
      }
      v10 = recv(v9, v138, 0xFFFu, servlen);
      if ( v10 < 0 )
      {
        v138[0] = servlen;
        goto LABEL_16;
      }
      dword_190C60 = servlen;
      dword_190C64 = servlen;
      dword_190C68 = servlen;
      dword_190C6C = servlen;
      v138[v10] = servlen;
      *(_DWORD *)v110 = servlen;
      *(_DWORD *)v106 = servlen;
      v111 = servlen;
      v112 = servlen;
      v113 = servlen;
      v107 = servlen;
      v108 = servlen;
      v109 = servlen;
      *((_DWORD *)v7 + 251) = time((time_t *)servlen);
      getnameinfo(&addr, 0x80u, (char *)&dword_190C60, 0x10u, (char *)servlen, servlen, 1u);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v130, 0x1000u, servlen, "connect_addr: %s", &dword_190C60);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/api_new.c",
        130,
        "api",
        3,
        2173,
        20,
        v130);
      v115 = servlen;
      *(_DWORD *)s1 = servlen;
      v116 = servlen;
      v117 = servlen;
      v11 = json_loads((int)v138, servlen, (int)v121);
      v12 = v11;
      if ( !v11 || *v11 )
        goto LABEL_36;
      v13 = sub_101820((unsigned __int16 *)"command", 7u, hashtable_seed);
      v14 = v12[3];
      v15 = v13;
      v16 = v13 & ~(-1 << v12[4]);
      v17 = *(_DWORD *)(v14 + 8 * v16);
      v18 = v14 + 8 * v16;
      if ( (_DWORD *)v17 == v12 + 5 && v17 == *(_DWORD *)(v18 + 4) )
        goto LABEL_31;
      while ( v15 != *(_DWORD *)(v17 + 16) || strcmp((const char *)(v17 + 24), "command") )
      {
        if ( v17 == *(_DWORD *)(v18 + 4) )
          goto LABEL_31;
        v17 = *(_DWORD *)(v17 + 4);
      }
      v19 = *(unsigned int **)(v17 + 20);
      v20 = 0;
      if ( !v19 || (v21 = *v19, *v19 != 1) )
      {
LABEL_31:
        if ( v12[1] != -1 )
        {
          v22 = v12 + 1;
          __dmb(0xBu);
          do
          {
            v23 = __ldrex(v22);
            v24 = v23 - 1;
          }
          while ( __strex(v24, v22) );
          if ( !v24 )
            json_delete(v12);
        }
LABEL_36:
        v12 = json_object();
        v25 = json_loads((int)v138, 0, (int)v122);
        v26 = v25;
        if ( !v25 || *v25 )
        {
          v91 = 2;
          snprintf(v110, 0x10u, "%s", v138);
          v27 = 2;
          goto LABEL_39;
        }
        v50 = json_object_get(v25, "command");
        if ( !v50 || *(_DWORD *)v50 != 2 )
        {
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v137, 0x1000u, 0, "%s error: format error about command\n", "parse_recv_buf");
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "parse_recv_buf",
            14,
            1836,
            100,
            v137);
          if ( v26[1] != -1 )
          {
            v51 = v26 + 1;
            __dmb(0xBu);
            do
            {
              v52 = __ldrex(v51);
              v53 = v52 - 1;
            }
            while ( __strex(v53, v51) );
            if ( !v53 )
              json_delete(v26);
          }
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v131, 0x1000u, 0, "%s: input invaild param format", "api");
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "api",
            3,
            2186,
            100,
            v131);
          sub_27658(v12, 0, 24, "Missing JSON 'command'");
LABEL_40:
          if ( v91 != 2 )
          {
            v28 = json_dumps(v12, 24576);
            v29 = v28;
            if ( v28 )
              sub_24EE0(&fd, v28);
            if ( v12 && v12[1] != -1 )
            {
              v30 = v12 + 1;
              __dmb(0xBu);
              do
              {
                v31 = __ldrex(v30);
                v32 = v31 - 1;
              }
              while ( __strex(v32, v30) );
              if ( !v32 )
                json_delete(v12);
            }
            free(v29);
            goto LABEL_16;
          }
          memset(s, 0, sizeof(s));
          if ( v12 )
          {
            v33 = json_object_get(v12, "STATUS");
            if ( v33 )
            {
              if ( *(_DWORD *)v33 == 1 )
              {
                if ( *(_DWORD *)(v33 + 12) )
                {
                  v34 = **(_DWORD ***)(v33 + 16);
                  if ( v34 )
                  {
                    if ( !*v34 )
                    {
                      v35 = (_DWORD *)v34[8];
                      v36 = v35 == v34 + 7;
                      if ( v35 != v34 + 7 )
                        v36 = v35 == 0;
                      if ( !v36 )
                      {
                        v37 = (const char *)(v35 + 4);
                        if ( v35[3] )
                        {
                          v94 = v12;
                          v95 = v7;
                          v38 = **(_DWORD ***)(v33 + 16);
                          v39 = (int *)v35[3];
                          v40 = v34 + 7;
                          do
                          {
                            strcat(s, v37);
                            *(_WORD *)&s[strlen(s)] = 61;
                            sub_218DC(s, v39);
                            *(_WORD *)&s[strlen(s)] = 44;
                            if ( *v38 )
                              break;
                            v35 = (_DWORD *)v35[1];
                            v41 = v40 == v35;
                            if ( v40 != v35 )
                              v41 = v35 == 0;
                            if ( v41 )
                              break;
                            v37 = (const char *)(v35 + 4);
                            if ( v35 == (_DWORD *)-16 )
                              break;
                            v39 = (int *)v35[3];
                          }
                          while ( v39 );
                          v12 = v94;
                          v7 = v95;
                        }
                      }
                      v42 = (char **)v118;
                      *((_BYTE *)&v124[69] + strlen(s) + 3) = 124;
                      memset(src, 0, sizeof(src));
                      v43 = v93;
                      v118[0] = "SUMMARY";
                      v118[1] = "POOLS";
                      v118[2] = "STATS";
                      v118[3] = "DEVS";
                      v118[4] = "VERSION";
                      while ( 1 )
                      {
                        v45 = *v42++;
                        v44 = v45;
                        v46 = (int *)json_object_get(v12, v45);
                        if ( v46 )
                        {
                          if ( *v46 == 1 )
                            break;
                        }
                        if ( ++v43 == 5 )
                          goto LABEL_74;
                      }
                      v66 = v46;
                      if ( (v43 & 0xFFFFFFFB) != 0 || (snprintf(src, 0x100u, "%s,", v44), strcat(s, src), *v66 == 1) )
                      {
                        v92 = v66[3];
                        if ( v92 > 0 )
                        {
                          v67 = v93;
                          v98 = v12;
                          v68 = 1;
                          v99 = v7;
                          while ( 1 )
                          {
                            if ( v68 == 1 && v67 < v66[3] )
                            {
                              v69 = *(_DWORD **)(v66[4] + 4 * v67);
                              if ( v69 )
                              {
                                if ( !*v69 )
                                {
                                  v77 = (_DWORD *)v69[8];
                                  v78 = v77 == 0;
                                  if ( v77 )
                                    v78 = v77 == v69 + 7;
                                  if ( !v78 )
                                  {
                                    v79 = (const char *)(v77 + 4);
                                    if ( v77[3] )
                                    {
                                      v97 = v66;
                                      v80 = (int *)v77[3];
                                      v81 = v69 + 7;
                                      do
                                      {
                                        strcat(s, v79);
                                        *(_WORD *)&s[strlen(s)] = 61;
                                        sub_218DC(s, v80);
                                        *(_WORD *)&s[strlen(s)] = 44;
                                        if ( *v69 )
                                          break;
                                        v77 = (_DWORD *)v77[1];
                                        v82 = v81 == v77;
                                        if ( v81 != v77 )
                                          v82 = v77 == 0;
                                        if ( v82 )
                                          break;
                                        v79 = (const char *)(v77 + 4);
                                        if ( v77 == (_DWORD *)-16 )
                                          break;
                                        v80 = (int *)v77[3];
                                      }
                                      while ( v80 );
                                      v66 = v97;
                                    }
                                  }
                                  *((_BYTE *)&v124[69] + strlen(s) + 3) = 124;
                                  if ( v92 - 1 != v67 )
                                    s[strlen(s)] = 44;
                                }
                              }
                            }
                            if ( v92 == ++v67 )
                              break;
                            v68 = *v66;
                          }
                          v12 = v98;
                          v7 = v99;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_74:
          sub_24EE0(&fd, s);
          if ( v12 && v12[1] != -1 )
          {
            v47 = v12 + 1;
            __dmb(0xBu);
            do
            {
              v48 = __ldrex(v47);
              v49 = v48 - 1;
            }
            while ( __strex(v49, v47) );
            goto LABEL_78;
          }
          goto LABEL_16;
        }
        snprintf(v110, 0x10u, "%s", *(const char **)(v50 + 8));
        v83 = (_DWORD *)json_object_get(v26, "new_api");
        if ( v83 && *v83 == 5 )
        {
          v27 = v93;
          if ( v26[1] != -1 )
            goto LABEL_160;
        }
        else
        {
          v84 = (_DWORD *)json_object_get(v26, "parameter");
          if ( v84 && *v84 == 2 )
          {
            v88 = (const char *)json_string_value(v84);
            snprintf(v106, 0x10u, "%s", v88);
          }
          v27 = 1;
          if ( v26[1] != -1 )
          {
LABEL_160:
            v85 = v26 + 1;
            __dmb(0xBu);
            do
            {
              v86 = __ldrex(v85);
              v87 = v86 - 1;
            }
            while ( __strex(v87, v85) );
            if ( !v87 )
            {
              v91 = v27;
              json_delete(v26);
              v27 = v91;
LABEL_39:
              sub_277E0(v12, v110, (int)v106, v27);
              goto LABEL_40;
            }
          }
        }
        v91 = v27;
        goto LABEL_39;
      }
      v54 = (_DWORD *)json_object_get(v12, "new_api");
      if ( v54 )
        v21 = *v54 != 5;
      v55 = json_object();
      if ( *v19 == 1 && v19[3] )
      {
        v72 = 0;
        do
        {
          v73 = *(_DWORD **)(v19[4] + 4 * v72);
          v74 = v73 == 0;
          if ( v73 )
            v74 = v72 == 11;
          v75 = v74;
          if ( v74 )
            break;
          if ( *v73 == 2 )
          {
            *(_DWORD *)s1 = v75;
            v115 = v75;
            v116 = v75;
            v117 = v75;
            if ( *v73 == 2 )
              v75 = v73[2];
            snprintf(s1, 0x10u, "%s", v75);
            if ( strcmp(s1, "reload") | v21 )
            {
              v96 = json_object();
              sub_277E0(v96, s1, 0, v21);
              json_object_set_new(v55, s1, v96);
              v76 = *v19;
            }
            else
            {
              v76 = *v19;
              v20 = 1;
            }
            if ( v76 != 1 )
              break;
          }
          ++v72;
        }
        while ( v72 < v19[3] );
      }
      v56 = json_dumps(v55, 24576);
      v57 = v56;
      if ( v56 )
      {
        sub_24EE0(&fd, v56);
        free(v57);
        if ( v20 == 1 )
LABEL_152:
          sub_277E0(v55, "reload", 0, 0);
      }
      else
      {
        free(0);
        if ( v20 == 1 )
          goto LABEL_152;
      }
      if ( v55 )
      {
        if ( v55[1] != -1 )
        {
          v58 = v55 + 1;
          __dmb(0xBu);
          do
          {
            v59 = __ldrex(v58);
            v60 = v59 - 1;
          }
          while ( __strex(v60, v58) );
          if ( !v60 )
            json_delete(v55);
        }
      }
      if ( v12[1] != -1 )
      {
        v61 = v12 + 1;
        __dmb(0xBu);
        do
        {
          v62 = __ldrex(v61);
          v49 = v62 - 1;
        }
        while ( __strex(v49, v61) );
LABEL_78:
        if ( !v49 )
          json_delete(v12);
      }
LABEL_16:
      close(fd);
    }
  }
LABEL_116:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v128, 0x1000u, 0, "%s: init socket failed", "api");
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/api_new.c",
           130,
           "api",
           3,
           2149,
           100,
           v128);
}
