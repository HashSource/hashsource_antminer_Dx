int __fastcall statusServiceThread(int a1)
{
  int v2; // r6
  char *v3; // r8
  ssize_t v4; // r3
  int v5; // r7
  int v6; // r11
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int v10; // r7
  int v11; // r7
  int v12; // r0
  unsigned int v13; // r7
  size_t v14; // r0
  ssize_t v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r1
  int v20; // r2
  ssize_t v21; // r9
  int v22; // r0
  int v23; // r3
  char *v24; // [sp+Ch] [bp-10h]
  signed int v25; // [sp+10h] [bp-Ch]
  char v26[4]; // [sp+18h] [bp-4h] BYREF
  socklen_t v27; // [sp+1Ch] [bp+0h] BYREF
  char needle[8]; // [sp+20h] [bp+4h] BYREF
  _DWORD optval[2]; // [sp+28h] [bp+Ch] BYREF
  struct sockaddr addr; // [sp+30h] [bp+14h] BYREF
  char s[4096]; // [sp+40h] [bp+24h] BYREF
  char v32[4096]; // [sp+1040h] [bp+1024h] BYREF
  char v33[10176]; // [sp+2040h] [bp+2024h] BYREF
  char v34[10244]; // [sp+4840h] [bp+4824h] BYREF

  optval[0] = 3;
  optval[1] = 0;
  memset(s, 0, sizeof(s));
  v27 = 0;
  v2 = 0;
  v3 = v34;
  strcpy(v26, "\r\n");
  strcpy(needle, "\r\n\r\n");
  memset(v34, 0, 0x2800u);
  do
  {
    v5 = (unsigned __int8)ExitServer;
    if ( ExitServer )
      goto LABEL_6;
    v4 = recvfrom(a1, v3, 10239 - v2, 0, &addr, &v27);
    v2 += v4;
    if ( v4 <= 0 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, v5, ":statusServiceThread recvfrom<=0");
      V_UNLOCK();
      v20 = 51;
LABEL_26:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/http.c",
        142,
        "statusServiceThread",
        19,
        v20,
        20,
        v33);
      return 0;
    }
    v3 = &v34[v2];
    if ( v2 > 10238 )
    {
      close(a1);
      V_LOCK();
      logfmt_raw(v33, 0x1000u, v5, "BUFSIZE is too small!");
      V_UNLOCK();
      v20 = 59;
      goto LABEL_26;
    }
  }
  while ( !strstr(v34, needle) );
  V_LOCK();
  logfmt_raw(v33, 0x1000u, v5, "find http request end flag!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/http.c",
    142,
    "statusServiceThread",
    19,
    66,
    20,
    v33);
LABEL_6:
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v33, 0x1000u, 0, "get http=%s", v34);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/http.c",
    142,
    "statusServiceThread",
    19,
    71,
    20,
    v33);
  if ( v34[0] != 71 || v34[1] != 69 || v34[2] != 84 || v34[3] != 32 )
  {
    close(a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v33, 0x1000u, 0, "statusServiceThread not support http command");
    pthread_mutex_unlock(&stru_1A8A24);
    v17 = 78;
    LOWORD(v18) = -30452;
    v16 = g_zc;
    v24 = v33;
LABEL_23:
    HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/common/general/http.c" >> 16;
    zlog(v16, v18, 142, "statusServiceThread", 19, v17, 20, v24);
    return 0;
  }
  if ( setsockopt(a1, 1, 21, optval, 8u) )
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "setsockopt SO_SNDTIMEO failed");
    V_UNLOCK();
    v22 = g_zc;
    v23 = 86;
LABEL_38:
    zlog(
      v22,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      v23,
      20,
      v33);
    return 0;
  }
  v6 = setsockopt(a1, 1, 20, optval, 8u);
  if ( v6 )
  {
    close(a1);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "setsockopt SO_RCVTIMEO failed");
    V_UNLOCK();
    v22 = g_zc;
    v23 = 94;
    goto LABEL_38;
  }
  if ( http_test_case )
  {
    if ( !((int (__fastcall *)(char *, char *, int))http_test_case)(v34, s, 4096) )
      goto LABEL_14;
    close(a1);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "statusServiceThread exit for Error cmd!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      107,
      20,
      v33);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "No 6060 test case found.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      102,
      20,
      v33);
LABEL_14:
    v25 = strlen(s);
    v7 = sprintf(v33, "HTTP/1.0  200  OK%s", v26);
    v8 = v7 + sprintf(&v33[v7], "Server: SearchFreqServer%s", v26);
    v9 = v8 + sprintf(&v33[v8], "Cache-Control: no-cache%s", v26);
    v10 = v9 + sprintf(&v33[v9], "Pragma: no-cache%s", v26);
    v11 = v10 + sprintf(&v33[v10], "Content-Type: text/plain%s", v26);
    v12 = sprintf(&v33[v11], "Content-Length: %d%s", v25, v26);
    sprintf(&v33[v11 + v12], "Connection: Keep-Alive%s", needle);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "send http response...\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      122,
      20,
      v32);
    v13 = (unsigned __int8)ExitServer;
    if ( !ExitServer )
    {
      v14 = strlen(v33);
      do
      {
        v15 = send(a1, &v33[v13], v14 - v13, 0x4000);
        if ( v15 == -1 )
        {
          if ( *_errno_location() != 11 )
          {
LABEL_21:
            close(a1);
            V_LOCK();
            logfmt_raw(v32, 0x1000u, 0, "statusServiceThread send http response error");
            V_UNLOCK();
            v16 = g_zc;
            v17 = 138;
            LOWORD(v18) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildr"
                                            "oot/tmp/release/build/godminer-origin_master/common/general/http.c";
            v24 = v32;
            goto LABEL_23;
          }
          V_LOCK();
          logfmt_raw(v32, 0x1000u, 0, "statusServiceThread send http timeout, try again...");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/common/general/http.c",
            142,
            "statusServiceThread",
            19,
            131,
            20,
            v32);
          usleep((__useconds_t)&stru_18694.st_info);
        }
        else
        {
          v13 += v15;
          if ( v15 <= 0 )
            goto LABEL_21;
        }
        v14 = strlen(v33);
      }
      while ( v14 > v13 && !ExitServer );
    }
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "send http data...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      152,
      20,
      v32);
    while ( 1 )
    {
      v21 = send(a1, &s[v6], v25 - v6, 0);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v32, 0x1000u, 0, "send http data ret=%d", v21);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/http.c",
        142,
        "statusServiceThread",
        19,
        158,
        20,
        v32);
      if ( v21 <= 0 )
        break;
      v6 += v21;
      if ( v25 <= v6 || ExitServer )
        goto LABEL_34;
    }
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "statusServiceThread send http data error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      162,
      20,
      v32);
LABEL_34:
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "one client disconnected!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/http.c",
      142,
      "statusServiceThread",
      19,
      172,
      20,
      v32);
    close(a1);
    return v6;
  }
}
