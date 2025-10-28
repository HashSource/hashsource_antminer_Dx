int init_MES_system_config_information()
{
  _DWORD *v1; // r0
  size_t v2; // r0

  if ( Mes_System_Config_File_Information )
  {
    puts("Already malloced parse MES system config information!");
    return 1;
  }
  else
  {
    v1 = malloc(0x68u);
    Mes_System_Config_File_Information = (int)v1;
    if ( v1 )
    {
      v1[25] = 0;
      return 1;
    }
    else
    {
      lcd_clear_result();
      v2 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v2);
      lcd_show_result(1, (int)"malloc for parse", 0x10u);
      lcd_show_result(2, (int)"MES system", 0xAu);
      lcd_show_result(3, (int)"information fail", 0x10u);
      puts("malloc for parse MES system config information fail!");
      return 0;
    }
  }
}
