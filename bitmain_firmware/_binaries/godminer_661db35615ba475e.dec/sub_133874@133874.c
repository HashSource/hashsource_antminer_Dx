int __fastcall sub_133874(int a1, char a2, __int16 a3, void *a4)
{
  int v7; // r6
  unsigned __int16 *v8; // r5
  int v9; // r10
  int v10; // r7
  int v11; // r6
  int v13; // [sp+4h] [bp-1090h]
  int v14; // [sp+24h] [bp-1070h]
  int v15; // [sp+28h] [bp-106Ch]
  int v16; // [sp+30h] [bp-1064h]
  unsigned __int16 *src; // [sp+50h] [bp-1044h]
  int v20; // [sp+5Ch] [bp-1038h] BYREF
  _DWORD v21[2]; // [sp+60h] [bp-1034h] BYREF
  char v22; // [sp+68h] [bp-102Ch]
  char v23; // [sp+69h] [bp-102Bh]
  __int16 v24; // [sp+6Ah] [bp-102Ah]
  int v25; // [sp+6Ch] [bp-1028h]
  const char *v26; // [sp+70h] [bp-1024h]
  int v27; // [sp+74h] [bp-1020h]
  int v28; // [sp+78h] [bp-101Ch]
  int v29; // [sp+7Ch] [bp-1018h]
  __int64 v30; // [sp+80h] [bp-1014h]
  int v31; // [sp+88h] [bp-100Ch]
  int v32; // [sp+8Ch] [bp-1008h]
  char v33[4100]; // [sp+90h] [bp-1004h] BYREF

  v20 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v33, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_ETH", 16);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_single_chip_core_status_ETH",
    43,
    846,
    20,
    v33);
  v21[0] = 0;
  v22 = 0;
  v21[1] = 0;
  v25 = 255;
  v23 = a2;
  src = (unsigned __int16 *)calloc(0xC0u, 1u);
  v24 = a3;
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 168))(
    a1,
    v21,
    16,
    src,
    &v20,
    v13,
    2000,
    0);
  v7 = v20;
  if ( v20 > 0 )
  {
    v8 = src + 21;
    v9 = 0;
    do
    {
      __pld(v8);
      pthread_mutex_lock(&stru_197BB8);
      v10 = *(v8 - 18);
      v27 = 5;
      v26 = "chain";
      v11 = *(_DWORD *)(a1 + 124);
      ++v9;
      v28 = 3;
      v8 += 6;
      v16 = *(_DWORD *)(v8 - 27);
      v15 = *((unsigned __int8 *)v8 - 46);
      v31 = 0;
      v30 = v11;
      v14 = *((unsigned __int8 *)v8 - 50);
      ++dword_197BD4;
      logfmt_raw(
        v33,
        0x1000u,
        0,
        v32,
        "chain",
        5,
        3,
        v29,
        (__int64)v11,
        0,
        v32,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        v14,
        v15,
        v10,
        v16);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_single_chip_core_status_ETH",
        43,
        858,
        20,
        v33);
      v7 = v20;
    }
    while ( v9 < v20 );
  }
  if ( a4 )
    memcpy(a4, src, 0xC0u);
  free(src);
  return v7;
}
