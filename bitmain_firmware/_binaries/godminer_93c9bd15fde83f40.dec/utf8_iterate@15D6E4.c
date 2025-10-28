unsigned __int8 *__fastcall utf8_iterate(unsigned __int8 *result, unsigned int a2, int *a3)
{
  int v3; // r3
  int v4; // r1
  char v5; // r4
  int v6; // r3
  char v7; // r5
  int v8; // r12
  int v9; // lr
  int v10; // r3
  int v11; // lr
  int v12; // lr

  if ( !a2 )
    return result;
  v3 = *result;
  if ( (v3 & 0x80) == 0 )
  {
    if ( a3 )
      *a3 = v3;
    return ++result;
  }
  if ( (v3 ^ 0x80u) <= 0x41 )
    return 0;
  if ( (unsigned __int8)(v3 + 62) <= 0x1Du )
  {
    if ( a2 > 1 )
    {
      v5 = 0;
      v6 = v3 & 0x1F;
      v4 = 0;
      v7 = 1;
      v8 = 2;
      goto LABEL_16;
    }
    return 0;
  }
  if ( (unsigned __int8)(v3 + 32) <= 0xFu )
  {
    if ( a2 > 2 )
    {
      v5 = 0;
      v6 = v3 & 0xF;
      v7 = 0;
      v4 = 1;
      v8 = 3;
      goto LABEL_16;
    }
    return 0;
  }
  v4 = a2 <= 3;
  if ( (unsigned __int8)(v3 + 16) > 4u )
    v4 |= 1u;
  if ( v4 )
    return 0;
  v6 = v3 & 7;
  v7 = 0;
  v5 = 1;
  v8 = 4;
LABEL_16:
  v9 = result[1];
  if ( (v9 ^ 0x80u) > 0x3F )
    return 0;
  v10 = (v9 & 0x3F) + (v6 << 6);
  if ( v8 != 2 )
  {
    v11 = result[2];
    if ( (v11 ^ 0x80u) > 0x3F )
      return 0;
    v10 = (v11 & 0x3F) + (v10 << 6);
    if ( v8 == 4 )
    {
      v12 = result[3];
      if ( (v12 ^ 0x80u) > 0x3F )
        return 0;
      v10 = (v12 & 0x3F) + (v10 << 6);
      if ( v10 >= 1114112 )
        return 0;
    }
  }
  if ( (unsigned int)(v10 - 55296) < 0x800 )
    return 0;
  if ( v10 <= 127 && v7 & 1 )
    return 0;
  if ( v10 >= 2048 )
    v4 = 0;
  if ( v4 )
    return 0;
  if ( v10 < 0x10000 && v5 & 1 )
    return 0;
  result += v8;
  if ( a3 )
    *a3 = v10;
  return result;
}
