const char *submit_result_to_MES_system()
{
  const char *connection_to_MES_system_by_name; // r4
  int v2; // r6
  size_t v3; // r8
  ssize_t v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  size_t v7; // r0
  size_t v8; // [sp+0h] [bp-104h] BYREF
  _BYTE v9[256]; // [sp+4h] [bp-100h] BYREF

  v8 = 0;
  putchar(32);
  connection_to_MES_system_by_name = (const char *)create_connection_to_MES_system_by_name(2);
  if ( connection_to_MES_system_by_name )
  {
    LOBYTE(v2) = -5;
    v3 = mes_system_submit_result_file_length;
    putchar(32);
    while ( 1 )
    {
      v4 = send(bitmain_MES_system_clientSocket, submit_result_handshake_information, v3, 0);
      if ( v4 )
      {
        if ( v4 >= 0 )
        {
          puts("done");
          connection_to_MES_system_by_name = receive_message_from_bitmain_MES_system(&v8);
          if ( connection_to_MES_system_by_name )
          {
            printf("length: %d, submit_result_response: %s\n", v8, connection_to_MES_system_by_name);
            v5 = json_loadb((int)connection_to_MES_system_by_name, v8 - 1, 0, (int)v9);
            v6 = v5;
            if ( v5 )
            {
              if ( *v5 )
              {
                connection_to_MES_system_by_name = 0;
                puts("Don't get all respons after submit result");
              }
              else
              {
                connection_to_MES_system_by_name = (const char *)check_whether_MES_system_submit_result_is_correct(v5);
                if ( connection_to_MES_system_by_name )
                  puts("submit result success");
                else
                  puts("submit result fail");
              }
              if ( v6[1] != -1 )
                sub_A8E50(v6);
            }
            else
            {
              connection_to_MES_system_by_name = 0;
              puts("Don't get all respons after submit result");
            }
          }
          else
          {
            puts("submit result fail");
          }
          if ( bitmain_MES_system_clientSocket != -1 )
          {
            close(bitmain_MES_system_clientSocket);
            bitmain_MES_system_clientSocket = -1;
            puts("close socket");
            return connection_to_MES_system_by_name;
          }
          return connection_to_MES_system_by_name;
        }
        printf("Socket return back: %d\n", v4);
      }
      else
      {
        puts("Timeout. MES close socket");
      }
      v2 = (unsigned __int8)(v2 - 1);
      if ( !v2 )
      {
        lcd_clear_result();
        v7 = strlen((const char *)(MES2Local_Config_Information + 32));
        lcd_show_result(0, MES2Local_Config_Information + 32, v7);
        sub_D58AC("send message to");
        sub_D5894("MES system");
        lcd_show_result(3, (int)"fail", 4u);
        puts("send message to MES system fail");
        puts("send submit result information fail");
        return 0;
      }
    }
  }
  return connection_to_MES_system_by_name;
}
