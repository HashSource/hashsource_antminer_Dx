void **__fastcall new_bitmap(unsigned int a1)
{
  void **v2; // r4

  v2 = (void **)calloc(1u, 0x24u);
  if ( !v2 )
    puts("bitmap calloc failed!");
  v2[3] = visited_init;
  v2[7] = visited_clear;
  v2[8] = visited_exit;
  v2[5] = visited_set;
  v2[6] = visited_test;
  v2[4] = visited_reset;
  v2[2] = (void *)32;
  v2[1] = (void *)(a1 >> 5);
  *v2 = calloc(a1 >> 5, 4u);
  visited_clear(v2);
  return v2;
}
