void __fastcall free_siphash(void *ptr)
{
  if ( ptr )
    j_free(ptr);
}
