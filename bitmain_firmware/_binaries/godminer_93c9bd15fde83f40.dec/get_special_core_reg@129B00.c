int __fastcall get_special_core_reg(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r6
  int v4; // r8
  char *v5; // r4
  int v6; // r2
  int v7; // r1
  int v8; // r0
  int v10; // [sp+0h] [bp-103Ch]
  int v11; // [sp+4h] [bp-1038h]
  int v12; // [sp+8h] [bp-1034h]
  int v13; // [sp+Ch] [bp-1030h]
  unsigned int v14; // [sp+1Ch] [bp-1020h]
  int v15; // [sp+20h] [bp-101Ch]
  int v16; // [sp+24h] [bp-1018h]
  char *ptr; // [sp+28h] [bp-1014h]
  int v19; // [sp+30h] [bp-100Ch]
  char v20[4100]; // [sp+38h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v20, 0x1000u, 0, 1560772, "get_special_core_reg");
  v15 = 0;
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_special_core_reg",
    20,
    8362,
    60,
    v20);
  v19 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    v1 = sub_C17E0(a1, v15, 81, ptr);
    v16 = v1;
    if ( v1 <= 0 )
      goto LABEL_12;
    if ( v1 <= 2 )
    {
      v3 = 0;
      v4 = v1;
    }
    else
    {
      v2 = ptr + 40;
      v3 = 0;
      v14 = ((v1 - 3) & 0xFFFFFFFE) + 2;
      do
      {
        pthread_mutex_lock(&stru_1A8A24);
        v11 = *((unsigned __int8 *)v2 - 32);
        v3 += 2;
        v10 = *((unsigned __int8 *)v2 - 36);
        v13 = *(v2 - 10);
        v12 = 81;
        __pld(v2);
        v2 += 6;
        logfmt_raw(v20, 0x1000u, 0, 1613928, v10, v11, v12, v13);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_special_core_reg",
          20,
          8369,
          20,
          v20);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          v20,
          0x1000u,
          0,
          1613928,
          *((unsigned __int8 *)v2 - 48),
          *((unsigned __int8 *)v2 - 44),
          81,
          *(v2 - 13));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_special_core_reg",
          20,
          8369,
          20,
          v20);
      }
      while ( v3 != v14 );
      v4 = v16;
    }
    v5 = &ptr[12 * v3];
    do
    {
      pthread_mutex_lock(&stru_1A8A24);
      v6 = *(_DWORD *)v5;
      v7 = (unsigned __int8)v5[8];
      v8 = (unsigned __int8)v5[4];
      ++v3;
      v5 += 12;
      logfmt_raw(v20, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v8, v7, 81, v6);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "get_special_core_reg",
        20,
        8369,
        20,
        v20);
    }
    while ( v4 > v3 );
    if ( v16 != 16 )
    {
LABEL_12:
      v19 = 1;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v20, 0x1000u, 0, 1614136, v15, 81, v16);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "get_special_core_reg",
        20,
        8374,
        100,
        v20);
    }
    ++v15;
  }
  while ( v15 != 8 );
  free(ptr);
  return v19;
}
