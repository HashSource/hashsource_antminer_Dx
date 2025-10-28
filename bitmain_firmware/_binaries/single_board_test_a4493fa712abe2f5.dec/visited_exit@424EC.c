void __fastcall visited_exit(void **a1)
{
  void *v1; // r0

  v1 = *a1;
  if ( v1 )
    j_free(v1);
}
