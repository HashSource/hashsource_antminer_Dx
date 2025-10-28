unsigned int __fastcall BM_CRC16(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r12
  unsigned __int8 *v4; // r1
  int v5; // t1

  if ( !a2 )
    return 0xFFFF;
  LOWORD(v3) = -23312;
  v4 = &a1[a2];
  v2 = 0xFFFF;
  do
  {
    v5 = *a1++;
    HIWORD(v3) = (unsigned int)"nk_sel, rx_coarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
    v2 = (unsigned __int16)(*(_WORD *)(v3 + 2 * (v5 ^ (v2 >> 8))) ^ ((_WORD)v2 << 8));
  }
  while ( a1 != v4 );
  return v2;
}
