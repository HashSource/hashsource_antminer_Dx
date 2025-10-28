_DWORD *json_array()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *(*v2)(size_t); // r2
  int v3; // r0
  void *v5; // r0

  v0 = off_190780(0x14u);
  v1 = v0;
  if ( v0 )
  {
    v2 = off_190780;
    v0[1] = 1;
    *v0 = 1;
    v0[3] = 0;
    v0[2] = 8;
    v3 = (int)v2(32);
    v1[4] = v3;
    if ( !v3 )
    {
      v5 = v1;
      v1 = 0;
      jsonp_free(v5);
    }
  }
  return v1;
}
