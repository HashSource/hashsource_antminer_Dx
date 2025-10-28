int sub_A0A1C()
{
  pthread_t v0; // r0
  int v1; // r3
  int v2; // r6
  int v3; // r2

  v0 = pthread_self();
  pthread_detach(v0);
  v1 = 0;
  g_lcd_result_with_data = 0;
  if ( g_pcba_info )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( v1 )
      {
        sleep(1u);
        if ( !g_pcba_info )
          break;
      }
      else
      {
        v3 = v2++;
        sprintf(byte_3B565C, "Time %ds", v3);
        sprintf(byte_3B566D, "Level %d", *(_DWORD *)&gHistory_Result[265800 * dword_3B57B0 + 16]);
        sprintf(&byte_3B566D[17], "Nonce: %.2f%", flt_3B57A4);
        sprintf(dword_3B568F, "T: %d-%d %d-%d", dword_3B578C, dword_3B5788, dword_3B5794, dword_3B5790);
        printf("board temp %d - %d, chip temp %d - %d\n", dword_3B578C, dword_3B5788, dword_3B5794, dword_3B5790);
        pcba_display_result_on_lcd();
        sleep(1u);
        if ( !g_pcba_info )
          break;
      }
      v1 = g_lcd_result_with_data;
    }
  }
  printf("%s[%d] quit\n", "pcba_show_status_func", 373);
  return 0;
}
