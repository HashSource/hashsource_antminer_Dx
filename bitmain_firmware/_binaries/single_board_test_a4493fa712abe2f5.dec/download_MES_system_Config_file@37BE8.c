int download_MES_system_Config_file()
{
  int connection_to_MES_system_by_name; // r0
  int v1; // r4
  int v3; // r7
  size_t v4; // r10
  ssize_t v5; // r0
  _DWORD *v6; // r0
  size_t v7; // r0
  char v8[256]; // [sp+4h] [bp-100h] BYREF

  putchar(32);
  connection_to_MES_system_by_name = create_connection_to_MES_system_by_name(1);
  if ( !connection_to_MES_system_by_name )
    return 0;
  v1 = connection_to_MES_system_by_name;
  LOBYTE(v3) = -5;
  v4 = mes_system_handshake_file_length;
  putchar(32);
  while ( 1 )
  {
    v5 = send(bitmain_MES_system_clientSocket, download_configuration_handshake_information, v4, 0);
    if ( !v5 )
    {
      puts("Timeout. MES close socket");
      goto LABEL_14;
    }
    if ( v5 >= 0 )
      break;
    printf("Socket return back: %d\n", v5);
LABEL_14:
    v3 = (unsigned __int8)(v3 - 1);
    if ( !v3 )
    {
      lcd_clear_result();
      v1 = 0;
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("send message to");
      sub_D5894("MES system");
      lcd_show_result(3, (int)"fail", 4u);
      puts("send message to MES system fail");
      return v1;
    }
  }
  puts("done");
  mes_system_config_file_length = 0;
  if ( MES_system_Config_information )
  {
    free((void *)MES_system_Config_information);
    MES_system_Config_information = 0;
  }
  MES_system_Config_information = (int)receive_message_from_bitmain_MES_system((size_t *)&mes_system_config_file_length);
  if ( !MES_system_Config_information )
    return 0;
  puts("Get MES system Config information, and do integrity verification");
  v6 = json_loadb(MES_system_Config_information, mes_system_config_file_length - 1, 0, (int)v8);
  MES_system_config_File = (int)v6;
  if ( v6 && !*v6 )
  {
    puts("The received MES system Config information is in JSON format");
  }
  else
  {
    lcd_clear_result();
    v1 = 0;
    v7 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v7);
    lcd_show_result(1, (int)"MES config", 0xAu);
    lcd_show_result(2, (int)"information", 0xBu);
    lcd_show_result(3, (int)"is not in JSON", 0xEu);
    puts("The received MES system Config information is not in JSON format");
  }
  return v1;
}
