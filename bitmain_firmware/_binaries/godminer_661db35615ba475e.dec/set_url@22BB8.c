int __fastcall set_url(char *haystack)
{
  int v2; // r3

  v2 = ++dword_196B90;
  if ( dword_196B90 > total_pools )
  {
    add_pool();
    v2 = dword_196B90;
  }
  sub_108804(
    (void **)(*(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF)) + 8),
    (_BYTE *)(*(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF)) + 24),
    haystack);
  return 0;
}
