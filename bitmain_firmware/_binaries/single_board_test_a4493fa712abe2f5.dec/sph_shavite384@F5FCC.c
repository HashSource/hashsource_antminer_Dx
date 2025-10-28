unsigned int *__fastcall sph_shavite384(unsigned int *result, char *src, size_t n)
{
  unsigned int *v3; // r6
  unsigned int v4; // r4
  unsigned int v6; // r5
  size_t v7; // r3
  char *v8; // r1
  char *v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r3

  v3 = result;
  v4 = result[32];
  if ( n )
  {
    v6 = n;
    do
    {
      while ( 1 )
      {
        v7 = 128 - v4;
        v8 = src;
        v9 = (char *)v3 + v4;
        if ( 128 - v4 >= v6 )
          v7 = v6;
        v4 += v7;
        v6 -= v7;
        src += v7;
        result = (unsigned int *)memcpy(v9, v8, v7);
        if ( v4 == 128 )
          break;
        if ( !v6 )
          goto LABEL_7;
      }
      v4 = 0;
      v10 = v3[49] + 1024;
      v3[49] = v10;
      if ( !v10 )
      {
        v11 = v3[50] + 1;
        v3[50] = v11;
        if ( !v11 )
        {
          v12 = v3[51] + 1;
          v3[51] = v12;
          if ( !v12 )
            ++v3[52];
        }
      }
      result = (unsigned int *)sub_62E70(v3, v3);
    }
    while ( v6 );
  }
LABEL_7:
  v3[32] = v4;
  return result;
}
