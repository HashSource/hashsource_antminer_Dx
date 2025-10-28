int __fastcall global_idx_init_grin32(int a1)
{
  *(_DWORD *)(a1 + 624) = calloc(0xDF01u, 1u);
  return printf("__custom_data init %p\n");
}
