int __fastcall global_idx_free_ckb(int a1)
{
  free(*(void **)(a1 + 600));
  return 0;
}
