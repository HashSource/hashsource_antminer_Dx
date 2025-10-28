int __fastcall global_idx_init_dcr(int a1)
{
  *(_DWORD *)(a1 + 624) = calloc(0x8008u, 1u);
  printf("__custom_data init %p\n");
  return 0;
}
