int __fastcall utf8_check_string(int a1, unsigned int a2)
{
  unsigned int i; // r3
  int v3; // r2
  unsigned __int8 *v4; // lr
  char v6; // r9
  int v7; // r2
  char v8; // r5
  char v9; // r10
  int v10; // r4
  int v11; // r12
  int v12; // r2
  int v13; // r12
  int v14; // r12

  if ( !a2 )
    return 1;
  for ( i = 0; i < a2; ++i )
  {
    v3 = *(unsigned __int8 *)(a1 + i);
    v4 = (unsigned __int8 *)(a1 + i);
    if ( (v3 & 0x80) != 0 )
    {
      if ( (v3 ^ 0x80u) <= 0x41 )
        return 0;
      if ( (unsigned __int8)(v3 + 62) <= 0x1Du )
      {
        if ( a2 - i == 1 )
          return 0;
        v6 = 0;
        v7 = v3 & 0x1F;
        v8 = 0;
        v9 = 1;
        v10 = 2;
      }
      else if ( (unsigned __int8)(v3 + 32) <= 0xFu )
      {
        if ( a2 - i <= 2 )
          return 0;
        v6 = 0;
        v7 = v3 & 0xF;
        v9 = 0;
        v8 = 1;
        v10 = 3;
      }
      else
      {
        if ( (unsigned __int8)(v3 + 16) > 4u || a2 - i <= 3 )
          return 0;
        v8 = 0;
        v7 = v3 & 7;
        v9 = 0;
        v6 = 1;
        v10 = 4;
      }
      v11 = v4[1];
      if ( (v11 ^ 0x80u) > 0x3F )
        return 0;
      v12 = (v11 & 0x3F) + (v7 << 6);
      if ( v10 != 2 )
      {
        v13 = v4[2];
        if ( (v13 ^ 0x80u) > 0x3F )
          return 0;
        v12 = (v13 & 0x3F) + (v12 << 6);
        if ( v10 == 4 )
        {
          v14 = v4[3];
          if ( (v14 ^ 0x80u) > 0x3F )
            return 0;
          v12 = (v14 & 0x3F) + (v12 << 6);
          if ( v12 > (int)&loc_10FFFC + 3 )
            return 0;
        }
      }
      if ( (unsigned int)(v12 - 55296) < 0x800 )
        return 0;
      if ( v12 <= 127 && v9 & 1 )
        return 0;
      if ( v12 <= 2047 && v8 & 1 )
        return 0;
      if ( v12 <= 0xFFFF && v6 & 1 )
        return 0;
      i = v10 + i - 1;
    }
  }
  return 1;
}
