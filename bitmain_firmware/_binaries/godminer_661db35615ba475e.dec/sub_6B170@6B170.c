int __fastcall sub_6B170(int result, _DWORD ****a2)
{
  _DWORD *v2; // r11
  int v3; // r5
  _DWORD ****v4; // r3
  _DWORD ***v5; // r3
  _DWORD **v6; // r3
  _DWORD *k; // r10
  _DWORD *m; // r9
  _DWORD *n; // r8
  _DWORD *ii; // r7
  _DWORD *jj; // r6
  _DWORD *kk; // r4
  _DWORD **j; // [sp+4h] [bp-10h]
  _DWORD ***i; // [sp+8h] [bp-Ch]
  _DWORD ****v15; // [sp+Ch] [bp-8h]

  v2 = (_DWORD *)(result + 4);
  v15 = a2;
  if ( a2 != (_DWORD ****)(result + 4) )
  {
    v3 = result;
    v4 = a2;
    do
    {
      v5 = *v4;
      for ( i = v5; i != v2; v5 = i )
      {
        v6 = *v5;
        for ( j = v6; j != v2; v6 = j )
        {
          for ( k = *v6; k != v2; k = (_DWORD *)k[1] )
          {
            for ( m = (_DWORD *)*k; m != v2; m = (_DWORD *)m[1] )
            {
              for ( n = (_DWORD *)*m; n != v2; n = (_DWORD *)n[1] )
              {
                for ( ii = (_DWORD *)*n; ii != v2; ii = (_DWORD *)ii[1] )
                {
                  for ( jj = (_DWORD *)*ii; jj != v2; jj = (_DWORD *)jj[1] )
                  {
                    for ( kk = (_DWORD *)*jj; kk != v2; kk = (_DWORD *)kk[1] )
                      result = sub_6B170(v3, (_DWORD ****)*kk);
                  }
                }
              }
            }
          }
          j = (_DWORD **)j[1];
        }
        i = (_DWORD ***)i[1];
      }
      v15 = (_DWORD ****)v15[1];
      v4 = v15;
    }
    while ( v15 != v2 );
  }
  return result;
}
