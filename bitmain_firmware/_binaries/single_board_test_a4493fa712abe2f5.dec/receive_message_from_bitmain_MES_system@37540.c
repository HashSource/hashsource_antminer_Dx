_BYTE *__fastcall receive_message_from_bitmain_MES_system(size_t *a1)
{
  _BYTE *v1; // r4
  unsigned int v3; // r7
  size_t v4; // r6
  ssize_t v5; // r0
  size_t v6; // r5
  size_t v7; // r7
  char *v8; // r0
  char *v9; // r5
  char *v10; // r4
  int v11; // t1
  size_t v12; // r0
  _BYTE *v14; // r0
  _BYTE v15[10244]; // [sp+0h] [bp-2804h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        memset(v15, 0, 0x2800u);
        v5 = recv(bitmain_MES_system_clientSocket, v15, 0x2800u, 0);
        v6 = v5;
        if ( v5 )
          break;
        sleep(1u);
        ++v3;
        if ( v1[v4 - 1] == 10 )
        {
          *a1 = v4;
          puts("Receive all message from MES system");
          return v1;
        }
        if ( v3 > 6 )
        {
          printf("Only receive %d bytes message during last 6 seconds\n", v4);
          if ( v4 )
          {
            v9 = &v1[v4 - 1];
            v10 = v1 - 1;
            do
            {
              v11 = (unsigned __int8)*++v10;
              printf("%c\n", v11);
            }
            while ( v10 != v9 );
          }
          putchar(10);
          lcd_clear_result();
          v12 = strlen((const char *)(MES2Local_Config_Information + 32));
          lcd_show_result(0, MES2Local_Config_Information + 32, v12);
          lcd_show_result(1, (int)"Not receive all", 0xFu);
          lcd_show_result(2, (int)"MES config", 0xAu);
          lcd_show_result(3, (int)"information", 0xBu);
          puts("Not receive all MES config information");
          return 0;
        }
      }
      if ( v5 < 0 )
      {
        printf("Receive message fail: %d\n", v5);
        return 0;
      }
      if ( !v1 )
        break;
      v7 = v4 + v5;
      v8 = (char *)realloc(v1, v4 + v5);
      v1 = v8;
      if ( !v8 )
      {
        lcd_clear_result();
        sub_D58C4((const char *)(MES2Local_Config_Information + 32));
        sub_D58AC("realloc for");
        sub_D5894("MES config");
        lcd_show_result(3, (int)"infor fail", 0xAu);
        puts("realloc for MES config infor fail");
        return 0;
      }
      memcpy(&v8[v4], v15, v6);
      if ( v1[v7 - 1] == 10 )
        goto LABEL_19;
      v4 += v6;
      v3 = 0;
    }
    v14 = malloc(v5);
    v1 = v14;
    if ( !v14 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("malloc for");
      sub_D5894("MES config");
      sub_D587C("infor fail");
      puts("malloc for MES config infor fail");
      return 0;
    }
    memcpy(v14, v15, v6);
    if ( v1[v6 - 1] == 10 )
      break;
    v4 = v6;
    v3 = 0;
  }
  v7 = v6;
LABEL_19:
  *a1 = v7;
  puts("Receive all message from MES system");
  return v1;
}
