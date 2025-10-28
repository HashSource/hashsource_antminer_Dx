int __fastcall get_theory_hashrate_vbk(int a1, double *a2)
{
  int v2; // s12
  unsigned int v3; // s10
  int result; // r0
  double v5; // d7
  double v6; // d7

  if ( *(_BYTE *)(a1 + 252) )
  {
    v6 = *(double *)(a1 + 264);
    result = 0;
    v5 = v6 * 1000000000.0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 256);
    v3 = *(_DWORD *)(a1 + 188);
    result = 0;
    v5 = (double)v2 * 20.0 / (double)v3 * 1000000.0;
  }
  *a2 = v5;
  return result;
}
