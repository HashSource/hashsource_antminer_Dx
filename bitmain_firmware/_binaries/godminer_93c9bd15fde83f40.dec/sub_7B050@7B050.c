int __fastcall sub_7B050(int a1, int a2, int a3)
{
  size_t v5; // r2
  void *v7; // r0

  if ( *(_DWORD *)(a1 + 824) && strcmp((const char *)(a3 + 16), *(const char **)(a1 + 824)) )
    return 1;
  v5 = *(_DWORD *)(a2 + 388);
  if ( v5 != *(_DWORD *)(a3 + 104) )
    return 1;
  v7 = *(void **)(a2 + 392);
  *(_QWORD *)(a2 + 368) = (int)bswap32(*(_DWORD *)(a3 + 80));
  memcpy(v7, (const void *)(a3 + 86), v5);
  *(_DWORD *)(a2 + 472) = *(_DWORD *)(a3 + 108);
  return 0;
}
