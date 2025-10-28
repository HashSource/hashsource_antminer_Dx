int sub_21104(int result, int a2, int a3, const char *a4, ...)
{
  int v6; // r5
  _BYTE *v7; // r3
  __int64 v8; // kr00_8
  int v9; // r9
  char *v10; // r3
  char v11[159]; // [sp+18h] [bp-168h] BYREF
  char v12; // [sp+B7h] [bp-C9h]
  char s[196]; // [sp+B8h] [bp-C8h] BYREF
  va_list arg; // [sp+180h] [bp+0h] BYREF

  va_start(arg, a4);
  if ( result )
  {
    v6 = result;
    vsnprintf(s, 0xA0u, a4, arg);
    s[159] = 0;
    if ( a2 )
    {
      v7 = *(_BYTE **)(a2 + 40);
      v8 = *(_QWORD *)(a2 + 24);
      v9 = *(_DWORD *)(a2 + 36);
      if ( v7 && *v7 )
      {
        if ( *(_DWORD *)(a2 + 44) <= 0x14u )
        {
          snprintf(v11, 0xA0u, "%s near '%s'", s, *(const char **)(a2 + 40));
          v12 = 0;
          v10 = v11;
          return jsonp_error_set(v6, v8, SHIDWORD(v8), v9, a3, "%s", v10);
        }
      }
      else
      {
        if ( a3 == 8 )
          LOBYTE(a3) = 6;
        if ( *(_DWORD *)(a2 + 20) != -2 )
        {
          snprintf(v11, 0xA0u, "%s near end of file", s);
          v10 = v11;
          v12 = 0;
          return jsonp_error_set(v6, v8, SHIDWORD(v8), v9, a3, "%s", v10);
        }
      }
      v10 = s;
    }
    else
    {
      v10 = s;
      v9 = 0;
      v8 = -1;
    }
    return jsonp_error_set(v6, v8, SHIDWORD(v8), v9, a3, "%s", v10);
  }
  return result;
}
