unsigned int __fastcall BM_CRC16(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r1
  unsigned int v3; // r2
  int v4; // t1

  if ( !a2 )
    return 0xFFFF;
  v2 = &a1[a2];
  v3 = 0xFFFF;
  do
  {
    v4 = *a1++;
    v3 = (unsigned __int16)(*(_WORD *)&aDiffToTargetDa_0[2 * (v4 ^ (v3 >> 8)) + 108] ^ ((_WORD)v3 << 8));
  }
  while ( a1 != v2 );
  return v3;
}
