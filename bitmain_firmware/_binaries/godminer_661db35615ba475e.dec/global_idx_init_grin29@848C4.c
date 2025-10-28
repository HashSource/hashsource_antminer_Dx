int __fastcall global_idx_init_grin29(int a1)
{
  void *v2; // r0

  v2 = calloc((size_t)&stru_1F400.r_offset + 1, 1u);
  *(_DWORD *)(a1 + 600) = v2;
  return printf("__custom_data init %p\n", v2);
}
