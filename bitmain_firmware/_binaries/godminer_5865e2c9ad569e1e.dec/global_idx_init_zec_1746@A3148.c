int __fastcall global_idx_init_zec_1746(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0xADF0u, 1u);
  LOWORD(v3) = -21528;
  *(_DWORD *)(a1 + 800) = v2;
  HIWORD(v3) = (unsigned int)"2x" >> 16;
  printf(v3);
  return 0;
}
