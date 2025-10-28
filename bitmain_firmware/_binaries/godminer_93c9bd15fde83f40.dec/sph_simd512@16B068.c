_DWORD *__fastcall sph_simd512(_DWORD *result, char *src, unsigned int a3)
{
  unsigned int v3; // r5
  _DWORD *v4; // r6
  size_t v6; // r4
  bool v7; // cf
  char *v8; // r0
  int v9; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = result;
    result = (_DWORD *)result[32];
    do
    {
      while ( 1 )
      {
        v6 = 128 - (_DWORD)result;
        v7 = 128 - (int)result >= v3;
        v8 = (char *)result + (_DWORD)v4;
        if ( v7 )
          v6 = v3;
        v3 -= v6;
        memcpy(v8, src, v6);
        src += v6;
        result = (_DWORD *)(v6 + v4[32]);
        v4[32] = result;
        if ( result == (_DWORD *)128 )
          break;
        if ( !v3 )
          return result;
      }
      sub_B71D8((int)v4);
      v9 = v4[65];
      result = 0;
      v4[32] = 0;
      v4[65] = ++v9;
      if ( !v9 )
      {
        result = 0;
        ++v4[66];
      }
    }
    while ( v3 );
  }
  return result;
}
