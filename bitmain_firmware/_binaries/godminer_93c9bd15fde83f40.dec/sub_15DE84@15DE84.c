_DWORD *__fastcall sub_15DE84(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  bool v4; // zf
  int v5; // r2

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
  v4 = v3 == 0;
  if ( v3 )
    --v3;
  --result[4];
  if ( !v4 )
  {
    v5 = result[10];
    result[11] = v3;
    *(_BYTE *)(v5 + v3) = 0;
  }
  return result;
}
