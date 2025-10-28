size_t __fastcall pcba_fill_lcd_result(const char *a1)
{
  const char *v1; // r5
  size_t result; // r0
  size_t v3; // r3
  int v4; // r3
  int v5; // r6
  size_t v6; // r12
  int v7; // r4
  int v8; // r2
  char *v9; // r0

  v1 = a1;
  result = strlen(a1);
  v3 = (result + 1) & 0xF;
  v4 = (v3 != 0) + ((int)(result + 1) >> 4);
  v5 = v4;
  if ( v4 >= 4 )
    v5 = 4;
  if ( v4 )
  {
    v6 = result;
    v7 = 0;
    while ( 1 )
    {
      v8 = 16;
      v9 = &byte_3B565C[17 * v7];
      if ( v6 > 0xF )
        v9 = &byte_3B565C[17 * v7];
      else
        v8 = v6;
      ++v7;
      sprintf(v9, v1, v8);
      v1 += 16;
      result = (size_t)v1;
      if ( v7 >= v5 )
        break;
      v6 = strlen(v1);
    }
  }
  return result;
}
