_DWORD *__fastcall sub_10E904(_DWORD *result)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r8
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *****i; // r2
  int v6; // r2
  _DWORD *v7; // r7
  _DWORD *****v8; // r2
  int v9; // r2
  int v10; // r4
  int j; // [sp+4h] [bp-4h] BYREF

  v1 = result + 1;
  v2 = (_DWORD *)*result;
  v3 = result;
  if ( (_DWORD *)*result != result + 1 )
  {
    v4 = (_DWORD *)*result;
    do
    {
      for ( i = (_DWORD *****)*v4; i != v1; i = *(_DWORD ******)(v6 + 4) )
        result = (_DWORD *)sub_10E7E4((int)v3, *i);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 != v1 );
    v7 = v2;
    do
    {
      v8 = (_DWORD *****)*v7;
      if ( (_DWORD *)*v7 != v4 )
      {
        do
        {
          result = (_DWORD *)sub_10E6C4((int)v3, *v8);
          v8 = *(_DWORD ******)(v9 + 4);
        }
        while ( v4 != v8 );
      }
      v7 = (_DWORD *)v7[1];
    }
    while ( v7 != v4 );
  }
  v10 = 0;
  for ( j = -1; v2 != v1; v2 = (_DWORD *)v2[1] )
  {
    if ( !v2[3] )
      ++v10;
    result = (_DWORD *)sub_10E308((int)v3, (_DWORD *)*v2, v10, &j);
  }
  return result;
}
