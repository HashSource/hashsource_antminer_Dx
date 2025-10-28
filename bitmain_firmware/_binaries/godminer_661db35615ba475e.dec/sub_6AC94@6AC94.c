int __fastcall sub_6AC94(int result, _DWORD *a2, int a3, int *a4)
{
  _DWORD *v4; // r11
  _DWORD *v6; // r3
  _DWORD *j; // r3
  _DWORD *k; // r3
  _DWORD *m; // r3
  _DWORD *n; // r3
  _DWORD *ii; // r3
  _DWORD *v12; // r9
  _DWORD *v13; // r5
  int v14; // r8
  _DWORD *v15; // r4
  int v16; // r7
  int mm; // r6
  int kk; // [sp+4h] [bp-60h]
  int v19; // [sp+Ch] [bp-58h]
  _DWORD *v20; // [sp+10h] [bp-54h]
  int jj; // [sp+14h] [bp-50h]
  int v22; // [sp+18h] [bp-4Ch]
  int v23; // [sp+1Ch] [bp-48h]
  _DWORD *v24; // [sp+20h] [bp-44h]
  int v25; // [sp+24h] [bp-40h]
  int v26; // [sp+28h] [bp-3Ch]
  _DWORD *v27; // [sp+2Ch] [bp-38h]
  int v28; // [sp+30h] [bp-34h]
  int v29; // [sp+34h] [bp-30h]
  _DWORD *v30; // [sp+38h] [bp-2Ch]
  int v31; // [sp+3Ch] [bp-28h]
  _DWORD *v32; // [sp+40h] [bp-24h]
  _DWORD *i; // [sp+44h] [bp-20h]
  int v34; // [sp+48h] [bp-1Ch]
  int v35; // [sp+4Ch] [bp-18h]
  int v36; // [sp+50h] [bp-14h]
  int v37; // [sp+54h] [bp-10h]
  int v38; // [sp+58h] [bp-Ch]
  int v39; // [sp+5Ch] [bp-8h]

  v37 = a3 + 1;
  v4 = (_DWORD *)(result + 4);
  v6 = a2;
  v22 = result;
  v39 = a3;
  for ( i = a2; i != v4; v6 = i )
  {
    if ( !v6[3] )
      v39 = v37++;
    v32 = (_DWORD *)*i;
    v38 = v39;
    v35 = v39 + 1;
    for ( j = (_DWORD *)*i; v32 != v4; j = v32 )
    {
      if ( !j[3] )
        v38 = v35++;
      v30 = (_DWORD *)*v32;
      v34 = v38;
      v36 = v38 + 1;
      for ( k = (_DWORD *)*v32; v30 != v4; k = v30 )
      {
        if ( !k[3] )
          v34 = v36++;
        v27 = (_DWORD *)*v30;
        v29 = v34;
        v31 = v34 + 1;
        for ( m = (_DWORD *)*v30; v27 != v4; m = v27 )
        {
          if ( !m[3] )
            v29 = v31++;
          v24 = (_DWORD *)*v27;
          v26 = v29;
          v28 = v29 + 1;
          for ( n = (_DWORD *)*v27; v24 != v4; n = v24 )
          {
            if ( !n[3] )
              v26 = v28++;
            v20 = (_DWORD *)*v24;
            v23 = v26;
            v25 = v26 + 1;
            for ( ii = (_DWORD *)*v24; v20 != v4; ii = v20 )
            {
              if ( !ii[3] )
                v23 = v25++;
              v12 = (_DWORD *)*v20;
              v19 = v23;
              for ( jj = v23 + 1; v12 != v4; v12 = (_DWORD *)v12[1] )
              {
                if ( !v12[3] )
                  v19 = jj++;
                v13 = (_DWORD *)*v12;
                v14 = v19;
                for ( kk = v19 + 1; v13 != v4; v13 = (_DWORD *)v13[1] )
                {
                  if ( !v13[3] )
                    v14 = kk++;
                  v15 = (_DWORD *)*v13;
                  v16 = v14;
                  for ( mm = v14 + 1; v15 != v4; v15 = (_DWORD *)v15[1] )
                  {
                    if ( !v15[3] )
                      v16 = mm++;
                    result = sub_6AC94(v22, (_DWORD *)*v15, v16, a4);
                  }
                  if ( *a4 == -1 )
                    *a4 = mm;
                }
                if ( *a4 == -1 )
                  *a4 = kk;
              }
              if ( *a4 == -1 )
                *a4 = jj;
              v20 = (_DWORD *)v20[1];
            }
            if ( *a4 == -1 )
              *a4 = v25;
            v24 = (_DWORD *)v24[1];
          }
          if ( *a4 == -1 )
            *a4 = v28;
          v27 = (_DWORD *)v27[1];
        }
        if ( *a4 == -1 )
          *a4 = v31;
        v30 = (_DWORD *)v30[1];
      }
      if ( *a4 == -1 )
        *a4 = v36;
      v32 = (_DWORD *)v32[1];
    }
    if ( *a4 == -1 )
      *a4 = v35;
    i = (_DWORD *)i[1];
  }
  if ( *a4 == -1 )
    *a4 = v37;
  return result;
}
