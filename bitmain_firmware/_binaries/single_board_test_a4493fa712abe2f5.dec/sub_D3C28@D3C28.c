int __fastcall sub_D3C28(int a1)
{
  int v1; // r9
  int v2; // lr
  int v3; // r3
  int v4; // r1
  char *v5; // r7
  int v6; // r6
  unsigned int v7; // r4
  int v8; // r0
  unsigned __int8 *v9; // r2
  int v10; // r4
  unsigned int v11; // r3
  int v12; // t1
  int v13; // r1
  int v15; // r3
  int v16; // r4
  int v17; // [sp+4h] [bp-10D8h]
  int v19; // [sp+50h] [bp-108Ch]
  int v20; // [sp+50h] [bp-108Ch]
  char *ptr; // [sp+58h] [bp-1084h]
  int v22; // [sp+64h] [bp-1078h] BYREF
  _DWORD v23[19]; // [sp+68h] [bp-1074h] BYREF
  int v24; // [sp+B4h] [bp-1028h]
  const char *v25; // [sp+B8h] [bp-1024h]
  int v26; // [sp+BCh] [bp-1020h]
  int v27; // [sp+C0h] [bp-101Ch]
  int v28; // [sp+C4h] [bp-1018h]
  __int64 v29; // [sp+C8h] [bp-1014h]
  int v30; // [sp+D0h] [bp-100Ch]
  int v31; // [sp+D4h] [bp-1008h]
  char v32[4100]; // [sp+D8h] [bp-1004h] BYREF

  v1 = 0;
  v22 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v32, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_CKB", 27);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_CKB",
    24,
    26,
    20,
    v32);
  v23[2] = 1;
  v23[0] = 0;
  v23[1] = 0;
  v23[3] = 0;
  ptr = (char *)calloc(0x144u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 160))(
    a1,
    v23,
    27,
    ptr,
    &v22,
    v17,
    2000,
    0);
  pthread_mutex_lock(&stru_3B526C);
  v27 = 3;
  v25 = "chain";
  v26 = 5;
  v2 = *(_DWORD *)(a1 + 124);
  v30 = 0;
  v29 = v2;
  ++dword_3B52A8;
  logfmt_raw(
    v32,
    0x1000u,
    0,
    v31,
    "chain",
    5,
    3,
    v28,
    (__int64)v2,
    0,
    v31,
    "%s detect %d chips",
    "ChipSetting_get_addr_CKB",
    v22);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_CKB",
    24,
    36,
    60,
    v32);
  v3 = v22;
  v19 = 0;
  if ( v22 <= 0 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  v5 = ptr + 24;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *((unsigned __int16 *)v5 - 12);
      __pld(v5);
      __pld(v5 + 6);
      LOWORD(v7) = __rev16(v7);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(
        v32,
        0x1000u,
        0,
        "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
        (unsigned __int16)v7,
        *(_DWORD *)(a1 + 176),
        v6,
        *((unsigned __int16 *)v5 - 9),
        (unsigned __int8)*(v5 - 20));
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_get_addr_CKB",
        24,
        40,
        20,
        v32);
      v8 = *(_DWORD *)(a1 + 180);
      if ( (unsigned __int16)v7 == *(_DWORD *)(a1 + 176) )
        ++v19;
      if ( v8 > 0 )
        break;
LABEL_12:
      v3 = v22;
      ++v6;
      v5 += 12;
      if ( v6 >= v22 )
        goto LABEL_13;
    }
    v9 = *(unsigned __int8 **)(a1 + 280);
    v10 = (unsigned __int8)*(v5 - 20);
    if ( *v9 != v10 )
    {
      v11 = 0;
      while ( ++v11 != v8 )
      {
        v12 = *++v9;
        if ( v12 == v10 )
        {
          v16 = 4 * (v11 >> 5);
          v15 = 1 << (v11 & 0x1F);
          goto LABEL_18;
        }
      }
      goto LABEL_12;
    }
    v15 = 1;
    v16 = 0;
LABEL_18:
    ++v6;
    v5 += 12;
    *(_DWORD *)(*(_DWORD *)(a1 + 284) + v16) |= v15;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v32, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(*(_DWORD *)(a1 + 284) + v16));
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
      60,
      "ChipSetting_get_addr_CKB",
      24,
      47,
      20,
      v32);
    v3 = v22;
  }
  while ( v6 < v22 );
LABEL_13:
  v1 = v19;
  v4 = v19;
LABEL_14:
  if ( *(_DWORD *)(a1 + 180) > v4 )
  {
    pthread_mutex_lock(&stru_3B526C);
    v23[5] = 5;
    v23[6] = 0;
    v23[7] = 0;
    v23[9] = 0;
    v23[11] = 0;
    v23[4] = "error";
    v23[8] = "asic num error";
    v13 = *(_DWORD *)(a1 + 124);
    v23[13] = 5;
    v23[10] = 14;
    v23[14] = 3;
    v23[12] = "chain";
    v23[16] = v13;
    v23[17] = v13 >> 31;
    dword_3B52A8 += 2;
    v23[18] = 0;
    logfmt_raw(
      v32,
      0x1000u,
      0,
      v24,
      "chain",
      5,
      3,
      v23[15],
      (__int64)v13,
      0,
      v24,
      "error",
      5,
      0,
      0,
      "asic num error",
      0,
      14,
      0,
      "detected asic num less than design");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
      60,
      "ChipSetting_get_addr_CKB",
      24,
      54,
      100,
      v32);
    v3 = v22;
  }
  v20 = v3;
  free(ptr);
  *(_DWORD *)(a1 + 220) = v1;
  return v20;
}
