void __fastcall replace_raw_clib_object(clib_object *current_object, void *elem, size_t elem_size)
{
  void *v6; // r0

  free(*(void **)current_object);
  v6 = malloc(elem_size);
  *(_DWORD *)current_object = v6;
  j_memcpy(v6, elem, elem_size);
}
