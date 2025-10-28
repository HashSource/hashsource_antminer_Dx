int __fastcall sub_42DF0(_DWORD *a1, char a2)
{
  unsigned int v2; // r8
  unsigned int v5; // r5
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r7
  bool v9; // zf
  int v10; // r0
  int v11; // r3
  int (*v12)(void); // r6
  int v13; // r9
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int result; // r0

  v5 = (*(int (**)(void))(a1[20] + 52))();
  v6 = (*(int (**)(void))(a1[21] + 52))();
  v7 = a2 & 1;
  v8 = a1[17];
  v9 = v7 == 0;
  if ( v7 )
    v2 = v5 >> 1;
  else
    v5 >>= 1;
  v10 = a1[11] + (v6 >> 1);
  v11 = a1[16];
  if ( v9 )
    v2 = v10;
  else
    v5 = v10;
  if ( *(_DWORD *)(v8 + 4 * v2) != a1[13] )
  {
    v12 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v11;
    if ( !v12() )
    {
      v8 = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v2 == v5 || (v13 = *(_DWORD *)(v8 + 4 * v2), v13 == a1[13]) )
      {
        v11 = a1[16];
        goto LABEL_16;
      }
      (*(void (**)(void))(a1[22] + 20))();
      if ( v13 != a1[13] )
      {
        v14 = a1[19];
        do
        {
          v15 = *(_DWORD *)(v14 + 8 * v13 + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v13;
          sub_422FC(a1, 2, v15, v5);
          v14 = a1[19];
          v13 = *(_DWORD *)(v14 + 8 * v13);
        }
        while ( v13 != a1[13] );
      }
      (*(void (**)(void))(a1[22] + 16))();
    }
    v8 = a1[17];
    v11 = a1[16];
  }
LABEL_16:
  v16 = a1[19];
  a1[16] = v11 + 1;
  result = *(_DWORD *)(v8 + 4 * v5);
  *(_DWORD *)(v16 + 8 * v11) = result;
  *(_DWORD *)(v8 + 4 * v5) = v11;
  *(_DWORD *)(v16 + 8 * v11 + 4) = v2;
  return result;
}
