int __fastcall sub_4DDA8(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v6; // r5
  int result; // r0
  int v8; // r5
  int v9; // r3
  int (*v10)(void); // r9
  int v11; // r8
  int v12; // r3
  int v13; // r2
  int v14; // r9
  int v15; // r0
  int (__fastcall *v16)(int, int); // r2
  int v17; // r11
  int v18; // r1
  int v19; // r8
  int v20; // r3
  int v21; // r2
  int v22; // r2

  v6 = a1[11];
  if ( a4 )
    v4 = a2;
  result = a1[17];
  v8 = a3 + v6;
  if ( !a4 )
  {
    v4 = v8;
    v8 = a2;
  }
  v9 = a1[16];
  if ( *(_DWORD *)(result + 4 * v4) != a1[13] )
  {
    v10 = *(int (**)(void))(a1[22] + 24);
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v9;
    if ( !v10() )
    {
      result = a1[17];
      *(_DWORD *)(a1[18] + 172 * a1[14]) = 1;
      if ( v8 == v4 || (v11 = *(_DWORD *)(result + 4 * v4), v11 == a1[13]) )
      {
        v9 = a1[16];
        goto LABEL_22;
      }
      (*(void (**)(void))(a1[22] + 20))();
      if ( a1[13] != v11 )
      {
        v12 = a1[19];
        v13 = a1[22];
        while ( 1 )
        {
          v14 = 8 * v11;
          v15 = v13;
          v16 = *(int (__fastcall **)(int, int))(v13 + 24);
          v17 = *(_DWORD *)(v12 + 8 * v11 + 4);
          *(_DWORD *)(a1[18] + 172 * a1[14] + 8) = v11;
          if ( !v16(v15, v17) )
          {
            v18 = a1[13];
            v13 = a1[22];
            *(_DWORD *)(a1[18] + 172 * a1[14]) = 2;
            if ( v8 == v17 )
              goto LABEL_19;
            v19 = *(_DWORD *)(a1[17] + 4 * v17);
            if ( v19 == v18 )
              goto LABEL_19;
            (*(void (__fastcall **)(int, int))(v13 + 20))(v13, v17);
            if ( a1[13] != v19 )
            {
              v20 = a1[19];
              do
              {
                v21 = *(_DWORD *)(v20 + 8 * v19 + 4);
                *(_DWORD *)(a1[18] + 172 * a1[14] + 12) = v19;
                sub_4CBFC(a1, 3, v21, v8);
                v20 = a1[19];
                v19 = *(_DWORD *)(v20 + 8 * v19);
              }
              while ( v19 != a1[13] );
            }
            (*(void (**)(void))(a1[22] + 16))();
          }
          v18 = a1[13];
          v13 = a1[22];
LABEL_19:
          v12 = a1[19];
          v11 = *(_DWORD *)(v12 + v14);
          if ( v11 == v18 )
            goto LABEL_20;
        }
      }
      v13 = a1[22];
LABEL_20:
      (*(void (__fastcall **)(int, int))(v13 + 16))(v13, v4);
    }
    v9 = a1[16];
    result = a1[17];
  }
LABEL_22:
  v22 = a1[19];
  a1[16] = v9 + 1;
  *(_DWORD *)(v22 + 8 * v9) = *(_DWORD *)(result + 4 * v8);
  *(_DWORD *)(result + 4 * v8) = v9;
  *(_DWORD *)(v22 + 8 * v9 + 4) = v4;
  return result;
}
