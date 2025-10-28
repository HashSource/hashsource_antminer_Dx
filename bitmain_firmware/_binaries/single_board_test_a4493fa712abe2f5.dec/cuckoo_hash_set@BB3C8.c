unsigned int __fastcall cuckoo_hash_set(unsigned int result, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r2
  int v5; // r7
  __int64 *v6; // r6
  __int64 v7; // r4

  v3 = a2 >> 22;
  v4 = a3 | (a2 << 30);
  v5 = cuckoo[result];
  v6 = (__int64 *)(v5 + 8 * (a2 >> 22));
  v7 = *v6;
  if ( *v6 )
  {
    result = (unsigned int)v7 >> 30;
    do
    {
      result |= 4 * HIDWORD(v7);
      if ( a2 == __PAIR64__(HIDWORD(v7) >> 30, result) )
        break;
      v3 = (unsigned __int8)(v3 + 1);
      v6 = (__int64 *)(v5 + 8 * v3);
      v7 = *v6;
      result = *(_DWORD *)v6 >> 30;
    }
    while ( *v6 );
  }
  *(_DWORD *)v6 = v4;
  *((_DWORD *)v6 + 1) = a2 >> 2;
  return result;
}
