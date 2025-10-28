int __fastcall get_theory_hashrate_ae(int a1, double *a2)
{
  int v2; // s14
  unsigned int v3; // s10
  int result; // r0
  double v5; // d6

  if ( *(_BYTE *)(a1 + 252) )
  {
    v5 = *(double *)(a1 + 264);
    result = 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 256);
    v3 = *(_DWORD *)(a1 + 188);
    result = 0;
    v5 = (double)v2 * 4.0 / (double)v3 * 1000000.0;
  }
  *a2 = v5;
  return result;
}
