int lcd_clear_result_pcba()
{
  lcd_show_result(0, (int)"                ", 0x10u);
  lcd_show_result(1, (int)"                ", 0x10u);
  lcd_show_result(2, (int)"                ", 0x10u);
  return lcd_show_result(3, (int)"                ", 0x10u);
}
