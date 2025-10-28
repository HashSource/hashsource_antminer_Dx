int pcba_miner_area_test()
{
  int v0; // r4
  int matched; // r0
  int v2; // r1
  void (__fastcall *v3)(int, int *); // r3
  int v4; // r8
  int v5; // r3
  void *v6; // r3
  int v7; // r6
  int v9; // r2
  void (__fastcall *v10)(int, int *); // r3
  int v11; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch]
  int v13; // [sp+8h] [bp-8h]
  int v14; // [sp+Ch] [bp-4h]

  v0 = 1;
  matched = pcba_match_fpga_baud(dword_12C0E0, dword_12C0E4);
  if ( !matched )
  {
    while ( 1 )
    {
      v2 = v0;
      v0 += 2;
      if ( v0 == 15 )
        break;
      printf("check miner system up : count %d\n", v2);
      sleep(1u);
      matched = pcba_match_fpga_baud(dword_12C0E0, dword_12C0E4);
      if ( matched )
        goto LABEL_4;
    }
    memset(&unk_12C1B6, matched, 0x26u);
    v7 = 9;
    strcpy(ret_str, "serial:match baud failed\n");
    return v7;
  }
LABEL_4:
  if ( pcba_start_fpgaminer(dword_12C0E0, dword_12C0E4) )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v3 = *(void (__fastcall **)(int, int *))(dword_12C0E0 + 140);
    HIWORD(v13) = 28;
    v11 = 192;
    LOBYTE(v13) = 1;
    v4 = dword_12C0E4;
    v3(dword_12C0E0, &v11);
    usleep(0xF4240u);
    (*(void (__fastcall **)(char *))(v4 + 16))(byte_2FAF08);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    (*(void (**)(void))(dword_12C0E0 + 4))();
    v5 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4);
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        printf("%s unknow algo\n", "pcba_miner_area_test");
        exit(1);
      }
      v9 = dword_12C0E0;
      *(_DWORD *)(dword_12C0E0 + 288) = 0;
      v12 = 0;
      v13 = 1;
      v14 = 0;
      v10 = *(void (__fastcall **)(int, int *))(v9 + 140);
      HIWORD(v13) = 20;
      v11 = 32;
      v10(v9, &v11);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v6 = (void *)dword_12C0E0;
    }
    else
    {
      v6 = (void *)dword_12C0E0;
      *(_DWORD *)(dword_12C0E0 + 288) = 1;
    }
    pthread_create(&dword_3B5768, 0, (void *(*)(void *))sub_9B4F8, v6);
    usleep((__useconds_t)&loc_30D40);
    pthread_create(&dword_3B576C, 0, (void *(*)(void *))sub_9C1D0, (void *)dword_12C0E0);
    pthread_create(&dword_3B5764, 0, (void *(*)(void *))sub_9B538, (void *)dword_12C0E0);
    sleep(2u);
    pthread_cancel(dword_3B5768);
    pthread_join(dword_3B5768, 0);
    pthread_cancel(dword_3B576C);
    pthread_join(dword_3B576C, 0);
    pthread_cancel(dword_3B5764);
    pthread_join(dword_3B5764, 0);
    v7 = *(unsigned __int8 *)(dword_12C0E0 + 130);
    if ( *(_BYTE *)(dword_12C0E0 + 130) )
    {
      v7 = 0;
      printf("%s stop mining\n", "pcba_miner_area_test");
      (*(void (**)(void))(dword_12C0E0 + 8))();
    }
    return v7;
  }
  return 7;
}
