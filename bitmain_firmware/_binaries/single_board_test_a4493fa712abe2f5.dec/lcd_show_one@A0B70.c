int __fastcall lcd_show_one(char a1, const char *a2)
{
  size_t v4; // r0

  lcd_show_result(0, (int)"                ", 0x10u);
  lcd_show_result(1, (int)"                ", 0x10u);
  lcd_show_result(2, (int)"                ", 0x10u);
  lcd_show_result(3, (int)"                ", 0x10u);
  v4 = strlen(a2);
  return lcd_show_result(a1, (int)a2, v4);
}
