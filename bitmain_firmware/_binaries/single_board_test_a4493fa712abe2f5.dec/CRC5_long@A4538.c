int __fastcall CRC5_long(unsigned __int8 *a1, int a2)
{
  char v2; // r10
  int v3; // r4
  int v4; // r9
  int v5; // r12
  int v6; // r8
  int v7; // r7
  int v8; // lr
  int v9; // r6
  unsigned int v10; // r5
  unsigned __int8 v11; // r3
  int v12; // r2
  int result; // r0
  int v14; // r2

  if ( !a2 )
    return 31;
  v2 = 1;
  v3 = 0;
  v4 = *a1;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = 128;
  while ( 1 )
  {
    ++v3;
    v11 = (v4 & v10) != 0 ? v2 ^ 1 : v2;
    v10 >>= 1;
    v2 = v5;
    v12 = (unsigned __int8)(v11 ^ v7);
    ++v9;
    if ( v3 == 8 )
      break;
    if ( a2 == v9 )
      goto LABEL_11;
LABEL_4:
    v5 = v6;
    v7 = v8;
    v6 = v12;
    v8 = v11;
  }
  ++a1;
  v3 = 0;
  v10 = 128;
  if ( a2 != v9 )
  {
    v4 = *a1;
    goto LABEL_4;
  }
LABEL_11:
  if ( v5 )
    result = 24;
  else
    result = 8;
  if ( v5 )
    v14 = 16;
  else
    v14 = 0;
  if ( !v6 )
    result = v14;
  if ( v11 != v7 )
    result |= 4u;
  if ( v8 )
  {
    result |= 2u;
    if ( v11 )
      return result | 1;
  }
  else if ( v11 )
  {
    return result | 1;
  }
  return result;
}
