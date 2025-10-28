char *__fastcall jsonp_error_set_source(char *result, char *s)
{
  bool v2; // zf
  char *v3; // r4
  size_t v5; // r0

  v2 = s == 0;
  if ( s )
    v2 = result == 0;
  if ( !v2 )
  {
    v3 = result;
    v5 = strlen(s);
    if ( v5 <= 0x4F )
    {
      return strncpy(v3 + 12, s, v5 + 1);
    }
    else
    {
      *((_WORD *)v3 + 6) = 11822;
      v3[14] = 46;
      return strncpy(v3 + 15, &s[v5 - 76], 0x4Du);
    }
  }
  return result;
}
