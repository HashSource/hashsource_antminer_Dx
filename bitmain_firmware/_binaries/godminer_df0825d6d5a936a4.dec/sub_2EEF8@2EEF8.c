int sub_2EEF8()
{
  int v0; // r3

  v0 = ++dword_164FD0;
  if ( dword_164FD0 > total_pools )
  {
    add_pool();
    v0 = dword_164FD0;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
