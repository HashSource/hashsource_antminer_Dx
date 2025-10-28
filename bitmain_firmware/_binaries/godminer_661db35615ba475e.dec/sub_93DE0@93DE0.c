int __fastcall sub_93DE0(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r8
  unsigned __int8 v5; // r11
  int v7; // r6
  int v8; // r11
  unsigned __int16 *v9; // r5
  int v10; // r7
  int v11; // r6
  int v13; // [sp+4h] [bp-1098h]
  int v14; // [sp+24h] [bp-1078h]
  int v15; // [sp+28h] [bp-1074h]
  int v16; // [sp+30h] [bp-106Ch]
  unsigned __int16 *src; // [sp+54h] [bp-1048h]
  int v20; // [sp+64h] [bp-1038h] BYREF
  _DWORD v21[2]; // [sp+68h] [bp-1034h] BYREF
  __int16 v22; // [sp+70h] [bp-102Ch]
  __int16 v23; // [sp+72h] [bp-102Ah]
  int v24; // [sp+74h] [bp-1028h]
  const char *v25; // [sp+78h] [bp-1024h]
  int v26; // [sp+7Ch] [bp-1020h]
  int v27; // [sp+80h] [bp-101Ch]
  int v28; // [sp+84h] [bp-1018h]
  __int64 v29; // [sp+88h] [bp-1014h]
  int v30; // [sp+90h] [bp-100Ch]
  int v31; // [sp+94h] [bp-1008h]
  char v32[4100]; // [sp+98h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 220);
  v5 = a2;
  if ( a2 == 255 )
    v4 *= 16;
  v20 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v32, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_ETH", v4);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_core_status_ETH",
    31,
    817,
    20,
    v32);
  v22 = 1;
  v21[0] = 0;
  v21[1] = 0;
  v23 = a3;
  v24 = v5;
  src = (unsigned __int16 *)calloc(12 * v4, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 168))(
    a1,
    v21,
    v4,
    src,
    &v20,
    v13,
    2000,
    0);
  v7 = v20;
  if ( v20 > 0 )
  {
    v8 = 0;
    v9 = src + 21;
    do
    {
      __pld(v9);
      ++v8;
      pthread_mutex_lock(&stru_197BB8);
      v10 = *(v9 - 18);
      v26 = 5;
      v25 = "chain";
      v9 += 6;
      v11 = *(_DWORD *)(a1 + 124);
      v27 = 3;
      v16 = *(_DWORD *)(v9 - 27);
      v15 = *((unsigned __int8 *)v9 - 46);
      v30 = 0;
      v29 = v11;
      v14 = *((unsigned __int8 *)v9 - 50);
      ++dword_197BD4;
      logfmt_raw(
        v32,
        0x1000u,
        0,
        v31,
        "chain",
        5,
        3,
        v28,
        (__int64)v11,
        0,
        v31,
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
        "ChipSetting_get_core_status_ETH",
        31,
        829,
        20,
        v32);
      v7 = v20;
    }
    while ( v20 > v8 );
  }
  if ( a4 )
    memcpy(a4, src, 12 * v4);
  free(src);
  return v7;
}
