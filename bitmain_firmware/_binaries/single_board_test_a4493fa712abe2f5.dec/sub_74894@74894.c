int __fastcall sub_74894(int a1, char a2, int a3, __int16 a4, void *a5)
{
  int v7; // r3
  int v8; // r8
  unsigned __int8 v9; // r5
  unsigned __int16 *v11; // r0
  void (__fastcall *v12)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD); // r5
  int v13; // r6
  int v14; // r11
  unsigned __int16 *v15; // r5
  int v16; // r7
  int v17; // r6
  int v19; // [sp+4h] [bp-1090h]
  int v20; // [sp+24h] [bp-1070h]
  int v21; // [sp+28h] [bp-106Ch]
  int v22; // [sp+30h] [bp-1064h]
  unsigned __int16 *src; // [sp+50h] [bp-1044h]
  size_t nmemb; // [sp+54h] [bp-1040h]
  int v26; // [sp+5Ch] [bp-1038h] BYREF
  _DWORD v27[2]; // [sp+60h] [bp-1034h] BYREF
  int v28; // [sp+68h] [bp-102Ch]
  int v29; // [sp+6Ch] [bp-1028h]
  const char *v30; // [sp+70h] [bp-1024h]
  int v31; // [sp+74h] [bp-1020h]
  int v32; // [sp+78h] [bp-101Ch]
  int v33; // [sp+7Ch] [bp-1018h]
  int v34; // [sp+80h] [bp-1014h]
  int v35; // [sp+84h] [bp-1010h]
  int v36; // [sp+88h] [bp-100Ch]
  int v37; // [sp+8Ch] [bp-1008h]
  char var1004[4112]; // [sp+90h] [bp-1004h] BYREF

  if ( a3 == 255 )
    v7 = 192;
  else
    v7 = 12;
  if ( a3 == 255 )
    v8 = 16;
  else
    v8 = 1;
  v9 = a3;
  nmemb = v7;
  v26 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(var1004, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_ETH", v8);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_get_single_chip_core_status_ETH",
    43,
    846,
    20,
    var1004);
  v27[1] = 0;
  v28 = 0;
  v27[0] = 0;
  BYTE1(v28) = a2;
  v11 = (unsigned __int16 *)calloc(nmemb, 1u);
  v29 = v9;
  v12 = *(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 168);
  HIWORD(v28) = a4;
  src = v11;
  v12(a1, v27, v8, v11, &v26, v19, 2000, 0);
  v13 = v26;
  if ( v26 > 0 )
  {
    v14 = 0;
    v15 = src + 21;
    do
    {
      __pld(v15);
      pthread_mutex_lock(&stru_3B526C);
      v16 = *(v15 - 18);
      v32 = 3;
      v30 = "chain";
      v31 = 5;
      ++v14;
      v15 += 6;
      v17 = *(_DWORD *)(a1 + 124);
      v36 = 0;
      v22 = *(_DWORD *)(v15 - 27);
      v21 = *((unsigned __int8 *)v15 - 46);
      v34 = v17;
      v35 = v17 >> 31;
      v20 = *((unsigned __int8 *)v15 - 50);
      ++dword_3B52A8;
      logfmt_raw(
        var1004,
        0x1000u,
        0,
        v37,
        "chain",
        5,
        3,
        v33,
        (__int64)v17,
        0,
        v37,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        v20,
        v21,
        v16,
        v22);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_get_single_chip_core_status_ETH",
        43,
        858,
        20,
        var1004);
      v13 = v26;
    }
    while ( v26 > v14 );
  }
  if ( a5 )
    memcpy(a5, src, nmemb);
  free(src);
  return v13;
}
