int __fastcall sub_4CB24(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r2
  int v5; // r12
  int v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r12
  int v9; // r3
  int result; // r0
  _DWORD *v11; // lr

  v2 = (*(int (**)(void))(a1[20] + 52))();
  v3 = (*(int (**)(void))(a1[21] + 52))();
  v4 = a1[17];
  v5 = a1[13];
  v6 = v3 + a1[11];
  if ( *(_DWORD *)(v4 + 4 * (v2 ^ 1)) == v5 )
    goto LABEL_4;
  v7 = a1[16];
  if ( v5 != *(_DWORD *)(v4 + 4 * (v6 ^ 1)) )
  {
    v8 = v7 >> 1;
    v9 = v3 + a1[11];
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v8;
    sub_4CA00(a1, 1, v2, v9);
    v4 = a1[17];
LABEL_4:
    v7 = a1[16];
  }
  result = a1[19];
  a1[16] = v7 + 2;
  *(_DWORD *)(result + 8 * v7) = *(_DWORD *)(v4 + 4 * v2);
  v11 = (_DWORD *)(result + 8 * v7 + 8);
  *v11 = *(_DWORD *)(v4 + 4 * v6);
  *(_DWORD *)(v4 + 4 * v2) = v7;
  *(_DWORD *)(result + 8 * v7 + 4) = v2;
  *(_DWORD *)(v4 + 4 * v6) = v7 + 1;
  v11[1] = v6;
  return result;
}
