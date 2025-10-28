int __fastcall send_line(int a1, char *s)
{
  int v3; // r7
  size_t v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r6
  int v9; // r11
  signed int v10; // r5
  ssize_t v11; // r0
  struct timeval timeout; // [sp+18h] [bp-100Ch] BYREF
  fd_set sa; // [sp+20h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&sa, 0x1000u, 0, "socket invalid!");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/socket.c",
      144,
      "send_line",
      9,
      12,
      20,
      &sa);
    return 0;
  }
  else
  {
    v3 = 0;
    v5 = strlen(s);
    v6 = a1 + 31;
    if ( a1 >= 0 )
      v6 = a1;
    LOBYTE(v7) = a1 & 0x1F;
    if ( a1 <= 0 )
      v7 = -(-a1 & 0x1F);
    v8 = v6 >> 5;
    v9 = 1 << v7;
    v10 = v5 + 1;
    s[v5] = 10;
    while ( 1 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      memset(&sa, 0, sizeof(sa));
      sa.__fds_bits[v8] |= v9;
      if ( select(a1 + 1, 0, &sa, 0, &timeout) <= 0 )
        break;
      v11 = send(a1, &s[v3], v10, 0x4000);
      if ( v11 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 0;
      }
      else
      {
        v10 -= v11;
        v3 += v11;
        if ( v10 <= 0 )
          return 1;
      }
    }
    return 0;
  }
}
