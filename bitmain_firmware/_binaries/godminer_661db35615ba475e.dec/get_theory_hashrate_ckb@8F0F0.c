int __fastcall get_theory_hashrate_ckb(int a1, double *a2)
{
  double v2; // d7
  int v3; // r3
  int result; // r0
  double v5; // d6

  v3 = *(unsigned __int8 *)(a1 + 252);
  if ( *(_BYTE *)(a1 + 252) )
    v2 = *(double *)(a1 + 264);
  else
    LODWORD(v2) = *(_DWORD *)(a1 + 732);
  result = 0;
  if ( v3 )
  {
    v5 = 1000000000.0;
  }
  else
  {
    v5 = 540000000.0;
    v2 = *(float *)&v2;
  }
  *a2 = v2 * v5;
  return result;
}
