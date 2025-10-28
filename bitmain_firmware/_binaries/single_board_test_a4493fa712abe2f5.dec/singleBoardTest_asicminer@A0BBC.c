int __fastcall singleBoardTest_asicminer(int a1)
{
  int v1; // r3
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r6
  int v6; // r12
  unsigned int v7; // r3
  int v8; // r9
  int v9; // r0
  int v10; // r0
  int *v11; // r9
  unsigned __int8 *v12; // r2
  int v13; // r1
  unsigned __int8 v14; // r3
  unsigned __int8 *v15; // r3
  char *v16; // r12
  char *v17; // r3
  int i; // r11
  int v19; // r2
  int v20; // t1
  int v21; // r1
  int v22; // t1
  int v23; // r5
  _BYTE *v24; // r3
  int v25; // r9
  int v27; // r2
  bool v28; // zf
  _BYTE *v29; // r5
  int v30; // r8
  int v31; // r9
  char *v32; // r2
  char *v33; // r3
  _BYTE *v34; // r5
  int v35; // r3
  _BYTE *v36; // r1
  char *v37; // r4
  int v38; // r5
  _BYTE *v39; // r11
  int v40; // r2
  int v41; // r11
  int v42; // r11
  void (__fastcall *v43)(int, int); // r2
  int v44; // r3
  int v45; // r2
  float v46; // s15
  int v47; // r2
  char *v48; // r5
  char *v49; // r11
  int j; // r3
  int v51; // r2
  int v52; // t1
  int v53; // r1
  int v54; // t1
  size_t v56; // r0
  char *v57; // r3
  char *v58; // r2
  char *v59; // r3
  int v60; // r2
  int v61; // r0
  int v62; // r6
  void (**v63)(void); // r0
  void (*v64)(void); // r2
  int v65; // r0
  int v66; // r1
  int v67; // r2
  int v68; // r1
  char *v69; // r3
  unsigned __int8 *v70; // r6
  int v71; // lr
  unsigned int v72; // r2
  char *v73; // r6
  char *v74; // r2
  int v75; // r3
  int v76; // r5
  char *v77; // r2
  char *v78; // r3
  unsigned int v79; // r0
  char v80; // [sp+8h] [bp-600h] BYREF
  char v81; // [sp+207h] [bp-401h] BYREF
  _BYTE v82[511]; // [sp+208h] [bp-400h] BYREF
  char v83; // [sp+407h] [bp-201h] BYREF
  unsigned __int8 v84[255]; // [sp+408h] [bp-200h] BYREF
  char v85; // [sp+507h] [bp-101h] BYREF
  char *v86; // [sp+600h] [bp-8h] BYREF
  char *v87; // [sp+608h] [bp+0h]
  unsigned __int8 *v88; // [sp+60Ch] [bp+4h]
  int v89; // [sp+610h] [bp+8h]
  int *v90; // [sp+614h] [bp+Ch]
  char **v91; // [sp+618h] [bp+10h]
  int v92; // [sp+61Ch] [bp+14h]
  void *s; // [sp+620h] [bp+18h]
  _BYTE *v94; // [sp+624h] [bp+1Ch]
  unsigned int v95; // [sp+628h] [bp+20h] BYREF
  __int16 v96; // [sp+62Ch] [bp+24h]
  char v97; // [sp+62Eh] [bp+26h]
  char v98; // [sp+62Fh] [bp+27h]

  v92 = a1;
  if ( dword_12C114 )
  {
    v1 = g_config_info[0];
    v90 = &dword_3B52A4;
    v89 = 0;
  }
  else
  {
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    lcd_show_result(3, (int)"                ", 0x10u);
    v61 = sub_D58AC("Start test...");
    v62 = off_129438(v61);
    pcba_total_device_no = v62;
    if ( v62 != 1 )
    {
      printf("power on check chain failed. query_device_num error code %d\n", v62);
      g_lcd_result_with_data = 4;
      pcba_display_result_on_lcd();
      v79 = sleep(3u);
      (*(void (__fastcall **)(unsigned int))(dword_12C0E4 + 80))(v79);
      return -1;
    }
    v89 = (*(int (__fastcall **)(_DWORD))(dword_12C0E4 + 92))(0);
    v63 = (void (**)(void))runtime_ctrl(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4));
    v64 = *v63;
    v63[30] = 0;
    dword_12C0E0 = (int)v63;
    v64();
    v65 = (*(int (__fastcall **)(int))(dword_12C0E4 + 4))(pcba_total_device_no - 1);
    v1 = g_config_info[0];
    dword_12C114 = 1;
    gChain = v65;
    v66 = *(_DWORD *)(g_config_info[0] + 100);
    if ( (unsigned int)(v66 - 3) > 0x61 )
    {
      puts("warning: fan speed range only support [3, 100], otherwise set default value 50");
      v1 = g_config_info[0];
      v67 = 3276850;
    }
    else
    {
      v67 = (100 - v66) | (v66 << 16);
    }
    v90 = &dword_3B52A4;
    v68 = dword_3B52A4;
    *(_DWORD *)(dword_3B52A4 + 132) = v67;
    *(_DWORD *)(v68 + 160) = v67;
  }
  if ( *(int *)(*(_DWORD *)(v1 + 8) + 28) <= 0 )
  {
    v94 = gHistory_Result;
    goto LABEL_47;
  }
  v2 = 0;
  s = &g_lcd_result_with_data;
  v87 = "warning: fan speed range only support [3, 100], otherwise set default value 50";
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 100);
    if ( (unsigned int)(v3 - 3) > 0x61 )
    {
      puts(v87);
      v4 = 3276850;
    }
    else
    {
      v4 = (100 - v3) | (v3 << 16);
    }
    v5 = v2 + 1;
    v6 = *v90;
    *(_DWORD *)(v6 + 132) = v4;
    *(_DWORD *)(v6 + 160) = v4;
    printf("%s Begin Level %d\n", "singleBoardTest_asicminer", v2 + 1);
    memset(s, 0, 0x48u);
    sub_9B668(v2);
    if ( v89 < 0 )
    {
      gHistory_Result[((_DWORD)&loc_40E46 + 2) * v2 + 6] = 0;
      lcd_show_result(0, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"Pic ERROR", 9u);
      sleep(2u);
      return -1;
    }
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    lcd_show_result(3, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"Check EEPROM...", 0xFu);
    if ( !*(_DWORD *)(g_config_info[0] + 112) )
    {
      v94 = gHistory_Result;
      goto LABEL_29;
    }
    if ( v92 == 2 && !check_PT1_EEPROM_marker() )
      return -1;
    v94 = gHistory_Result;
    v7 = gChain;
    v91 = &v86;
    gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
    v88 = (unsigned __int8 *)&v80;
    if ( v7 > 0xF )
    {
      v9 = sub_26DDC(v7);
    }
    else
    {
      v8 = 2 * v7;
      v9 = dword_12C11C[2 * v7];
      if ( !v9 || !dword_12C11C[2 * v7 + 1] )
      {
        v95 = v7;
        v98 = v7;
        v96 = 0;
        v97 = 10;
        v10 = iic_init((int)&v95);
        if ( v10 < 0 )
          goto LABEL_82;
        v11 = &g_config_info[v8];
        v11[17] = v10;
        v11[18] = 1;
        goto LABEL_15;
      }
    }
    if ( v9 < 0 )
    {
LABEL_82:
      lcd_clear_result();
      v56 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v56);
      sub_D5894("EEPROM init fail");
      printf("EEPROM init fail!!!");
      goto LABEL_77;
    }
LABEL_15:
    v12 = v84;
    v13 = 0;
    do
    {
      v14 = v13;
      __pld(&v84[v13 + 40]);
      v13 += 32;
      v12[1] = v14 + 1;
      v12[2] = v14 + 2;
      v12[3] = v14 + 3;
      v12[4] = v14 + 4;
      v12[5] = v14 + 5;
      v12[6] = v14 + 6;
      v12[7] = v14 + 7;
      v12[8] = v14 + 8;
      v12[9] = v14 + 9;
      v12[10] = v14 + 10;
      v12[11] = v14 + 11;
      v12[12] = v14 + 12;
      v12[13] = v14 + 13;
      v12[14] = v14 + 14;
      v12[15] = v14 + 15;
      v12[16] = v14 + 16;
      v12[17] = v14 + 17;
      v12[18] = v14 + 18;
      v12[19] = v14 + 19;
      v12[20] = v14 + 20;
      v12[21] = v14 + 21;
      v12[22] = v14 + 22;
      v12[23] = v14 + 23;
      v12[24] = v14 + 24;
      *v12 = v14;
      v12 += 32;
      *(v12 - 7) = v14 + 25;
      *(v12 - 6) = v14 + 26;
      *(v12 - 5) = v14 + 27;
      *(v12 - 4) = v14 + 28;
      *(v12 - 3) = v14 + 29;
      *(v12 - 2) = v14 + 30;
      *(v12 - 1) = v14 + 31;
    }
    while ( v13 != 224 );
    v15 = &v84[224];
    do
    {
      *v15 = (_BYTE)v15 - (unsigned __int8)v84;
      ++v15;
    }
    while ( &v85 != (char *)v15 );
    memset(v82, 255, 0xFFu);
    if ( *(_BYTE *)(MES2Local_Config_Information + 468) )
    {
      puts("Check EEPROM with clear data");
      if ( !eeprom_write(gChain, 0, v84, 255) )
      {
        if ( eeprom_read(gChain, 0, (int)v82, 255) )
        {
LABEL_83:
          puts("Read EEPROM fail");
          goto LABEL_77;
        }
        v16 = &v81;
        v17 = &v83;
        for ( i = 0; i != 255; ++i )
        {
          v20 = (unsigned __int8)*++v17;
          v19 = v20;
          v22 = (unsigned __int8)*++v16;
          v21 = v22;
          if ( v19 != v22 )
          {
            printf("EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n", i, v19, i, v21);
            goto LABEL_77;
          }
        }
        memset(v84, 255, sizeof(v84));
        if ( !eeprom_write(gChain, 0, v84, 255) )
          goto LABEL_26;
      }
LABEL_76:
      puts("Write EEPROM fail");
LABEL_77:
      lcd_show_result(0, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"Check EEPROM", 0xCu);
      lcd_show_result(0, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"failed!", 7u);
      puts("Check EEPROM fail");
      v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
      return -1;
    }
    puts("Check EEPROM without clear data");
    if ( eeprom_read(gChain, 0, (int)v88, 255) )
      goto LABEL_83;
    if ( eeprom_write(gChain, 0, v84, 255) )
      goto LABEL_76;
    if ( eeprom_read(gChain, 0, (int)v82, 255) )
      goto LABEL_83;
    v48 = &v83;
    v49 = &v81;
    for ( j = 0; j != 255; ++j )
    {
      v52 = (unsigned __int8)*++v48;
      v51 = v52;
      v54 = (unsigned __int8)*++v49;
      v53 = v54;
      if ( v51 != v54 )
      {
        printf("EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n", j, v51, j, v53);
        goto LABEL_77;
      }
    }
    if ( eeprom_write(gChain, 0, v88, 255) )
    {
      puts("Backup write EEPROM fail");
      goto LABEL_77;
    }
LABEL_26:
    v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 1;
LABEL_29:
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    lcd_show_result(3, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"set vol and freq", 0x10u);
    v23 = v5 + 0x3FFFFFFF;
    pcba_power_on(
      *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4),
      *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 48) + 4 * (v5 + 0x3FFFFFFF)));
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(dword_12C0E4 + 24))(
      *(_DWORD *)(dword_12C0E0 + 120),
      *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 48) + 4 * (v5 + 0x3FFFFFFF)),
      *(_DWORD *)(dword_12C0E0 + 748));
    if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_9B44C, (void *)dword_12C0E0) )
    {
      *(_DWORD *)s = 7;
      dword_3B57D4 = 14;
    }
    else
    {
      v41 = dword_12C0E4;
      (*(void (__fastcall **)(int, int))(dword_12C0E0 + 64))(dword_12C0E0, 115200);
      usleep(0x2710u);
      (*(void (__fastcall **)(int))(v41 + 16))(115200);
      v42 = *(_DWORD *)(g_config_info[0] + 96);
      v43 = *(void (__fastcall **)(int, int))(dword_12C0E0 + 64);
      v91 = (char **)dword_12C0E4;
      v43(dword_12C0E0, v42);
      usleep(0x2710u);
      ((void (__fastcall *)(int))v91[4])(v42);
      v44 = dword_12C0E0;
      v45 = *(_DWORD *)(g_config_info[0] + 8);
      *(_DWORD *)(dword_12C0E0 + 288) = 1;
      v46 = (float)*(int *)(*(_DWORD *)(v45 + 24) + 4 * v23);
      *(float *)(v44 + 732) = v46;
      printf("Set freq to %.2f\n", v46);
      lcd_show_result(0, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"                ", 0x10u);
      lcd_show_result(2, (int)"                ", 0x10u);
      lcd_show_result(3, (int)"                ", 0x10u);
      lcd_show_result(1, (int)"Find ASIC...", 0xCu);
      (*(void (**)(void))(dword_12C0E0 + 4))();
      printf("Find %d ASIC\n", *(_DWORD *)(dword_12C0E0 + 220));
      v47 = *(_DWORD *)(dword_12C0E0 + 220);
      if ( v47 == *(_DWORD *)(g_config_info[0] + 40) )
      {
        if ( v92 == 1 )
        {
          *(_DWORD *)s = 2;
          write_EEPROM_PT1_marker();
        }
        else
        {
          v57 = &aPcbaPicHeartbe[68 * *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4)];
          if ( v57[1892] )
          {
            if ( v57[1904] )
            {
              v76 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 48) + 4 * v23);
              printf("Set voltage to working_voltage %d\n", v76);
              if ( set_voltage_by_steps(v76, 1) )
                puts("set_voltage_by_steps error!");
            }
          }
          if ( pthread_create(&dword_3B5770, 0, (void *(*)(void *))sub_A0A1C, 0) )
          {
            dword_3B57D4 = 14;
            *(_DWORD *)s = 14;
          }
          else if ( pthread_create(&dword_3B5768, 0, (void *(*)(void *))sub_9B4F8, (void *)dword_12C0E0) )
          {
            dword_3B57D4 = 14;
            *(_DWORD *)s = 9;
          }
          else
          {
            usleep(0x30D40u);
            if ( pthread_create(&dword_3B576C, 0, (void *(*)(void *))sub_9C1D0, (void *)dword_12C0E0) )
            {
              dword_3B57D4 = 14;
              *(_DWORD *)s = 15;
            }
            else if ( pthread_create(&dword_3B5764, 0, (void *(*)(void *))sub_9B538, (void *)dword_12C0E0) )
            {
              dword_3B57D4 = 14;
              *(_DWORD *)s = 16;
            }
            else
            {
              while ( g_pcba_info )
                sleep(1u);
            }
          }
        }
      }
      else
      {
        *(_DWORD *)s = 10;
        sprintf(byte_3B565C, "       %03d     ", v47);
        dword_3B57D4 = 8;
      }
    }
    pcba_display_result_on_lcd();
    v24 = &v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0];
    if ( !v24[4] || !v24[2] )
      break;
    g_pcba_info = 0;
    sleep(2u);
    if ( *(_BYTE *)(dword_12C0E0 + 130) )
      (*(void (**)(void))(dword_12C0E0 + 8))();
    v25 = 0;
    do
    {
      sleep(1u);
      printf("delay power down seconds......%d\n", *(_DWORD *)(g_config_info[0] + 104) - v25);
    }
    while ( *(_DWORD *)(g_config_info[0] + 104) > v25++ );
    (*(void (__fastcall **)(_DWORD))(dword_12C0E4 + 28))(*(_DWORD *)(dword_12C0E0 + 120));
    v27 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4);
    if ( aPcbaPicHeartbe[68 * v27 + 1892] )
    {
      if ( !is_gpio_exist(907) )
      {
        gpio_export(907);
        gpio_direction(907, 1);
      }
      gpio_write(907, 1);
      sleep(1u);
    }
    else
    {
      printf("%s, algo %s donot use adjustable power!", "pcba_power_off", off_103FE0[v27]);
    }
    v28 = dword_3B57D4 == 0;
    if ( !dword_3B57D4 )
      v28 = v92 == 2;
    if ( !v28 )
    {
LABEL_47:
      puts("Test finished");
      strcpy(byte_3B565C, "Test done       ");
      sprintf(&byte_3B566D[17], "Nonce: %.2f%", flt_3B57A4);
      v29 = &v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0];
      if ( (unsigned __int8)v29[265796] <= 1u )
      {
        v58 = "NG";
        if ( v29[4] )
          v59 = "OK";
        else
          v59 = "NG";
        if ( v29[2] )
          v58 = "OK";
        sprintf(dword_3B568F, "P:OK E:%s S:%s", v58, v59);
      }
      else
      {
        v30 = *((_DWORD *)v29 + 65803);
        v31 = (unsigned __int8)v29[2];
        strcpy(byte_3B565C, "Test all fail   ");
        if ( v30 <= 0 )
        {
          v77 = "OK";
          if ( v29[4] )
            v78 = "OK";
          else
            v78 = "NG";
          if ( !v31 )
            v77 = "NG";
          sprintf(dword_3B568F, "P:NG E:%s S:%s", v77, v78);
        }
        else
        {
          v32 = "OK";
          if ( v29[4] )
            v33 = "OK";
          else
            v33 = "NG";
          if ( !v31 )
            v32 = "NG";
          sprintf(&byte_3B566D[17], "P:NG E:%s S:%s", v32, v33);
          v34 = v94;
          sprintf(dword_3B568F, "B:%02d:", *(_DWORD *)&v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263212]);
          v35 = dword_3B57B0;
          v36 = v34;
          if ( *(int *)&v34[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263212] > 0 )
          {
            v37 = (char *)&dword_3B5693 + 1;
            v38 = 0;
            v39 = v36;
            do
            {
              sprintf(v37, "%d ", *(_DWORD *)&v39[4 * v38 + 263216 + 4 * ((_DWORD)&elf_hash_bucket[117] + 2) * v35] + 1);
              v35 = dword_3B57B0;
              v40 = *(_DWORD *)&v39[4 * v38 + 263216 + 4 * ((_DWORD)&elf_hash_bucket[117] + 2) * dword_3B57B0];
              if ( v40 > 8 )
              {
                if ( v40 > 98 )
                  v37 += 4;
                else
                  v37 += 3;
              }
              else
              {
                v37 += 2;
              }
              ++v38;
            }
            while ( *(_DWORD *)&v39[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263212] > v38 );
          }
        }
      }
      pcba_display_result_on_lcd();
      v60 = *v90;
      *(_DWORD *)(v60 + 132) = 1966150;
      *(_DWORD *)(v60 + 160) = 1966150;
      __asm { POP.W           {R4-R11,PC} }
    }
    if ( byte_3B57B4 || v5 == *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 28) )
    {
      do_PT2_summary_work((unsigned __int8)dword_3B57B0);
      goto LABEL_47;
    }
    v2 = v5;
    puts("goto next level");
    v1 = g_config_info[0];
    if ( v5 >= *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 28) )
      goto LABEL_47;
  }
  sprintf(&byte_3B566D[17], "Nonce: %.2f%", flt_3B57A4);
  v69 = "NG";
  v70 = &v94[((_DWORD)&loc_40E46 + 2) * dword_3B57B0];
  v71 = v70[2];
  v72 = v70[265796];
  if ( v70[4] )
    v73 = "OK";
  else
    v73 = "NG";
  v86 = v73;
  if ( v72 <= 1 )
    v74 = "OK";
  else
    v74 = "NG";
  if ( v71 )
    v69 = "OK";
  sprintf(dword_3B568F, "P:%s E:%s S:%s", v74, v69, v86);
  g_lcd_result_with_data = 20;
  pcba_display_result_on_lcd();
  sleep(3u);
  (*(void (__fastcall **)(_DWORD))(dword_12C0E4 + 28))(*(_DWORD *)(dword_12C0E0 + 120));
  v75 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4);
  if ( !aPcbaPicHeartbe[68 * v75 + 1892] )
  {
    printf("%s, algo %s donot use adjustable power!", "pcba_power_off", off_103FE0[v75]);
    return -1;
  }
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  gpio_write(907, 1);
  sleep(1u);
  return -1;
}
