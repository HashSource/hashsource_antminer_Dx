int __fastcall sub_BDA08(int *a1)
{
  const char *v1; // r6
  void *v2; // r0
  void (__fastcall *v3)(int *, _DWORD *, int, void *, int *, _DWORD, int, _DWORD); // r4
  int v4; // r7
  int *v5; // r4
  int v6; // r5
  char *v7; // r6
  unsigned int v8; // r7
  int v9; // r0
  unsigned __int8 *v10; // r2
  int v11; // r7
  unsigned int v12; // r3
  int v13; // t1
  int *v14; // r3
  const char *v15; // r2
  int v16; // r1
  int v17; // r0
  char *v18; // r4
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v26; // r3
  int v27; // r7
  _DWORD v28[19]; // [sp+0h] [bp-E0h] BYREF
  int *v29; // [sp+4Ch] [bp-94h]
  const char *v30; // [sp+50h] [bp-90h]
  int v31; // [sp+54h] [bp-8Ch]
  char *v32; // [sp+58h] [bp-88h]
  void *ptr; // [sp+5Ch] [bp-84h]
  int *v34; // [sp+60h] [bp-80h]
  const char *v35; // [sp+64h] [bp-7Ch]
  int v36; // [sp+6Ch] [bp-74h] BYREF
  _DWORD v37[12]; // [sp+70h] [bp-70h] BYREF
  const char *v38; // [sp+A0h] [bp-40h]
  int v39; // [sp+A4h] [bp-3Ch]
  int v40; // [sp+A8h] [bp-38h]
  int v41; // [sp+ACh] [bp-34h]
  int v42; // [sp+B0h] [bp-30h]
  int v43; // [sp+B4h] [bp-2Ch]
  int v44; // [sp+B8h] [bp-28h]
  int v45; // [sp+BCh] [bp-24h]
  const char *v46; // [sp+C0h] [bp-20h]
  int v47; // [sp+C4h] [bp-1Ch]
  int v48; // [sp+C8h] [bp-18h]
  int v49; // [sp+CCh] [bp-14h]
  __int64 v50; // [sp+D0h] [bp-10h]
  int v51; // [sp+D8h] [bp-8h]
  int v52; // [sp+DCh] [bp-4h]
  char v53[4100]; // [sp+E0h] [bp+0h] BYREF

  v1 = 0;
  v29 = a1;
  v36 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v53, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_GRIN32", 1);
  pthread_mutex_unlock(&stru_3B526C);
  v30 = "ChipSetting_get_addr_GRIN32";
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_GRIN32",
    27,
    26,
    20,
    v53);
  v37[1] = 0;
  v37[2] = 1;
  v35 = "chain";
  v37[0] = 0;
  v37[3] = 0;
  v2 = calloc(0xCu, 1u);
  v28[0] = &v36;
  v3 = (void (__fastcall *)(int *, _DWORD *, int, void *, int *, _DWORD, int, _DWORD))v29[40];
  ptr = v2;
  v3(v29, v37, 1, v2, &v36, v28[1], 2000, 0);
  v34 = &dword_3B52A8;
  pthread_mutex_lock(&stru_3B526C);
  v46 = "chain";
  v47 = 5;
  v48 = 3;
  v51 = 0;
  v50 = v29[31];
  ++dword_3B52A8;
  logfmt_raw(
    v53,
    0x1000u,
    0,
    v52,
    "chain",
    5,
    3,
    v49,
    v50,
    0,
    v52,
    "%s detect %d chips",
    "ChipSetting_get_addr_GRIN32",
    v36);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_GRIN32",
    27,
    36,
    60,
    v53);
  v4 = v36;
  if ( v36 > 0 )
  {
    v5 = v29;
    v32 = "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x";
    v6 = 0;
    v30 = 0;
    v7 = (char *)ptr + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *((unsigned __int16 *)v7 - 12);
        __pld(v7);
        __pld(v7 + 6);
        LOWORD(v8) = __rev16(v8);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v53,
          0x1000u,
          0,
          v32,
          (unsigned __int16)v8,
          v5[44],
          v6,
          *((unsigned __int16 *)v7 - 9),
          (unsigned __int8)*(v7 - 20));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
          60,
          "ChipSetting_get_addr_GRIN32",
          27,
          40,
          20,
          v53);
        v9 = v5[45];
        if ( (unsigned __int16)v8 == v5[44] )
          ++v30;
        if ( v9 > 0 )
          break;
LABEL_11:
        v4 = v36;
        ++v6;
        v7 += 12;
        if ( v6 >= v36 )
          goto LABEL_12;
      }
      v10 = (unsigned __int8 *)v5[70];
      v11 = (unsigned __int8)*(v7 - 20);
      if ( *v10 != v11 )
      {
        v12 = 0;
        while ( ++v12 != v9 )
        {
          v13 = *++v10;
          if ( v13 == v11 )
          {
            v27 = 4 * (v12 >> 5);
            v26 = 1 << (v12 & 0x1F);
            goto LABEL_17;
          }
        }
        goto LABEL_11;
      }
      v26 = 1;
      v27 = 0;
LABEL_17:
      ++v6;
      v7 += 12;
      *(_DWORD *)(v5[71] + v27) |= v26;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v53, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(v5[71] + v27));
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_get_addr_GRIN32",
        27,
        47,
        20,
        v53);
      v4 = v36;
      if ( v6 >= v36 )
      {
LABEL_12:
        v1 = v30;
        v14 = v5;
        v29 = v5;
        v15 = v30;
        goto LABEL_13;
      }
    }
  }
  v30 = 0;
  v15 = 0;
  v14 = v29;
LABEL_13:
  if ( v14[45] > (int)v15 )
  {
    pthread_mutex_lock(&stru_3B526C);
    v37[4] = "error";
    v37[6] = 0;
    v37[7] = 0;
    v37[9] = 0;
    v37[11] = 0;
    v37[5] = 5;
    v37[8] = "asic num error";
    v28[16] = "detected asic num less than design";
    v28[8] = "error";
    v28[9] = 5;
    v28[10] = 0;
    v28[11] = 0;
    v37[10] = 14;
    v16 = v29[31];
    v32 = (char *)v28;
    v39 = 5;
    v17 = *v34;
    v30 = (const char *)v16;
    v31 = v16 >> 31;
    v40 = 3;
    v38 = v35;
    v44 = 0;
    *v34 = v17 + 2;
    v42 = v16;
    v43 = v16 >> 31;
    v28[12] = "asic num error";
    v28[13] = 0;
    v28[14] = 14;
    v28[15] = 0;
    v18 = v32;
    v19 = v39;
    v20 = v40;
    v21 = v41;
    *(_DWORD *)v32 = v38;
    *((_DWORD *)v18 + 1) = v19;
    *((_DWORD *)v18 + 2) = v20;
    *((_DWORD *)v18 + 3) = v21;
    v18 += 16;
    v22 = v43;
    v23 = v44;
    v24 = v45;
    *(_DWORD *)v18 = v42;
    *((_DWORD *)v18 + 1) = v22;
    *((_DWORD *)v18 + 2) = v23;
    *((_DWORD *)v18 + 3) = v24;
    logfmt_raw(v53, 0x1000u, 0);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
      60,
      "ChipSetting_get_addr_GRIN32",
      27,
      54,
      100,
      v53);
    v4 = v36;
  }
  free(ptr);
  v29[55] = (int)v1;
  return v4;
}
