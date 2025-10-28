int __fastcall get_theory_hashrate_grin29(int a1, double *a2)
{
  double v2; // d4
  unsigned int v3; // s10
  double v4; // d6
  int v5; // s14
  int v6; // r3
  int result; // r0

  v6 = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
  {
    v4 = *(double *)(a1 + 280);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 272);
    v3 = *(_DWORD *)(a1 + 200);
    v2 = 1000000.0;
  }
  result = 0;
  if ( !v6 )
    v4 = ((double)v5 + (double)v5) / (double)v3 * v2;
  *a2 = v4;
  return result;
}
