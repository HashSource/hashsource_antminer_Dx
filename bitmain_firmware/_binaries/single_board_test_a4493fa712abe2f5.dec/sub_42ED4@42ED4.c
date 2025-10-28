int __fastcall sub_42ED4(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v6; // r5
  int result; // r0
  int v8; // r5
  int v9; // r2
  int v10; // r3
  int (*v11)(void); // r7
  int v12; // r7
  int v13; // r1
  int v14; // r12
  int (__fastcall *v15)(int, int); // r2
  int v16; // r9
  int v17; // r3
  int v18; // r11
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // [sp+4h] [bp-8h]

  v6 = a1[11];
  if ( a4 )
    v4 = a2;
  result = a1[17];
  v8 = v6 + a3;
  if ( a4 )
    v9 = v8;
  else
    v9 = a2;
  if ( !a4 )
    v4 = v8;
  v22 = v9;
  v10 = a1[16];
  if ( *(_DWORD *)(result + 4 * v4) != a1[13] )
  {
    v11 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v10;
    if ( !v11() )
    {
      result = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v22 == v4 || (v12 = *(_DWORD *)(result + 4 * v4), v12 == a1[13]) )
      {
        v10 = a1[16];
        goto LABEL_25;
      }
      (*(void (**)(void))(a1[22] + 20))();
      if ( a1[13] != v12 )
      {
        v13 = a1[19];
        v14 = a1[22];
        while ( 1 )
        {
          v15 = *(int (__fastcall **)(int, int))(v14 + 24);
          v16 = *(_DWORD *)(v13 + 8 * v12 + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v12;
          if ( !v15(v14, v16) )
          {
            v17 = a1[13];
            v14 = a1[22];
            *(_DWORD *)(a1[18] + 172 * a1[14]) = 2;
            if ( v22 == v16 )
              goto LABEL_22;
            v18 = *(_DWORD *)(a1[17] + 4 * v16);
            if ( v18 == v17 )
              goto LABEL_22;
            (*(void (__fastcall **)(int, int))(v14 + 20))(v14, v16);
            if ( a1[13] != v18 )
            {
              v19 = a1[19];
              do
              {
                v20 = *(_DWORD *)(v19 + 8 * v18 + 4);
                *(_DWORD *)(a1[18] + 172 * a1[14] + 12) = v18;
                sub_422FC(a1, 3, v20, v22);
                v19 = a1[19];
                v18 = *(_DWORD *)(v19 + 8 * v18);
              }
              while ( v18 != a1[13] );
            }
            (*(void (**)(void))(a1[22] + 16))();
          }
          v17 = a1[13];
          v14 = a1[22];
LABEL_22:
          v13 = a1[19];
          v12 = *(_DWORD *)(v13 + 8 * v12);
          if ( v12 == v17 )
            goto LABEL_23;
        }
      }
      v14 = a1[22];
LABEL_23:
      (*(void (__fastcall **)(int, int))(v14 + 16))(v14, v4);
    }
    result = a1[17];
    v10 = a1[16];
  }
LABEL_25:
  v21 = a1[19];
  a1[16] = v10 + 1;
  *(_DWORD *)(v21 + 8 * v10) = *(_DWORD *)(result + 4 * v22);
  *(_DWORD *)(result + 4 * v22) = v10;
  *(_DWORD *)(v21 + 8 * v10 + 4) = v4;
  return result;
}
