int __fastcall do_PT2_summary_work(int a1)
{
  int v2; // r6
  int v4; // r7
  const char *v5; // r4
  size_t v6; // r0
  const char *v7; // r8
  size_t v8; // r0

  printf("Pattern test done. Test level_index: %d\n", a1);
  v2 = *(unsigned __int8 *)(MES2Local_Config_Information + 189);
  if ( *(_BYTE *)(MES2Local_Config_Information + 189) )
    return 1;
  v4 = prepare_eeprom_data(a1);
  if ( v4 )
  {
    if ( eeprom_write(gChain, v2, (unsigned __int8 *)&eeprom_data_buf, 82) )
    {
      v7 = (const char *)(MES2Local_Config_Information + 32);
      lcd_show_result(v2, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      v8 = strlen(v7);
      lcd_show_result(v2, (int)v7, v8);
      sub_D58AC("Write eeprom");
      sub_D5894("fail");
      gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 2] = v2;
      puts("Write EEPROM fail");
      sleep(5u);
    }
    else
    {
      puts("Write EEPROM ok");
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 189) )
      return 1;
    if ( prepare_MES_system_submit_information(a1) )
    {
      if ( submit_result_to_MES_system() )
      {
        puts("submit result ok");
      }
      else
      {
        printf("save result into SD card");
        if ( save_MES_system_submit_result() )
          printf("save result into SD card success");
        else
          printf("save result into SD card fail");
      }
    }
    else
    {
      printf("prepare submit result information fail");
    }
    memset(&sn, 0, 0x21u);
    memset(qr_code, 0, 0x90u);
    return v4;
  }
  else
  {
    v5 = (const char *)MES2Local_Config_Information;
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    v5 += 32;
    lcd_show_result(3, (int)"                ", 0x10u);
    v6 = strlen(v5);
    lcd_show_result(0, (int)v5, v6);
    sub_D58AC("prepare");
    sub_D5894("eeprom data");
    lcd_show_result(3, (int)"fail", 4u);
    puts("prepare eeprom data fail");
    return 0;
  }
}
