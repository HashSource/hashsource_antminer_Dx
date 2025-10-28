int __fastcall clear_rxeqcal_ext(int a1, int a2, int a3)
{
  char v4; // r6
  int v5; // r2
  void (__fastcall *v6)(int, unsigned int *); // r3
  char v7; // r9
  int v8; // r7
  int v9; // r2
  _BYTE *v10; // r6
  int v11; // r2
  _BOOL4 v12; // r1
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  _BYTE *v18; // [sp+18h] [bp-103Ch]
  __int16 v19; // [sp+1Ch] [bp-1038h]
  int v20; // [sp+20h] [bp-1034h]
  _WORD *v21; // [sp+24h] [bp-1030h]
  int v23; // [sp+30h] [bp-1024h]
  int v25; // [sp+38h] [bp-101Ch]
  _DWORD v26[4]; // [sp+3Ch] [bp-1018h] BYREF
  __int16 v27; // [sp+4Ch] [bp-1008h] BYREF
  unsigned int v28; // [sp+50h] [bp-1004h] BYREF
  int v29; // [sp+54h] [bp-1000h]
  int v30; // [sp+58h] [bp-FFCh]
  int v31; // [sp+5Ch] [bp-FF8h]

  v4 = a2;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v28, 0x1000u, 0, "%s...", "clear_rxeqcal_ext");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "clear_rxeqcal_ext",
    17,
    3602,
    60,
    &v28);
  v25 = (unsigned __int8)(v4 - 1);
  v26[0] = 0;
  v26[1] = 100991489;
  v26[2] = 235735561;
  v26[3] = 134677248;
  v5 = 0;
  v27 = 3851;
  v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  do
  {
    v7 = v5;
    v23 = 2 * v5;
    v21 = (_WORD *)((char *)v26 + 3);
    do
    {
      v8 = *((unsigned __int8 *)v21 + 1);
      v21 = (_WORD *)((char *)v21 + 1);
      if ( a2 )
      {
        v9 = 8 * (v8 + v23);
        v18 = (_BYTE *)(v9 + a3 + 1 + v25);
        v19 = 15 * (a3 + v9);
        v10 = (_BYTE *)(a3 + v9);
        v11 = a3 + v9;
        do
        {
          v12 = (unsigned __int8)((_BYTE)v10 - v11) <= 3u && v8 == 3;
          if ( !v12 && *v10 )
          {
            v20 = v11;
            LOBYTE(v30) = 0;
            v29 = 0;
            v28 = -4194305;
            HIWORD(v30) = 144;
            BYTE1(v30) = v7;
            v31 = (unsigned __int8)v8;
            v6(a1, &v28);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            v30 = 0;
            v31 = 0;
            v29 = 0;
            v28 = (unsigned __int16)((v19 + (_WORD)v10) << 12) | 0x80000001;
            BYTE1(v30) = v7;
            v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            HIWORD(v30) = 145;
            LOBYTE(v31) = v8;
            v13(a1, &v28);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            LOBYTE(v30) = 0;
            v31 = 0;
            v29 = 0;
            HIWORD(v30) = 144;
            v28 = 0x400000;
            BYTE1(v30) = v7;
            v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            LOBYTE(v31) = v8;
            v14(a1, &v28);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            v30 = 0;
            v31 = 0;
            v29 = 0;
            v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            v28 = (unsigned __int16)((v19 + (_WORD)v10) << 12) | 0x8000002F;
            BYTE1(v30) = v7;
            HIWORD(v30) = 145;
            LOBYTE(v31) = v8;
            v15(a1, &v28);
            usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
            v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            v11 = v20;
          }
          ++v10;
        }
        while ( v18 != v10 );
      }
    }
    while ( (__int16 *)((char *)&v27 + 1) != v21 );
    v5 = ++v26[0];
  }
  while ( v26[0] != 8 );
  v30 = 9437185;
  v31 = 255;
  v29 = 0;
  v28 = 0;
  v6(a1, &v28);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v30 = 9502721;
  v31 = 0;
  v29 = 0;
  v28 = -2147422207;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v31) = -1;
  v16(a1, &v28);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
