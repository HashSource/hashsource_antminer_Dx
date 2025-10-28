_DWORD *__fastcall jsonp_stringn_nocheck_own(void *a1, int a2)
{
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  result = off_190780(0x10u);
  if ( result )
  {
    result[2] = a1;
    result[3] = a2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    off_190550(a1);
    return 0;
  }
  return result;
}
