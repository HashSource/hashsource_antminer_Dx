int __fastcall json_array_remove(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r2
  unsigned int v5; // r6
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2

  if ( !a1 )
    return -1;
  if ( *a1 != 1 )
    return -1;
  v2 = a1[3];
  if ( v2 <= a2 )
    return -1;
  v5 = 4 * a2;
  v6 = *(_DWORD **)(a1[4] + 4 * a2);
  if ( v6 && v6[1] != -1 )
  {
    v9 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v10 = __ldrex(v9);
      v11 = v10 - 1;
    }
    while ( __strex(v11, v9) );
    if ( !v11 )
      json_delete(v6);
    v2 = a1[3];
    v7 = v2 - 1;
    if ( v2 - 1 <= a2 )
      goto LABEL_7;
  }
  else
  {
    v7 = v2 - 1;
    if ( v2 - 1 <= a2 )
    {
LABEL_7:
      a1[3] = v7;
      return 0;
    }
  }
  memmove((void *)(a1[4] + v5), (const void *)(v5 + 4 + a1[4]), 4 * (v2 + ~a2));
  --a1[3];
  return 0;
}
