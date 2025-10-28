int __fastcall sub_3F1AC(_DWORD *a1, char a2)
{
  int v3; // r6
  unsigned int v4; // r5
  unsigned int v5; // r0
  int v6; // lr
  bool v7; // zf
  int v8; // r0
  int v9; // r3
  int (*v10)(void); // r9
  int v11; // r7
  int v12; // r3
  int v13; // r2
  int v14; // r2
  int result; // r0

  v3 = a2 & 1;
  v4 = (*(int (**)(void))(a1[20] + 52))();
  v5 = (*(int (**)(void))(a1[21] + 52))();
  v6 = a1[17];
  v7 = v3 == 0;
  if ( v3 )
    v3 = v4 >> 1;
  else
    v4 >>= 1;
  v8 = a1[11] + (v5 >> 1);
  v9 = a1[16];
  if ( v7 )
    v3 = v8;
  else
    v4 = v8;
  if ( *(_DWORD *)(v6 + 4 * v3) != a1[13] )
  {
    v10 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v9;
    if ( !v10() )
    {
      v6 = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v3 == v4 || (v11 = *(_DWORD *)(v6 + 4 * v3), v11 == a1[13]) )
      {
        v9 = a1[16];
        goto LABEL_16;
      }
      (*(void (**)(void))(a1[22] + 20))();
      if ( v11 != a1[13] )
      {
        v12 = a1[19];
        do
        {
          v13 = *(_DWORD *)(v12 + 8 * v11 + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v11;
          sub_3E16C(a1, 2, v13, v4);
          v12 = a1[19];
          v11 = *(_DWORD *)(v12 + 8 * v11);
        }
        while ( v11 != a1[13] );
      }
      (*(void (**)(void))(a1[22] + 16))();
    }
    v9 = a1[16];
    v6 = a1[17];
  }
LABEL_16:
  v14 = a1[19];
  a1[16] = v9 + 1;
  result = *(_DWORD *)(v6 + 4 * v4);
  *(_DWORD *)(v14 + 8 * v9) = result;
  *(_DWORD *)(v6 + 4 * v4) = v9;
  *(_DWORD *)(v14 + 8 * v9 + 4) = v3;
  return result;
}
