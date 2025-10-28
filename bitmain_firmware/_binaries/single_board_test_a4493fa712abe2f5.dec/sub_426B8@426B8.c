void *__fastcall sub_426B8(int *a1, int a2, int a3)
{
  unsigned int v4; // r3
  int v5; // lr
  int v7; // r5
  int v8; // r12
  int *v9; // r0
  int v10; // r2
  int *v11; // r5
  int v12; // r6
  int v13; // r7
  unsigned int v14; // r1
  void *v15; // r0
  int v16; // r2
  int v17; // r7
  int *v18; // r0
  int v19; // r2
  int *v20; // r5
  int v21; // r3
  size_t v22; // r7
  void *v23; // r0
  int v24; // r3
  unsigned int v25; // r6
  void **v26; // r5
  _DWORD *v27; // r5
  int v28; // r6
  size_t v29; // r6
  void *v30; // r0
  void *v31; // r0
  void *v32; // r0
  void *result; // r0
  void *v34; // r0
  int v36; // [sp+4h] [bp-8h]

  a1[12] = a3;
  v4 = (1 << (a2 - 32)) | (1u >> (32 - a2));
  *a1 = a2;
  v5 = (1 << a2) - 1;
  v7 = __PAIR64__(v4, 1 << a2) >> a3;
  v8 = (1 << a2 != 0) + v4 - 1;
  a1[13] = -1;
  a1[10] = v7;
  a1[11] = v7;
  a1[15] = 2;
  a1[5] = v4;
  a1[3] = v4;
  a1[4] = 1 << a2;
  a1[2] = 1 << a2;
  a1[6] = v5;
  a1[8] = v5;
  a1[7] = v8;
  a1[9] = v8;
  v9 = (int *)calloc(1u, 0x38u);
  v10 = a3;
  v11 = v9;
  if ( !v9 )
  {
    puts("alloc compressor failed!");
    v10 = a3;
  }
  v12 = a2 - v10;
  v13 = 1 << v12;
  v11[1] = v12;
  v14 = (1 << v12) - 1;
  v11[4] = v14;
  *v11 = v10;
  v11[2] = v12 - 1;
  v11[3] = 1 << v12;
  v11[5] = v14 >> 1;
  v11[9] = (int)compressor_init;
  v11[10] = (int)compressor_reset;
  v11[11] = (int)compressor_exit;
  v11[12] = (int)compressor_stats;
  v11[13] = (int)compress;
  v15 = calloc(1 << v12, 4u);
  v11[7] = (int)v15;
  if ( !v15 )
  {
    puts("calloc failed!");
    v15 = (void *)v11[7];
    v13 = v11[3];
  }
  v11[6] = 0;
  v11[8] = -1;
  memset(v15, 255, 4 * v13);
  v16 = a1[12];
  a1[20] = (int)v11;
  v17 = *a1;
  v36 = v16;
  v18 = (int *)calloc(1u, 0x38u);
  v19 = v36;
  v20 = v18;
  if ( !v18 )
  {
    puts("alloc compressor failed!");
    v19 = v36;
  }
  v21 = v17 - v19;
  v22 = 1 << (v17 - v19);
  v20[1] = v21;
  v20[9] = (int)compressor_init;
  v20[10] = (int)compressor_reset;
  v20[11] = (int)compressor_exit;
  v20[12] = (int)compressor_stats;
  v20[13] = (int)compress;
  *v20 = v19;
  v20[2] = v21 - 1;
  v20[3] = v22;
  v20[4] = v22 - 1;
  v20[5] = (v22 - 1) >> 1;
  v23 = calloc(v22, 4u);
  v20[7] = (int)v23;
  if ( !v23 )
  {
    puts("calloc failed!");
    v23 = (void *)v20[7];
    v22 = v20[3];
  }
  v20[6] = 0;
  v20[8] = -1;
  memset(v23, 255, 4 * v22);
  v24 = a1[10];
  a1[21] = (int)v20;
  v25 = 2 * v24;
  v26 = (void **)calloc(1u, 0x24u);
  if ( !v26 )
    puts("bitmap calloc failed!");
  v26[7] = visited_clear;
  v26[8] = visited_exit;
  v26[3] = visited_init;
  v26[6] = visited_test;
  v26[4] = visited_reset;
  v26[5] = visited_set;
  v26[1] = (void *)(v25 >> 5);
  v26[2] = (void *)32;
  *v26 = calloc(v25 >> 5, 4u);
  visited_clear(v26);
  a1[22] = (int)v26;
  v27 = calloc(1u, 0x60u);
  if ( !v27 )
    puts("siphash calloc failed!");
  v28 = a1[10];
  v27[18] = 320341;
  v29 = 2 * v28;
  v27[19] = sub_41B38;
  a1[23] = (int)v27;
  v27[20] = sub_41B84;
  v27[21] = sub_41B5C;
  v30 = calloc(v29, 4u);
  a1[17] = (int)v30;
  if ( v30 )
  {
    v31 = calloc(v29, 8u);
    a1[19] = (int)v31;
    if ( v31 )
      goto LABEL_15;
  }
  else
  {
    puts("graph adjlist calloc failed!");
    v34 = calloc(2 * a1[10], 8u);
    a1[19] = (int)v34;
    if ( v34 )
      goto LABEL_15;
  }
  puts("graph link calloc failed!");
LABEL_15:
  v32 = calloc(a1[15], 0xACu);
  a1[18] = (int)v32;
  if ( !v32 )
    puts("graph sols calloc failed!");
  result = memset((void *)a1[17], *((unsigned __int8 *)a1 + 52), 8 * a1[10]);
  a1[14] = 0;
  a1[16] = 0;
  return result;
}
