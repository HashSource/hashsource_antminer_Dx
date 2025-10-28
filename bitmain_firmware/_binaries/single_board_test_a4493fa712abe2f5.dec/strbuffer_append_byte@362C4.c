int __fastcall strbuffer_append_byte(int a1, char a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r5
  _BYTE *v6; // r6
  size_t v7; // r5
  size_t v8; // r3
  _BYTE *v9; // r0
  _BYTE *v11; // r1
  int v12; // r3

  v4 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v4 - v3 > 1 )
  {
    v6 = *(_BYTE **)a1;
LABEL_10:
    v6[v3] = a2;
    v11 = *(_BYTE **)a1;
    v12 = *(_DWORD *)(a1 + 4) + 1;
    *(_DWORD *)(a1 + 4) = v12;
    v11[v12] = 0;
    return 0;
  }
  if ( !((v3 > 0xFFFFFFFD) | (v4 >> 31)) )
  {
    v7 = 2 * v4;
    v8 = v3 + 2;
    if ( v7 < v8 )
      v7 = v8;
    v9 = off_12A258(v7);
    v6 = v9;
    if ( v9 )
    {
      memcpy(v9, *(const void **)a1, *(_DWORD *)(a1 + 4));
      if ( *(_DWORD *)a1 )
        off_12A254(*(void **)a1);
      v3 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = v7;
      goto LABEL_10;
    }
  }
  return -1;
}
