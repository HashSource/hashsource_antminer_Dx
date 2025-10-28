unsigned __int8 *__fastcall new_graph32(int a1, int a2)
{
  unsigned __int8 *v4; // r4
  unsigned int v5; // r3
  int v6; // r7
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r5
  int v10; // r0
  size_t v11; // r6
  void *v12; // r0
  int v13; // r2
  int v14; // r6
  _DWORD *v15; // r5
  int v16; // r2
  int v17; // r3
  size_t v18; // r6
  void *v19; // r0
  int v20; // r6
  unsigned int v21; // r6
  void **v22; // r5
  _DWORD *v23; // r5
  int v24; // r6
  size_t v25; // r6
  void *v26; // r0
  void *v27; // r0
  void *v28; // r0
  int v30; // [sp+4h] [bp-8h]

  v4 = (unsigned __int8 *)calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  *(_DWORD *)v4 = a1;
  v5 = (1 << (a1 - 32)) | (1u >> (32 - a1));
  v6 = (1 << a1) - 1;
  *((_DWORD *)v4 + 4) = 1 << a1;
  *((_DWORD *)v4 + 5) = v5;
  v7 = __PAIR64__(v5, 1 << a1) >> a2;
  *((_DWORD *)v4 + 3) = v5;
  *((_DWORD *)v4 + 2) = 1 << a1;
  v8 = (__PAIR64__(v5, 1 << a1) - 1) >> 32;
  *((_DWORD *)v4 + 10) = v7;
  *((_DWORD *)v4 + 11) = v7;
  *((_DWORD *)v4 + 7) = v8;
  *((_DWORD *)v4 + 9) = v8;
  *((_DWORD *)v4 + 25) = sub_4CFFC;
  *((_DWORD *)v4 + 29) = sub_4C848;
  *((_DWORD *)v4 + 24) = sub_4D280;
  *((_DWORD *)v4 + 26) = sub_4DAD8;
  *((_DWORD *)v4 + 12) = a2;
  *((_DWORD *)v4 + 6) = v6;
  *((_DWORD *)v4 + 8) = v6;
  *((_DWORD *)v4 + 27) = sub_4CB24;
  *((_DWORD *)v4 + 28) = sub_4D1C8;
  *((_DWORD *)v4 + 15) = 2;
  *((_DWORD *)v4 + 13) = -1;
  v9 = calloc(1u, 0x38u);
  if ( !v9 )
    puts("alloc compressor failed!");
  v10 = a1 - a2;
  v11 = 1 << (a1 - a2);
  *v9 = a2;
  v9[1] = v10;
  v9[3] = v11;
  v9[2] = v10 - 1;
  v9[4] = v11 - 1;
  v9[5] = (v11 - 1) >> 1;
  v9[9] = compressor_init;
  v9[10] = compressor_reset;
  v9[11] = compressor_exit;
  v9[12] = compressor_stats;
  v9[13] = compress;
  v12 = calloc(v11, 4u);
  v9[7] = v12;
  if ( !v12 )
  {
    puts("calloc failed!");
    v12 = (void *)v9[7];
    v11 = v9[3];
  }
  v9[6] = 0;
  v9[8] = -1;
  memset(v12, 255, 4 * v11);
  v13 = *((_DWORD *)v4 + 12);
  *((_DWORD *)v4 + 20) = v9;
  v14 = *(_DWORD *)v4;
  v30 = v13;
  v15 = calloc(1u, 0x38u);
  v16 = v30;
  if ( !v15 )
  {
    puts("alloc compressor failed!");
    v16 = v30;
  }
  v17 = v14 - v16;
  v18 = 1 << (v14 - v16);
  v15[1] = v17;
  v15[9] = compressor_init;
  v15[10] = compressor_reset;
  v15[11] = compressor_exit;
  v15[12] = compressor_stats;
  v15[13] = compress;
  *v15 = v16;
  v15[3] = v18;
  v15[2] = v17 - 1;
  v15[4] = v18 - 1;
  v15[5] = (v18 - 1) >> 1;
  v19 = calloc(v18, 4u);
  v15[7] = v19;
  if ( !v19 )
  {
    puts("calloc failed!");
    v19 = (void *)v15[7];
    v18 = v15[3];
  }
  v15[6] = 0;
  v15[8] = -1;
  memset(v19, 255, 4 * v18);
  v20 = *((_DWORD *)v4 + 10);
  *((_DWORD *)v4 + 21) = v15;
  v21 = 2 * v20;
  v22 = (void **)calloc(1u, 0x24u);
  if ( !v22 )
    puts("bitmap calloc failed!");
  v22[3] = visited_init;
  v22[7] = visited_clear;
  v22[8] = visited_exit;
  v22[6] = visited_test;
  v22[4] = visited_reset;
  v22[2] = (void *)32;
  v22[5] = visited_set;
  v22[1] = (void *)(v21 >> 5);
  *v22 = calloc(v21 >> 5, 4u);
  visited_clear(v22);
  *((_DWORD *)v4 + 22) = v22;
  v23 = calloc(1u, 0x60u);
  if ( !v23 )
    puts("siphash calloc failed!");
  v24 = *((_DWORD *)v4 + 10);
  v23[18] = sub_5D064;
  v25 = 2 * v24;
  v23[19] = sub_4C000;
  *((_DWORD *)v4 + 23) = v23;
  v23[20] = sub_4C064;
  v23[21] = sub_4C038;
  v26 = calloc(v25, 4u);
  *((_DWORD *)v4 + 17) = v26;
  if ( !v26 )
  {
    puts("graph adjlist calloc failed!");
    v25 = 2 * *((_DWORD *)v4 + 10);
  }
  v27 = calloc(v25, 8u);
  *((_DWORD *)v4 + 19) = v27;
  if ( !v27 )
    puts("graph link calloc failed!");
  v28 = calloc(*((_DWORD *)v4 + 15), 0xACu);
  *((_DWORD *)v4 + 18) = v28;
  if ( !v28 )
    puts("graph sols calloc failed!");
  memset(*((void **)v4 + 17), v4[52], 8 * *((_DWORD *)v4 + 10));
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 16) = 0;
  return v4;
}
