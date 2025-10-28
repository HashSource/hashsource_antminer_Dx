int __fastcall global_idx_free_grin32(int a1)
{
  void *v1; // r0

  v1 = *(void **)(a1 + 600);
  if ( v1 )
    free(v1);
  return 0;
}
