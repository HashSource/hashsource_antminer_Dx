char *__fastcall jsonp_error_init(char *result, char *s)
{
  char *v2; // r4
  size_t v4; // r0

  if ( result )
  {
    result[92] = 0;
    *((_DWORD *)result + 2) = 0;
    *(_DWORD *)result = -1;
    *((_DWORD *)result + 1) = -1;
    if ( s )
    {
      v2 = result;
      v4 = strlen(s);
      if ( v4 <= 0x4F )
      {
        return j_strncpy(v2 + 12, s, v4 + 1);
      }
      else
      {
        *((_WORD *)v2 + 6) = 11822;
        v2[14] = 46;
        return j_strncpy(v2 + 15, &s[v4 - 76], 0x4Du);
      }
    }
    else
    {
      result[12] = 0;
    }
  }
  return result;
}
