int check_PT1_EEPROM_marker()
{
  size_t v0; // r0
  unsigned __int8 v2; // [sp+7h] [bp-1h] BYREF

  v2 = 0;
  if ( eeprom_read(gChain, 0xFFu, (int)&v2, 1) && eeprom_read(gChain, 0xFFu, (int)&v2, 1) )
  {
    lcd_clear_result();
    sub_D58C4((const char *)(MES2Local_Config_Information + 32));
    sub_D58AC("read PT1 marker");
    sub_D5894("fail");
    puts("read PT1 marker fail twice.");
    return 0;
  }
  else if ( v2 == 90 )
  {
    puts("This board already did PT1.");
    return 1;
  }
  else
  {
    printf("PT1 marker is 0x%02x.\n", v2);
    if ( eeprom_read(gChain, 0xFFu, (int)&v2, 1) && eeprom_read(gChain, 0xFFu, (int)&v2, 1) )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("read PT1 marker");
      sub_D5894("fail");
      puts("read PT1 marker fail twice...");
      return 0;
    }
    else if ( v2 == 90 )
    {
      puts("This board already did PT1...");
      return 1;
    }
    else
    {
      lcd_clear_result();
      v0 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v0);
      lcd_show_result(1, (int)"This hashboard", 0xEu);
      lcd_show_result(2, (int)"didn't do PT1", 0xDu);
      printf("PT1 marker is 0x%02x...\n", v2);
      puts("This board didn't do PT1");
      return 0;
    }
  }
}
