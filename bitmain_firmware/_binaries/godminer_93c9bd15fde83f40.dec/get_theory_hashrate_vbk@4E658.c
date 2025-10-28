int __fastcall get_theory_hashrate_vbk(int a1, double *a2)
{
  double v2; // d7

  if ( *(_BYTE *)(a1 + 268) )
    v2 = *(double *)(a1 + 280) * 1000000000.0;
  else
    v2 = (double)*(int *)(a1 + 272) * 20.0 / (double)*(unsigned int *)(a1 + 200) * 1000000.0;
  *a2 = v2;
  return 0;
}
