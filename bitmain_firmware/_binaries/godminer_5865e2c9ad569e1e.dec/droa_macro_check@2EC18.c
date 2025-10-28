int droa_macro_check()
{
  const char *v0; // r0
  int result; // r0

  LOWORD(v0) = 5032;
  HIWORD(v0) = (unsigned int)"User: %s" >> 16;
  result = access(v0, 0);
  if ( !result )
    return sub_2D73C();
  return result;
}
