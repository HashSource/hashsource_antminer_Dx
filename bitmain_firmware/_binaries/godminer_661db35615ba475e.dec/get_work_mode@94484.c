int __fastcall get_work_mode(int a1)
{
  int v2; // r0
  char *v3; // r4
  int v4; // r5
  int v5; // r10
  int v6; // r9
  int v7; // r11
  char *v8; // r4
  int v9; // lr
  int v10; // r12
  int v11; // r1
  int v12; // r0
  int v14; // [sp+0h] [bp-102Ch]
  int v15; // [sp+4h] [bp-1028h]
  unsigned int v16; // [sp+1Ch] [bp-1010h]
  char *ptr; // [sp+20h] [bp-100Ch]
  int v18; // [sp+24h] [bp-1008h]
  char v19[4100]; // [sp+28h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v19, 0x1000u, 0, "%s...", "get_work_mode");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_work_mode",
    13,
    353,
    60,
    v19);
  ptr = (char *)malloc(0x600u);
  v2 = sub_93DE0(a1, 255, 12, ptr);
  v18 = v2;
  if ( v2 > 0 )
  {
    if ( v2 <= 2 )
    {
      v4 = 0;
      v7 = v2;
    }
    else
    {
      v3 = ptr + 42;
      v4 = 0;
      v16 = ((v2 - 3) & 0xFFFFFFFE) + 2;
      do
      {
        __pld(v3);
        pthread_mutex_lock(&stru_197BB8);
        v5 = *(_DWORD *)(v3 - 42);
        v6 = *((unsigned __int16 *)v3 - 18);
        v15 = (unsigned __int8)*(v3 - 34);
        v4 += 2;
        v14 = (unsigned __int8)*(v3 - 38);
        v3 += 24;
        logfmt_raw(v19, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v14, v15, v6, v5);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_work_mode",
          13,
          358,
          60,
          v19);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v19,
          0x1000u,
          0,
          "chip %02x core %02x reg %02x cnt %08x",
          (unsigned __int8)*(v3 - 50),
          (unsigned __int8)*(v3 - 46),
          *((unsigned __int16 *)v3 - 24),
          *(_DWORD *)(v3 - 54));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_work_mode",
          13,
          358,
          60,
          v19);
      }
      while ( v4 != v16 );
      v7 = v18;
    }
    v8 = &ptr[12 * v4];
    do
    {
      pthread_mutex_lock(&stru_197BB8);
      v9 = *(_DWORD *)v8;
      v10 = (unsigned __int8)v8[4];
      v11 = *((unsigned __int16 *)v8 + 3);
      ++v4;
      v12 = (unsigned __int8)v8[8];
      v8 += 12;
      logfmt_raw(v19, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v10, v12, v11, v9);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "get_work_mode",
        13,
        358,
        60,
        v19);
    }
    while ( v7 > v4 );
  }
  free(ptr);
  return 0;
}
