_BYTE *__fastcall jsonp_strdup(const char *a1)
{
  size_t v2; // r4
  _BYTE *v3; // r0
  _BYTE *v4; // r5

  v2 = strlen(a1);
  v3 = off_190780(v2 + 1);
  v4 = v3;
  if ( v3 )
  {
    memcpy(v3, a1, v2);
    v4[v2] = 0;
  }
  return v4;
}
