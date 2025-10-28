unsigned int *__fastcall sph_shavite224(unsigned int *result, char *src, unsigned int a3)
{
  unsigned int v3; // r6
  unsigned int *v4; // r7
  unsigned int v5; // r5
  size_t v7; // r4
  char *v8; // r0
  int v9; // r3

  v3 = a3;
  v4 = result;
  v5 = result[16];
  while ( v3 )
  {
    v7 = 64 - v5;
    v8 = (char *)v4 + v5;
    if ( 64 - v5 >= v3 )
      v7 = v3;
    v5 += v7;
    result = (unsigned int *)memcpy(v8, src, v7);
    v3 -= v7;
    src += v7;
    if ( v5 == 64 )
    {
      v5 = 0;
      v9 = v4[25] + 512;
      v4[25] = v9;
      if ( !v9 )
        ++v4[26];
      result = (unsigned int *)sub_A3F40(v4, v4);
    }
  }
  v4[16] = v5;
  return result;
}
