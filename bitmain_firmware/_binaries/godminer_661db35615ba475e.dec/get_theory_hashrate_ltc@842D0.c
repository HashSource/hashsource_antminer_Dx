int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  int v2; // s12
  float v4; // s8

  v2 = *(_DWORD *)(a1 + 180);
  v4 = *(float *)(a1 + 732);
  *a2 = (double)v2 * 1000000.0 * (float)(v4 * 0.000015379) * (double)(8 * *(_DWORD *)(a1 + 184) - 5);
  return 0;
}
