int __fastcall global_idx_init_ae_0(int a1)
{
  size_t v2; // r0

  LOWORD(v2) = -3071;
  HIWORD(v2) = (unsigned int)"cr" >> 16;
  *(_DWORD *)(a1 + 624) = calloc(v2, 1u);
  return printf("__custom_data init %p\n");
}
