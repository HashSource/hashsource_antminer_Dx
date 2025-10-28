int __fastcall sub_4B5A8(int a1, const void *a2)
{
  int v4; // r2
  char v5; // r1
  int v6; // r5
  char *v7; // r2
  int v8; // r3
  int v10; // [sp+10h] [bp-1914h] BYREF
  int v11; // [sp+14h] [bp-1910h] BYREF
  int v12; // [sp+18h] [bp-190Ch] BYREF
  int v13; // [sp+1Ch] [bp-1908h] BYREF
  char s[256]; // [sp+20h] [bp-1904h] BYREF
  char v15[2048]; // [sp+120h] [bp-1804h] BYREF
  char v16[4100]; // [sp+920h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  pthread_mutex_lock(&stru_190C74[a1]);
  if ( sub_B3E74(a1, &v13, &v10, &v11, &v12) )
  {
    snprintf(v15, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v16, 0x1000u, 0, v15);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_uart.c",
      165,
      "uart_send",
      9,
      408,
      100,
      v16);
    pthread_mutex_unlock(&stru_190C74[a1]);
    return 0;
  }
  else
  {
    v4 = v10;
    v5 = v13;
    v6 = dword_197C8C;
    while ( ((*(_DWORD *)(v6 + (v4 & 0xFFFFFFFC)) >> v5) & 0x80) == 0 )
    {
      usleep(0);
      v4 = v10;
      v6 = dword_197C8C;
      v5 = v13;
    }
    memcpy(s, a2, 0x80u);
    v7 = s;
    do
    {
      v8 = (unsigned __int8)v7[1];
      v7 += 4;
      *(_DWORD *)(v6 + (v12 & 0xFFFFFFFC)) = (v8 << 16)
                                           | ((unsigned __int8)*(v7 - 4) << 24)
                                           | (unsigned __int8)*(v7 - 1)
                                           | ((unsigned __int8)*(v7 - 2) << 8);
    }
    while ( &s[128] != v7 );
    *(_DWORD *)(v6 + (v11 & 0xFFFFFFFC)) = -2147483520;
    pthread_mutex_unlock(&stru_190C74[a1]);
    return 128;
  }
}
