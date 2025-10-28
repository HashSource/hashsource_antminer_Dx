int __fastcall set_url(char *haystack)
{
  int v2; // r3

  v2 = ++dword_1AB188;
  if ( dword_1AB188 > total_pools )
  {
    add_pool();
    v2 = dword_1AB188;
  }
  sub_133DB4(
    (void **)(*(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF)) + 8),
    (_BYTE *)(*(_DWORD *)(pools + 4 * (v2 + 0x3FFFFFFF)) + 24),
    haystack);
  return 0;
}
