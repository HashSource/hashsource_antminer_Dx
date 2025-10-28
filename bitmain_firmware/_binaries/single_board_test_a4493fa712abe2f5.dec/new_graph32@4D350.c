char *__fastcall new_graph32(int a1, int a2)
{
  char *v4; // r4
  unsigned int v5; // r3
  int v6; // r8
  unsigned int v7; // r5
  unsigned int v8; // r2
  int v9; // r3
  int v10; // r2
  __int64 v11; // r2
  _DWORD *v12; // r5
  int v13; // r6
  unsigned int v14; // r1
  void *v15; // r0
  int v16; // r2
  int v17; // r2
  int v18; // r6
  _DWORD *v19; // r0
  int v20; // r2
  _DWORD *v21; // r5
  int v22; // r3
  size_t v23; // r6
  void *v24; // r0
  int v25; // r3
  unsigned int v26; // r6
  void **v27; // r5
  _DWORD *v28; // r5
  int v29; // r6
  size_t v30; // r6
  void *v31; // r0
  void *v32; // r0
  void *v33; // r0
  void *v35; // r0
  int v36; // [sp+4h] [bp-8h]

  v4 = (char *)calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  *(_DWORD *)v4 = a1;
  v5 = (1 << (a1 - 32)) | (1u >> (32 - a1));
  *((_DWORD *)v4 + 5) = v5;
  v6 = (1 << a1) - 1;
  v7 = v5 >> (a2 - 32);
  v8 = ((unsigned int)(1 << a1) >> a2) | (v5 << (32 - a2));
  *((_DWORD *)v4 + 3) = v5;
  v9 = (1 << a1 != 0) + v5 - 1;
  v10 = v8 | v7;
  *((_DWORD *)v4 + 4) = 1 << a1;
  *((_DWORD *)v4 + 2) = 1 << a1;
  *((_DWORD *)v4 + 10) = v10;
  *((_DWORD *)v4 + 11) = v10;
  LODWORD(v11) = sub_4226C;
  *((_DWORD *)v4 + 7) = v9;
  *((_DWORD *)v4 + 9) = v9;
  HIDWORD(v11) = sub_42640;
  *((_DWORD *)v4 + 24) = sub_426B8;
  *((_DWORD *)v4 + 25) = sub_4252C;
  *((_DWORD *)v4 + 29) = sub_42178;
  *((_DWORD *)v4 + 26) = sub_42D04;
  *((_DWORD *)v4 + 13) = -1;
  *((_DWORD *)v4 + 12) = a2;
  *((_DWORD *)v4 + 6) = v6;
  *((_DWORD *)v4 + 8) = v6;
  *(_QWORD *)(v4 + 108) = v11;
  *((_DWORD *)v4 + 15) = 2;
  v12 = calloc(1u, 0x38u);
  if ( !v12 )
    puts("alloc compressor failed!");
  v13 = a1 - a2;
  *v12 = a2;
  v12[1] = v13;
  v14 = (1 << v13) - 1;
  v12[4] = v14;
  v12[2] = v13 - 1;
  v12[3] = 1 << v13;
  v12[5] = v14 >> 1;
  v12[9] = compressor_init;
  v12[10] = compressor_reset;
  v12[11] = compressor_exit;
  v12[12] = compressor_stats;
  v12[13] = compress;
  v15 = calloc(1 << v13, 4u);
  v16 = 1 << v13;
  v12[7] = v15;
  if ( !v15 )
  {
    puts("calloc failed!");
    v15 = (void *)v12[7];
    v16 = v12[3];
  }
  v12[6] = 0;
  v12[8] = -1;
  memset(v15, 255, 4 * v16);
  v17 = *((_DWORD *)v4 + 12);
  *((_DWORD *)v4 + 20) = v12;
  v18 = *(_DWORD *)v4;
  v36 = v17;
  v19 = calloc(1u, 0x38u);
  v20 = v36;
  v21 = v19;
  if ( !v19 )
  {
    puts("alloc compressor failed!");
    v20 = v36;
  }
  v22 = v18 - v20;
  v23 = 1 << (v18 - v20);
  v21[1] = v22;
  v21[9] = compressor_init;
  v21[10] = compressor_reset;
  v21[11] = compressor_exit;
  v21[12] = compressor_stats;
  v21[13] = compress;
  *v21 = v20;
  v21[2] = v22 - 1;
  v21[3] = v23;
  v21[4] = v23 - 1;
  v21[5] = (v23 - 1) >> 1;
  v24 = calloc(v23, 4u);
  v21[7] = v24;
  if ( !v24 )
  {
    puts("calloc failed!");
    v24 = (void *)v21[7];
    v23 = v21[3];
  }
  v21[6] = 0;
  v21[8] = -1;
  memset(v24, 255, 4 * v23);
  v25 = *((_DWORD *)v4 + 10);
  *((_DWORD *)v4 + 21) = v21;
  v26 = 2 * v25;
  v27 = (void **)calloc(1u, 0x24u);
  if ( !v27 )
    puts("bitmap calloc failed!");
  v27[7] = visited_clear;
  v27[8] = visited_exit;
  v27[3] = visited_init;
  v27[6] = visited_test;
  v27[4] = visited_reset;
  v27[5] = visited_set;
  v27[1] = (void *)(v26 >> 5);
  v27[2] = (void *)32;
  *v27 = calloc(v26 >> 5, 4u);
  visited_clear(v27);
  *((_DWORD *)v4 + 22) = v27;
  v28 = calloc(1u, 0x60u);
  if ( !v28 )
    puts("siphash calloc failed!");
  v29 = *((_DWORD *)v4 + 10);
  v28[18] = 320341;
  v30 = 2 * v29;
  v28[19] = sub_41B38;
  *((_DWORD *)v4 + 23) = v28;
  v28[20] = sub_41B84;
  v28[21] = sub_41B5C;
  v31 = calloc(v30, 4u);
  *((_DWORD *)v4 + 17) = v31;
  if ( v31 )
  {
    v32 = calloc(v30, 8u);
    *((_DWORD *)v4 + 19) = v32;
    if ( v32 )
      goto LABEL_17;
  }
  else
  {
    puts("graph adjlist calloc failed!");
    v35 = calloc(2 * *((_DWORD *)v4 + 10), 8u);
    *((_DWORD *)v4 + 19) = v35;
    if ( v35 )
      goto LABEL_17;
  }
  puts("graph link calloc failed!");
LABEL_17:
  v33 = calloc(*((_DWORD *)v4 + 15), 0xACu);
  *((_DWORD *)v4 + 18) = v33;
  if ( !v33 )
    puts("graph sols calloc failed!");
  memset(*((void **)v4 + 17), (unsigned __int8)v4[52], 8 * *((_DWORD *)v4 + 10));
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 16) = 0;
  return v4;
}
