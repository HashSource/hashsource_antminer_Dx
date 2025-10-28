int __fastcall save_MES_system_config_information(int c)
{
  size_t v2; // r0
  int v4; // r7
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  size_t v8; // r0
  FILE *v9; // r6
  size_t v10; // r0
  int v11; // r6
  size_t v12; // r0

  if ( c )
  {
    if ( c != 1 )
    {
      lcd_clear_result();
      v2 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v2);
      lcd_show_result(1, (int)"Don't support", 0xDu);
      lcd_show_result(2, (int)"this type config", 0x10u);
      lcd_show_result(3, (int)"information", 0xBu);
      printf("Don't support save this type information. type = %d\n", c);
      return 0;
    }
    memset(factory_config_file, 0, 0xC8u);
    strcpy(factory_config_file, base_factory_config_file);
    v4 = MES2Local_Config_Information;
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 16));
    v5 = strlen(factory_config_file);
    factory_config_file[v5] = 45;
    strcpy(&factory_config_file[v5 + 1], (const char *)(v4 + 32));
    v6 = strlen(factory_config_file);
    factory_config_file[v6] = 45;
    strcpy(&factory_config_file[v6 + 1], src);
    v7 = strlen(factory_config_file);
    factory_config_file[v7] = 45;
    strcpy(&factory_config_file[v7 + 1], byte_3B5930);
    v8 = strlen(factory_config_file);
    factory_config_file[v8] = 45;
    strcpy(&factory_config_file[v8 + 1], &byte_3B5960);
  }
  else
  {
    memset(factory_config_file, 0, 0xC8u);
    strcpy(factory_config_file, base_factory_config_file);
    v11 = MES2Local_Config_Information;
    strcat(factory_config_file, (const char *)(MES2Local_Config_Information + 16));
    v12 = strlen(factory_config_file);
    factory_config_file[v12] = 45;
    strcpy(&factory_config_file[v12 + 1], (const char *)(v11 + 32));
  }
  printf("Save MES system config information into %s\n", factory_config_file);
  v9 = fopen(factory_config_file, "w");
  if ( v9 )
  {
    printf("Open %s success\n", factory_config_file);
    if ( fwrite((const void *)MES_system_Config_information, mes_system_config_file_length, 1u, v9) == 1 )
    {
      printf("Write %s success\n", factory_config_file);
      fclose(v9);
      return 1;
    }
    else
    {
      lcd_clear_result();
      v10 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v10);
      sub_D58AC("write MES system");
      sub_D5894("config infor");
      lcd_show_result(3, (int)"fail", 4u);
      printf("Write %s fail\n", factory_config_file);
      fclose(v9);
      return 0;
    }
  }
  else
  {
    lcd_clear_result();
    sub_D58C4((const char *)(MES2Local_Config_Information + 32));
    sub_D58AC("open file to");
    sub_D5894("save MES system");
    lcd_show_result(3, (int)"config info fail", 0x10u);
    printf("Open %s fail\n", factory_config_file);
    return 0;
  }
}
