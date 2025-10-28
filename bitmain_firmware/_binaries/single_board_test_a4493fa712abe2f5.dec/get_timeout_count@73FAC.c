int __fastcall get_timeout_count(int a1)
{
  int v1; // r4
  unsigned __int16 *v2; // r5
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v7; // [sp+4h] [bp-1098h]
  int v8; // [sp+24h] [bp-1078h]
  int v9; // [sp+28h] [bp-1074h]
  int v10; // [sp+30h] [bp-106Ch]
  __int16 v12; // [sp+54h] [bp-1048h]
  unsigned __int16 *ptr; // [sp+58h] [bp-1044h]
  int v14; // [sp+64h] [bp-1038h] BYREF
  _DWORD v15[2]; // [sp+68h] [bp-1034h] BYREF
  int v16; // [sp+70h] [bp-102Ch]
  int v17; // [sp+74h] [bp-1028h]
  const char *v18; // [sp+78h] [bp-1024h]
  int v19; // [sp+7Ch] [bp-1020h]
  int v20; // [sp+80h] [bp-101Ch]
  int v21; // [sp+84h] [bp-1018h]
  int v22; // [sp+88h] [bp-1014h]
  int v23; // [sp+8Ch] [bp-1010h]
  int v24; // [sp+90h] [bp-100Ch]
  int v25; // [sp+94h] [bp-1008h]
  char v26[4100]; // [sp+98h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v26, 0x1000u, 0, "%s...", "get_timeout_count");
  pthread_mutex_unlock(&stru_3B526C);
  v12 = 23;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "get_timeout_count",
    17,
    319,
    60,
    v26);
  do
  {
    v14 = 0;
    v1 = *(_DWORD *)(a1 + 220);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v26, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_ETH", 16 * v1);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
      60,
      "ChipSetting_get_core_status_ETH",
      31,
      817,
      20,
      v26);
    v16 = 1;
    v15[0] = 0;
    v15[1] = 0;
    v17 = 0;
    ptr = (unsigned __int16 *)calloc(192 * v1, 1u);
    HIWORD(v16) = v12;
    LOBYTE(v17) = -1;
    (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 168))(
      a1,
      v15,
      16 * v1,
      ptr,
      &v14,
      v7,
      2000,
      0);
    if ( v14 > 0 )
    {
      v2 = ptr + 21;
      v3 = 0;
      do
      {
        __pld(v2);
        ++v3;
        pthread_mutex_lock(&stru_3B526C);
        v4 = *(v2 - 18);
        v20 = 3;
        v18 = "chain";
        v19 = 5;
        v2 += 6;
        v5 = *(_DWORD *)(a1 + 124);
        v24 = 0;
        v10 = *(_DWORD *)(v2 - 27);
        v9 = *((unsigned __int8 *)v2 - 46);
        v22 = v5;
        v23 = v5 >> 31;
        v8 = *((unsigned __int8 *)v2 - 50);
        ++dword_3B52A8;
        logfmt_raw(
          v26,
          0x1000u,
          0,
          v26,
          "chain",
          5,
          3,
          v21,
          (__int64)v5,
          0,
          v25,
          "[Core State] asic %02x core %02x reg %04x state %08x",
          v8,
          v9,
          v4,
          v10);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
          60,
          "ChipSetting_get_core_status_ETH",
          31,
          829,
          20,
          v26);
      }
      while ( v3 < v14 );
    }
    free(ptr);
    usleep(0x2710u);
    ++v12;
  }
  while ( v12 != 29 );
  return 0;
}
