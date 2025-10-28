_DWORD *__fastcall json_vsprintf(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  unsigned int v4; // r5
  char *v5; // r0
  char *v6; // r8
  _DWORD *v7; // r4
  _DWORD *result; // r0
  _BYTE *v9; // r0
  void *v10; // r6

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
  {
    if ( utf8_check_string((int)&byte_1755A4, 0) )
    {
      v9 = off_190780(1u);
      v10 = v9;
      if ( v9 )
      {
        *v9 = 0;
        result = off_190780(0x10u);
        if ( result )
        {
          result[2] = v10;
          result[3] = 0;
          *result = 2;
          result[1] = 1;
        }
        else
        {
          jsonp_free(v10);
          return 0;
        }
        return result;
      }
    }
    return 0;
  }
  if ( v3 == -1 )
    return 0;
  v5 = (char *)off_190780(v3 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  vsnprintf(v5, v4 + 1, format, arg);
  v7 = (_DWORD *)utf8_check_string((int)v6, v4);
  if ( v7 && (result = off_190780(0x10u), (v7 = result) != 0) )
  {
    result[2] = v6;
    result[3] = v4;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    jsonp_free(v6);
    return v7;
  }
  return result;
}
