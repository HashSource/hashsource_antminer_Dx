int __fastcall get_theory_hashrate_ae(int a1, double *a2)
{
  double v2; // d4
  double v3; // d5
  double v4; // d7
  int v5; // r3
  double v6; // d6
  int result; // r0

  v5 = *(unsigned __int8 *)(a1 + 252);
  if ( *(_BYTE *)(a1 + 252) )
  {
    v6 = *(double *)(a1 + 264);
  }
  else
  {
    v6 = 4.0;
    v2 = 1000000.0;
    v4 = (double)*(int *)(a1 + 256);
    v3 = (double)*(unsigned int *)(a1 + 188);
  }
  result = 0;
  if ( !v5 )
    v6 = v4 * v6 / v3 * v2;
  *a2 = v6;
  return result;
}
