int __fastcall sub_C1A38(int a1)
{
  int v1; // r10
  int v3; // r8
  int v4; // r9
  char *v5; // r8
  unsigned int v6; // r9
  int v7; // r0
  unsigned __int8 *v8; // r2
  int v9; // r12
  unsigned int v10; // r3
  int v11; // t1
  int v12; // r2
  int v13; // r9
  int v15; // r2
  int v16; // r9
  int v17; // [sp+4h] [bp-10D0h]
  int v18; // [sp+48h] [bp-108Ch]
  int v19; // [sp+4Ch] [bp-1088h]
  char *ptr; // [sp+50h] [bp-1084h]
  int v21; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v22[16]; // [sp+60h] [bp-1074h] BYREF
  __int64 v23; // [sp+A0h] [bp-1034h]
  int v24; // [sp+A8h] [bp-102Ch]
  int v25; // [sp+ACh] [bp-1028h]
  const char *v26; // [sp+B0h] [bp-1024h]
  __int64 v27; // [sp+B4h] [bp-1020h]
  int v28; // [sp+BCh] [bp-1018h]
  __int64 v29; // [sp+C0h] [bp-1014h]
  int v30; // [sp+C8h] [bp-100Ch]
  int v31; // [sp+CCh] [bp-1008h]
  char v32[4100]; // [sp+D0h] [bp-1004h] BYREF

  v1 = 0;
  v21 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v32, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_ETH", 8);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_ETH",
    24,
    26,
    20,
    v32);
  v22[0] = 0;
  v22[2] = 1;
  v22[1] = 0;
  v22[3] = 0;
  ptr = (char *)calloc(0x60u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 172))(
    a1,
    v22,
    8,
    ptr,
    &v21,
    v17,
    2000,
    0);
  pthread_mutex_lock(&stru_1A8A24);
  v3 = *(_DWORD *)(a1 + 136);
  v27 = 0x300000005LL;
  v26 = "chain";
  v30 = 0;
  v29 = v3;
  ++dword_1A8A20[0];
  logfmt_raw(
    v32,
    0x1000u,
    0,
    v31,
    "chain",
    5,
    3,
    v28,
    (__int64)v3,
    0,
    v31,
    "%s detect %d chips",
    "ChipSetting_get_addr_ETH",
    v21);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_ETH",
    24,
    36,
    60,
    v32);
  v4 = v21;
  if ( v21 <= 0 )
  {
    v19 = 0;
    v12 = 0;
  }
  else
  {
    v18 = 0;
    v5 = ptr + 24;
    do
    {
      v6 = *((unsigned __int16 *)v5 - 12);
      __pld(v5);
      __pld(v5 + 6);
      LOWORD(v6) = __rev16(v6);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(
        v32,
        0x1000u,
        0,
        "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
        (unsigned __int16)v6,
        *(_DWORD *)(a1 + 188),
        v1,
        *((unsigned __int16 *)v5 - 9),
        (unsigned __int8)*(v5 - 20));
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_ETH",
        24,
        40,
        20,
        v32);
      v7 = *(_DWORD *)(a1 + 192);
      if ( (unsigned __int16)v6 == *(_DWORD *)(a1 + 188) )
        ++v18;
      if ( v7 > 0 )
      {
        v8 = *(unsigned __int8 **)(a1 + 296);
        v9 = (unsigned __int8)*(v5 - 20);
        if ( *v8 == v9 )
        {
          v15 = 1;
          v16 = 0;
LABEL_17:
          *(_DWORD *)(*(_DWORD *)(a1 + 300) + v16) |= v15;
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v32, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(*(_DWORD *)(a1 + 300) + v16));
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/chip_setting.c",
            143,
            "ChipSetting_get_addr_ETH",
            24,
            47,
            20,
            v32);
        }
        else
        {
          v10 = 0;
          while ( ++v10 != v7 )
          {
            v11 = *++v8;
            if ( v11 == v9 )
            {
              v16 = 4 * (v10 >> 5);
              v15 = 1 << (v10 & 0x1F);
              goto LABEL_17;
            }
          }
        }
      }
      v4 = v21;
      ++v1;
      v5 += 12;
    }
    while ( v1 < v21 );
    v12 = v18;
    v19 = v18;
  }
  if ( *(_DWORD *)(a1 + 192) > v12 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v22[5] = 5;
    v22[6] = 0;
    v22[7] = 0;
    v22[9] = 0;
    v22[11] = 0;
    v22[4] = "error";
    v22[8] = "asic num error";
    v22[10] = 14;
    v13 = *(_DWORD *)(a1 + 136);
    v22[13] = 5;
    v22[12] = "chain";
    v24 = 0;
    dword_1A8A20[0] += 2;
    v22[14] = 3;
    v23 = v13;
    logfmt_raw(
      v32,
      0x1000u,
      0,
      v25,
      "chain",
      5,
      3,
      v22[15],
      (__int64)v13,
      0,
      v25,
      "error",
      5,
      0,
      0,
      "asic num error",
      0,
      14,
      0,
      "detected asic num less than design");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_ETH",
      24,
      54,
      100,
      v32);
    v4 = v21;
  }
  free(ptr);
  *(_DWORD *)(a1 + 236) = v19;
  return v4;
}
