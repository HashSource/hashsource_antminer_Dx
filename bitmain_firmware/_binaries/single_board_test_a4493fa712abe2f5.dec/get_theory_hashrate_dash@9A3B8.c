int __fastcall get_theory_hashrate_dash(int a1, double *a2)
{
  __int64 v3; // r2
  float v4; // s14

  if ( *(_BYTE *)(a1 + 294) )
  {
    v3 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)a2 = v3;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 200) != 68 || *(_BYTE *)(a1 + 201) != 55 )
      goto LABEL_8;
    if ( !*(_BYTE *)(a1 + 202) )
    {
      *a2 = 3.79e11;
      return 8;
    }
    if ( *(_BYTE *)(a1 + 202) == 101 && !*(_BYTE *)(a1 + 203) )
    {
      *a2 = 3.6e11;
      return 8;
    }
    else
    {
LABEL_8:
      v4 = *(float *)(a1 + 732);
      *a2 = v4 * 686000000.0;
      return 8;
    }
  }
}
