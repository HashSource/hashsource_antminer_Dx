int sub_D1AD8(int result, int a2, char a3, const char *a4, ...)
{
  int v4; // r4
  char _18[180]; // [sp+18h] [bp+0h] BYREF
  va_list arg; // [sp+D0h] [bp+B8h] BYREF

  va_start(arg, a4);
  if ( result )
  {
    v4 = result;
    vsnprintf(_18, 0xA0u, a4, arg);
    _18[159] = 0;
    return jsonp_error_set(v4, -1, -1, 0, a3, "%s", _18);
  }
  return result;
}
