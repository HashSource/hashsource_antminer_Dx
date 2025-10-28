int httpListenThread()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r11
  int v5; // r0
  int v6; // r2
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr addr; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr v9; // [sp+30h] [bp-1014h] BYREF
  char v10[4100]; // [sp+40h] [bp-1004h] BYREF

  do
  {
    v0 = socket(2, 1, 6);
    listen_sockfd = v0;
    if ( v0 < 0 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, 0, 1608820);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/http.c",
        142,
        "httpListenThread",
        16,
        197,
        60,
        v10);
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&v9.sa_family = -1407778814;
      memset(&v9.sa_data[2], 0, 12);
      if ( bind(v0, &v9, 0x10u) < 0 )
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v10, 0x1000u, 0, 1608868);
        pthread_mutex_unlock(&stru_1A8A24);
        v5 = g_zc;
        v6 = 210;
      }
      else
      {
        if ( listen(listen_sockfd, 100) >= 0 )
          break;
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v10, 0x1000u, 0, 1608916);
        pthread_mutex_unlock(&stru_1A8A24);
        v5 = g_zc;
        v6 = 221;
      }
      zlog(
        v5,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/http.c",
        142,
        "httpListenThread",
        16,
        v6,
        60,
        v10);
      close(listen_sockfd);
      listen_sockfd = -1;
      sleep(0xAu);
    }
  }
  while ( !ExitServer );
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v10, 0x1000u, 0, 1608960);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/http.c",
    142,
    "httpListenThread",
    16,
    234,
    60,
    v10);
  if ( !ExitServer )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(listen_sockfd, &addr, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_10;
      }
      v3 = (unsigned __int8)ExitServer;
      if ( ExitServer )
        break;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, v3, 1608988, v2);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/http.c",
        142,
        "httpListenThread",
        16,
        256,
        20,
        v10);
      statusServiceThread(v2);
      if ( ExitServer )
        goto LABEL_10;
    }
    close(v1);
  }
LABEL_10:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
