_DWORD *__fastcall json_stringn(const void *a1, unsigned int a2)
{
  size_t v3; // r1
  size_t v4; // r5
  _BYTE *v5; // r0
  _BYTE *v6; // r7
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  if ( !utf8_check_string((int)a1, a2) )
    return 0;
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  v5 = off_12A258(v3 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  memcpy(v5, a1, v4);
  v6[v4] = 0;
  result = off_12A258(0x10u);
  if ( result )
  {
    result[2] = v6;
    result[3] = v4;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    jsonp_free(v6);
    return 0;
  }
  return result;
}
