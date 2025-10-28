int __fastcall BM_CRC5(unsigned __int8 *a1, int a2)
{
  int v2; // r12
  char v3; // r10
  int v4; // r9
  int v5; // r5
  int v6; // r8
  int v7; // r6
  int v8; // r7
  int v9; // r4
  unsigned int v10; // lr
  unsigned __int8 v11; // r3
  int v12; // r2
  int result; // r0

  if ( !a2 )
    return 31;
  v2 = 0;
  v3 = 1;
  v4 = *a1;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 1;
  v9 = 0;
  v10 = 128;
  while ( 1 )
  {
    ++v2;
    v11 = (v4 & v10) != 0 ? v3 ^ 1 : v3;
    ++v9;
    v3 = v5;
    v10 >>= 1;
    v12 = (unsigned __int8)(v11 ^ v7);
    if ( v2 == 8 )
      break;
    if ( a2 == v9 )
      goto LABEL_11;
LABEL_4:
    v5 = v6;
    v7 = v8;
    v6 = v12;
    v8 = v11;
  }
  v2 = 0;
  v10 = 128;
  ++a1;
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
    v5 = 16;
  if ( !v6 )
    result = v5;
  if ( v11 != v7 )
    result = (unsigned __int8)result | 4;
  if ( v8 )
    result = (unsigned __int8)result | 2;
  if ( v11 )
    return (unsigned __int8)result | 1;
  return result;
}
