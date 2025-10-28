int __fastcall sub_C1470(int a1, int a2)
{
  unsigned __int16 *v4; // r11
  int v5; // r7
  int v6; // r5
  unsigned __int16 *v7; // r4
  int v8; // r3
  int v10; // r6
  int v11; // [sp+24h] [bp-1050h]
  int v12; // [sp+28h] [bp-104Ch]
  int v13; // [sp+2Ch] [bp-1048h]
  int v14; // [sp+3Ch] [bp-1038h] BYREF
  _DWORD v15[2]; // [sp+40h] [bp-1034h] BYREF
  __int16 v16; // [sp+48h] [bp-102Ch]
  __int16 v17; // [sp+4Ah] [bp-102Ah]
  int v18; // [sp+4Ch] [bp-1028h]
  const char *v19; // [sp+50h] [bp-1024h]
  int v20; // [sp+54h] [bp-1020h]
  int v21; // [sp+58h] [bp-101Ch]
  int v22; // [sp+5Ch] [bp-1018h]
  int v23; // [sp+60h] [bp-1014h]
  int v24; // [sp+64h] [bp-1010h]
  int v25; // [sp+68h] [bp-100Ch]
  int v26; // [sp+6Ch] [bp-1008h]
  char v27[4100]; // [sp+70h] [bp-1004h] BYREF

  v15[1] = 0;
  v16 = 1;
  v18 = 0;
  v14 = 0;
  v15[0] = 0;
  v17 = a2;
  v4 = (unsigned __int16 *)calloc(0xCu, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *))(a1 + 172))(a1, v15, 1, v4, &v14);
  v5 = v14;
  if ( v14 > 0 )
  {
    v6 = 0;
    v7 = v4 + 21;
    do
    {
      while ( 1 )
      {
        v8 = *(v7 - 18);
        __pld(v7);
        if ( a2 == v8 )
          break;
        ++v6;
        v7 += 6;
        if ( v6 >= v5 )
          goto LABEL_5;
      }
      pthread_mutex_lock(&stru_1A8A24);
      v10 = *(_DWORD *)(a1 + 136);
      v20 = 5;
      v19 = "chain";
      ++v6;
      v21 = 3;
      v7 += 6;
      v25 = 0;
      v23 = v10;
      v24 = v10 >> 31;
      v13 = *(_DWORD *)(v7 - 27);
      v11 = *((unsigned __int8 *)v7 - 50);
      v12 = *(v7 - 24);
      ++dword_1A8A20[0];
      logfmt_raw(
        v27,
        0x1000u,
        0,
        v26,
        "chain",
        5,
        3,
        v22,
        (__int64)v10,
        0,
        v26,
        "[Chip status] asic %02x, reg %02x state %08x",
        v11,
        v12,
        v13);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_chip_status_DCR",
        31,
        757,
        60,
        v27);
      v5 = v14;
    }
    while ( v6 < v14 );
  }
LABEL_5:
  free(v4);
  return v5;
}
