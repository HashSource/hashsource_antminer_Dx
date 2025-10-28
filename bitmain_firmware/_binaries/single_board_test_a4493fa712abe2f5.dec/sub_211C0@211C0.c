int __fastcall sub_211C0(int a1, int a2)
{
  int v3; // r5
  char v5; // r7
  unsigned int v6; // r3
  unsigned int v7; // r6
  _BYTE *v8; // r8
  size_t v9; // r6
  size_t v10; // r3
  _BYTE *v11; // r0
  void *v12; // r0
  __int64 v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r6
  int v18; // r0
  int v19; // r1
  int v20; // r3
  int v21; // r2
  unsigned int v22; // r9
  char *v23; // r10
  int v24; // r3
  _BYTE *v25; // r6
  char arg[4]; // [sp+0h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
    goto LABEL_2;
  v14 = *(_DWORD *)(a1 + 16);
  v15 = a1 + v14;
  v16 = *(unsigned __int8 *)(a1 + v14 + 8);
  if ( *(_BYTE *)(a1 + v14 + 8) )
  {
    v19 = v14 + 1;
    goto LABEL_21;
  }
  v18 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
  v3 = v18;
  if ( v18 == -1 )
  {
    *(_DWORD *)(a1 + 20) = -1;
    return v3;
  }
  *(_DWORD *)(a1 + 16) = v16;
  *(_BYTE *)(a1 + 8) = v18;
  if ( (unsigned int)(v18 - 128) <= 0x7F )
  {
    if ( ((unsigned __int8)v18 ^ 0x80u) > 0x41 )
    {
      if ( (unsigned __int8)(v18 + 62) <= 0x1Du )
      {
        v22 = 2;
        v23 = (char *)(a1 + 8);
        *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      }
      else
      {
        if ( (unsigned __int8)(v18 + 32) <= 0xFu )
        {
          v22 = 3;
        }
        else
        {
          if ( (unsigned __int8)(v18 + 16) > 4u )
            goto LABEL_30;
          v22 = 4;
        }
        v23 = (char *)(a1 + 8);
        v25 = (_BYTE *)(a1 + 9);
        do
          *v25++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        while ( (_BYTE *)(a1 + 8 + v22) != v25 );
      }
      if ( utf8_check_full(v23, v22, 0) )
      {
        *(_BYTE *)(v22 + a1 + 8) = 0;
        v24 = *(_DWORD *)(a1 + 16);
        v19 = v24 + 1;
        v15 = a1 + v24;
        goto LABEL_21;
      }
    }
LABEL_30:
    *(_DWORD *)arg = v3;
    *(_DWORD *)(a1 + 20) = -2;
    v3 = -2;
    sub_21104(a2, a1, 5, "unable to decode byte 0x%x", *(_DWORD *)arg);
    return v3;
  }
  v19 = 1;
  v15 = a1;
  *(_BYTE *)(a1 + 9) = v16;
LABEL_21:
  *(_DWORD *)(a1 + 16) = v19;
  v3 = *(unsigned __int8 *)(v15 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v3 == 10 )
  {
    v20 = *(_DWORD *)(a1 + 24);
    v21 = *(_DWORD *)(a1 + 28);
    v5 = 10;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = v20 + 1;
    *(_DWORD *)(a1 + 32) = v21;
    goto LABEL_5;
  }
  if ( (v3 & 0x80) == 0 || (unsigned __int8)(v3 + 62) <= 0x32u )
    ++*(_DWORD *)(a1 + 28);
LABEL_2:
  if ( (unsigned int)(v3 + 2) <= 1 )
    return v3;
  v5 = v3;
LABEL_5:
  v7 = *(_DWORD *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v7 - v6 <= 1 )
  {
    if ( (v6 > 0xFFFFFFFD) | (v7 >> 31) )
      return v3;
    v9 = 2 * v7;
    v10 = v6 + 2;
    if ( v9 < v10 )
      v9 = v10;
    v11 = off_12A258(v9);
    v8 = v11;
    if ( !v11 )
      return v3;
    memcpy(v11, *(const void **)(a1 + 40), *(_DWORD *)(a1 + 44));
    v12 = *(void **)(a1 + 40);
    if ( v12 )
      off_12A254(v12);
    v6 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = v8;
    *(_DWORD *)(a1 + 48) = v9;
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 40);
  }
  v8[v6] = v5;
  v13 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 44) = ++HIDWORD(v13);
  *(_BYTE *)(v13 + HIDWORD(v13)) = 0;
  return v3;
}
