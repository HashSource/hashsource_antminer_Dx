int __fastcall get_count_sync(int a1, int a2)
{
  int v4; // r0
  char *v5; // r4
  int v6; // r5
  int v7; // r10
  int v8; // r9
  int v9; // r11
  char *v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r1
  int v14; // r0
  int v16; // [sp+0h] [bp-102Ch]
  int v17; // [sp+4h] [bp-1028h]
  unsigned int v18; // [sp+1Ch] [bp-1010h]
  char *ptr; // [sp+20h] [bp-100Ch]
  int v20; // [sp+24h] [bp-1008h]
  char v21[4100]; // [sp+28h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v21, 0x1000u, 0, "%s...", "get_count_sync");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_count_sync",
    14,
    341,
    60,
    v21);
  ptr = (char *)malloc(0x600u);
  v4 = sub_93DE0(a1, a2, 202, ptr);
  v20 = v4;
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      v6 = 0;
      v9 = v4;
    }
    else
    {
      v5 = ptr + 42;
      v6 = 0;
      v18 = ((v4 - 3) & 0xFFFFFFFE) + 2;
      do
      {
        __pld(v5);
        pthread_mutex_lock(&stru_197BB8);
        v7 = *(_DWORD *)(v5 - 42);
        v8 = *((unsigned __int16 *)v5 - 18);
        v17 = (unsigned __int8)*(v5 - 34);
        v6 += 2;
        v16 = (unsigned __int8)*(v5 - 38);
        v5 += 24;
        logfmt_raw(v21, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v16, v17, v8, v7);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_count_sync",
          14,
          346,
          60,
          v21);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v21,
          0x1000u,
          0,
          "chip %02x core %02x reg %02x cnt %08x",
          (unsigned __int8)*(v5 - 50),
          (unsigned __int8)*(v5 - 46),
          *((unsigned __int16 *)v5 - 24),
          *(_DWORD *)(v5 - 54));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_count_sync",
          14,
          346,
          60,
          v21);
      }
      while ( v6 != v18 );
      v9 = v20;
    }
    v10 = &ptr[12 * v6];
    do
    {
      pthread_mutex_lock(&stru_197BB8);
      v11 = *(_DWORD *)v10;
      v12 = (unsigned __int8)v10[4];
      v13 = *((unsigned __int16 *)v10 + 3);
      ++v6;
      v14 = (unsigned __int8)v10[8];
      v10 += 12;
      logfmt_raw(v21, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v12, v14, v13, v11);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "get_count_sync",
        14,
        346,
        60,
        v21);
    }
    while ( v9 > v6 );
  }
  free(ptr);
  return 0;
}
