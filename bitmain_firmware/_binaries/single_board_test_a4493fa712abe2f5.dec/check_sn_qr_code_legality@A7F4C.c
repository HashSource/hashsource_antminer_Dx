int __fastcall check_sn_qr_code_legality(int a1, const char *a2)
{
  const char *v2; // r5
  const char *v4; // r4
  size_t v6; // r0
  size_t v7; // r0
  size_t v8; // r0
  size_t v9; // r0

  v2 = (const char *)(a1 + 1);
  if ( strlen((const char *)(a1 + 1)) == 17 )
  {
    if ( strlen(a2 + 32) == 2 )
    {
      if ( strlen(a2 + 48) > 0xD )
      {
        lcd_clear_result();
        v9 = strlen((const char *)(MES2Local_Config_Information + 32));
        lcd_show_result(0, MES2Local_Config_Information + 32, v9);
        lcd_show_result(1, (int)"chip marking", 0xCu);
        lcd_show_result(2, (int)"is not correct", 0xEu);
        printf("chip marking isn't correct, chip marking: %s", a2 + 48);
        return 0;
      }
      else if ( strlen(a2 + 64) == 4 )
      {
        v4 = a2 + 80;
        if ( ((strlen(v4) - 5) & 0xFFFFFFFB) != 0 )
        {
          lcd_clear_result();
          sub_D58C4((const char *)(MES2Local_Config_Information + 32));
          sub_D58AC("ft version");
          sub_D5894("is not correct");
          printf("ft version isn't correct, ft version: %s", v4);
          return 0;
        }
        else
        {
          return 1;
        }
      }
      else
      {
        lcd_clear_result();
        v8 = strlen((const char *)(MES2Local_Config_Information + 32));
        lcd_show_result(0, MES2Local_Config_Information + 32, v8);
        lcd_show_result(1, (int)"chip bin", 8u);
        lcd_show_result(2, (int)"is not correct", 0xEu);
        printf("chip bin isn't correct, chip bin: %s", a2 + 64);
        return 0;
      }
    }
    else
    {
      lcd_clear_result();
      v6 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v6);
      lcd_show_result(1, (int)"chip die", 8u);
      lcd_show_result(2, (int)"is not correct", 0xEu);
      printf("chip die isn't correct, chip die: %s", a2 + 32);
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
    v7 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v7);
    lcd_show_result(2, (int)"SN isn't correct", 0x10u);
    printf("SN isn't correct, sn: %s\n", v2);
    return 0;
  }
}
