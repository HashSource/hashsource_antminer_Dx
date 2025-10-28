int __fastcall sub_758E8(_DWORD *a1, int a2)
{
  const char *v2; // r6
  void *v4; // r0
  void (__fastcall *v5)(_DWORD *, _DWORD *, int, void *, int *, _DWORD, int, _DWORD); // r4
  int v6; // r5
  int v7; // r7
  _DWORD *v8; // r4
  int v9; // r5
  char *v10; // r6
  unsigned int v11; // r7
  int v12; // r0
  unsigned __int8 *v13; // r2
  int v14; // r7
  unsigned int v15; // r3
  int v16; // t1
  _DWORD *v17; // r3
  const char *v18; // r2
  int v19; // r1
  int v20; // r0
  char *v21; // r4
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v29; // r3
  int v30; // r7
  _DWORD v31[19]; // [sp+0h] [bp-E0h] BYREF
  _DWORD *v32; // [sp+4Ch] [bp-94h]
  const char *v33; // [sp+50h] [bp-90h]
  int v34; // [sp+54h] [bp-8Ch]
  char *v35; // [sp+58h] [bp-88h]
  void *ptr; // [sp+5Ch] [bp-84h]
  int *v37; // [sp+60h] [bp-80h]
  const char *v38; // [sp+64h] [bp-7Ch]
  int v39; // [sp+6Ch] [bp-74h] BYREF
  _DWORD v40[11]; // [sp+70h] [bp-70h] BYREF
  int v41; // [sp+9Ch] [bp-44h]
  const char *v42; // [sp+A0h] [bp-40h]
  int v43; // [sp+A4h] [bp-3Ch]
  int v44; // [sp+A8h] [bp-38h]
  int v45; // [sp+ACh] [bp-34h]
  int v46; // [sp+B0h] [bp-30h]
  int v47; // [sp+B4h] [bp-2Ch]
  int v48; // [sp+B8h] [bp-28h]
  int v49; // [sp+BCh] [bp-24h]
  char *v50; // [sp+C0h] [bp-20h]
  int v51; // [sp+C4h] [bp-1Ch]
  int v52; // [sp+C8h] [bp-18h]
  int v53; // [sp+CCh] [bp-14h]
  const char *v54; // [sp+D0h] [bp-10h]
  int v55; // [sp+D4h] [bp-Ch]
  int v56; // [sp+D8h] [bp-8h]
  int v57; // [sp+DCh] [bp-4h]
  char v58[4100]; // [sp+E0h] [bp+0h] BYREF

  v2 = 0;
  v32 = a1;
  v39 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v58, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_CKB2", a2);
  pthread_mutex_unlock(&stru_3B526C);
  v33 = "ChipSetting_get_addr_CKB2";
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_CKB2",
    25,
    26,
    20,
    v58);
  v40[1] = 0;
  v40[2] = 1;
  v38 = "chain";
  v40[0] = 0;
  v40[3] = 0;
  v4 = calloc(12 * a2, 1u);
  v31[0] = &v39;
  v5 = (void (__fastcall *)(_DWORD *, _DWORD *, int, void *, int *, _DWORD, int, _DWORD))v32[40];
  ptr = v4;
  v5(v32, v40, a2, v4, &v39, v31[1], 2000, 0);
  v37 = &dword_3B52A8;
  pthread_mutex_lock(&stru_3B526C);
  v40[4] = "chain";
  v6 = v32[31];
  v40[5] = 5;
  v40[6] = 3;
  v40[10] = 0;
  v40[8] = v6;
  v40[9] = v6 >> 31;
  ++dword_3B52A8;
  logfmt_raw(
    v58,
    0x1000u,
    0,
    v41,
    "chain",
    5,
    3,
    v40[7],
    (__int64)v6,
    0,
    v41,
    "%s detect %d chips",
    "ChipSetting_get_addr_CKB2",
    v39);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_addr_CKB2",
    25,
    36,
    60,
    v58);
  v7 = v39;
  if ( v39 > 0 )
  {
    v8 = v32;
    v35 = "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x";
    v9 = 0;
    v33 = 0;
    v10 = (char *)ptr + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *((unsigned __int16 *)v10 - 12);
        __pld(v10);
        __pld(v10 + 6);
        LOWORD(v11) = __rev16(v11);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v58,
          0x1000u,
          0,
          v35,
          (unsigned __int16)v11,
          v8[44],
          v9,
          *((unsigned __int16 *)v10 - 9),
          (unsigned __int8)*(v10 - 20));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
          60,
          "ChipSetting_get_addr_CKB2",
          25,
          40,
          20,
          v58);
        v12 = v8[45];
        if ( v8[44] == (unsigned __int16)v11 )
          ++v33;
        if ( v12 > 0 )
          break;
LABEL_11:
        v7 = v39;
        ++v9;
        v10 += 12;
        if ( v39 <= v9 )
          goto LABEL_12;
      }
      v13 = (unsigned __int8 *)v8[70];
      v14 = (unsigned __int8)*(v10 - 20);
      if ( *v13 != v14 )
      {
        v15 = 0;
        while ( ++v15 != v12 )
        {
          v16 = *++v13;
          if ( v16 == v14 )
          {
            v30 = 4 * (v15 >> 5);
            v29 = 1 << (v15 & 0x1F);
            goto LABEL_17;
          }
        }
        goto LABEL_11;
      }
      v29 = 1;
      v30 = 0;
LABEL_17:
      ++v9;
      v10 += 12;
      *(_DWORD *)(v8[71] + v30) |= v29;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v58, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(v8[71] + v30));
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_get_addr_CKB2",
        25,
        47,
        20,
        v58);
      v7 = v39;
      if ( v39 <= v9 )
      {
LABEL_12:
        v2 = v33;
        v17 = v8;
        v32 = v8;
        v18 = v33;
        goto LABEL_13;
      }
    }
  }
  v33 = 0;
  v18 = 0;
  v17 = v32;
LABEL_13:
  if ( v17[45] > (int)v18 )
  {
    pthread_mutex_lock(&stru_3B526C);
    v50 = "error";
    v53 = 0;
    v55 = 0;
    v57 = 0;
    v52 = 0;
    v51 = 5;
    v56 = 14;
    v31[16] = "detected asic num less than design";
    v54 = "asic num error";
    v31[8] = "error";
    v31[9] = 5;
    v31[10] = 0;
    v31[11] = 0;
    v19 = v32[31];
    v35 = (char *)v31;
    v20 = *v37;
    v43 = 5;
    v44 = 3;
    v33 = (const char *)v19;
    v34 = v19 >> 31;
    v42 = v38;
    v48 = 0;
    *v37 = v20 + 2;
    v46 = v19;
    v47 = v19 >> 31;
    v31[12] = "asic num error";
    v31[13] = 0;
    v31[14] = 14;
    v31[15] = 0;
    v21 = v35;
    v22 = v43;
    v23 = v44;
    v24 = v45;
    *(_DWORD *)v35 = v42;
    *((_DWORD *)v21 + 1) = v22;
    *((_DWORD *)v21 + 2) = v23;
    *((_DWORD *)v21 + 3) = v24;
    v21 += 16;
    v25 = v47;
    v26 = v48;
    v27 = v49;
    *(_DWORD *)v21 = v46;
    *((_DWORD *)v21 + 1) = v25;
    *((_DWORD *)v21 + 2) = v26;
    *((_DWORD *)v21 + 3) = v27;
    logfmt_raw(v58, 0x1000u, 0);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
      60,
      "ChipSetting_get_addr_CKB2",
      25,
      54,
      100,
      v58);
    v7 = v39;
  }
  free(ptr);
  v32[55] = v2;
  return v7;
}
