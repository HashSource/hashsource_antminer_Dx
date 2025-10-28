unsigned __int8 *__fastcall utf8_iterate(unsigned __int8 *result, unsigned int a2, int *a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r1
  int v6; // r3
  char v7; // r7
  char v8; // r6
  int v9; // r5
  int v10; // r5
  int v11; // r5

  if ( !a2 )
    return result;
  v3 = *result;
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 ^ 0x80u) > 0x41 )
    {
      if ( (unsigned __int8)(v3 + 62) <= 0x1Du )
      {
        if ( a2 <= 1 )
          return 0;
        v8 = 0;
        v6 = v3 & 0x1F;
        v5 = 0;
        v7 = 1;
        v4 = 2;
      }
      else if ( (unsigned __int8)(v3 + 32) <= 0xFu )
      {
        if ( a2 <= 2 )
          return 0;
        v8 = 0;
        v6 = v3 & 0xF;
        v7 = 0;
        v5 = 1;
        v4 = 3;
      }
      else
      {
        v5 = a2 <= 3;
        if ( (unsigned __int8)(v3 + 16) > 4u )
          v5 |= 1u;
        if ( v5 )
          return 0;
        v6 = v3 & 7;
        v7 = 0;
        v8 = 1;
        v4 = 4;
      }
      v9 = result[1];
      if ( (v9 ^ 0x80u) <= 0x3F )
      {
        v3 = (v9 & 0x3F) + (v6 << 6);
        if ( v4 == 2
          || (v10 = result[2], (v10 ^ 0x80u) <= 0x3F)
          && ((v3 = (v10 & 0x3F) + (v3 << 6), v4 != 4)
           || (v11 = result[3], (v11 ^ 0x80u) <= 0x3F) && (v3 = (v11 & 0x3F) + (v3 << 6), v3 < 1114112)) )
        {
          if ( (unsigned int)(v3 - 55296) >= 0x800 && (v3 > 127 || !(v7 & 1)) )
          {
            if ( v3 >= 2048 )
              v5 = 0;
            if ( !v5 && (v3 >= 0x10000 || !(v8 & 1)) )
              goto LABEL_5;
          }
        }
      }
    }
    return 0;
  }
  v4 = 1;
LABEL_5:
  if ( a3 )
    *a3 = v3;
  result += v4;
  return result;
}
