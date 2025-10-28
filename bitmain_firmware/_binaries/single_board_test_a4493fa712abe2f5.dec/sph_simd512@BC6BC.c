_DWORD *__fastcall sph_simd512(_DWORD *result, char *src, size_t n)
{
  _DWORD *v3; // r6
  unsigned int v5; // r5
  size_t v6; // r4
  bool v7; // cf
  char *v8; // r0
  int v9; // r3

  if ( n )
  {
    v3 = result;
    result = (_DWORD *)result[32];
    v5 = n;
    do
    {
      while ( 1 )
      {
        v6 = 128 - (_DWORD)result;
        v7 = 128 - (int)result >= v5;
        v8 = (char *)v3 + (_DWORD)result;
        if ( v7 )
          v6 = v5;
        v5 -= v6;
        memcpy(v8, src, v6);
        src += v6;
        result = (_DWORD *)(v3[32] + v6);
        v3[32] = result;
        if ( result == (_DWORD *)128 )
        {
          sub_EF110((int)v3, 0);
          v9 = v3[65];
          result = 0;
          v3[32] = 0;
          v3[65] = ++v9;
          if ( !v9 )
            break;
        }
        if ( !v5 )
          return result;
      }
      result = 0;
      ++v3[66];
    }
    while ( v5 );
  }
  return result;
}
