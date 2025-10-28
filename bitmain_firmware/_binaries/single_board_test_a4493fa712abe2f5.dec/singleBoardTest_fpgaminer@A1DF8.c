int singleBoardTest_fpgaminer()
{
  int v0; // r0
  int v1; // r6
  int v2; // r8
  void *v3; // r0
  int *v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  char v10; // r4
  void (**v11)(void); // r0
  void (*v12)(void); // r2
  size_t v13; // r3
  int v14; // r2
  int v15; // r2
  int v16; // r9
  const char *v17; // r4
  int v18; // r7
  char *v19; // r6
  char *v20; // r0
  const char *v21; // r1
  int v22; // r2

  printf("%s begin\n", "singleBoardTest_fpgaminer");
  memset(&g_pcba_info, 0, 0x78u);
  memset(ret_str, 0, 0x40u);
  v0 = (*(int (__fastcall **)(_DWORD))(dword_12C0E4 + 8))(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4));
  v1 = off_129438(v0);
  if ( v1 != 1 )
  {
    g_lcd_result_with_data = 4;
    printf("check chain failed. query_device_num error code %d and then exit\n", v1);
    g_pcba_info = 0;
    sleep(2u);
    pthread_cancel(newthread);
    pthread_join(newthread, 0);
    pthread_cancel(dword_3B5770);
    pthread_join(dword_3B5770, 0);
    goto LABEL_3;
  }
  v11 = (void (**)(void))runtime_ctrl(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4));
  v12 = *v11;
  v11[30] = 0;
  dword_12C0E0 = (int)v11;
  v12();
  sub_9B668(0);
  g_pcba_info = 1;
  pthread_create(&newthread, 0, (void *(*)(void *))sub_9B44C, (void *)dword_12C0E0);
  pthread_create(&dword_3B5770, 0, (void *(*)(void *))sub_A0A1C, 0);
  v2 = pcba_basic_area_test();
  if ( !v2 )
  {
    v2 = pcba_miner_area_test();
    if ( !v2 )
    {
      puts("Test Pass");
      g_pcba_info = 0;
      sleep(2u);
      pthread_cancel(newthread);
      pthread_join(newthread, 0);
      pthread_cancel(dword_3B5770);
      pthread_join(dword_3B5770, 0);
LABEL_3:
      v2 = dword_3B5798;
      if ( dword_3B5798 )
      {
        v2 = 0;
      }
      else
      {
        strcpy(byte_3B565C, "                ");
        sprintf(byte_3B566D, " LEVEL: %d", dword_3B57B0 + 1);
        sprintf(&byte_3B566D[17], " NONCE: %.2f", flt_3B57A4);
        v5 = (int *)&unk_104110;
        if ( !byte_3B57B4 )
          v5 = (int *)&unk_104124;
        v6 = *v5;
        v7 = v5[1];
        v8 = v5[2];
        v9 = v5[3];
        v10 = *((_BYTE *)v5 + 16);
        *(_DWORD *)dword_3B568F = v6;
        dword_3B5693 = v7;
        byte_3B569F = v10;
        dword_3B5697 = v8;
        dword_3B569B = v9;
      }
      goto LABEL_5;
    }
  }
  dword_3B57D4 = v2;
  g_pcba_info = 0;
  sleep(2u);
  pthread_cancel(newthread);
  pthread_join(newthread, 0);
  pthread_cancel(dword_3B5770);
  pthread_join(dword_3B5770, 0);
  g_lcd_result_with_data = 18;
  v13 = strlen(ret_str);
  v14 = (v13 + 1) & 0xF;
  v15 = (v14 != 0) + ((int)(v13 + 1) >> 4);
  v16 = v15;
  if ( v15 >= 4 )
    v16 = 4;
  if ( v15 )
  {
    v17 = ret_str;
    v18 = 0;
    v19 = byte_3B565C;
    while ( 1 )
    {
      v20 = v19;
      v21 = v17;
      if ( v13 > 0xF )
        v20 = v19;
      v22 = 16;
      ++v18;
      if ( v13 <= 0xF )
        v22 = v13;
      v17 += 16;
      sprintf(v20, v21, v22);
      v19 += 17;
      if ( v18 >= v16 )
        break;
      v13 = strlen(v17);
    }
  }
LABEL_5:
  pcba_display_result_on_lcd();
  v3 = (void *)dword_12C0E0;
  if ( dword_12C0E0 )
  {
    if ( *(_BYTE *)(dword_12C0E0 + 128) )
    {
      (*(void (**)(void))(dword_12C0E0 + 16))();
      v3 = (void *)dword_12C0E0;
    }
    free(v3);
  }
  (*(void (**)(void))(dword_12C0E4 + 80))();
  printf("Test finished error_type = %d\n", v2);
  return 1;
}
