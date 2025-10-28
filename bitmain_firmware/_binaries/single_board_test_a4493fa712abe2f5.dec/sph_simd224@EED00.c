int __fastcall sph_simd224(int result, char *src, size_t n)
{
  int v3; // r6
  unsigned int v5; // r5
  size_t v6; // r4
  bool v7; // cf
  void *v8; // r0
  int v9; // r3

  if ( n )
  {
    v3 = result;
    result = *(_DWORD *)(result + 64);
    v5 = n;
    do
    {
      while ( 1 )
      {
        v6 = 64 - result;
        v7 = 64 - result >= v5;
        v8 = (void *)(result + v3);
        if ( v7 )
          v6 = v5;
        v5 -= v6;
        memcpy(v8, src, v6);
        src += v6;
        result = *(_DWORD *)(v3 + 64) + v6;
        *(_DWORD *)(v3 + 64) = result;
        if ( result == 64 )
        {
          sub_B71D8((unsigned __int8 *)v3);
          v9 = *(_DWORD *)(v3 + 132);
          result = 0;
          *(_DWORD *)(v3 + 64) = 0;
          *(_DWORD *)(v3 + 132) = ++v9;
          if ( !v9 )
            break;
        }
        if ( !v5 )
          return result;
      }
      result = 0;
      ++*(_DWORD *)(v3 + 136);
    }
    while ( v5 );
  }
  return result;
}
