int __fastcall get_theory_hashrate_ckb(int a1, double *a2)
{
  float v2; // s14
  int result; // r0
  double v4; // d7
  double v5; // d7

  if ( *(_BYTE *)(a1 + 252) )
  {
    v5 = *(double *)(a1 + 264);
    result = 0;
    v4 = v5 * 1000000000.0;
  }
  else
  {
    v2 = *(float *)(a1 + 732);
    result = 0;
    v4 = v2 * 540000000.0;
  }
  *a2 = v4;
  return result;
}
