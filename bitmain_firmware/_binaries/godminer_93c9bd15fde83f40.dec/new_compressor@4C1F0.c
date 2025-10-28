_DWORD *__fastcall new_compressor(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  size_t v6; // r5
  void *v7; // r0

  v4 = calloc(1u, 0x38u);
  if ( !v4 )
    puts("alloc compressor failed!");
  v5 = a1 - a2;
  v6 = 1 << (a1 - a2);
  v4[1] = v5;
  v4[10] = compressor_reset;
  v4[4] = v6 - 1;
  *v4 = a2;
  v4[2] = v5 - 1;
  v4[11] = 255212;
  v4[3] = v6;
  v4[5] = (v6 - 1) >> 1;
  v4[9] = 255436;
  v4[12] = 257960;
  v4[13] = 252548;
  v7 = calloc(v6, 4u);
  v4[7] = v7;
  if ( !v7 )
  {
    puts("calloc failed!");
    v7 = (void *)v4[7];
    v6 = v4[3];
  }
  v4[6] = 0;
  v4[8] = -1;
  memset(v7, 255, 4 * v6);
  return v4;
}
