int __fastcall sph_simd224(int result, char *src, unsigned int a3)
{
  unsigned int v3; // r5
  int v4; // r6
  size_t v6; // r4
  bool v7; // cf
  void *v8; // r0
  int v9; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = result;
    result = *(_DWORD *)(result + 64);
    do
    {
      while ( 1 )
      {
        v6 = 64 - result;
        v7 = 64 - result >= v3;
        v8 = (void *)(v4 + result);
        if ( v7 )
          v6 = v3;
        v3 -= v6;
        memcpy(v8, src, v6);
        src += v6;
        result = v6 + *(_DWORD *)(v4 + 64);
        *(_DWORD *)(v4 + 64) = result;
        if ( result == 64 )
          break;
        if ( !v3 )
          return result;
      }
      sub_43DE0((unsigned __int8 *)v4);
      v9 = *(_DWORD *)(v4 + 132);
      result = 0;
      *(_DWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 132) = ++v9;
      if ( !v9 )
      {
        result = 0;
        ++*(_DWORD *)(v4 + 136);
      }
    }
    while ( v3 );
  }
  return result;
}
