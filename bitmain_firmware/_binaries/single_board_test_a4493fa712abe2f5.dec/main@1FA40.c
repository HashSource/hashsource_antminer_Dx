int __fastcall main(int argc, const char **argv, const char **envp)
{
  const char *v3; // r0
  int (__fastcall **v4)(_DWORD); // r3
  int v5; // r0
  int v6; // r2
  _BOOL4 v7; // r6
  int v8; // r2
  int v9; // r0
  _BYTE *v10; // r3
  _DWORD *v11; // r0
  const char *v12; // r5
  int v13; // r0
  int v14; // r2
  unsigned int v15; // r3
  bool v16; // cc
  _BYTE *v17; // r3
  int v18; // r3
  int v20; // r2
  char v21; // [sp+3h] [bp-49h] BYREF
  pthread_t newthread[17]; // [sp+4h] [bp-48h] BYREF

  putenv("HAL_CONFIG_PATH=/mnt/card");
  v3 = getenv("HAL_CONFIG_PATH");
  if ( v3 )
    v3 = (const char *)printf("HAL_CONFIG_PATH=%s\n", v3);
  v4 = &off_129438;
  dword_12C0E4 = (int)&off_129438;
  byte_12B724 = 4;
  while ( 1 )
  {
    v5 = ((int (__fastcall **)(const char *))v4)[3](v3);
    pcba_total_device_no = off_129438(v5);
    if ( (unsigned int)(pcba_total_device_no - 1) > 1 )
    {
      g_lcd_result_with_data = 5;
      pcba_display_result_on_lcd();
      puts("Can't find device, please check hashboard!");
    }
    v6 = dword_3B52A4;
    *(_DWORD *)(dword_3B52A4 + 132) = 1966150;
    *(_DWORD *)(v6 + 160) = 1966150;
    if ( pthread_mutex_lock(&stru_3B5460) )
    {
      sub_81E2C();
    }
    else
    {
      if ( dword_12978C > 0 )
        lcd_clear(dword_12978C);
      pthread_mutex_unlock(&stru_3B5460);
    }
    lcd_show_result(1, (int)"Init...         ", 0x10u);
    if ( g_config_info[0] )
      puts("app_config_init already done");
    memset(&unk_12C1DC, 0, 0x78u);
    if ( !read_config_ini(&unk_12C1DC) )
    {
      printf("read config err!");
      config_free((char **)&unk_12C1DC);
      goto LABEL_60;
    }
    v7 = proofread_config((int *)&unk_12C1DC);
    if ( !v7 )
      break;
    g_config_info[0] = (int)&unk_12C1DC;
    if ( (unsigned int)(*(_DWORD *)(dword_12C1E4 + 4) - 6) > 1 )
    {
      v11 = &unk_12C1DC;
      goto LABEL_25;
    }
    v8 = 80 - *(unsigned __int8 *)dword_12C1F0;
    if ( !v8 )
    {
      v8 = 84 - *(unsigned __int8 *)(dword_12C1F0 + 1);
      if ( !v8 )
      {
        v8 = 50 - *(unsigned __int8 *)(dword_12C1F0 + 2);
        if ( !v8 )
          v8 = -*(unsigned __int8 *)(dword_12C1F0 + 3);
      }
    }
    printf("%s test %d  pcba_total_device_no %d\n", (const char *)dword_12C1F0, -v8, pcba_total_device_no);
    v9 = g_config_info[0];
    v10 = *(_BYTE **)(g_config_info[0] + 20);
    if ( *v10 == 80 && v10[1] == 84 && v10[2] == 49 && !v10[3] )
    {
      *(_DWORD *)(g_config_info[0] + 32) = 0;
      *(_DWORD *)(v9 + 108) = 0;
      *(_DWORD *)(v9 + 36) = 1;
LABEL_24:
      prepare_mes_config_test_process(v9);
      v11 = (_DWORD *)g_config_info[0];
LABEL_25:
      load_patterns(v11);
      g_lcd_result_with_data = 20;
      sub_9B394();
      pcba_display_result_on_lcd();
      pthread_create(newthread, 0, (void *(*)(void *))restart_single_board_test, 0);
      while ( 2 )
      {
        while ( 2 )
        {
          memset(&newthread[1], 0, 0x40u);
          v14 = g_config_info[0];
          if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4) - 6) <= 1
            && !*(_DWORD *)(g_config_info[0] + 36) )
          {
            if ( *(_DWORD *)(g_config_info[0] + 32) )
            {
              if ( !gFind_test_standard )
              {
                if ( !scan_code_from_hashboard(dword_12C0E4) )
                  continue;
                if ( !prepare_test_standard((_DWORD *)g_config_info[0]) )
                {
                  gScanCodeGun_data_ready = 0;
                  continue;
                }
LABEL_58:
                v14 = g_config_info[0];
              }
            }
            else if ( !gFind_test_standard )
            {
              if ( !scan_code_from_hashboard(dword_12C0E4) )
                continue;
              gFind_test_standard = 1;
              lcd_clear_result_pcba();
              sub_D58C4((const char *)(MES2Local_Config_Information + 32));
              sub_D58AC("Find test");
              sub_D5894("standard");
              sub_D587C("Press Start Key");
              puts("find test standard from local Config.ini, Press Start Key to Begin Test");
              goto LABEL_58;
            }
          }
          break;
        }
        v12 = *(const char **)(v14 + 116);
        if ( !strcmp(v12, "keyboard") )
        {
          v13 = _isoc99_fscanf(stdin, "%s", &newthread[1]);
        }
        else
        {
          if ( strcmp(v12, "button") )
          {
            puts("please assign ctrl type: keyboard or button");
            app_config_exit();
            return 0;
          }
          v21 = 1;
          v13 = sub_D26E8(&v21);
          LOBYTE(newthread[1]) = v21 + 48;
        }
        if ( v13 >= 0 && LOBYTE(newthread[1]) == 48 )
        {
          gScanCodeGun_data_ready = 0;
          gFind_test_standard = 0;
          v15 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4);
          v16 = v15 > 2;
          if ( v15 != 2 )
            v16 = v15 - 6 > 1;
          if ( v16 )
          {
            singleBoardTest_fpgaminer();
          }
          else
          {
            v17 = *(_BYTE **)(g_config_info[0] + 20);
            if ( *v17 == 80 && v17[1] == 84 )
            {
              v20 = (unsigned __int8)v17[2];
              if ( v20 == 49 )
              {
                if ( !v17[3] )
                  singleBoardTest_asicminer(1);
              }
              else if ( v20 == 50 && !v17[3] )
              {
                singleBoardTest_asicminer(2);
              }
            }
            v18 = v7;
            byte_3B57B6 = 0;
            byte_3B57B5 = 1;
            while ( v18 )
            {
              check_whether_board_changed((int)&g_pcba_info);
              if ( byte_3B57B6 )
              {
                byte_3B57B5 = 0;
                g_lcd_result_with_data = 20;
                sub_9B394();
                pcba_display_result_on_lcd();
                goto LABEL_31;
              }
              v18 = (unsigned __int8)byte_3B57B5;
            }
          }
          g_lcd_result_with_data = 20;
          sub_9B394();
          pcba_display_result_on_lcd();
        }
LABEL_31:
        usleep(0x30D40u);
        continue;
      }
    }
    if ( *(_DWORD *)(g_config_info[0] + 36) || pcba_total_device_no == 2 )
      goto LABEL_24;
    lcd_show_result(1, (int)"Chain ERROR", 0xBu);
    printf("Chain error, now only find %d chain\n", pcba_total_device_no);
    v3 = (const char *)sleep(5u);
    v4 = (int (__fastcall **)(_DWORD))dword_12C0E4;
  }
  printf("proofread config failed!");
  config_free((char **)&unk_12C1DC);
LABEL_60:
  puts("app_config_init failed");
  return -1;
}
