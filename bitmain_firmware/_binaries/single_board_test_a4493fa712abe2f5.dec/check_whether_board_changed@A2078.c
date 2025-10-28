unsigned int __fastcall check_whether_board_changed(int a1)
{
  int v2; // r2
  int v3; // r6
  unsigned int result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r8
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1

  fpga_init();
  v2 = *(_DWORD *)(dword_3B52A4 + 8);
  v3 = v2 & 1;
  if ( (v2 & 1) != 0 )
  {
    v3 = 1;
    pcba_chain_info[0] = 0;
  }
  if ( (v2 & 2) != 0 )
    pcba_chain_info[v3++] = 1;
  if ( (v2 & 4) != 0 )
    pcba_chain_info[v3++] = 2;
  if ( (v2 & 8) != 0 )
    pcba_chain_info[v3++] = 3;
  if ( *(_DWORD *)(g_config_info[0] + 36) )
  {
    if ( v3 != 1 )
    {
      if ( !v3 )
      {
        puts("No board found, please check.");
        lcd_show_result(0, (int)"                ", 0x10u);
        lcd_show_result(1, (int)"                ", 0x10u);
        lcd_show_result(2, (int)"                ", 0x10u);
        lcd_show_result(3, (int)"                ", 0x10u);
        lcd_show_result(1, (int)"Plug off", 8u);
        sub_D5894("before test done");
      }
      return 0;
    }
    while ( *(_BYTE *)(a1 + 85) )
    {
      fpga_init();
      v13 = *(_DWORD *)(dword_3B52A4 + 8);
      v12 = v13 & 1;
      if ( (v13 & 1) != 0 )
      {
        v14 = 0;
        v12 = 1;
        pcba_chain_info[0] = 0;
      }
      else
      {
        v14 = 1;
      }
      if ( (v13 & 1) != 0 )
        v14 = 2;
      if ( (v13 & 2) != 0 )
      {
        pcba_chain_info[v12] = 1;
        v12 = v14;
      }
      if ( (v13 & 4) != 0 )
      {
        pcba_chain_info[v12++] = 2;
        if ( (v13 & 8) != 0 )
          goto LABEL_53;
      }
      else
      {
        if ( (v13 & 8) != 0 )
        {
LABEL_53:
          pcba_chain_info[v12] = 3;
          goto LABEL_54;
        }
        if ( !v12 )
          break;
      }
LABEL_54:
      usleep((__useconds_t)&loc_30D40);
    }
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    lcd_show_result(3, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"Please change", 0xDu);
    sub_D5894("next hashboard");
    for ( result = sleep(1u); !*(_BYTE *)(a1 + 86); result = usleep((__useconds_t)&loc_30D40) )
    {
      while ( 1 )
      {
        fpga_init();
        v15 = *(_DWORD *)(dword_3B52A4 + 8);
        v16 = v15 & 1;
        if ( (v15 & 1) != 0 )
        {
          v17 = 0;
          v16 = 1;
          pcba_chain_info[0] = 0;
        }
        else
        {
          v17 = 1;
        }
        if ( (v15 & 1) != 0 )
          v17 = 2;
        if ( (v15 & 2) != 0 )
        {
          pcba_chain_info[v16] = 1;
          v16 = v17;
        }
        if ( (v15 & 4) != 0 )
          pcba_chain_info[v16++] = 2;
        if ( (v15 & 8) != 0 )
          pcba_chain_info[v16++] = 3;
        if ( v16 == 1 )
          break;
        result = usleep((__useconds_t)&loc_30D40);
        if ( *(_BYTE *)(a1 + 86) )
          return result;
      }
      *(_BYTE *)(a1 + 86) = 1;
    }
  }
  else
  {
    if ( v3 != 2 )
    {
      printf("Please check hashboard. Only find chain %d\n", pcba_chain_info[v3 - 1]);
      lcd_show_result(0, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"Plug off", 8u);
      lcd_show_result(2, (int)"before test done", 0x10u);
      return 0;
    }
    while ( *(_BYTE *)(a1 + 85) )
    {
      fpga_init();
      v5 = *(_DWORD *)(dword_3B52A4 + 8);
      v6 = v5 & 1;
      if ( (v5 & 1) != 0 )
      {
        v6 = 1;
        v7 = 2;
      }
      else
      {
        v7 = 1;
      }
      if ( (v5 & 1) != 0 )
        pcba_chain_info[0] = 0;
      if ( (v5 & 2) != 0 )
      {
        pcba_chain_info[v6] = 1;
        v6 = v7;
      }
      if ( (v5 & 4) != 0 )
        pcba_chain_info[v6++] = 2;
      if ( (v5 & 8) != 0 )
        pcba_chain_info[v6++] = 3;
      if ( v6 == 1 )
        break;
      usleep((__useconds_t)&loc_30D40);
    }
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    lcd_show_result(3, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"Please change", 0xDu);
    lcd_show_result(2, (int)"next hashboard", 0xEu);
    result = sleep(1u);
    if ( !*(_BYTE *)(a1 + 86) )
    {
      v8 = *(unsigned __int8 *)(a1 + 86);
      do
      {
        while ( 1 )
        {
          fpga_init();
          v9 = *(_DWORD *)(dword_3B52A4 + 8);
          v10 = v9 & 1;
          if ( (v9 & 1) != 0 )
          {
            v10 = 1;
            v11 = 2;
          }
          else
          {
            v11 = 1;
          }
          if ( (v9 & 1) != 0 )
            pcba_chain_info[0] = v8;
          if ( (v9 & 2) != 0 )
          {
            pcba_chain_info[v10] = 1;
            v10 = v11;
          }
          if ( (v9 & 4) != 0 )
            pcba_chain_info[v10++] = 2;
          if ( (v9 & 8) != 0 )
            pcba_chain_info[v10++] = 3;
          if ( v10 == 2 )
            break;
          result = usleep((__useconds_t)&loc_30D40);
          if ( *(_BYTE *)(a1 + 86) )
            return result;
        }
        *(_BYTE *)(a1 + 86) = 1;
        result = usleep((__useconds_t)&loc_30D40);
      }
      while ( !*(_BYTE *)(a1 + 86) );
    }
  }
  return result;
}
