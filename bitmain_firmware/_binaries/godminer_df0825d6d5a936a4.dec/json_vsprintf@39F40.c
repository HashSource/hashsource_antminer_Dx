_DWORD *__fastcall json_vsprintf(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  size_t v4; // r4
  char *v5; // r0
  char *v6; // r7
  _BYTE *v8; // r0

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( v3 )
  {
    v5 = (char *)jsonp_malloc((void *)(v3 + 1));
    v6 = v5;
    if ( v5 )
    {
      vsnprintf(v5, v4 + 1, format, arg);
      if ( utf8_check_string((int)v6, v4) )
      {
        return sub_397D4(v6, v4, 1);
      }
      else
      {
        jsonp_free(v6);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    LOWORD(v8) = -264;
    HIWORD(v8) = (unsigned int)"ew/dhash_content/eth/eth_dhash_common.c" >> 16;
    return json_stringn(v8, 0);
  }
}
