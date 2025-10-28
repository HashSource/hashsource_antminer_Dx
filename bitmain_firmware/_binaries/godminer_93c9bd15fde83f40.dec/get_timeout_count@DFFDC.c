int __fastcall get_timeout_count(int a1)
{
  int v1; // r6
  unsigned __int16 *v2; // r10
  unsigned __int16 *v3; // r4
  int v4; // r10
  int v5; // r7
  int v6; // r6
  int v8; // [sp+4h] [bp-1098h]
  int v9; // [sp+24h] [bp-1078h]
  int v10; // [sp+28h] [bp-1074h]
  int v11; // [sp+30h] [bp-106Ch]
  __int16 i; // [sp+54h] [bp-1048h]
  unsigned __int16 *ptr; // [sp+58h] [bp-1044h]
  int v15; // [sp+64h] [bp-1038h] BYREF
  _DWORD v16[2]; // [sp+68h] [bp-1034h] BYREF
  int v17; // [sp+70h] [bp-102Ch]
  int v18; // [sp+74h] [bp-1028h]
  const char *v19; // [sp+78h] [bp-1024h]
  int v20; // [sp+7Ch] [bp-1020h]
  int v21; // [sp+80h] [bp-101Ch]
  int v22; // [sp+84h] [bp-1018h]
  __int64 v23; // [sp+88h] [bp-1014h]
  int v24; // [sp+90h] [bp-100Ch]
  int v25; // [sp+94h] [bp-1008h]
  char v26[4100]; // [sp+98h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v26, 0x1000u, 0, "%s...", "get_timeout_count");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_timeout_count",
    17,
    319,
    60,
    v26);
  for ( i = 23; i != 29; ++i )
  {
    v15 = 0;
    v1 = *(_DWORD *)(a1 + 236);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v26, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_ETH", 16 * v1);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_core_status_ETH",
      31,
      843,
      20,
      v26);
    v17 = 1;
    v16[0] = 0;
    v16[1] = 0;
    v18 = 0;
    v2 = (unsigned __int16 *)calloc(192 * v1, 1u);
    ptr = v2;
    HIWORD(v17) = i;
    LOBYTE(v18) = -1;
    (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 180))(
      a1,
      v16,
      16 * v1,
      v2,
      &v15,
      v8,
      2000,
      0);
    if ( v15 > 0 )
    {
      v3 = v2 + 21;
      v4 = 0;
      do
      {
        __pld(v3);
        ++v4;
        pthread_mutex_lock(&stru_1A8A24);
        v5 = *(v3 - 18);
        v20 = 5;
        v19 = "chain";
        v3 += 6;
        v6 = *(_DWORD *)(a1 + 136);
        v21 = 3;
        v11 = *(_DWORD *)(v3 - 27);
        v10 = *((unsigned __int8 *)v3 - 46);
        v24 = 0;
        v23 = v6;
        v9 = *((unsigned __int8 *)v3 - 50);
        ++dword_1A8A20[0];
        logfmt_raw(
          v26,
          0x1000u,
          0,
          v25,
          "chain",
          5,
          3,
          v22,
          (__int64)v6,
          0,
          v25,
          "[Core State] asic %02x core %02x reg %04x state %08x",
          v9,
          v10,
          v5,
          v11);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/chip_setting.c",
          143,
          "ChipSetting_get_core_status_ETH",
          31,
          855,
          20,
          v26);
      }
      while ( v4 < v15 );
    }
    free(ptr);
    usleep(0x2710u);
  }
  return 0;
}
