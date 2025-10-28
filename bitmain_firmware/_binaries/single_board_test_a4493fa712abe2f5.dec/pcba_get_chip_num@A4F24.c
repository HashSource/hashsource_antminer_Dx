int __fastcall pcba_get_chip_num(int a1)
{
  size_t v1; // r5
  char *v3; // r7
  int v4; // r0
  int v5; // r9
  unsigned int v6; // r8
  _DWORD *v7; // r4
  int v8; // r5
  int v9; // r2
  int v10; // r1
  char *v11; // r4
  int v12; // r1

  v1 = *(_DWORD *)(a1 + 180);
  v3 = (char *)calloc(v1, 8u);
  v4 = sub_A2D1C(a1, 0, v1, (int)v3);
  v5 = v4;
  if ( v4 > 0 )
  {
    if ( v4 <= 4 )
    {
      v8 = 0;
    }
    else
    {
      v6 = ((v4 - 5) & 0xFFFFFFFC) + 4;
      v7 = v3 + 84;
      v8 = 0;
      do
      {
        v9 = *(v7 - 20);
        v10 = *((unsigned __int8 *)v7 - 84);
        v8 += 4;
        __pld(v7);
        v7 += 8;
        printf("chip-%02x %08x\n", v10, v9);
        printf("chip-%02x %08x\n", *((unsigned __int8 *)v7 - 108), *(v7 - 26));
        printf("chip-%02x %08x\n", *((unsigned __int8 *)v7 - 100), *(v7 - 24));
        printf("chip-%02x %08x\n", *((unsigned __int8 *)v7 - 92), *(v7 - 22));
      }
      while ( v8 != v6 );
    }
    v11 = &v3[8 * v8];
    do
    {
      v12 = (unsigned __int8)v3[8 * v8++];
      printf("chip-%02x %08x\n", v12, *((_DWORD *)v11 + 1));
      v11 += 8;
    }
    while ( v5 > v8 );
  }
  free(v3);
  return v5;
}
