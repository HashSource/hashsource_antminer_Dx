unsigned __int8 *__fastcall new_graph29(int a1, int a2)
{
  unsigned __int8 *v3; // r4
  int v4; // r3
  __int64 v5; // r8
  int v6; // r2
  _DWORD *v7; // r5
  int v8; // r3
  int v9; // r6
  int v10; // r7
  unsigned int v11; // r1
  void *v12; // r0
  int v13; // r2
  int v14; // r7
  _DWORD *v15; // r5
  int v16; // r2
  int v17; // r3
  size_t v18; // r7
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
  int v31; // [sp+4h] [bp-8h]
  int v32; // [sp+4h] [bp-8h]

  v3 = (unsigned __int8 *)calloc(1u, 0x78u);
  v4 = a2;
  if ( !v3 )
  {
    puts("graph calloc failed!");
    v4 = a2;
  }
  LODWORD(v5) = 1 << a1;
  *((_DWORD *)v3 + 12) = v4;
  HIDWORD(v5) = (1 << (a1 - 32)) | (1u >> (32 - a1));
  *((_QWORD *)v3 + 2) = v5;
  *((_DWORD *)v3 + 24) = sub_4D658;
  v6 = __PAIR64__(HIDWORD(v5), 1 << a1) >> v4;
  *((_QWORD *)v3 + 1) = v5;
  *((_DWORD *)v3 + 10) = v6;
  *((_DWORD *)v3 + 11) = v6;
  *((_DWORD *)v3 + 25) = sub_4CF9C;
  *((_DWORD *)v3 + 29) = sub_4CDF8;
  *((_DWORD *)v3 + 27) = sub_4DC3C;
  *((_DWORD *)v3 + 15) = 2;
  *(_DWORD *)v3 = a1;
  *((_QWORD *)v3 + 3) = (__PAIR64__(HIDWORD(v5), 1 << a1) >> 1) - 1;
  *((_QWORD *)v3 + 4) = (__PAIR64__(HIDWORD(v5), 1 << a1) >> 1) - 1;
  *((_DWORD *)v3 + 26) = sub_4DDA8;
  *((_DWORD *)v3 + 28) = sub_4D110;
  *((_DWORD *)v3 + 13) = -1;
  v31 = v4;
  v7 = calloc(1u, 0x38u);
  v8 = v31;
  if ( !v7 )
  {
    puts("alloc compressor failed!");
    v8 = v31;
  }
  v9 = a1 - v8;
  v10 = 1 << v9;
  v7[1] = v9;
  v11 = (1 << v9) - 1;
  v7[4] = v11;
  *v7 = v8;
  v7[3] = 1 << v9;
  v7[2] = v9 - 1;
  v7[5] = v11 >> 1;
  v7[9] = compressor_init;
  v7[10] = compressor_reset;
  v7[11] = compressor_exit;
  v7[12] = compressor_stats;
  v7[13] = compress;
  v12 = calloc(1 << v9, 4u);
  v7[7] = v12;
  if ( !v12 )
  {
    puts("calloc failed!");
    v12 = (void *)v7[7];
    v10 = v7[3];
  }
  v7[6] = 0;
  v7[8] = -1;
  memset(v12, 255, 4 * v10);
  v13 = *((_DWORD *)v3 + 12);
  *((_DWORD *)v3 + 20) = v7;
  v14 = *(_DWORD *)v3;
  v32 = v13;
  v15 = calloc(1u, 0x38u);
  v16 = v32;
  if ( !v15 )
  {
    puts("alloc compressor failed!");
    v16 = v32;
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
  v20 = *((_DWORD *)v3 + 10);
  *((_DWORD *)v3 + 21) = v15;
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
  *((_DWORD *)v3 + 22) = v22;
  v23 = calloc(1u, 0x60u);
  if ( !v23 )
    puts("siphash calloc failed!");
  v24 = *((_DWORD *)v3 + 10);
  v23[18] = sub_5D064;
  v25 = 2 * v24;
  v23[19] = sub_4C000;
  *((_DWORD *)v3 + 23) = v23;
  v23[20] = sub_4C064;
  v23[21] = sub_4C038;
  v26 = calloc(v25, 4u);
  *((_DWORD *)v3 + 17) = v26;
  if ( !v26 )
  {
    puts("graph adjlist calloc failed!");
    v25 = 2 * *((_DWORD *)v3 + 10);
  }
  v27 = calloc(v25, 8u);
  *((_DWORD *)v3 + 19) = v27;
  if ( !v27 )
    puts("graph link calloc failed!");
  v28 = calloc(*((_DWORD *)v3 + 15), 0xACu);
  *((_DWORD *)v3 + 18) = v28;
  if ( !v28 )
    puts("graph sols calloc failed!");
  memset(*((void **)v3 + 17), v3[52], 8 * *((_DWORD *)v3 + 10));
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 16) = 0;
  return v3;
}
