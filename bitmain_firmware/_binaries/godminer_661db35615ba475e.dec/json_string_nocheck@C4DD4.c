_DWORD *__fastcall json_string_nocheck(const char *a1)
{
  size_t v2; // r5
  _BYTE *v3; // r0
  _BYTE *v4; // r7
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  v2 = strlen(a1);
  v3 = off_190780(v2 + 1);
  v4 = v3;
  if ( !v3 )
    return 0;
  memcpy(v3, a1, v2);
  v4[v2] = 0;
  result = off_190780(0x10u);
  if ( result )
  {
    result[2] = v4;
    result[3] = v2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    jsonp_free(v4);
    return 0;
  }
  return result;
}
