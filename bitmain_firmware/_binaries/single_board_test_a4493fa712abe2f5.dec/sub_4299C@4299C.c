void *__fastcall sub_4299C(int *a1, int a2, int a3)
{
  unsigned __int64 v4; // r8
  int v6; // r3
  __int64 v7; // kr00_8
  int *v8; // r0
  int v9; // r2
  int *v10; // r5
  int v11; // r6
  int v12; // r7
  unsigned int v13; // r1
  void *v14; // r0
  int v15; // r2
  int v16; // r7
  int *v17; // r0
  int v18; // r2
  int *v19; // r5
  int v20; // r3
  size_t v21; // r7
  void *v22; // r0
  int v23; // r3
  unsigned int v24; // r6
  void **v25; // r5
  _DWORD *v26; // r5
  int v27; // r6
  size_t v28; // r6
  void *v29; // r0
  void *v30; // r0
  void *v31; // r0
  void *result; // r0
  void *v33; // r0
  int v35; // [sp+4h] [bp-8h]

  LODWORD(v4) = 1 << a2;
  HIDWORD(v4) = (1 << (a2 - 32)) | (1u >> (32 - a2));
  a1[15] = 2;
  a1[13] = -1;
  v6 = __PAIR64__(HIDWORD(v4), 1 << a2) >> a3;
  v7 = (v4 >> 1) - 1;
  a1[12] = a3;
  *a1 = a2;
  *((_QWORD *)a1 + 2) = v4;
  *((_QWORD *)a1 + 1) = v4;
  a1[10] = v6;
  a1[11] = v6;
  a1[7] = HIDWORD(v7);
  a1[9] = HIDWORD(v7);
  a1[6] = v7;
  a1[8] = v7;
  v8 = (int *)calloc(1u, 0x38u);
  v9 = a3;
  v10 = v8;
  if ( !v8 )
  {
    puts("alloc compressor failed!");
    v9 = a3;
  }
  v11 = a2 - v9;
  v12 = 1 << v11;
  v10[1] = v11;
  v13 = (1 << v11) - 1;
  v10[4] = v13;
  *v10 = v9;
  v10[2] = v11 - 1;
  v10[3] = 1 << v11;
  v10[5] = v13 >> 1;
  v10[9] = (int)compressor_init;
  v10[10] = (int)compressor_reset;
  v10[11] = (int)compressor_exit;
  v10[12] = (int)compressor_stats;
  v10[13] = (int)compress;
  v14 = calloc(1 << v11, 4u);
  v10[7] = (int)v14;
  if ( !v14 )
  {
    puts("calloc failed!");
    v14 = (void *)v10[7];
    v12 = v10[3];
  }
  v10[6] = 0;
  v10[8] = -1;
  memset(v14, 255, 4 * v12);
  v15 = a1[12];
  a1[20] = (int)v10;
  v16 = *a1;
  v35 = v15;
  v17 = (int *)calloc(1u, 0x38u);
  v18 = v35;
  v19 = v17;
  if ( !v17 )
  {
    puts("alloc compressor failed!");
    v18 = v35;
  }
  v20 = v16 - v18;
  v21 = 1 << (v16 - v18);
  v19[1] = v20;
  v19[9] = (int)compressor_init;
  v19[10] = (int)compressor_reset;
  v19[11] = (int)compressor_exit;
  v19[12] = (int)compressor_stats;
  v19[13] = (int)compress;
  *v19 = v18;
  v19[2] = v20 - 1;
  v19[3] = v21;
  v19[4] = v21 - 1;
  v19[5] = (v21 - 1) >> 1;
  v22 = calloc(v21, 4u);
  v19[7] = (int)v22;
  if ( !v22 )
  {
    puts("calloc failed!");
    v22 = (void *)v19[7];
    v21 = v19[3];
  }
  v19[6] = 0;
  v19[8] = -1;
  memset(v22, 255, 4 * v21);
  v23 = a1[10];
  a1[21] = (int)v19;
  v24 = 2 * v23;
  v25 = (void **)calloc(1u, 0x24u);
  if ( !v25 )
    puts("bitmap calloc failed!");
  v25[7] = visited_clear;
  v25[8] = visited_exit;
  v25[3] = visited_init;
  v25[6] = visited_test;
  v25[4] = visited_reset;
  v25[5] = visited_set;
  v25[1] = (void *)(v24 >> 5);
  v25[2] = (void *)32;
  *v25 = calloc(v24 >> 5, 4u);
  visited_clear(v25);
  a1[22] = (int)v25;
  v26 = calloc(1u, 0x60u);
  if ( !v26 )
    puts("siphash calloc failed!");
  v27 = a1[10];
  v26[18] = 320341;
  v28 = 2 * v27;
  v26[19] = sub_41B38;
  a1[23] = (int)v26;
  v26[20] = sub_41B84;
  v26[21] = sub_41B5C;
  v29 = calloc(v28, 4u);
  a1[17] = (int)v29;
  if ( v29 )
  {
    v30 = calloc(v28, 8u);
    a1[19] = (int)v30;
    if ( v30 )
      goto LABEL_15;
  }
  else
  {
    puts("graph adjlist calloc failed!");
    v33 = calloc(2 * a1[10], 8u);
    a1[19] = (int)v33;
    if ( v33 )
      goto LABEL_15;
  }
  puts("graph link calloc failed!");
LABEL_15:
  v31 = calloc(a1[15], 0xACu);
  a1[18] = (int)v31;
  if ( !v31 )
    puts("graph sols calloc failed!");
  result = memset((void *)a1[17], *((unsigned __int8 *)a1 + 52), 8 * a1[10]);
  a1[14] = 0;
  a1[16] = 0;
  return result;
}
