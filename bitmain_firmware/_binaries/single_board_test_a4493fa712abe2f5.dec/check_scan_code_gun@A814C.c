int __fastcall check_scan_code_gun(int a1)
{
  int v2; // r3
  int v3; // r4
  size_t v4; // r0
  int result; // r0
  size_t v6; // r0
  int v7; // r0

  fpga_init();
  v2 = *(_DWORD *)(dword_3B52A4 + 8);
  v3 = v2 & 1;
  if ( (v2 & 1) != 0 )
  {
    v3 = 1;
    pcba_chain_info[0] = 0;
  }
  if ( (v2 & 2) != 0 )
    pcba_chain_info[v3++] = 1;
  if ( (v2 & 4) != 0 )
    pcba_chain_info[v3++] = 2;
  if ( (v2 & 8) != 0 )
    pcba_chain_info[v3++] = 3;
  if ( v3 == 2 )
  {
    gCode_gun_chain = byte_3B56A4;
    if ( byte_3B56A4 == 3 )
    {
      v7 = printf("gCode_gun_chain = %d\n", 3);
      result = (*(int (__fastcall **)(int))a1)(v7);
      if ( result != 1 )
      {
        (*(void (__fastcall **)(int))(a1 + 88))(1);
        return 1;
      }
    }
    else
    {
      lcd_clear_result();
      v6 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v6);
      lcd_show_result(1, (int)"Scan code gun", 0xDu);
      lcd_show_result(2, (int)"don't plug on", 0xDu);
      lcd_show_result(3, (int)"J4", 2u);
      puts("Scan code gun don't plug on J4");
      return 0;
    }
  }
  else
  {
    if ( pthread_mutex_lock(&stru_3B5460) )
    {
      sub_81E2C();
    }
    else
    {
      if ( dword_12978C > 0 )
        lcd_clear(dword_12978C);
      pthread_mutex_unlock(&stru_3B5460);
    }
    v4 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v4);
    lcd_show_result(2, (int)"Chain Error     ", 0x10u);
    puts("Don't detect hashboard or scan code gun");
    return 0;
  }
  return result;
}
