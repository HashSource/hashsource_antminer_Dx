int __fastcall sub_E0BD8(int a1, char a2, int a3, __int16 a4, void *a5)
{
  int v7; // r3
  int v8; // r10
  unsigned __int8 v9; // r8
  int v11; // r6
  int v12; // r11
  unsigned __int16 *v13; // r5
  int v14; // r7
  int v15; // r6
  int v17; // [sp+4h] [bp-1090h]
  int v18; // [sp+24h] [bp-1070h]
  int v19; // [sp+28h] [bp-106Ch]
  int v20; // [sp+30h] [bp-1064h]
  size_t nmemb; // [sp+50h] [bp-1044h]
  unsigned __int16 *src; // [sp+54h] [bp-1040h]
  int v24; // [sp+5Ch] [bp-1038h] BYREF
  _DWORD v25[2]; // [sp+60h] [bp-1034h] BYREF
  char v26; // [sp+68h] [bp-102Ch]
  char v27; // [sp+69h] [bp-102Bh]
  __int16 v28; // [sp+6Ah] [bp-102Ah]
  int v29; // [sp+6Ch] [bp-1028h]
  const char *v30; // [sp+70h] [bp-1024h]
  int v31; // [sp+74h] [bp-1020h]
  int v32; // [sp+78h] [bp-101Ch]
  int v33; // [sp+7Ch] [bp-1018h]
  __int64 v34; // [sp+80h] [bp-1014h]
  int v35; // [sp+88h] [bp-100Ch]
  int v36; // [sp+8Ch] [bp-1008h]
  char v37[4080]; // [sp+90h] [bp-1004h] BYREF

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
  v24 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_ETH", v8);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_single_chip_core_status_ETH",
    43,
    872,
    20,
    v37);
  v25[0] = 0;
  v26 = 0;
  v25[1] = 0;
  v27 = a2;
  src = (unsigned __int16 *)calloc(nmemb, 1u);
  v29 = v9;
  v28 = a4;
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 180))(
    a1,
    v25,
    v8,
    src,
    &v24,
    v17,
    2000,
    0);
  v11 = v24;
  if ( v24 > 0 )
  {
    v12 = 0;
    v13 = src + 21;
    do
    {
      __pld(v13);
      ++v12;
      pthread_mutex_lock(&stru_1A8A24);
      v14 = *(v13 - 18);
      v31 = 5;
      v30 = "chain";
      v13 += 6;
      v15 = *(_DWORD *)(a1 + 136);
      v32 = 3;
      v20 = *(_DWORD *)(v13 - 27);
      v19 = *((unsigned __int8 *)v13 - 46);
      v35 = 0;
      v34 = v15;
      v18 = *((unsigned __int8 *)v13 - 50);
      ++dword_1A8A20[0];
      logfmt_raw(
        v37,
        0x1000u,
        0,
        v36,
        "chain",
        5,
        3,
        v33,
        (__int64)v15,
        0,
        v36,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        v18,
        v19,
        v14,
        v20);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_single_chip_core_status_ETH",
        43,
        884,
        20,
        v37);
      v11 = v24;
    }
    while ( v24 > v12 );
  }
  if ( a5 )
    memcpy(a5, src, nmemb);
  free(src);
  return v11;
}
