int __fastcall sub_57DDC(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r1
  _DWORD *v3; // r2
  _DWORD *i; // r3
  _DWORD *j; // r1
  _DWORD *v7; // r1
  bool v8; // zf

  v1 = *(_DWORD **)(a1 + 20);
  v2 = **(_DWORD ***)(a1 + 12);
  v3 = v2 + 1;
  if ( !v1 )
  {
    for ( i = (_DWORD *)*v2; (_DWORD *)*i != v3; i = (_DWORD *)*i )
      ;
    *(_DWORD *)(a1 + 20) = i;
    return i[5];
  }
  i = (_DWORD *)v1[1];
  if ( i == v3 )
  {
    for ( j = (_DWORD *)*v2; ; j = (_DWORD *)j[1] )
    {
      i = (_DWORD *)j[1];
      if ( i == v3 )
        break;
    }
    if ( v1 == j )
    {
      *(_DWORD *)(a1 + 20) = 0;
      return 0;
    }
    v7 = (_DWORD *)v1[2];
    if ( v7 != v3 )
    {
      if ( v1 == (_DWORD *)v7[1] )
      {
        while ( 1 )
        {
          i = (_DWORD *)v7[2];
          if ( i == v3 )
            break;
          v8 = i[1] == (_DWORD)v7;
          v7 = (_DWORD *)v7[2];
          if ( !v8 )
            goto LABEL_15;
        }
        i = v3;
      }
      else
      {
        i = (_DWORD *)v1[2];
      }
    }
  }
  else
  {
    while ( (_DWORD *)*i != v3 )
      i = (_DWORD *)*i;
  }
LABEL_15:
  *(_DWORD *)(a1 + 20) = i;
  if ( i )
    return i[5];
  return 0;
}
