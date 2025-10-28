int __fastcall sub_10E9D4(int a1)
{
  _DWORD *v1; // r12
  _DWORD *v2; // r1
  _DWORD *v3; // r2
  _DWORD *j; // r3
  _DWORD *v5; // r3
  _DWORD *i; // r1
  _DWORD *v7; // r1
  bool v8; // zf

  v1 = *(_DWORD **)(a1 + 20);
  v2 = **(_DWORD ***)(a1 + 12);
  v3 = v2 + 1;
  if ( v1 )
  {
    v5 = (_DWORD *)v1[1];
    if ( v5 == v3 )
    {
      for ( i = (_DWORD *)*v2; ; i = (_DWORD *)i[1] )
      {
        v5 = (_DWORD *)i[1];
        if ( v5 == v3 )
          break;
      }
      if ( v1 == i )
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
            v5 = (_DWORD *)v7[2];
            if ( v5 == v3 )
              break;
            v8 = v5[1] == (_DWORD)v7;
            v7 = (_DWORD *)v7[2];
            if ( !v8 )
              goto LABEL_15;
          }
          v5 = v3;
        }
        else
        {
          v5 = (_DWORD *)v1[2];
        }
      }
    }
    else
    {
      while ( (_DWORD *)*v5 != v3 )
        v5 = (_DWORD *)*v5;
    }
LABEL_15:
    *(_DWORD *)(a1 + 20) = v5;
    if ( v5 )
      return v5[5];
    else
      return 0;
  }
  else
  {
    for ( j = (_DWORD *)*v2; (_DWORD *)*j != v3; j = (_DWORD *)*j )
      ;
    *(_DWORD *)(a1 + 20) = j;
    return j[5];
  }
}
