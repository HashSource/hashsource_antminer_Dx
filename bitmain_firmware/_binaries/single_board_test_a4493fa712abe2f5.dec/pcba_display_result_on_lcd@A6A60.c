int pcba_display_result_on_lcd()
{
  size_t v0; // r0
  int result; // r0
  const char *v2; // r1
  int v3; // r6
  int v4; // r5
  size_t v5; // r3
  char v6; // r0

  switch ( g_lcd_result_with_data )
  {
    case 0:
    case 1:
    case 18:
    case 20:
      v3 = 0;
      v4 = 0;
      lcd_clear_result();
      do
      {
        v5 = strlen(&byte_3B565C[v3]);
        if ( v5 <= 0xF )
          memset((char *)&g_lcd_result_with_data + v5 + v3 + 4, 32, 16 - v5);
        v6 = v4++;
        result = lcd_show_result(v6, (int)&byte_3B565C[v3], 0x10u);
        v3 += 17;
      }
      while ( v4 != 4 );
      return result;
    case 2:
      lcd_clear_result();
      lcd_show_result(1, (int)" Find all ASIC  ", 0x10u);
      return lcd_show_result(2, (int)"       OK       ", 0x10u);
    case 3:
      lcd_clear_result();
      lcd_show_result(1, (int)"  FPGA version  ", 0x10u);
      return lcd_show_result(2, (int)"     error      ", 0x10u);
    case 4:
      lcd_clear_result();
      lcd_show_result(1, (int)"Hash board error", 0x10u);
      return lcd_show_result(2, (int)"Only support one", 0x10u);
    case 5:
      lcd_clear_result();
      return lcd_show_result(1, (int)"Hash board error", 0x10u);
    case 6:
      lcd_clear_result();
      return lcd_show_result(1, (int)" Pic init error ", 0x10u);
    case 7:
      lcd_clear_result();
      v2 = "  Create heart  ";
      goto LABEL_9;
    case 8:
      lcd_clear_result();
      return lcd_show_result(1, (int)" Voltage error  ", 0x10u);
    case 9:
      lcd_clear_result();
      v2 = " Create receive ";
      goto LABEL_9;
    case 10:
      lcd_clear_result();
      lcd_show_result(0, (int)"   Only have    ", 0x10u);
      lcd_show_result(1, (int)byte_3B565C, 0x10u);
      return lcd_show_result(2, (int)"      ASIC      ", 0x10u);
    case 12:
      lcd_clear_result();
      return lcd_show_result(1, (int)byte_3B565C, 0x10u);
    case 13:
      lcd_clear_result();
      lcd_show_result(0, (int)"     Fail       ", 0x10u);
      return lcd_show_result(1, (int)"TEMP Value Error", 0x10u);
    case 14:
      lcd_clear_result();
      v2 = " Create status  ";
      goto LABEL_9;
    case 15:
      lcd_clear_result();
      v2 = "  Create send   ";
      goto LABEL_9;
    case 16:
      lcd_clear_result();
      v2 = "  Create TEMP   ";
LABEL_9:
      lcd_show_result(1, (int)v2, 0x10u);
      result = lcd_show_result(2, (int)"  thread error  ", 0x10u);
      break;
    case 17:
      lcd_clear_result();
      lcd_show_result(0, (int)"   dump ASIC   ", 0x10u);
      lcd_show_result(1, (int)byte_3B565C, 0x10u);
      result = lcd_show_result(2, (int)"    failed    ", 0x10u);
      break;
    case 19:
      lcd_clear_result();
      lcd_show_result(1, (int)" Press Button   ", 0x10u);
      result = lcd_show_result(2, (int)"   Please       ", 0x10u);
      break;
    case 21:
      lcd_clear_result();
      lcd_show_result(1, (int)"    Write PIC   ", 0x10u);
      result = lcd_show_result(2, (int)"    error       ", 0x10u);
      break;
    case 22:
      lcd_clear_result();
      v0 = strlen(byte_3B565C);
      lcd_show_result(0, (int)byte_3B565C, v0);
      lcd_show_result(1, (int)"connect internet ", 0x10u);
      result = lcd_show_result(2, (int)"please  wait    ", 0x10u);
      break;
    case 23:
      lcd_clear_result();
      lcd_show_result(0, (int)byte_3B565C, 0x10u);
      lcd_show_result(1, (int)"Prepare MES     ", 0x10u);
      lcd_show_result(2, (int)"config handshake", 0x10u);
      result = lcd_show_result(3, (int)"fail            ", 0x10u);
      break;
    default:
      lcd_clear_result();
      lcd_show_result(0, (int)"     Fail       ", 0x10u);
      result = lcd_show_result(1, (int)"  Unknow Error  ", 0x10u);
      break;
  }
  return result;
}
