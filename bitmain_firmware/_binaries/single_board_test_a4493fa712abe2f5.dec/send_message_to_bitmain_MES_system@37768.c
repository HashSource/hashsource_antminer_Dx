int __fastcall send_message_to_bitmain_MES_system(const void *a1, size_t a2)
{
  int v3; // r4
  ssize_t v5; // r0
  size_t v7; // r0

  LOBYTE(v3) = -5;
  putchar(32);
  do
  {
    v5 = send(bitmain_MES_system_clientSocket, a1, a2, 0);
    if ( v5 )
    {
      if ( v5 >= 0 )
      {
        puts("done");
        return 1;
      }
      printf("Socket return back: %d\n", v5);
    }
    else
    {
      puts("Timeout. MES close socket");
    }
    v3 = (unsigned __int8)(v3 - 1);
  }
  while ( v3 );
  lcd_clear_result();
  v7 = strlen((const char *)(MES2Local_Config_Information + 32));
  lcd_show_result(0, MES2Local_Config_Information + 32, v7);
  lcd_show_result(1, (int)"send message to", 0xFu);
  lcd_show_result(2, (int)"MES system", 0xAu);
  lcd_show_result(3, (int)"fail", 4u);
  puts("send message to MES system fail");
  return 0;
}
