void *__fastcall sub_4D280(int *a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r1
  unsigned int v6; // r3
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r1
  size_t v13; // r6
  void *v14; // r0
  int v15; // r2
  int v16; // r6
  _DWORD *v17; // r5
  int v18; // r2
  int v19; // r3
  size_t v20; // r6
  void *v21; // r0
  int v22; // r6
  unsigned int v23; // r6
  void **v24; // r5
  _DWORD *v25; // r5
  int v26; // r6
  size_t v27; // r6
  void *v28; // r0
  void *v29; // r0
  void *v30; // r0
  void *result; // r0
  int v32; // [sp+4h] [bp-8h]

  v3 = 1 << (a2 - 32);
  v5 = 1 << a2;
  v6 = v3 | (1u >> (32 - a2));
  a1[15] = 2;
  v9 = __PAIR64__(v6, v5) >> a3;
  a1[5] = v6;
  a1[3] = v6;
  v10 = (__PAIR64__(v6, v5) - 1) >> 32;
  a1[13] = -1;
  a1[4] = v5;
  a1[2] = v5;
  *a1 = a2;
  a1[12] = a3;
  a1[6] = v5 - 1;
  a1[8] = v5 - 1;
  a1[10] = v9;
  a1[11] = v9;
  a1[7] = v10;
  a1[9] = v10;
  v11 = calloc(1u, 0x38u);
  if ( !v11 )
    puts("alloc compressor failed!");
  v12 = a2 - a3;
  v13 = 1 << (a2 - a3);
  *v11 = a3;
  v11[1] = v12;
  v11[3] = v13;
  v11[2] = v12 - 1;
  v11[4] = v13 - 1;
  v11[5] = (v13 - 1) >> 1;
  v11[9] = compressor_init;
  v11[10] = compressor_reset;
  v11[11] = compressor_exit;
  v11[12] = compressor_stats;
  v11[13] = compress;
  v14 = calloc(v13, 4u);
  v11[7] = v14;
  if ( !v14 )
  {
    puts("calloc failed!");
    v14 = (void *)v11[7];
    v13 = v11[3];
  }
  v11[6] = 0;
  v11[8] = -1;
  memset(v14, 255, 4 * v13);
  v15 = a1[12];
  a1[20] = (int)v11;
  v16 = *a1;
  v32 = v15;
  v17 = calloc(1u, 0x38u);
  v18 = v32;
  if ( !v17 )
  {
    puts("alloc compressor failed!");
    v18 = v32;
  }
  v19 = v16 - v18;
  v20 = 1 << (v16 - v18);
  v17[1] = v19;
  v17[9] = compressor_init;
  v17[10] = compressor_reset;
  v17[11] = compressor_exit;
  v17[12] = compressor_stats;
  v17[13] = compress;
  *v17 = v18;
  v17[3] = v20;
  v17[2] = v19 - 1;
  v17[4] = v20 - 1;
  v17[5] = (v20 - 1) >> 1;
  v21 = calloc(v20, 4u);
  v17[7] = v21;
  if ( !v21 )
  {
    puts("calloc failed!");
    v21 = (void *)v17[7];
    v20 = v17[3];
  }
  v17[6] = 0;
  v17[8] = -1;
  memset(v21, 255, 4 * v20);
  v22 = a1[10];
  a1[21] = (int)v17;
  v23 = 2 * v22;
  v24 = (void **)calloc(1u, 0x24u);
  if ( !v24 )
    puts("bitmap calloc failed!");
  v24[3] = visited_init;
  v24[7] = visited_clear;
  v24[8] = visited_exit;
  v24[6] = visited_test;
  v24[4] = visited_reset;
  v24[2] = (void *)32;
  v24[5] = visited_set;
  v24[1] = (void *)(v23 >> 5);
  *v24 = calloc(v23 >> 5, 4u);
  visited_clear(v24);
  a1[22] = (int)v24;
  v25 = calloc(1u, 0x60u);
  if ( !v25 )
    puts("siphash calloc failed!");
  v26 = a1[10];
  v25[18] = sub_5D064;
  v27 = 2 * v26;
  v25[19] = sub_4C000;
  a1[23] = (int)v25;
  v25[20] = sub_4C064;
  v25[21] = sub_4C038;
  v28 = calloc(v27, 4u);
  a1[17] = (int)v28;
  if ( !v28 )
  {
    puts("graph adjlist calloc failed!");
    v27 = 2 * a1[10];
  }
  v29 = calloc(v27, 8u);
  a1[19] = (int)v29;
  if ( !v29 )
    puts("graph link calloc failed!");
  v30 = calloc(a1[15], 0xACu);
  a1[18] = (int)v30;
  if ( !v30 )
    puts("graph sols calloc failed!");
  result = memset((void *)a1[17], *((unsigned __int8 *)a1 + 52), 8 * a1[10]);
  a1[14] = 0;
  a1[16] = 0;
  return result;
}
