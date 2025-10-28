int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3)
{
  double v3; // d0
  int v4; // r3
  int v7; // r0
  int v8; // r4
  int v9; // r6
  int v10; // r1
  char *v11; // r0
  char *v12; // r8
  char *v13; // r0
  char *v14; // r3
  unsigned __int8 *v15; // r4
  int v16; // r2
  _BYTE *v17; // r5
  int v18; // t1
  size_t v19; // r2

  if ( a3 )
    v4 = a3;
  else
    v4 = 17;
  v7 = snprintf(a1, a2, "%.*g", v4, v3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v7;
    if ( a2 > v7 )
    {
      v10 = *(unsigned __int8 *)localeconv()->decimal_point;
      if ( v10 != 46 )
      {
        v11 = strchr(a1, v10);
        if ( v11 )
          *v11 = 46;
      }
      v12 = strchr(a1, 46);
      v13 = strchr(a1, 101);
      v14 = v13;
      if ( v12 )
      {
        if ( !v13 )
          return v9;
        goto LABEL_11;
      }
      if ( v13 )
      {
LABEL_11:
        v15 = (unsigned __int8 *)(v14 + 2);
        v16 = (unsigned __int8)v14[2];
        if ( v14[1] != 45 )
        {
          v17 = v14 + 1;
          if ( v16 != 48 )
          {
LABEL_14:
            if ( v15 != v17 )
            {
              v19 = v9 - (v15 - (unsigned __int8 *)a1);
              v9 -= v15 - v17;
              memmove(v17, v15, v19);
            }
            return v9;
          }
          do
LABEL_13:
            v18 = *++v15;
          while ( v18 == 48 );
          goto LABEL_14;
        }
        if ( v16 == 48 )
        {
          v17 = v14 + 2;
          goto LABEL_13;
        }
        return v9;
      }
      if ( v8 + 3 < a2 )
      {
        v9 = v8 + 2;
        a1[v8] = 46;
        a1[v8 + 1] = 48;
        a1[v8 + 2] = (char)v13;
        v14 = strchr(a1, 101);
        if ( !v14 )
          return v9;
        goto LABEL_11;
      }
    }
  }
  return -1;
}
