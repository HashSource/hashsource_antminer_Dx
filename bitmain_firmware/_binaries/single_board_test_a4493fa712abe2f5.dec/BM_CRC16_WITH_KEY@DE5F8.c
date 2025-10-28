unsigned int __fastcall BM_CRC16_WITH_KEY(unsigned __int8 *a1, int a2, unsigned int a3)
{
  unsigned __int8 *v3; // r1
  int v4; // t1

  if ( !a2 )
    return a3;
  v3 = &a1[a2];
  do
  {
    v4 = *a1++;
    a3 = (unsigned __int16)(*(_WORD *)&aDiffToTargetDa_0[2 * (v4 ^ (a3 >> 8)) + 108] ^ ((_WORD)a3 << 8));
  }
  while ( a1 != v3 );
  return a3;
}
