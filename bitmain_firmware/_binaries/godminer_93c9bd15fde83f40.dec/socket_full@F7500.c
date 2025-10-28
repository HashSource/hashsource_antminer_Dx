int __fastcall socket_full(int a1, __time_t a2)
{
  int v4; // r1
  char *v5; // r3
  int v6; // r2
  struct timeval timeout; // [sp+10h] [bp-1088h] BYREF
  fd_set s; // [sp+18h] [bp-1080h] BYREF
  char v10[4096]; // [sp+98h] [bp-1000h] BYREF

  if ( a1 == -1 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v10, 0x1000u, 0, 1607404);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/socket.c",
      144,
      "socket_full",
      11,
      47,
      20,
      v10);
    return 0;
  }
  else
  {
    memset(&s, 0, sizeof(s));
    LOBYTE(v4) = a1 & 0x1F;
    timeout.tv_sec = a2;
    v5 = &v10[4 * (a1 / 32)];
    if ( a1 <= 0 )
      v4 = -(-a1 & 0x1F);
    v6 = *((_DWORD *)v5 - 32);
    timeout.tv_usec = 0;
    *((_DWORD *)v5 - 32) = v6 | (1 << v4);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v10, 0x1000u, 0, 1607568);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/socket.c",
      144,
      "socket_full",
      11,
      55,
      20,
      v10);
    if ( select(a1 + 1, &s, 0, 0, &timeout) <= 0 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, 0, 1607620);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/socket.c",
        144,
        "socket_full",
        11,
        60,
        20,
        v10);
      return 0;
    }
    else
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, 0, 1607596);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/socket.c",
        144,
        "socket_full",
        11,
        57,
        20,
        v10);
      return 1;
    }
  }
}
