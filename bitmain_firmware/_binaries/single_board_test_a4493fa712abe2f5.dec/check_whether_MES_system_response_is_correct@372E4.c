int check_whether_MES_system_response_is_correct()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r6
  int v2; // r4
  size_t v3; // r0
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r2
  _DWORD *v8; // r0
  size_t v9; // r0
  size_t v10; // r0
  const char *v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  const char *v14; // r0

  v0 = (_DWORD *)json_object_get((_DWORD *)MES_system_config_File, "result");
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    if ( *v0 )
    {
      lcd_clear_result();
      v2 = 0;
      v3 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v3);
      lcd_show_result(1, (int)"Don't find", 0xAu);
      lcd_show_result(2, (int)"result in MES", 0xDu);
      lcd_show_result(3, (int)"system response", 0xFu);
      puts("Don't find result in MES system responce");
    }
    else
    {
      v8 = (_DWORD *)json_object_get(v0, "code");
      if ( v8 && *v8 == 2 )
      {
        v11 = (const char *)v8[2];
        if ( !strcmp(v11, "000000") )
        {
          v2 = 1;
          puts("Get MES system config information success");
        }
        else
        {
          printf("Get MES system config information fail. code: %s\n", v11);
          v12 = (_DWORD *)json_object_get(v1, "msg");
          v13 = v12;
          if ( v12 && *v12 == 2 )
          {
            lcd_clear_result();
            sub_D58C4((const char *)(MES2Local_Config_Information + 32));
            sub_D58AC("MES system");
            sub_D5894("return error");
            sub_D587C("response");
            v14 = (const char *)json_string_value(v13);
            printf("Get MES system config information fail. msg: %s\n", v14);
          }
          else
          {
            lcd_clear_result();
            v2 = 0;
            sub_D58C4((const char *)(MES2Local_Config_Information + 32));
            sub_D58AC("Don't find");
            sub_D5894("msg in MES");
            sub_D587C("system response");
            puts("Don't get msg in result");
          }
        }
      }
      else
      {
        lcd_clear_result();
        v2 = 0;
        v9 = strlen((const char *)(MES2Local_Config_Information + 32));
        lcd_show_result(0, MES2Local_Config_Information + 32, v9);
        lcd_show_result(1, (int)"Don't find", 0xAu);
        sub_D5894("code in MES");
        lcd_show_result(3, (int)"system response", 0xFu);
        puts("Don't get code in result");
      }
    }
    if ( v1[1] == -1 )
      return v2;
    v4 = v1 + 1;
    __dmb(0xBu);
    do
    {
      v5 = __ldrex(v4);
      v6 = v5 - 1;
    }
    while ( __strex(v6, v4) );
    if ( v6 )
    {
      return v2;
    }
    else
    {
      json_delete(v1);
      return v2;
    }
  }
  else
  {
    lcd_clear_result();
    v10 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v10);
    lcd_show_result(1, (int)"Don't find", 0xAu);
    lcd_show_result(2, (int)"result in MES", 0xDu);
    lcd_show_result(3, (int)"system response", 0xFu);
    puts("Don't find result in MES system responce");
    return 0;
  }
}
