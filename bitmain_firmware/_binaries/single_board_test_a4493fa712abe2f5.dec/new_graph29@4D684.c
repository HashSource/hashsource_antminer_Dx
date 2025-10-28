unsigned __int8 *__fastcall new_graph29(int a1, int a2)
{
  unsigned __int8 *v4; // r4
  __int64 v5; // r2
  unsigned __int64 v6; // kr00_8
  int v7; // r1
  _DWORD *v8; // r5
  size_t v9; // r11
  void *v10; // r0
  int v11; // r2
  int v12; // r11
  _DWORD *v13; // r0
  int v14; // r2
  _DWORD *v15; // r5
  int v16; // r3
  size_t v17; // r11
  void *v18; // r0
  int v19; // r3
  unsigned int v20; // r6
  void **v21; // r5
  _DWORD *v22; // r5
  int v23; // r6
  size_t v24; // r6
  void *v25; // r0
  void *v26; // r0
  void *v27; // r0
  void *v29; // r0
  int v30; // [sp+4h] [bp-8h]

  v4 = (unsigned __int8 *)calloc(1u, 0x78u);
  if ( !v4 )
    puts("graph calloc failed!");
  LODWORD(v5) = 1 << a1;
  *(_DWORD *)v4 = a1;
  HIDWORD(v5) = (1 << (a1 - 32)) | (1u >> (32 - a1));
  *((_QWORD *)v4 + 2) = v5;
  *((_QWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 12) = a2;
  v6 = (__PAIR64__(HIDWORD(v5), 1 << a1) >> 1) - 1;
  v7 = __PAIR64__(HIDWORD(v5), 1 << a1) >> a2;
  *((_DWORD *)v4 + 10) = v7;
  *((_DWORD *)v4 + 11) = v7;
  *((_DWORD *)v4 + 7) = HIDWORD(v6);
  *((_DWORD *)v4 + 9) = HIDWORD(v6);
  *((_DWORD *)v4 + 25) = sub_424F8;
  *((_DWORD *)v4 + 29) = sub_423E8;
  *((_DWORD *)v4 + 26) = sub_42ED4;
  *((_DWORD *)v4 + 27) = sub_42DF0;
  *((_DWORD *)v4 + 13) = -1;
  *((_DWORD *)v4 + 6) = v6;
  *((_DWORD *)v4 + 8) = v6;
  *((_DWORD *)v4 + 24) = sub_4299C;
  *((_DWORD *)v4 + 28) = sub_425C8;
  *((_DWORD *)v4 + 15) = 2;
  v8 = calloc(1u, 0x38u);
  if ( !v8 )
    puts("alloc compressor failed!");
  v9 = 1 << (a1 - a2);
  *v8 = a2;
  v8[1] = a1 - a2;
  v8[4] = v9 - 1;
  v8[2] = a1 - a2 - 1;
  v8[3] = v9;
  v8[5] = (v9 - 1) >> 1;
  v8[9] = compressor_init;
  v8[10] = compressor_reset;
  v8[11] = compressor_exit;
  v8[12] = compressor_stats;
  v8[13] = compress;
  v10 = calloc(v9, 4u);
  v8[7] = v10;
  if ( !v10 )
  {
    puts("calloc failed!");
    v10 = (void *)v8[7];
    v9 = v8[3];
  }
  v8[6] = 0;
  v8[8] = -1;
  memset(v10, 255, 4 * v9);
  v11 = *((_DWORD *)v4 + 12);
  *((_DWORD *)v4 + 20) = v8;
  v12 = *(_DWORD *)v4;
  v30 = v11;
  v13 = calloc(1u, 0x38u);
  v14 = v30;
  v15 = v13;
  if ( !v13 )
  {
    puts("alloc compressor failed!");
    v14 = v30;
  }
  v16 = v12 - v14;
  v17 = 1 << (v12 - v14);
  v15[1] = v16;
  v15[9] = compressor_init;
  v15[10] = compressor_reset;
  v15[11] = compressor_exit;
  v15[12] = compressor_stats;
  v15[13] = compress;
  *v15 = v14;
  v15[2] = v16 - 1;
  v15[3] = v17;
  v15[4] = v17 - 1;
  v15[5] = (v17 - 1) >> 1;
  v18 = calloc(v17, 4u);
  v15[7] = v18;
  if ( !v18 )
  {
    puts("calloc failed!");
    v18 = (void *)v15[7];
    v17 = v15[3];
  }
  v15[6] = 0;
  v15[8] = -1;
  memset(v18, 255, 4 * v17);
  v19 = *((_DWORD *)v4 + 10);
  *((_DWORD *)v4 + 21) = v15;
  v20 = 2 * v19;
  v21 = (void **)calloc(1u, 0x24u);
  if ( !v21 )
    puts("bitmap calloc failed!");
  v21[7] = visited_clear;
  v21[8] = visited_exit;
  v21[3] = visited_init;
  v21[6] = visited_test;
  v21[4] = visited_reset;
  v21[5] = visited_set;
  v21[1] = (void *)(v20 >> 5);
  v21[2] = (void *)32;
  *v21 = calloc(v20 >> 5, 4u);
  visited_clear(v21);
  *((_DWORD *)v4 + 22) = v21;
  v22 = calloc(1u, 0x60u);
  if ( !v22 )
    puts("siphash calloc failed!");
  v23 = *((_DWORD *)v4 + 10);
  v22[18] = 320341;
  v24 = 2 * v23;
  v22[19] = sub_41B38;
  *((_DWORD *)v4 + 23) = v22;
  v22[20] = sub_41B84;
  v22[21] = sub_41B5C;
  v25 = calloc(v24, 4u);
  *((_DWORD *)v4 + 17) = v25;
  if ( v25 )
  {
    v26 = calloc(v24, 8u);
    *((_DWORD *)v4 + 19) = v26;
    if ( v26 )
      goto LABEL_17;
  }
  else
  {
    puts("graph adjlist calloc failed!");
    v29 = calloc(2 * *((_DWORD *)v4 + 10), 8u);
    *((_DWORD *)v4 + 19) = v29;
    if ( v29 )
      goto LABEL_17;
  }
  puts("graph link calloc failed!");
LABEL_17:
  v27 = calloc(*((_DWORD *)v4 + 15), 0xACu);
  *((_DWORD *)v4 + 18) = v27;
  if ( !v27 )
    puts("graph sols calloc failed!");
  memset(*((void **)v4 + 17), v4[52], 8 * *((_DWORD *)v4 + 10));
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 16) = 0;
  return v4;
}
