int __fastcall BM_CRC5(unsigned __int8 *a1, int a2)
{
  int v2; // r7
  int v3; // r6
  int v4; // r9
  int v5; // r8
  int v6; // lr
  int v7; // r12
  char v8; // r10
  int v9; // r5
  unsigned int v10; // r4
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
    ++v9;
    v11 = (v4 & v10) != 0 ? v8 ^ 1 : v8;
    v10 >>= 1;
    v8 = v2;
    v12 = (unsigned __int8)(v11 ^ v7);
    ++v3;
    if ( v9 == 8 )
      break;
    if ( a2 == v3 )
      goto LABEL_11;
LABEL_4:
    v7 = v6;
    v2 = v5;
    v6 = v11;
    v5 = v12;
  }
  ++a1;
  v9 = 0;
  v10 = 128;
  if ( a2 != v3 )
  {
    v4 = *a1;
    goto LABEL_4;
  }
LABEL_11:
  if ( v2 )
    result = 24;
  else
    result = 8;
  if ( v2 )
    v14 = 16;
  else
    v14 = 0;
  if ( !v5 )
    result = v14;
  if ( v11 != v7 )
    result |= 4u;
  if ( v6 )
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
