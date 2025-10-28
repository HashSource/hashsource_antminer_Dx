int __fastcall sub_12E064(int a1, int a2)
{
  int v3; // r5
  char v5; // r7
  unsigned int v6; // r2
  unsigned int v7; // r3
  _BYTE *v8; // r8
  unsigned int v9; // r2
  unsigned int v10; // r3
  size_t v11; // r6
  _BYTE *v12; // r0
  void *v13; // r0
  __int64 v14; // r2
  int v15; // r2
  int v16; // r3
  int v17; // r6
  int v18; // r1
  int v20; // r0
  int v21; // r3
  int v22; // r2
  unsigned int v23; // r9
  char *v24; // r10
  int v25; // r2
  _BYTE *v26; // r6
  char arg[4]; // [sp+0h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
    goto LABEL_2;
  v15 = *(_DWORD *)(a1 + 16);
  v16 = a1 + v15;
  v17 = *(unsigned __int8 *)(a1 + v15 + 8);
  if ( !*(_BYTE *)(a1 + v15 + 8) )
  {
    v20 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    v3 = v20;
    if ( v20 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return v3;
    }
    *(_DWORD *)(a1 + 16) = v17;
    *(_BYTE *)(a1 + 8) = v20;
    if ( (unsigned int)(v20 - 128) > 0x7F )
    {
      v18 = 1;
      v16 = a1;
      *(_BYTE *)(a1 + 9) = v17;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v20 ^ 0x80u) > 0x41 )
    {
      if ( (unsigned __int8)(v20 + 62) <= 0x1Du )
      {
        v23 = 2;
        v24 = (char *)(a1 + 8);
        *(_BYTE *)(a1 + 9) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
      }
      else
      {
        if ( (unsigned __int8)(v20 + 32) <= 0xFu )
        {
          v23 = 3;
        }
        else
        {
          if ( (unsigned __int8)(v20 + 16) > 4u )
            goto LABEL_32;
          v23 = 4;
        }
        v24 = (char *)(a1 + 8);
        v26 = (_BYTE *)(a1 + 9);
        do
          *v26++ = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
        while ( (_BYTE *)(a1 + 8 + v23) != v26 );
      }
      if ( utf8_check_full(v24, v23, 0) )
      {
        *(_BYTE *)(a1 + v23 + 8) = 0;
        v25 = *(_DWORD *)(a1 + 16);
        v18 = v25 + 1;
        v16 = a1 + v25;
        goto LABEL_23;
      }
    }
LABEL_32:
    *(_DWORD *)arg = v3;
    *(_DWORD *)(a1 + 20) = -2;
    v3 = -2;
    sub_12DF38(a2, (_DWORD *)a1, 5, "unable to decode byte 0x%x", *(_DWORD *)arg);
    return v3;
  }
  v18 = v15 + 1;
LABEL_23:
  *(_DWORD *)(a1 + 16) = v18;
  v3 = *(unsigned __int8 *)(v16 + 8);
  ++*(_DWORD *)(a1 + 36);
  if ( v3 == 10 )
  {
    v21 = *(_DWORD *)(a1 + 24);
    v22 = *(_DWORD *)(a1 + 28);
    v5 = 10;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = v21 + 1;
    *(_DWORD *)(a1 + 32) = v22;
    goto LABEL_5;
  }
  if ( (v3 & 0x80) == 0 || (unsigned __int8)(v3 + 62) <= 0x32u )
    ++*(_DWORD *)(a1 + 28);
LABEL_2:
  if ( (unsigned int)(v3 + 2) <= 1 )
    return v3;
  v5 = v3;
LABEL_5:
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 44);
  if ( v6 - v7 <= 1 )
  {
    if ( (v7 > 0xFFFFFFFD) | (v6 >> 31) )
      return v3;
    v9 = 2 * v6;
    v10 = v7 + 2;
    v11 = v10 < v9 ? v9 : v10;
    v12 = off_1A25E8(v11);
    v8 = v12;
    if ( !v12 )
      return v3;
    memcpy(v12, *(const void **)(a1 + 40), *(_DWORD *)(a1 + 44));
    v13 = *(void **)(a1 + 40);
    if ( v13 )
      off_1A25EC(v13);
    v7 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = v8;
    *(_DWORD *)(a1 + 48) = v11;
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 40);
  }
  v8[v7] = v5;
  v14 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 44) = ++HIDWORD(v14);
  *(_BYTE *)(v14 + HIDWORD(v14)) = 0;
  return v3;
}
