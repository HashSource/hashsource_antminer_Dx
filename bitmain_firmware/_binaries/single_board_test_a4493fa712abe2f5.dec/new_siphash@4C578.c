_DWORD *new_siphash()
{
  _DWORD *v0; // r4

  v0 = calloc(1u, 0x60u);
  if ( !v0 )
    puts("siphash calloc failed!");
  v0[18] = sub_4E354;
  v0[19] = sub_41B38;
  v0[20] = sub_41B84;
  v0[21] = sub_41B5C;
  return v0;
}
