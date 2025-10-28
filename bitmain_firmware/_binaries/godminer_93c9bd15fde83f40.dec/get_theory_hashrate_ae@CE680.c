int __fastcall get_theory_hashrate_ae(int a1, double *a2)
{
  double v2; // d4
  double v3; // d5
  double v4; // d7
  int v5; // r3
  double v6; // d6
  int result; // r0

  v5 = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
  {
    v6 = *(double *)(a1 + 280);
  }
  else
  {
    v6 = 4.0;
    v2 = 1000000.0;
    v4 = (double)*(int *)(a1 + 272);
    v3 = (double)*(unsigned int *)(a1 + 200);
  }
  result = 0;
  if ( !v5 )
    v6 = v4 * v6 / v3 * v2;
  *a2 = v6;
  return result;
}
