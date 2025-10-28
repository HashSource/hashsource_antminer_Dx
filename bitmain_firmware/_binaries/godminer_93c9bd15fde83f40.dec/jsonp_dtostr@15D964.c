int __fastcall jsonp_dtostr(char *a1, size_t a2, int a3, int a4)
{
  int v4; // s0
  int v5; // s1
  bool v6; // zf
  const char *v7; // r2
  int v10; // r0
  int v11; // r4
  int v12; // r6
  int v13; // r1
  char *v14; // r0
  char *v15; // r8
  char *v16; // r0
  char *v17; // r3
  unsigned __int8 *v18; // r4
  int v19; // r2
  _BYTE *v20; // r5
  int v21; // t1
  size_t v22; // r2

  v6 = a3 == 0;
  if ( a3 )
    a4 = a3;
  LOWORD(v7) = 2324;
  if ( v6 )
    a4 = 17;
  HIWORD(v7) = 25;
  v10 = snprintf(a1, a2, v7, a4, v4, v5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v10;
    if ( a2 > v10 )
    {
      v13 = *(unsigned __int8 *)localeconv()->decimal_point;
      if ( v13 != 46 )
      {
        v14 = strchr(a1, v13);
        if ( v14 )
          *v14 = 46;
      }
      v15 = strchr(a1, 46);
      v16 = strchr(a1, 101);
      v17 = v16;
      if ( v15 )
      {
LABEL_11:
        if ( !v17 )
          return v12;
        goto LABEL_12;
      }
      if ( v16 )
      {
LABEL_12:
        v18 = (unsigned __int8 *)(v17 + 2);
        v19 = (unsigned __int8)v17[2];
        if ( v17[1] != 45 )
        {
          v20 = v17 + 1;
          if ( v19 != 48 )
          {
LABEL_15:
            if ( v18 != v20 )
            {
              v22 = v12 - (v18 - (unsigned __int8 *)a1);
              v12 -= v18 - v20;
              memmove(v20, v18, v22);
            }
            return v12;
          }
          do
LABEL_14:
            v21 = *++v18;
          while ( v21 == 48 );
          goto LABEL_15;
        }
        if ( v19 == 48 )
        {
          v20 = v17 + 2;
          goto LABEL_14;
        }
        return v12;
      }
      if ( v11 + 3 < a2 )
      {
        v12 = v11 + 2;
        a1[v11] = 46;
        a1[v11 + 1] = 48;
        a1[v11 + 2] = (char)v16;
        v17 = strchr(a1, 101);
        goto LABEL_11;
      }
    }
  }
  return -1;
}
