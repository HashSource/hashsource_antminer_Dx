int __fastcall scan_code_from_hashboard(int a1)
{
  int v1; // r5
  int v4; // r1
  int v5; // r4
  size_t v6; // r0
  int v7; // r1
  int v8; // r5
  size_t v9; // r0
  size_t v10; // r0
  char v11; // [sp+Eh] [bp-6h] BYREF
  _BYTE v12[5]; // [sp+Fh] [bp-5h] BYREF

  v12[0] = 0;
  v11 = 0;
  if ( gScanCodeGun_data_ready == 3 )
  {
    v1 = (unsigned __int8)byte_12A251;
    if ( byte_12A251 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("Got Scan code");
      sub_D5894("Press");
      lcd_show_result(3, (int)"Start Key", 9u);
      puts("No need scan code, Press Start Key to Begin Test");
      byte_12A251 = 0;
      return v1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    usleep(0x249F0u);
    if ( platform_inited )
      v4 = *(_DWORD *)dword_3B52A4;
    else
      v4 = sub_85B3C();
    printf("FPGA version is 0x%08x\n", v4);
    check_scan_code_gun(a1);
    (*(void (__fastcall **)(_DWORD, int))(a1 + 20))((unsigned __int8)gCode_gun_chain, 115200);
    dword_1298F0 = 255;
    v5 = 0;
    dword_3B5130 = 0;
    memset(byte_3B5138, 0, sizeof(byte_3B5138));
    uart_flush(3);
    gScanCodeGun_data_ready = 0;
    while ( v5 != 3 )
    {
      while ( 1 )
      {
        v12[0] = 0;
        v11 = 0;
        if ( v5 == 1 )
        {
          lcd_clear_result();
          v10 = strlen((const char *)(MES2Local_Config_Information + 32));
          lcd_show_result(0, MES2Local_Config_Information + 32, v10);
          lcd_show_result(1, (int)"SN code OK      ", 0x10u);
          lcd_show_result(2, (int)"Please Scan QR  ", 0x10u);
          lcd_show_result(3, (int)"code            ", 0x10u);
          puts("Please Scan QR code");
        }
        else if ( v5 == 2 )
        {
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
          v9 = strlen((const char *)(MES2Local_Config_Information + 32));
          lcd_show_result(0, MES2Local_Config_Information + 32, v9);
          lcd_show_result(1, (int)"QR code OK      ", 0x10u);
          lcd_show_result(2, (int)"Please Scan SN  ", 0x10u);
          lcd_show_result(3, (int)"code            ", 0x10u);
          puts("Please Scan SN code");
        }
        else
        {
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
          v6 = strlen((const char *)(MES2Local_Config_Information + 32));
          lcd_show_result(0, MES2Local_Config_Information + 32, v6);
          lcd_show_result(1, (int)"Please Scan code", 0x10u);
          lcd_show_result(2, (int)"first", 5u);
        }
        scan_hashboard_info((unsigned __int8)gCode_gun_chain, (int)&sn, (const char *)qr_code, v12, &v11, 1000);
        if ( !v12[0] )
          break;
        v7 = (unsigned __int8)gScanCodeGun_data_ready | 1;
        gScanCodeGun_data_ready |= 1u;
        printf("Got SN code... gScanCodeGun_data_ready = %d", v7);
        v5 = (unsigned __int8)gScanCodeGun_data_ready;
        if ( v11 )
          goto LABEL_17;
        if ( gScanCodeGun_data_ready == 3 )
          goto LABEL_20;
      }
      v5 = (unsigned __int8)gScanCodeGun_data_ready;
      if ( !v11 )
        continue;
LABEL_17:
      gScanCodeGun_data_ready = v5 | 2;
      printf("Got QR code... gScanCodeGun_data_ready = %d", v5 | 2);
      v5 = (unsigned __int8)gScanCodeGun_data_ready;
    }
LABEL_20:
    printf("SN data::[%s]\n", dword_3B57DD);
    puts("QR code data::");
    printf("factory_job::[%s].\n", (const char *)qr_code);
    printf("chip_die::[%s].\n", word_3B5910);
    printf("chip_marking::[%s].\n", dword_3B5920);
    printf("chip_bin::[%s].\n", byte_3B5930);
    printf("chip_ftversion::[%s].\n", src);
    printf("temp_sensor_type::[%s].\n", byte_3B5950);
    printf("hashboard_ctrl_code::[%s].\n", &byte_3B5960);
    printf("hashboard_index::[%s].\n", byte_3B5970);
    v8 = check_sn_qr_code_legality((int)&sn, (const char *)qr_code);
    if ( v8 )
    {
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("Got Scan code");
      sub_D5894("wait for find");
      lcd_show_result(v5, (int)"test standard", 0xDu);
      puts("got scan code");
      return v8;
    }
    else
    {
      gScanCodeGun_data_ready = 0;
      return 0;
    }
  }
}
