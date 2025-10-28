_DWORD *new_siphash()
{
  _DWORD *v0; // r4

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  v0[18] = 320980;
  v0[19] = 251248;
  *((_QWORD *)v0 + 10) = 0x3D5A80003D5D4LL;
  return v0;
}
