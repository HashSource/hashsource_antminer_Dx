int __fastcall clear_rxeqcal_ext(int a1, int a2, int a3)
{
  char v4; // r6
  void (__fastcall *v5)(int, unsigned int *); // r2
  int v6; // r3
  int v7; // r8
  int v8; // r3
  _BYTE *v9; // r6
  __int16 v10; // r1
  int v11; // r3
  _BOOL4 v12; // r1
  void (__fastcall *v13)(int, unsigned int *); // r2
  void (__fastcall *v14)(int, unsigned int *); // r2
  void (__fastcall *v15)(int, unsigned int *); // r2
  void (__fastcall *v16)(int, unsigned int *); // r3
  char v18; // [sp+14h] [bp-1048h]
  _BYTE *v19; // [sp+20h] [bp-103Ch]
  __int16 v20; // [sp+24h] [bp-1038h]
  int v21; // [sp+28h] [bp-1034h]
  _WORD *v22; // [sp+2Ch] [bp-1030h]
  int v24; // [sp+38h] [bp-1024h]
  int v26; // [sp+40h] [bp-101Ch]
  _DWORD v27[4]; // [sp+44h] [bp-1018h] BYREF
  __int16 v28; // [sp+54h] [bp-1008h] BYREF
  unsigned int v29; // [sp+58h] [bp-1004h] BYREF
  int v30; // [sp+5Ch] [bp-1000h]
  int v31; // [sp+60h] [bp-FFCh]
  int v32; // [sp+64h] [bp-FF8h]

  v4 = a2;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v29, 0x1000u, 0, "%s...", "clear_rxeqcal_ext");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "clear_rxeqcal_ext",
    17,
    3602,
    60,
    &v29);
  v26 = (unsigned __int8)(v4 - 1);
  v27[1] = 100991489;
  v27[2] = 235735561;
  v27[3] = 134677248;
  v27[0] = 0;
  v28 = 3851;
  v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v6 = 0;
  do
  {
    v24 = 2 * v6;
    v18 = v6;
    v22 = (_WORD *)((char *)v27 + 3);
    do
    {
      v7 = *((unsigned __int8 *)v22 + 1);
      v22 = (_WORD *)((char *)v22 + 1);
      if ( a2 )
      {
        v8 = 8 * (v7 + v24);
        v19 = (_BYTE *)(a3 + 1 + v26 + v8);
        v9 = (_BYTE *)(a3 + v8);
        v10 = 15 * (a3 + v8);
        v11 = a3 + v8;
        v20 = v10;
        do
        {
          v12 = (unsigned __int8)((_BYTE)v9 - v11) <= 3u && v7 == 3;
          if ( !v12 && *v9 )
          {
            v21 = v11;
            LOBYTE(v31) = 0;
            v29 = -4194305;
            BYTE1(v31) = v18;
            HIWORD(v31) = 144;
            v30 = 0;
            v32 = (unsigned __int8)v7;
            v5(a1, &v29);
            usleep((__useconds_t)"ead_unregister_cancel");
            v31 = 0;
            v32 = 0;
            BYTE1(v31) = v18;
            v29 = (unsigned __int16)((v20 + (_WORD)v9) << 12) | 0x80000001;
            v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            v30 = 0;
            HIWORD(v31) = 145;
            LOBYTE(v32) = v7;
            v13(a1, &v29);
            usleep((__useconds_t)"ead_unregister_cancel");
            LOBYTE(v31) = 0;
            HIWORD(v31) = 144;
            BYTE1(v31) = v18;
            v32 = 0;
            v29 = 0x400000;
            v30 = 0;
            v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            LOBYTE(v32) = v7;
            v14(a1, &v29);
            usleep((__useconds_t)"ead_unregister_cancel");
            v31 = 0;
            v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            BYTE1(v31) = v18;
            v29 = (unsigned __int16)((v20 + (_WORD)v9) << 12) | 0x8000002F;
            v30 = 0;
            HIWORD(v31) = 145;
            v32 = (unsigned __int8)v7;
            v15(a1, &v29);
            usleep((__useconds_t)"ead_unregister_cancel");
            v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
            v11 = v21;
          }
          ++v9;
        }
        while ( v19 != v9 );
      }
    }
    while ( (__int16 *)((char *)&v28 + 1) != v22 );
    v6 = ++v27[0];
  }
  while ( v27[0] != 8 );
  v31 = 9437185;
  v32 = 255;
  v30 = 0;
  v29 = 0;
  v5(a1, &v29);
  usleep((__useconds_t)"ead_unregister_cancel");
  v31 = 9502720;
  v32 = 0;
  v30 = 0;
  v29 = -2147422207;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v31) = 1;
  LOBYTE(v32) = -1;
  v16(a1, &v29);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
