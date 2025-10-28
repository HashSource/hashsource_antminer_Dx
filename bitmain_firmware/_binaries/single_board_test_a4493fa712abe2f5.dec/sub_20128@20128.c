int __fastcall sub_20128(
        unsigned __int8 *a1,
        int a2,
        int (__fastcall *a3)(unsigned __int8 *, int, int),
        int a4,
        unsigned int a5)
{
  int v9; // r4
  unsigned __int8 *v10; // r6
  unsigned __int8 *v11; // r5
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r11
  unsigned int v14; // r3
  bool v15; // zf
  int v17; // r3
  int v19; // r4
  char v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // lr
  int v24; // r4
  int v27; // r4
  char s[20]; // [sp+10h] [bp-14h] BYREF

  if ( !a3("\"", 1, a4) )
  {
    v9 = 0;
    v10 = &a1[a2];
    v11 = a1;
    v12 = a1;
LABEL_3:
    v13 = v11;
    if ( v11 < v10 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( v12 != v13 && a3(v12, v13 - v12, a4) )
        return -1;
      if ( v11 == v13 )
        return a3("\"", 1, a4);
      if ( v9 > 12 )
        break;
      snprintf(s, 0xDu, "\\u%04X", v9);
      if ( a3((unsigned __int8 *)s, 6, a4) )
        return -1;
      v12 = v11;
      v13 = v11;
      if ( v11 < v10 )
      {
LABEL_10:
        v14 = v10 - v11;
        if ( v10 != v11 )
        {
          v9 = *v11;
          if ( (v9 & 0x80) != 0 )
          {
            if ( (v9 ^ 0x80u) <= 0x41 )
              return -1;
            if ( (unsigned __int8)(v9 + 62) <= 0x1Du )
            {
              if ( v14 == 1 )
                return -1;
              v17 = v11[1];
              v27 = v9 & 0x1F;
              if ( (v17 ^ 0x80u) > 0x3F )
                return -1;
              v22 = v17 & 0x3F;
              LOBYTE(v17) = 0;
              v9 = v22 + (v27 << 6);
              v20 = 0;
              LOBYTE(v22) = 1;
              v21 = 2;
            }
            else
            {
              if ( (unsigned __int8)(v9 + 32) <= 0xFu )
              {
                if ( v14 <= 2 )
                  return -1;
                v19 = v9 & 0xF;
                v20 = 0;
                LOBYTE(v17) = 1;
                v21 = 3;
              }
              else
              {
                v17 = v14 <= 3;
                if ( (unsigned __int8)(v9 + 16) > 4u )
                  v17 |= 1u;
                if ( v17 )
                  return -1;
                v19 = v9 & 7;
                v20 = 1;
                v21 = 4;
              }
              v22 = v11[1];
              if ( (v22 ^ 0x80u) > 0x3F )
                return -1;
              v23 = v11[2];
              v24 = (v22 & 0x3F) + (v19 << 6);
              if ( (v23 ^ 0x80u) > 0x3F )
                return -1;
              v9 = (v23 & 0x3F) + (v24 << 6);
              if ( v21 == 4 )
              {
                v22 = v11[3];
                if ( (v22 ^ 0x80u) > 0x3F )
                  return -1;
                v9 = (v22 & 0x3F) + (v9 << 6);
                if ( v9 >= 1114112 )
                  return -1;
                LOBYTE(v22) = 0;
              }
              else
              {
                LOBYTE(v22) = 0;
                v21 = 3;
              }
            }
            if ( (unsigned int)(v9 - 55296) < 0x800 )
              return -1;
            if ( v9 > 127 )
              v22 = 0;
            if ( v22 )
              return -1;
            if ( v9 < 2048 && v17 & 1 )
              return -1;
            if ( v9 < 0x10000 && v20 & 1 )
              return -1;
            v11 += v21;
          }
          else
          {
            ++v11;
          }
        }
        if ( !v11 )
          return -1;
        v15 = v9 == 34;
        if ( v9 != 34 )
          v15 = v9 == 92;
        if ( !v15 )
        {
          if ( ((v9 == 47) & (a5 >> 10)) != 0 )
          {
            v9 = 47;
          }
          else if ( ((v9 > 127) & (a5 >> 6)) == 0 )
          {
            goto LABEL_3;
          }
        }
      }
    }
    if ( v9 == 34 )
    {
      if ( a3("\\\"", 2, a4) )
        return -1;
    }
    else if ( a3("\\/", 2, a4) )
    {
      return -1;
    }
    v13 = v11;
    if ( v11 >= v10 )
      return a3("\"", 1, a4);
    v12 = v11;
    goto LABEL_10;
  }
  return -1;
}
