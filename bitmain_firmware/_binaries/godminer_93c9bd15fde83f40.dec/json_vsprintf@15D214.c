_DWORD *__fastcall json_vsprintf(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  unsigned int v4; // r5
  char *v5; // r0
  char *v6; // r8
  _DWORD *v7; // r4
  _DWORD *result; // r0
  int v9; // r0
  _BYTE *v10; // r0
  void *v11; // r6

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
  {
    LOWORD(v9) = 18132;
    HIWORD(v9) = (unsigned int)"n parse_notify" >> 16;
    if ( utf8_check_string(v9, 0) )
    {
      v10 = (_BYTE *)off_1A25E8(1);
      v11 = v10;
      if ( v10 )
      {
        *v10 = 0;
        result = (_DWORD *)off_1A25E8(16);
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
  if ( v3 == -1 )
    return 0;
  v5 = (char *)off_1A25E8(v3 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  vsnprintf(v5, v4 + 1, format, arg);
  v7 = (_DWORD *)utf8_check_string((int)v6, v4);
  if ( v7 && (result = (_DWORD *)off_1A25E8(16), (v7 = result) != 0) )
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
