_DWORD *__fastcall json_vsprintf(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  unsigned int v4; // r5
  size_t v5; // r4
  char *v6; // r0
  char *v7; // r8
  _DWORD *v8; // r4
  _DWORD *result; // r0
  _BYTE *v10; // r0
  void *v11; // r6

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
  {
    if ( utf8_check_string((int)"", 0) )
    {
      v10 = off_12A258(1u);
      v11 = v10;
      if ( v10 )
      {
        *v10 = 0;
        result = off_12A258(0x10u);
        if ( result )
        {
          result[2] = v11;
          result[3] = 0;
          *result = 2;
          result[1] = 1;
        }
        else
        {
          jsonp_free(v11);
          return 0;
        }
        return result;
      }
    }
    return 0;
  }
  v5 = v3 + 1;
  if ( v3 == -1 )
    return 0;
  v6 = (char *)off_12A258(v3 + 1);
  v7 = v6;
  if ( !v6 )
    return 0;
  vsnprintf(v6, v5, format, arg);
  v8 = (_DWORD *)utf8_check_string((int)v7, v4);
  if ( v8 && (result = off_12A258(0x10u), (v8 = result) != 0) )
  {
    result[2] = v7;
    result[3] = v4;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    jsonp_free(v7);
    return v8;
  }
  return result;
}
