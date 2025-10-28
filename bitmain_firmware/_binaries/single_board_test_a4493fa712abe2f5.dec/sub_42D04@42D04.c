int __fastcall sub_42D04(_DWORD *a1, int a2, int a3)
{
  int v4; // r7
  int v6; // r1
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  int (*v11)(void); // r3
  unsigned int v12; // r8
  int v13; // r3
  int v14; // r2
  int result; // r0
  _DWORD *v16; // r12

  v4 = a2 ^ 1;
  v6 = a1[17];
  v7 = a1[11] + a3;
  v8 = a1[13];
  v9 = a1[16];
  if ( *(_DWORD *)(v6 + 4 * v4) != v8 && v8 != *(_DWORD *)(v6 + 4 * (v7 ^ 1)) )
  {
    v10 = v9 >> 1;
    v11 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v10;
    if ( !v11() )
    {
      v6 = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v4 == v7 )
        goto LABEL_11;
      v12 = *(_DWORD *)(v6 + 4 * v4);
      if ( v12 == a1[13] )
        goto LABEL_11;
      (*(void (**)(void))(a1[22] + 20))();
      if ( a1[13] != v12 )
      {
        v13 = a1[19];
        do
        {
          v14 = *(_DWORD *)(v13 + 8 * (v12 ^ 1) + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v12 >> 1;
          sub_421AC(a1, 2, v14, v7);
          v13 = a1[19];
          v12 = *(_DWORD *)(v13 + 8 * v12);
        }
        while ( v12 != a1[13] );
      }
      (*(void (**)(void))(a1[22] + 16))();
    }
    v6 = a1[17];
LABEL_11:
    v9 = a1[16];
  }
  result = a1[19];
  a1[16] = v9 + 2;
  v16 = (_DWORD *)(result + 8 * v9 + 8);
  *(_DWORD *)(result + 8 * v9) = *(_DWORD *)(v6 + 4 * a2);
  *v16 = *(_DWORD *)(v6 + 4 * v7);
  *(_DWORD *)(v6 + 4 * a2) = v9;
  *(_DWORD *)(8 * v9 + result + 4) = a2;
  *(_DWORD *)(v6 + 4 * v7) = v9 + 1;
  v16[1] = v7;
  return result;
}
