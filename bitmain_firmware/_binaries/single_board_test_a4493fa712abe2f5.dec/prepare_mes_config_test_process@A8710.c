int __fastcall prepare_mes_config_test_process(int a1)
{
  _BYTE *v2; // r3
  int v3; // r8
  _DWORD *v4; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3

  if ( MES2Local_Config_Information )
  {
    puts("mes config information already malloced");
  }
  else
  {
    MES2Local_Config_Information = (int)calloc(1u, 0x1D8u);
    if ( !MES2Local_Config_Information )
    {
      v6 = 0;
      puts("malloc for mes config information fail!");
      return v6;
    }
  }
  puts("malloc for mes config information success");
  copy_app_config(a1);
  v2 = *(_BYTE **)(a1 + 20);
  if ( *v2 == 80 && v2[1] == 84 && v2[2] == 50 )
  {
    v3 = (unsigned __int8)v2[3];
    if ( !v2[3] )
    {
      v4 = (_DWORD *)MES2Local_Config_Information;
      if ( !*(_BYTE *)(MES2Local_Config_Information + 188) )
      {
        *(_BYTE *)(MES2Local_Config_Information + 468) = *(_BYTE *)(MES2Local_Config_Information + 189) ^ 1;
        display_main_page();
        printf("You are in Manual PT2 test mode, please make sure all the configrations are correct!");
        return 1;
      }
      *(_BYTE *)(MES2Local_Config_Information + 189) = v3;
      v7 = v4[8];
      v8 = v4[9];
      v9 = v4[10];
      v10 = v4[11];
      g_lcd_result_with_data = 22;
      *(_DWORD *)byte_3B565C = v7;
      *(_DWORD *)&byte_3B565C[4] = v8;
      *(_DWORD *)&byte_3B565C[8] = v9;
      *(_DWORD *)&byte_3B565C[12] = v10;
      pcba_display_result_on_lcd();
      v6 = prepare_MES_system_handshake_information(v3);
      if ( !v6 )
      {
        g_lcd_result_with_data = 23;
        pcba_display_result_on_lcd();
        printf("Prepare all config handshake fail");
        return v6;
      }
      if ( !download_MES_system_Config_file()
        || !check_whether_MES_system_response_is_correct()
        || !init_MES_system_config_information() )
      {
        return 0;
      }
      v6 = parse_all_MES_system_config_information();
      if ( !v6 )
      {
        lcd_clear_result();
        sub_D58C4((const char *)(MES2Local_Config_Information + 32));
        sub_D58AC("parse MES all");
        sub_D5894("config infor");
        sub_D587C("fail");
        printf("parse MES all config infor fail");
        return v6;
      }
    }
  }
  return 1;
}
