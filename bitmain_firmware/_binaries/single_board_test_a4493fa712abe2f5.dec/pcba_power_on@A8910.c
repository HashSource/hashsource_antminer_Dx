int __fastcall pcba_power_on(unsigned int a1, int a2)
{
  unsigned int v3; // r8
  unsigned __int16 *v4; // r3
  int v5; // r7
  int v7; // r7
  int v8; // r3
  unsigned int v9; // r3
  int v11; // r1
  _DWORD *v12; // r0
  unsigned __int16 *v13; // r5
  int v14; // r4
  int v15; // r0

  if ( a1 > 8 )
  {
    printf("%s, unknow algo %d!\n", "pcba_power_on", a1);
    return -1;
  }
  v3 = 16 * a1;
  v4 = &all_algo_system_info[34 * a1];
  v5 = *((unsigned __int8 *)v4 + 4);
  if ( !*((_BYTE *)v4 + 4) )
  {
    printf("%s, algo %s donot use adjustable power!\n", "pcba_power_on", off_103FE0[a1]);
    return v5;
  }
  v7 = (unsigned __int16)bitmain_power_version();
  printf("power type version: 0x%04x\n", v7);
  v8 = *(_DWORD *)(g_config_info[0] + 32);
  if ( v8 )
  {
    if ( gPower_version_array_size )
    {
      if ( v7 != (unsigned __int8)APW_power_version[0] )
      {
        LOBYTE(v9) = 0;
        while ( 1 )
        {
          v9 = (unsigned __int8)(v9 + 1);
          if ( v9 >= gPower_version_array_size )
            goto LABEL_9;
          if ( v7 == (unsigned __int8)APW_power_version[v9] )
            goto LABEL_16;
        }
      }
      goto LABEL_16;
    }
LABEL_9:
    printf("power version error, expect %04x, actual %04x\n", all_algo_system_info[2 * a1 + 3 + 2 * v3], v7);
    return -1;
  }
  v11 = *(_DWORD *)(g_config_info[0] + 60);
  if ( v11 <= 0 )
    goto LABEL_9;
  v12 = *(_DWORD **)(g_config_info[0] + 56);
  if ( v7 != *v12 )
  {
    do
    {
      v8 = (unsigned __int8)(v8 + 1);
      if ( v8 >= v11 )
        goto LABEL_9;
    }
    while ( v7 != v12[v8] );
  }
LABEL_16:
  v13 = &all_algo_system_info[2 * a1 + 2 * v3];
  puts("Power init:");
  v14 = *((_DWORD *)v13 + 5);
  printf("check_asic_voltage      = %d\n", v14);
  printf("working_voltage_raw     = %d\n", a2);
  if ( *((_BYTE *)v13 + 16) )
  {
    printf("Set check asic voltage %d\n", v14);
    v15 = (unsigned __int16)set_voltage_by_steps(v14, 1);
  }
  else
  {
    printf("Set working voltage %d\n", a2);
    v15 = (unsigned __int16)set_voltage_by_steps(a2, 1);
  }
  if ( v15 )
  {
    puts("set_voltage_by_steps error!");
    return -1;
  }
  else
  {
    if ( !is_gpio_exist(907) )
    {
      gpio_export(907);
      gpio_direction(907, 1);
    }
    gpio_write(907, 0);
    sleep(1u);
    return 0;
  }
}
