int __fastcall get_theory_hashrate_grin32(int a1, double *a2)
{
  int32x2_t v2; // d5
  unsigned __int32 v3; // r3
  unsigned int v4; // s12
  int result; // r0
  double v6; // d7

  if ( *(_BYTE *)(a1 + 252) )
  {
    v6 = *(double *)(a1 + 264);
    result = 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 256);
    v4 = *(_DWORD *)(a1 + 188);
    result = 0;
    v2.n64_u32[0] = v3;
    v6 = vcvt_n_f64_s32(v2, 1u) / (double)v4 * 1000000.0;
  }
  *a2 = v6;
  return result;
}
