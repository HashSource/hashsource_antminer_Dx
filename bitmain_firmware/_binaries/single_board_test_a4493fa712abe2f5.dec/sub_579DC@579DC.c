int __fastcall sub_579DC(int result, _DWORD *a2, int a3, int *a4)
{
  _DWORD *v5; // r11
  _DWORD *v6; // r3
  int i; // r10
  _DWORD *j; // r3
  _DWORD *k; // r3
  _DWORD *m; // r3
  _DWORD *n; // r3
  _DWORD *ii; // r3
  _DWORD *jj; // r3
  _DWORD *v14; // r5
  int v15; // r8
  _DWORD *v16; // r4
  int v17; // r7
  int mm; // r6
  _DWORD *v19; // [sp+0h] [bp-5Ch]
  int kk; // [sp+4h] [bp-58h]
  int v21; // [sp+8h] [bp-54h]
  _DWORD *v22; // [sp+Ch] [bp-50h]
  int v23; // [sp+10h] [bp-4Ch]
  int v24; // [sp+14h] [bp-48h]
  _DWORD *v25; // [sp+18h] [bp-44h]
  int v26; // [sp+1Ch] [bp-40h]
  int v27; // [sp+20h] [bp-3Ch]
  _DWORD *v28; // [sp+24h] [bp-38h]
  int v29; // [sp+28h] [bp-34h]
  int v30; // [sp+2Ch] [bp-30h]
  _DWORD *v31; // [sp+30h] [bp-2Ch]
  int v32; // [sp+34h] [bp-28h]
  _DWORD *v33; // [sp+38h] [bp-24h]
  _DWORD *v34; // [sp+3Ch] [bp-20h]
  int v35; // [sp+40h] [bp-1Ch]
  int v36; // [sp+44h] [bp-18h]
  int v37; // [sp+48h] [bp-14h]
  int v38; // [sp+4Ch] [bp-10h]
  int v39; // [sp+50h] [bp-Ch]
  int v40; // [sp+54h] [bp-8h]

  v38 = a3 + 1;
  v5 = (_DWORD *)(result + 4);
  v6 = a2;
  v40 = a3;
  v34 = a2;
  for ( i = result; v34 != v5; v6 = v34 )
  {
    if ( !v6[3] )
      v40 = v38++;
    v33 = (_DWORD *)*v34;
    v39 = v40;
    v36 = v40 + 1;
    for ( j = (_DWORD *)*v34; v33 != v5; j = v33 )
    {
      if ( !j[3] )
        v39 = v36++;
      v31 = (_DWORD *)*v33;
      v35 = v39;
      v37 = v39 + 1;
      for ( k = (_DWORD *)*v33; v31 != v5; k = v31 )
      {
        if ( !k[3] )
          v35 = v37++;
        v28 = (_DWORD *)*v31;
        v30 = v35;
        v32 = v35 + 1;
        for ( m = (_DWORD *)*v31; v28 != v5; m = v28 )
        {
          if ( !m[3] )
            v30 = v32++;
          v25 = (_DWORD *)*v28;
          v27 = v30;
          v29 = v30 + 1;
          for ( n = (_DWORD *)*v28; v25 != v5; n = v25 )
          {
            if ( !n[3] )
              v27 = v29++;
            v22 = (_DWORD *)*v25;
            v24 = v27;
            v26 = v27 + 1;
            for ( ii = (_DWORD *)*v25; v22 != v5; ii = v22 )
            {
              if ( !ii[3] )
                v24 = v26++;
              v19 = (_DWORD *)*v22;
              v21 = v24;
              v23 = v24 + 1;
              for ( jj = (_DWORD *)*v22; v19 != v5; jj = v19 )
              {
                if ( !jj[3] )
                  v21 = v23++;
                v14 = (_DWORD *)*v19;
                v15 = v21;
                for ( kk = v21 + 1; v14 != v5; v14 = (_DWORD *)v14[1] )
                {
                  if ( !v14[3] )
                    v15 = kk++;
                  v16 = (_DWORD *)*v14;
                  v17 = v15;
                  for ( mm = v15 + 1; v16 != v5; v16 = (_DWORD *)v16[1] )
                  {
                    if ( !v16[3] )
                      v17 = mm++;
                    result = sub_579DC(i, (_DWORD *)*v16, v17, a4);
                  }
                  if ( *a4 == -1 )
                    *a4 = mm;
                }
                if ( *a4 == -1 )
                  *a4 = kk;
                v19 = (_DWORD *)v19[1];
              }
              if ( *a4 == -1 )
                *a4 = v23;
              v22 = (_DWORD *)v22[1];
            }
            if ( *a4 == -1 )
              *a4 = v26;
            v25 = (_DWORD *)v25[1];
          }
          if ( *a4 == -1 )
            *a4 = v29;
          v28 = (_DWORD *)v28[1];
        }
        if ( *a4 == -1 )
          *a4 = v32;
        v31 = (_DWORD *)v31[1];
      }
      if ( *a4 == -1 )
        *a4 = v37;
      v33 = (_DWORD *)v33[1];
    }
    if ( *a4 == -1 )
      *a4 = v36;
    v34 = (_DWORD *)v34[1];
  }
  if ( *a4 == -1 )
    *a4 = v38;
  return result;
}
