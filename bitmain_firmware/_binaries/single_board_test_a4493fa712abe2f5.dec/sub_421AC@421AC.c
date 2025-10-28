int __fastcall sub_421AC(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // r3
  int v10; // r5
  unsigned int v11; // r5
  int v12; // r3
  int v13; // r2
  bool v14; // zf

  result = (*(int (**)(void))(a1[22] + 24))();
  if ( !result )
  {
    result = a1[14];
    v9 = a1[18];
    v10 = a3 ^ 1;
    *(_DWORD *)(v9 + 172 * result) = a2;
    if ( v10 == a4 )
    {
      v14 = result == 1;
      if ( result <= 1 )
        v14 = a2 == 42;
      if ( v14 )
      {
        result = (int)memcpy((void *)(v9 + 172 * result + 176), (const void *)(v9 + 172 * result + 4), 0xA8u);
        ++a1[14];
      }
    }
    else if ( a2 != 42 )
    {
      v11 = *(_DWORD *)(a1[17] + 4 * v10);
      if ( a1[13] != v11 )
      {
        (*(void (**)(void))(a1[22] + 20))();
        if ( v11 != a1[13] )
        {
          v12 = a1[19];
          do
          {
            v13 = *(_DWORD *)(v12 + 8 * (v11 ^ 1) + 4);
            *(_DWORD *)(a1[18] + 172 * a1[14] + 4 * a2 + 4) = v11 >> 1;
            sub_421AC(a1, a2 + 1, v13, a4);
            v12 = a1[19];
            v11 = *(_DWORD *)(v12 + 8 * v11);
          }
          while ( a1[13] != v11 );
        }
        return (*(int (**)(void))(a1[22] + 16))();
      }
    }
  }
  return result;
}
