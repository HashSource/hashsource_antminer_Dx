int __fastcall sub_D1658(int a1, int a2)
{
  int v4; // r8
  int v5; // r8
  int v6; // r9
  char *v7; // r7
  unsigned int v8; // r8
  int v9; // r0
  unsigned __int8 *v10; // r2
  int v11; // r12
  unsigned int v12; // r3
  int v13; // t1
  int v14; // r2
  int v15; // r9
  int v17; // r2
  int v18; // r8
  int v19; // [sp+4h] [bp-10D8h]
  int v20; // [sp+4Ch] [bp-1090h]
  int v21; // [sp+50h] [bp-108Ch]
  char *ptr; // [sp+54h] [bp-1088h]
  int v23; // [sp+64h] [bp-1078h] BYREF
  _DWORD v24[5]; // [sp+68h] [bp-1074h] BYREF
  __int64 v25; // [sp+7Ch] [bp-1060h]
  int v26; // [sp+84h] [bp-1058h]
  __int64 v27; // [sp+88h] [bp-1054h]
  int v28; // [sp+90h] [bp-104Ch]
  int v29; // [sp+94h] [bp-1048h]
  __int64 v30; // [sp+98h] [bp-1044h]
  int v31; // [sp+A0h] [bp-103Ch]
  int v32; // [sp+A4h] [bp-1038h]
  __int64 v33; // [sp+A8h] [bp-1034h]
  int v34; // [sp+B0h] [bp-102Ch]
  int v35; // [sp+B4h] [bp-1028h]
  char *v36; // [sp+B8h] [bp-1024h]
  int v37; // [sp+BCh] [bp-1020h]
  int v38; // [sp+C0h] [bp-101Ch]
  int v39; // [sp+C4h] [bp-1018h]
  const char *v40; // [sp+C8h] [bp-1014h]
  int v41; // [sp+CCh] [bp-1010h]
  int v42; // [sp+D0h] [bp-100Ch]
  int v43; // [sp+D4h] [bp-1008h]
  char v44[4100]; // [sp+D8h] [bp-1004h] BYREF

  v23 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v44, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_CKB2", a2);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_CKB2",
    25,
    26,
    20,
    v44);
  v24[0] = 0;
  v24[2] = 1;
  v24[1] = 0;
  v24[3] = 0;
  ptr = (char *)calloc(12 * a2, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 172))(
    a1,
    v24,
    a2,
    ptr,
    &v23,
    v19,
    2000,
    0);
  pthread_mutex_lock(&stru_1A8A24);
  v4 = *(_DWORD *)(a1 + 136);
  v25 = 0x300000005LL;
  v24[4] = "chain";
  v27 = v4;
  v28 = 0;
  ++dword_1A8A20[0];
  logfmt_raw(
    v44,
    0x1000u,
    0,
    v29,
    "chain",
    5,
    3,
    v26,
    (__int64)v4,
    0,
    v29,
    "%s detect %d chips",
    "ChipSetting_get_addr_CKB2",
    v23);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_CKB2",
    25,
    36,
    60,
    v44);
  v5 = v23;
  if ( v23 <= 0 )
  {
    v21 = 0;
    v14 = 0;
  }
  else
  {
    v20 = 0;
    v6 = 0;
    v7 = ptr + 24;
    do
    {
      v8 = *((unsigned __int16 *)v7 - 12);
      __pld(v7);
      __pld(v7 + 6);
      LOWORD(v8) = __rev16(v8);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(
        v44,
        0x1000u,
        0,
        "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
        (unsigned __int16)v8,
        *(_DWORD *)(a1 + 188),
        v6,
        *((unsigned __int16 *)v7 - 9),
        (unsigned __int8)*(v7 - 20));
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_CKB2",
        25,
        40,
        20,
        v44);
      v9 = *(_DWORD *)(a1 + 192);
      if ( *(_DWORD *)(a1 + 188) == (unsigned __int16)v8 )
        ++v20;
      if ( v9 > 0 )
      {
        v10 = *(unsigned __int8 **)(a1 + 296);
        v11 = (unsigned __int8)*(v7 - 20);
        if ( *v10 == v11 )
        {
          v17 = 1;
          v18 = 0;
LABEL_17:
          *(_DWORD *)(*(_DWORD *)(a1 + 300) + v18) |= v17;
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v44, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(*(_DWORD *)(a1 + 300) + v18));
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/chip_setting.c",
            143,
            "ChipSetting_get_addr_CKB2",
            25,
            47,
            20,
            v44);
        }
        else
        {
          v12 = 0;
          while ( ++v12 != v9 )
          {
            v13 = *++v10;
            if ( v13 == v11 )
            {
              v18 = 4 * (v12 >> 5);
              v17 = 1 << (v12 & 0x1F);
              goto LABEL_17;
            }
          }
        }
      }
      v5 = v23;
      ++v6;
      v7 += 12;
    }
    while ( v23 > v6 );
    v14 = v20;
    v21 = v20;
  }
  if ( *(_DWORD *)(a1 + 192) > v14 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v38 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v37 = 5;
    v36 = "error";
    v40 = "asic num error";
    v42 = 14;
    v15 = *(_DWORD *)(a1 + 136);
    v34 = 0;
    v30 = (unsigned int)"chain" | 0x500000000LL;
    v33 = v15;
    dword_1A8A20[0] += 2;
    v31 = 3;
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v35,
      v30,
      3,
      v32,
      (__int64)v15,
      0,
      v35,
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
      "ChipSetting_get_addr_CKB2",
      25,
      54,
      100,
      v44);
    v5 = v23;
  }
  free(ptr);
  *(_DWORD *)(a1 + 236) = v21;
  return v5;
}
