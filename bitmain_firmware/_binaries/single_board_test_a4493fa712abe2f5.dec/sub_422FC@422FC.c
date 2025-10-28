_DWORD *__fastcall sub_422FC(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int v12; // [sp+4h] [bp-8h]

  result = (_DWORD *)(*(int (**)(void))(a1[22] + 24))();
  if ( !result )
  {
    v9 = a1[14];
    result = (_DWORD *)a1[18];
    result[43 * v9] = a2;
    if ( a3 == a4 )
    {
      if ( a2 == 42 && v9 < a1[15] )
      {
        result = memcpy(&result[43 * v9 + 44], &result[43 * v9 + 1], 0xA8u);
        ++a1[14];
      }
    }
    else if ( a2 != 42 )
    {
      v12 = *(_DWORD *)(a1[17] + 4 * a3);
      if ( a1[13] != v12 )
      {
        (*(void (**)(void))(a1[22] + 20))();
        if ( v12 != a1[13] )
        {
          v10 = a1[19];
          do
          {
            v11 = *(_DWORD *)(v10 + 8 * v12 + 4);
            *(_DWORD *)(a1[18] + 172 * a1[14] + 4 * a2 + 4) = v12;
            sub_422FC(a1, a2 + 1, v11, a4);
            v10 = a1[19];
            v12 = *(_DWORD *)(v10 + 8 * v12);
          }
          while ( a1[13] != v12 );
        }
        return (*(_DWORD *(**)(void))(a1[22] + 16))();
      }
    }
  }
  return result;
}
