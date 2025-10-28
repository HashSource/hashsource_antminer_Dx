_DWORD *__fastcall sub_1FF08(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3

  --result[9];
  if ( a2 == 10 )
  {
    v2 = result[8];
    --result[6];
    result[7] = v2;
  }
  else if ( (a2 & 0x80) == 0 || (unsigned __int8)(a2 + 62) <= 0x32u )
  {
    --result[7];
  }
  v3 = result[11];
  --result[4];
  if ( v3 )
  {
    v4 = result[10];
    v5 = v3 - 1;
    result[11] = v5;
    *(_BYTE *)(v4 + v5) = 0;
  }
  return result;
}
