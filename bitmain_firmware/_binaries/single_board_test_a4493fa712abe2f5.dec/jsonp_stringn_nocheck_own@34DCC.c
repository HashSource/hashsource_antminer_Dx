_DWORD *__fastcall jsonp_stringn_nocheck_own(_DWORD *result, int a2)
{
  _DWORD *v2; // r5

  if ( result )
  {
    v2 = result;
    result = off_12A258(0x10u);
    if ( result )
    {
      result[2] = v2;
      result[3] = a2;
      *result = 2;
      result[1] = 1;
    }
    else
    {
      jsonp_free(v2);
      return 0;
    }
  }
  return result;
}
