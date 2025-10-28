int __fastcall sub_4DAD8(_DWORD *a1, int a2, int a3)
{
  int v4; // r1
  int v5; // r7
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r5
  int (*v10)(void); // r10
  unsigned int v11; // r7
  int v12; // r3
  int v13; // r2
  int result; // r0
  _DWORD *v15; // lr

  v4 = a1[17];
  v5 = a2 ^ 1;
  v7 = a1[13];
  v8 = a1[16];
  v9 = a3 + a1[11];
  if ( *(_DWORD *)(v4 + 4 * (a2 ^ 1)) != v7 && v7 != *(_DWORD *)(v4 + 4 * (v9 ^ 1)) )
  {
    v10 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v8 >> 1;
    if ( !v10() )
    {
      v4 = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v5 == v9 )
        goto LABEL_11;
      v11 = *(_DWORD *)(v4 + 4 * v5);
      if ( v11 == a1[13] )
        goto LABEL_11;
      (*(void (**)(void))(a1[22] + 20))();
      if ( a1[13] != v11 )
      {
        v12 = a1[19];
        do
        {
          v13 = *(_DWORD *)(v12 + 8 * (v11 ^ 1) + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v11 >> 1;
          sub_4CA00(a1, 2, v13, v9);
          v12 = a1[19];
          v11 = *(_DWORD *)(v12 + 8 * v11);
        }
        while ( v11 != a1[13] );
      }
      (*(void (**)(void))(a1[22] + 16))();
    }
    v4 = a1[17];
LABEL_11:
    v8 = a1[16];
  }
  result = a1[19];
  a1[16] = v8 + 2;
  *(_DWORD *)(result + 8 * v8) = *(_DWORD *)(v4 + 4 * a2);
  v15 = (_DWORD *)(result + 8 * v8 + 8);
  *v15 = *(_DWORD *)(v4 + 4 * v9);
  *(_DWORD *)(v4 + 4 * a2) = v8;
  *(_DWORD *)(result + 8 * v8 + 4) = a2;
  *(_DWORD *)(v4 + 4 * v9) = v8 + 1;
  v15[1] = v9;
  return result;
}
