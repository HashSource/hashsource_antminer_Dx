void *__fastcall sub_4D658(int *a1, int a2, int a3)
{
  unsigned __int64 v3; // r8
  int v6; // r3
  __int64 v7; // kr00_8
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r6
  int v11; // r7
  unsigned int v12; // r1
  void *v13; // r0
  int v14; // r2
  int v15; // r7
  _DWORD *v16; // r5
  int v17; // r2
  int v18; // r3
  size_t v19; // r7
  void *v20; // r0
  int v21; // r6
  unsigned int v22; // r6
  void **v23; // r5
  _DWORD *v24; // r5
  int v25; // r6
  size_t v26; // r6
  void *v27; // r0
  void *v28; // r0
  void *v29; // r0
  void *result; // r0
  int v32; // [sp+4h] [bp-8h]

  LODWORD(v3) = 1 << a2;
  HIDWORD(v3) = (1 << (a2 - 32)) | (1u >> (32 - a2));
  a1[12] = a3;
  a1[15] = 2;
  *a1 = a2;
  a1[13] = -1;
  v6 = __PAIR64__(HIDWORD(v3), 1 << a2) >> a3;
  v7 = (v3 >> 1) - 1;
  *((_QWORD *)a1 + 2) = v3;
  a1[7] = HIDWORD(v7);
  a1[9] = HIDWORD(v7);
  *((_QWORD *)a1 + 1) = v3;
  a1[10] = v6;
  a1[11] = v6;
  a1[6] = v7;
  a1[8] = v7;
  v8 = calloc(1u, 0x38u);
  v9 = a3;
  if ( !v8 )
  {
    puts("alloc compressor failed!");
    v9 = a3;
  }
  v10 = a2 - v9;
  v11 = 1 << v10;
  v8[1] = v10;
  v12 = (1 << v10) - 1;
  v8[4] = v12;
  *v8 = v9;
  v8[3] = 1 << v10;
  v8[2] = v10 - 1;
  v8[5] = v12 >> 1;
  v8[9] = compressor_init;
  v8[10] = compressor_reset;
  v8[11] = compressor_exit;
  v8[12] = compressor_stats;
  v8[13] = compress;
  v13 = calloc(1 << v10, 4u);
  v8[7] = v13;
  if ( !v13 )
  {
    puts("calloc failed!");
    v13 = (void *)v8[7];
    v11 = v8[3];
  }
  v8[6] = 0;
  v8[8] = -1;
  memset(v13, 255, 4 * v11);
  v14 = a1[12];
  a1[20] = (int)v8;
  v15 = *a1;
  v32 = v14;
  v16 = calloc(1u, 0x38u);
  v17 = v32;
  if ( !v16 )
  {
    puts("alloc compressor failed!");
    v17 = v32;
  }
  v18 = v15 - v17;
  v19 = 1 << (v15 - v17);
  v16[1] = v18;
  v16[9] = compressor_init;
  v16[10] = compressor_reset;
  v16[11] = compressor_exit;
  v16[12] = compressor_stats;
  v16[13] = compress;
  *v16 = v17;
  v16[3] = v19;
  v16[2] = v18 - 1;
  v16[4] = v19 - 1;
  v16[5] = (v19 - 1) >> 1;
  v20 = calloc(v19, 4u);
  v16[7] = v20;
  if ( !v20 )
  {
    puts("calloc failed!");
    v20 = (void *)v16[7];
    v19 = v16[3];
  }
  v16[6] = 0;
  v16[8] = -1;
  memset(v20, 255, 4 * v19);
  v21 = a1[10];
  a1[21] = (int)v16;
  v22 = 2 * v21;
  v23 = (void **)calloc(1u, 0x24u);
  if ( !v23 )
    puts("bitmap calloc failed!");
  v23[3] = visited_init;
  v23[7] = visited_clear;
  v23[8] = visited_exit;
  v23[6] = visited_test;
  v23[4] = visited_reset;
  v23[2] = (void *)32;
  v23[5] = visited_set;
  v23[1] = (void *)(v22 >> 5);
  *v23 = calloc(v22 >> 5, 4u);
  visited_clear(v23);
  a1[22] = (int)v23;
  v24 = calloc(1u, 0x60u);
  if ( !v24 )
    puts("siphash calloc failed!");
  v25 = a1[10];
  v24[18] = sub_5D064;
  v26 = 2 * v25;
  v24[19] = sub_4C000;
  a1[23] = (int)v24;
  v24[20] = sub_4C064;
  v24[21] = sub_4C038;
  v27 = calloc(v26, 4u);
  a1[17] = (int)v27;
  if ( !v27 )
  {
    puts("graph adjlist calloc failed!");
    v26 = 2 * a1[10];
  }
  v28 = calloc(v26, 8u);
  a1[19] = (int)v28;
  if ( !v28 )
    puts("graph link calloc failed!");
  v29 = calloc(a1[15], 0xACu);
  a1[18] = (int)v29;
  if ( !v29 )
    puts("graph sols calloc failed!");
  result = memset((void *)a1[17], *((unsigned __int8 *)a1 + 52), 8 * a1[10]);
  a1[14] = 0;
  a1[16] = 0;
  return result;
}
