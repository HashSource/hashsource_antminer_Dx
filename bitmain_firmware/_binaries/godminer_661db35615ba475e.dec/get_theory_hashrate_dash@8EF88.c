int __fastcall get_theory_hashrate_dash(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 294) )
  {
    *a2 = *(double *)(a1 + 296);
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
      *a2 = *(float *)(a1 + 732) * 686000000.0;
      return 8;
    }
  }
}
