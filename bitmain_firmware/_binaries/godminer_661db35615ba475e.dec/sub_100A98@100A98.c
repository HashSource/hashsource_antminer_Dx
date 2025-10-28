int __fastcall sub_100A98(unsigned __int8 *a1, int a2, int (__fastcall *a3)(char *, int, int), int a4, unsigned int a5)
{
  int v9; // r4
  unsigned __int8 *v10; // r6
  unsigned __int8 *v11; // r5
  char *v12; // r0
  unsigned __int8 *v13; // r11
  int v14; // r1
  unsigned int v15; // r3
  int v16; // r1
  bool v17; // zf
  int v18; // r3
  int v20; // r3
  int v21; // r4
  char v22; // r12
  int v23; // r2
  int v24; // lr
  int v25; // r4
  int v28; // r4
  char s[20]; // [sp+10h] [bp-14h] BYREF

  v9 = a3("\"", 1, a4);
  if ( !v9 )
  {
    v10 = &a1[a2];
    v11 = a1;
    v12 = (char *)a1;
LABEL_3:
    v13 = v11;
    if ( v11 < v10 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( v12 != (char *)v13 && a3(v12, v13 - (unsigned __int8 *)v12, a4) )
        return -1;
      if ( v11 == v13 )
        return a3("\"", 1, a4);
      if ( v9 == 12 )
      {
        if ( a3(byte_176488, 2, a4) )
          return -1;
        goto LABEL_38;
      }
      if ( v9 > 12 )
      {
        if ( v9 == 34 )
        {
          if ( a3(byte_17647C, 2, a4) )
            return -1;
          goto LABEL_38;
        }
        if ( v9 <= 34 )
        {
          if ( v9 == 13 )
          {
            if ( a3(byte_176490, 2, a4) )
              return -1;
            goto LABEL_38;
          }
        }
        else
        {
          if ( v9 == 47 )
          {
            if ( a3(byte_176498, 2, a4) )
              return -1;
            goto LABEL_38;
          }
          if ( v9 == 92 )
          {
            if ( a3(byte_176480, 2, a4) )
              return -1;
LABEL_38:
            v13 = v11;
            if ( v11 >= v10 )
              return a3("\"", 1, a4);
            v12 = (char *)v11;
            goto LABEL_16;
          }
        }
      }
      else
      {
        switch ( v9 )
        {
          case 9:
            if ( a3(byte_176494, 2, a4) )
              return -1;
            goto LABEL_38;
          case 10:
            if ( a3(byte_17648C, 2, a4) )
              return -1;
            goto LABEL_38;
          case 8:
            if ( a3(byte_176484, 2, a4) )
              return -1;
            goto LABEL_38;
        }
      }
      if ( v9 < 0x10000 )
      {
        snprintf(s, 0xDu, "\\u%04X", v9);
        v14 = 6;
      }
      else
      {
        v9 -= 0x10000;
        snprintf(s, 0xDu, "\\u%04X\\u%04X", (v9 >> 10) | 0xD800, v9 & 0x3FF | 0xDC00);
        v14 = 12;
      }
      if ( a3(s, v14, a4) )
        return -1;
      v12 = (char *)v11;
      v13 = v11;
      if ( v11 < v10 )
      {
LABEL_16:
        v15 = v10 - v11;
        if ( v10 != v11 )
        {
          v9 = *v11;
          if ( (v9 & 0x80) != 0 )
          {
            if ( (v9 ^ 0x80u) <= 0x41 )
              return -1;
            if ( (unsigned __int8)(v9 + 62) <= 0x1Du )
            {
              if ( v15 == 1 )
                return -1;
              v20 = v11[1];
              v28 = v9 & 0x1F;
              if ( (v20 ^ 0x80u) > 0x3F )
                return -1;
              v23 = v20 & 0x3F;
              LOBYTE(v20) = 0;
              v9 = v23 + (v28 << 6);
              v22 = 0;
              LOBYTE(v23) = 1;
              v16 = 2;
            }
            else
            {
              if ( (unsigned __int8)(v9 + 32) <= 0xFu )
              {
                if ( v15 <= 2 )
                  return -1;
                v21 = v9 & 0xF;
                v22 = 0;
                LOBYTE(v20) = 1;
                v16 = 3;
              }
              else
              {
                v20 = v15 <= 3;
                if ( (unsigned __int8)(v9 + 16) > 4u )
                  v20 |= 1u;
                if ( v20 )
                  return -1;
                v21 = v9 & 7;
                v22 = 1;
                v16 = 4;
              }
              v23 = v11[1];
              if ( (v23 ^ 0x80u) > 0x3F )
                return -1;
              v24 = v11[2];
              v25 = (v23 & 0x3F) + (v21 << 6);
              if ( (v24 ^ 0x80u) > 0x3F )
                return -1;
              v9 = (v24 & 0x3F) + (v25 << 6);
              if ( v16 == 4 )
              {
                v23 = v11[3];
                if ( (v23 ^ 0x80u) > 0x3F )
                  return -1;
                v9 = (v23 & 0x3F) + (v9 << 6);
                if ( v9 >= 1114112 )
                  return -1;
                LOBYTE(v23) = 0;
              }
              else
              {
                LOBYTE(v23) = 0;
                v16 = 3;
              }
            }
            if ( (unsigned int)(v9 - 55296) < 0x800 )
              return -1;
            if ( v9 > 127 )
              v23 = 0;
            if ( v23 )
              return -1;
            if ( v9 < 2048 && v20 & 1 )
              return -1;
            if ( v9 < 0x10000 && v22 & 1 )
              return -1;
          }
          else
          {
            v16 = 1;
          }
          v11 += v16;
        }
        if ( !v11 )
          return -1;
        v17 = v9 == 34;
        if ( v9 != 34 )
          v17 = v9 == 92;
        v18 = v17;
        if ( v9 <= 31 )
          v18 |= 1u;
        if ( !v18 )
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
  }
  return -1;
}
