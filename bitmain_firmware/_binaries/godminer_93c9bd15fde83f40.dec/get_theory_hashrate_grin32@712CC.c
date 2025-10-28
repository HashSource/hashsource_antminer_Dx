int __fastcall get_theory_hashrate_grin32(int a1, double *a2)
{
  double v2; // d4
  int32x2_t v3; // d5
  unsigned int v4; // s12
  double v5; // d7
  unsigned __int32 v6; // r3
  bool v7; // zf
  int result; // r0

  v6 = *(unsigned __int8 *)(a1 + 268);
  v7 = v6 == 0;
  if ( *(_BYTE *)(a1 + 268) )
  {
    v5 = *(double *)(a1 + 280);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 200);
    v6 = *(_DWORD *)(a1 + 272);
    v2 = 1000000.0;
  }
  result = 0;
  if ( v7 )
  {
    v3.n64_u32[0] = v6;
    v5 = vcvt_n_f64_s32(v3, 1u) / (double)v4 * v2;
  }
  *a2 = v5;
  return result;
}
