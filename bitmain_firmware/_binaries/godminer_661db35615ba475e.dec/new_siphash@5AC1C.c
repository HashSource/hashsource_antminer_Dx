_DWORD *new_siphash()
{
  _DWORD *v0; // r4

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  v0[18] = 381028;
  v0[19] = 311296;
  *((_QWORD *)v0 + 10) = 0x4C0380004C064LL;
  return v0;
}
