int __fastcall get_algo_type(const char *a1, int *a2)
{
  size_t v4; // r0
  size_t v5; // r4
  int v6; // r0
  int result; // r0

  v4 = strlen(a1);
  v5 = v4;
  if ( !v4 )
    return 0;
  v6 = strncasecmp(a1, "grin29", v4);
  if ( !v6 && !a1[v5] )
    goto LABEL_19;
  if ( !strncasecmp(a1, "vbk", v5) && !a1[v5] )
  {
    v6 = 1;
    goto LABEL_19;
  }
  if ( !strncasecmp(a1, "ckb", v5) && !a1[v5] )
  {
    v6 = 2;
    goto LABEL_19;
  }
  if ( !strncasecmp(a1, "ae", v5) )
  {
    if ( !a1[v5] )
    {
      v6 = 3;
      goto LABEL_19;
    }
  }
  else if ( !strncasecmp(a1, "grin32", v5) && !a1[v5] )
  {
    v6 = 4;
    goto LABEL_19;
  }
  if ( !strncasecmp(a1, "eth", v5) )
  {
    if ( !a1[v5] )
    {
      v6 = 5;
      goto LABEL_19;
    }
  }
  else if ( !strncasecmp(a1, "ltc", v5) && !a1[v5] )
  {
    v6 = 6;
    goto LABEL_19;
  }
  result = strncasecmp(a1, "dash", v5);
  if ( !result )
  {
    if ( a1[v5] )
      return result;
    v6 = 7;
LABEL_19:
    *a2 = v6;
    return 1;
  }
  result = strncasecmp(a1, "ckb2", v5);
  if ( result )
    return 0;
  if ( !a1[v5] )
  {
    v6 = 8;
    goto LABEL_19;
  }
  return result;
}
