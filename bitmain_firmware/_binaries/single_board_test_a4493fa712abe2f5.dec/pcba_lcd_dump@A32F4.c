int pcba_lcd_dump()
{
  int v0; // r4
  const char *v1; // r5
  size_t v2; // r3
  const char *v3; // r1

  v0 = 0;
  printf("------------LCD display-------------");
  do
  {
    while ( 1 )
    {
      v1 = &byte_3B565C[v0];
      v2 = strlen(&byte_3B565C[v0]);
      if ( v2 > 0xF )
        break;
      memset((char *)&g_lcd_result_with_data + v2 + v0 + 4, 32, 16 - v2);
      v0 += 17;
      printf("%s", v1);
      if ( v0 == 68 )
        return j_printf("-----------------------------------");
    }
    v3 = &byte_3B565C[v0];
    v0 += 17;
    printf("%s", v3);
  }
  while ( v0 != 68 );
  return j_printf("-----------------------------------");
}
