void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  off_12A258 = result;
  off_12A254 = a2;
  return result;
}
