int __fastcall sub_20CA8(int a1)
{
  unsigned __int8 *v1; // r3
  unsigned int v2; // r2
  bool v3; // cc
  _BOOL4 v4; // r1
  int v5; // r2
  int result; // r0

  v1 = (unsigned __int8 *)(a1 + 32);
  v2 = a1 + 160;
  while ( 1 )
  {
    v3 = 0;
    if ( *v1 != 255 )
      v3 = v2 > (unsigned int)v1;
    if ( !v3 )
      break;
    ++v1;
  }
  while ( 1 )
  {
    v4 = *v1 == 255;
    if ( v2 <= (unsigned int)v1 )
      v4 = 0;
    if ( !v4 )
      break;
    ++v1;
  }
  if ( *(v1 - 1) != 255 || *(v1 - 2) != 255 )
    return 0;
  v5 = v1[1];
  result = (unsigned __int16)(v1[2] + (v1[3] << 8));
  if ( v5 == 3 )
  {
    result += v1[4] << 16;
  }
  else if ( v5 == 4 )
  {
    result += (v1[4] + (v1[5] << 8)) << 16;
  }
  return result;
}
