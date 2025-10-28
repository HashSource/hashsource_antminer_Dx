unsigned int __fastcall compress(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // lr
  int v3; // r6
  unsigned int v4; // r8
  unsigned int v5; // r1
  int v6; // r7
  int v7; // r3
  unsigned int *v8; // r4
  int v9; // r9
  unsigned int v10; // r10
  unsigned int v11; // r2
  int v13; // r3

  v2 = a2 & 1;
  v3 = a1[7];
  v4 = a2 >> 1;
  v5 = a2 >> *a1;
  v6 = a1[8];
  v7 = *(_DWORD *)(v3 + 4 * v5);
  v8 = (unsigned int *)(v3 + 4 * v5);
  if ( v6 != v7 )
  {
    v9 = a1[5];
    v10 = v4 << a1[2];
    if ( (~v9 & v7) == v10 )
      return v2 | (2 * (v9 & v7));
    while ( 1 )
    {
      v5 = (v5 + 1) & a1[4];
      v7 = *(_DWORD *)(v3 + 4 * v5);
      v8 = (unsigned int *)(v3 + 4 * v5);
      if ( v7 == v6 )
        break;
      if ( (v7 & ~v9) == v10 )
        return v2 | (2 * (v9 & v7));
    }
  }
  v11 = a1[6];
  if ( v11 >= a1[3] )
    return v2;
  *v8 = (v4 << a1[2]) | v11;
  v13 = a1[6];
  a1[6] = v13 + 1;
  return v2 | (2 * v13);
}
