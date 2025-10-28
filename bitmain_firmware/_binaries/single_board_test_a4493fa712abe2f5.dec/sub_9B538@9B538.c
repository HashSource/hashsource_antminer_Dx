int __fastcall sub_9B538(int a1)
{
  pthread_t v2; // r0
  int v3; // r6
  int v4; // r12
  int v7; // [sp+Ch] [bp-20h]
  int v8; // [sp+10h] [bp-1Ch] BYREF
  int v9; // [sp+14h] [bp-18h] BYREF
  int v10; // [sp+18h] [bp-14h] BYREF
  int v11; // [sp+1Ch] [bp-10h] BYREF
  int v12; // [sp+20h] [bp-Ch] BYREF
  int v13; // [sp+24h] [bp-8h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  (*(void (__fastcall **)(int))(a1 + 84))(a1);
  if ( g_pcba_info )
  {
    v3 = 0;
    do
    {
      sleep(1u);
      v13 = 0;
      v12 = 0;
      v11 = 0;
      v10 = 0;
      v8 = 0;
      v9 = 0;
      if ( ((int (__fastcall *)(int, int *, int *, int *, int *, int *, int *, int))off_3B57D0)(
             a1,
             &v13,
             &v12,
             &v11,
             &v10,
             &v9,
             &v8,
             v7) )
      {
        if ( v3++ > 1 )
        {
          puts("tempture error: can't read all sensor");
          g_pcba_info = 0;
          gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 4] = 0;
          g_lcd_result_with_data = 12;
          strcpy(byte_3B565C, "Sensor error    ");
          break;
        }
      }
      else
      {
        v3 = 0;
        v4 = *(_DWORD *)(g_config_info[0] + 80);
        dword_3B5788 = v13;
        dword_3B578C = v12;
        dword_3B5790 = v11;
        dword_3B5794 = v10;
        if ( v11 > v4 )
        {
          printf("tempture error: max pcb = %d, min pcb = %d, max chip = %d, min chip = %d\n", v13, v12, v11, v10);
          g_pcba_info = 0;
          g_lcd_result_with_data = 13;
          gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 4] = 0;
          break;
        }
      }
    }
    while ( g_pcba_info );
  }
  printf("%s[%d] quit\n", "pcba_read_temp_func", 595);
  return 0;
}
