_DWORD *__fastcall sph_shavite224(_DWORD *result, char *src, size_t n)
{
  _DWORD *v3; // r6
  int v4; // r4
  unsigned int v6; // r5
  size_t v7; // r3
  char *v8; // r1
  char *v9; // r0
  int v10; // r3

  v3 = result;
  v4 = result[16];
  if ( n )
  {
    v6 = n;
    do
    {
      while ( 1 )
      {
        v7 = 64 - v4;
        v8 = src;
        v9 = (char *)v3 + v4;
        if ( 64 - v4 >= v6 )
          v7 = v6;
        v4 += v7;
        v6 -= v7;
        src += v7;
        result = memcpy(v9, v8, v7);
        if ( v4 == 64 )
          break;
        if ( !v6 )
          goto LABEL_7;
      }
      v4 = 0;
      v10 = v3[25] + 512;
      v3[25] = v10;
      if ( !v10 )
        ++v3[26];
      result = sub_68094(v3, v3);
    }
    while ( v6 );
  }
LABEL_7:
  v3[16] = v4;
  return result;
}
