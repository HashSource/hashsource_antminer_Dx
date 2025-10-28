int __fastcall global_idx_init_vbk(int a1)
{
  *(_DWORD *)(a1 + 624) = calloc(0x7008u, 1u);
  printf("__custom_data init %p\n");
  return 0;
}
