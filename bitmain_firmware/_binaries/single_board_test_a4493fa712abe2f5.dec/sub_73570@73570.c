int __fastcall sub_73570(_DWORD *a1, int a2, __int16 a3, void *a4)
{
  int v4; // r8
  char v5; // r9
  unsigned __int16 *v7; // r0
  void (__fastcall *v8)(_DWORD *, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD); // r6
  int v9; // r6
  int v10; // r11
  unsigned __int16 *v11; // r5
  int v12; // r7
  int v13; // r6
  int v15; // [sp+4h] [bp-1090h]
  int v16; // [sp+24h] [bp-1070h]
  int v17; // [sp+28h] [bp-106Ch]
  int v18; // [sp+30h] [bp-1064h]
  unsigned __int16 *src; // [sp+4Ch] [bp-1048h]
  int v22; // [sp+5Ch] [bp-1038h] BYREF
  _DWORD v23[2]; // [sp+60h] [bp-1034h] BYREF
  __int16 v24; // [sp+68h] [bp-102Ch]
  __int16 v25; // [sp+6Ah] [bp-102Ah]
  int v26; // [sp+6Ch] [bp-1028h]
  const char *v27; // [sp+70h] [bp-1024h]
  int v28; // [sp+74h] [bp-1020h]
  int v29; // [sp+78h] [bp-101Ch]
  int v30; // [sp+7Ch] [bp-1018h]
  int v31; // [sp+80h] [bp-1014h]
  int v32; // [sp+84h] [bp-1010h]
  int v33; // [sp+88h] [bp-100Ch]
  int v34; // [sp+8Ch] [bp-1008h]
  char v35[4100]; // [sp+90h] [bp-1004h] BYREF

  v4 = a1[55];
  v5 = a2;
  if ( a2 == 255 )
    v4 *= 16;
  v22 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v35, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_ETH", v4);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_core_status_ETH",
    31,
    817,
    20,
    v35);
  v24 = 1;
  v23[0] = 0;
  v23[1] = 0;
  v26 = 0;
  v7 = (unsigned __int16 *)calloc(12 * v4, 1u);
  v25 = a3;
  v8 = (void (__fastcall *)(_DWORD *, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))a1[42];
  LOBYTE(v26) = v5;
  src = v7;
  v8(a1, v23, v4, v7, &v22, v15, 2000, 0);
  v9 = v22;
  if ( v22 > 0 )
  {
    v10 = 0;
    v11 = src + 21;
    do
    {
      __pld(v11);
      pthread_mutex_lock(&stru_3B526C);
      v12 = *(v11 - 18);
      v29 = 3;
      v27 = "chain";
      v28 = 5;
      ++v10;
      v11 += 6;
      v13 = a1[31];
      v33 = 0;
      v18 = *(_DWORD *)(v11 - 27);
      v17 = *((unsigned __int8 *)v11 - 46);
      v31 = v13;
      v32 = v13 >> 31;
      v16 = *((unsigned __int8 *)v11 - 50);
      ++dword_3B52A8;
      logfmt_raw(
        v35,
        0x1000u,
        0,
        v34,
        "chain",
        5,
        3,
        v30,
        (__int64)v13,
        0,
        v34,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        v16,
        v17,
        v12,
        v18);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_get_core_status_ETH",
        31,
        829,
        20,
        v35);
      v9 = v22;
    }
    while ( v22 > v10 );
  }
  if ( a4 )
    memcpy(a4, src, 12 * v4);
  free(src);
  return v9;
}
