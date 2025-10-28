_DWORD *__fastcall sub_42640(int a1)
{
  _DWORD *v2; // r6
  signed int v3; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  void *v7; // r8
  int v8; // r4
  int v9; // r5
  const void *v10; // r1

  v2 = calloc(1u, 8u);
  if ( !v2 )
    puts("sols stats calloc failed!");
  v3 = *(_DWORD *)(a1 + 56);
  *v2 = v3;
  if ( !v3 )
    return v2;
  v5 = calloc(v3, 0xACu);
  v6 = v5;
  if ( !v5 )
  {
    v2 = 0;
    puts("s calloc failed!");
    return v2;
  }
  if ( v3 > 0 )
  {
    v7 = v5 + 1;
    v8 = *(_DWORD *)(a1 + 72) + 4;
    v9 = v8 + 172 * v3;
    do
    {
      v10 = (const void *)v8;
      *v6 = *(_DWORD *)(v8 - 4);
      v8 += 172;
      memcpy(v7, v10, 0xA8u);
    }
    while ( v9 != v8 );
  }
  v2[1] = v6;
  return v2;
}
