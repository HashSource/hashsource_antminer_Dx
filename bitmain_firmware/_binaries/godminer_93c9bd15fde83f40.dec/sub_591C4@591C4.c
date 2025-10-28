int __fastcall sub_591C4(int a1, int a2, int a3)
{
  const char *v4; // r1

  v4 = *(const char **)(a1 + 824);
  if ( v4 && strcmp((const char *)(a3 + 16), v4) )
    return 1;
  memcpy(*(void **)(a2 + 392), (const void *)(a3 + 48 + *(_DWORD *)(a1 + 72)), *(_DWORD *)(a2 + 388));
  return 0;
}
