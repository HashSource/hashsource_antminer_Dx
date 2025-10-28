int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3)
{
  int v3; // s0
  int v4; // s1
  int v5; // r3
  int v8; // r0
  int v9; // r4
  int v10; // r6
  int v11; // r1
  char *v12; // r0
  char *v13; // r8
  char *v14; // r0
  char *v15; // r3
  unsigned __int8 *v16; // r4
  int v17; // r2
  _BYTE *v18; // r5
  int v19; // t1
  size_t v20; // r2

  if ( a3 )
    v5 = a3;
  else
    v5 = 17;
  v8 = snprintf(a1, a2, "%.*g", v5, v3, v4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = v8;
    if ( a2 > v8 )
    {
      v11 = *(unsigned __int8 *)localeconv()->decimal_point;
      if ( v11 != 46 )
      {
        v12 = strchr(a1, v11);
        if ( v12 )
          *v12 = 46;
      }
      v13 = strchr(a1, 46);
      v14 = strchr(a1, 101);
      v15 = v14;
      if ( v13 )
      {
LABEL_10:
        if ( !v15 )
          return v10;
        goto LABEL_11;
      }
      if ( v14 )
      {
LABEL_11:
        v16 = (unsigned __int8 *)(v15 + 2);
        v17 = (unsigned __int8)v15[2];
        if ( v15[1] != 45 )
        {
          v18 = v15 + 1;
          if ( v17 != 48 )
          {
LABEL_14:
            if ( v16 != v18 )
            {
              v20 = v10 - (v16 - (unsigned __int8 *)a1);
              v10 -= v16 - v18;
              memmove(v18, v16, v20);
            }
            return v10;
          }
          do
LABEL_13:
            v19 = *++v16;
          while ( v19 == 48 );
          goto LABEL_14;
        }
        if ( v17 == 48 )
        {
          v18 = v15 + 2;
          goto LABEL_13;
        }
        return v10;
      }
      if ( v9 + 3 < a2 )
      {
        v10 = v9 + 2;
        a1[v9] = 46;
        a1[v9 + 1] = 48;
        a1[v9 + 2] = (char)v14;
        v15 = strchr(a1, 101);
        goto LABEL_10;
      }
    }
  }
  return -1;
}
