void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  off_1A25E8 = result;
  off_1A25EC = a2;
  return result;
}
