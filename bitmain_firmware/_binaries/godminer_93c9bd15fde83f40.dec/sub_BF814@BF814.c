int sub_BF814(int result, int a2, char a3, const char *a4, ...)
{
  int v4; // r5
  char s[180]; // [sp+18h] [bp-A4h] BYREF
  const char *varg_r3; // [sp+CCh] [bp+10h]
  va_list arg; // [sp+D0h] [bp+14h] BYREF

  va_start(arg, a4);
  varg_r3 = a4;
  v4 = result;
  if ( result )
  {
    vsnprintf(s, 0xA0u, varg_r3, arg);
    s[159] = 0;
    return jsonp_error_set(v4, -1, -1, 0, a3, "%s", s);
  }
  return result;
}
