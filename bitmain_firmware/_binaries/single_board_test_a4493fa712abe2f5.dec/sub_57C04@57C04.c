int __fastcall sub_57C04(int result, _DWORD **a2)
{
  _DWORD *v2; // r11
  int v3; // r5
  _DWORD **v4; // r3
  _DWORD *v5; // r3
  _DWORD **v6; // r10
  _DWORD **v7; // r3
  _DWORD *j; // r10
  _DWORD *k; // r9
  _DWORD *m; // r8
  _DWORD *n; // r7
  _DWORD *ii; // r6
  _DWORD *jj; // r4
  _DWORD **v14; // [sp+4h] [bp-10h]
  _DWORD *i; // [sp+8h] [bp-Ch]
  _DWORD **v16; // [sp+Ch] [bp-8h]

  v2 = (_DWORD *)(result + 4);
  v16 = a2;
  if ( a2 != (_DWORD **)(result + 4) )
  {
    v3 = result;
    v4 = a2;
    do
    {
      v5 = *v4;
      for ( i = v5; i != v2; v5 = i )
      {
        v6 = (_DWORD **)*v5;
        if ( (_DWORD *)*v5 != v2 )
        {
          v7 = (_DWORD **)*v5;
          v14 = v6;
          do
          {
            for ( j = *v7; j != v2; j = (_DWORD *)j[1] )
            {
              for ( k = (_DWORD *)*j; k != v2; k = (_DWORD *)k[1] )
              {
                for ( m = (_DWORD *)*k; m != v2; m = (_DWORD *)m[1] )
                {
                  for ( n = (_DWORD *)*m; n != v2; n = (_DWORD *)n[1] )
                  {
                    for ( ii = (_DWORD *)*n; ii != v2; ii = (_DWORD *)ii[1] )
                    {
                      for ( jj = (_DWORD *)*ii; jj != v2; jj = (_DWORD *)jj[1] )
                        result = sub_57C04(v3, (_DWORD **)*jj);
                    }
                  }
                }
              }
            }
            v14 = (_DWORD **)v14[1];
            v7 = v14;
          }
          while ( v14 != v2 );
        }
        i = (_DWORD *)i[1];
      }
      v16 = (_DWORD **)v16[1];
      v4 = v16;
    }
    while ( v16 != v2 );
  }
  return result;
}
