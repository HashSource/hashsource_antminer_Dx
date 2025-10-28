int __fastcall strbuffer_append_byte(int a1, char a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  _BYTE *v6; // r6
  unsigned int v7; // r2
  unsigned int v8; // r3
  size_t v9; // r5
  _BYTE *v10; // r0
  _BYTE *v12; // r1
  int v13; // r3

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v2 - v3 > 1 )
  {
    v6 = *(_BYTE **)a1;
LABEL_11:
    v6[v3] = a2;
    v12 = *(_BYTE **)a1;
    v13 = *(_DWORD *)(a1 + 4) + 1;
    *(_DWORD *)(a1 + 4) = v13;
    v12[v13] = 0;
    return 0;
  }
  if ( !((v3 > 0xFFFFFFFD) | (v2 >> 31)) )
  {
    v7 = 2 * v2;
    v8 = v3 + 2;
    v9 = v8 < v7 ? v7 : v8;
    v10 = (_BYTE *)off_1A25E8(v9);
    v6 = v10;
    if ( v10 )
    {
      memcpy(v10, *(const void **)a1, *(_DWORD *)(a1 + 4));
      if ( *(_DWORD *)a1 )
        off_1A25EC(*(void **)a1);
      v3 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = v9;
      goto LABEL_11;
    }
  }
  return -1;
}
