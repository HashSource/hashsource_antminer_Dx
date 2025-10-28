int __fastcall lcd_show(char a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return lcd_show_result(a1, (int)s, v4);
}
