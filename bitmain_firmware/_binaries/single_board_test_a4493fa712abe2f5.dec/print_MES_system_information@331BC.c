int print_MES_system_information()
{
  int result; // r0
  int v1; // r11
  int v2; // r8
  int v3; // r6
  int v4; // r5
  int *v5; // r7
  unsigned int v6; // r4
  int v7; // t1
  unsigned int v8; // r3
  _DWORD *v9; // r3
  _DWORD *v10; // r4
  int v11; // r10
  int v12; // r2
  _DWORD *v13; // r4
  int v14; // r10
  int v15; // r2
  int v16; // r4
  int v17; // r5
  _DWORD *v18; // r4
  int v19; // r10
  char *v20; // r10
  _DWORD *i; // r6
  _DWORD *v22; // r5
  unsigned int v23; // r4
  int v24; // t1
  unsigned int v25; // [sp+0h] [bp-54h]
  char *v26; // [sp+14h] [bp-40h]
  int v27; // [sp+1Ch] [bp-38h]
  _DWORD *v28; // [sp+20h] [bp-34h]
  int v29; // [sp+34h] [bp-20h]
  int v30; // [sp+38h] [bp-1Ch]
  int v31; // [sp+3Ch] [bp-18h]
  int v32; // [sp+40h] [bp-14h]
  int v33; // [sp+44h] [bp-10h]

  printf(
    "MES system paticular config information version is: %s\n",
    (const char *)(Mes_System_Config_File_Information + 28));
  printf(
    "MES system paticular config information code is: %s\n",
    (const char *)(Mes_System_Config_File_Information + 52));
  result = printf(
             "MES system paticular config information msg is: %s\n",
             (const char *)(Mes_System_Config_File_Information + 76));
  v28 = *(_DWORD **)(Mes_System_Config_File_Information + 100);
  if ( v28 )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v1 = 0;
    v33 = 0;
    v2 = 0;
    v26 = 0;
    do
    {
      result = printf("configs[%d]->miner_type: %s\n", v1, v28);
      v3 = v28[6];
      if ( v3 )
      {
        v4 = v33;
        do
        {
          printf("configs[%d]->hw_info[%d]->id: %d\n", v1, v4, *(_DWORD *)v3);
          printf("configs[%d]->hw_info[%d]->board_name: %s\n", v1, v4, v3 + 4);
          printf("configs[%d]->hw_info[%d]->asic_type: %s\n", v1, v4, (const char *)(v3 + 28));
          printf("configs[%d]->hw_info[%d]->asic_num: %d\n", v1, v4, *(_DWORD *)(v3 + 52));
          printf("configs[%d]->hw_info[%d]->voltage_domain: %d\n", v1, v4, *(_DWORD *)(v3 + 56));
          result = printf("configs[%d]->hw_info[%d]->asic_num_per_voltage_domain: %d\n", v1, v4, *(_DWORD *)(v3 + 60));
          if ( gPower_version_array_size )
          {
            v5 = (int *)(v3 + 64);
            v6 = 0;
            do
            {
              v7 = *v5++;
              v8 = v6++;
              result = printf("configs[%d]->hw_info[%d]->power_version[%d]: %d\n", v1, v4, v8, v7);
            }
            while ( gPower_version_array_size > v6 );
          }
          v3 = *(_DWORD *)(v3 + 96);
          ++v4;
        }
        while ( v3 );
        v33 = v4;
      }
      v9 = v28;
      v10 = (_DWORD *)v28[7];
      if ( v10 )
      {
        v11 = v32;
        do
        {
          printf("configs[%d]->rule->pattern[%d]->id: %d\n", v1, v11, *v10);
          printf("configs[%d]->rule->pattern[%d]->pattern_number: %d\n", v1, v11, v10[1]);
          printf("configs[%d]->rule->pattern[%d]->invalid_core_num: %d\n", v1, v11, v10[2]);
          printf("configs[%d]->rule->pattern[%d]->most_hw_num: %d\n", v1, v11, v10[3]);
          printf("configs[%d]->rule->pattern[%d]->least_nonce_per_core: %d\n", v1, v11, v10[4]);
          printf("configs[%d]->rule->pattern[%d]->nonce_rate: %d\n", v1, v11, v10[5]);
          printf("configs[%d]->rule->pattern[%d]->min_nonce_rate_per_asic: %d\n", v1, v11, v10[6]);
          v12 = v11++;
          result = printf("configs[%d]->rule->pattern[%d]->midstate_number: %d\n", v1, v12, v10[7]);
          v10 = (_DWORD *)v10[8];
        }
        while ( v10 );
        v9 = v28;
        v32 = v11;
      }
      v13 = (_DWORD *)v9[8];
      if ( v13 )
      {
        v14 = v31;
        do
        {
          printf("configs[%d]->rule->asic_reg[%d]->id: %d\n", v1, v14, *v13);
          printf("configs[%d]->rule->asic_reg[%d]->ccdly_sel: %d\n", v1, v14, v13[1]);
          printf("configs[%d]->rule->asic_reg[%d]->pwth_sel: %d\n", v1, v14, v13[2]);
          printf("configs[%d]->rule->asic_reg[%d]->swpf_mode: %d\n", v1, v14, v13[3]);
          printf("configs[%d]->rule->asic_reg[%d]->pulse_mode: %d\n", v1, v14, v13[4]);
          printf("configs[%d]->rule->asic_reg[%d]->clk_sel: %d\n", v1, v14, v13[5]);
          printf("configs[%d]->rule->asic_reg[%d]->ro_relay_en: %d\n", v1, v14, v13[6]);
          printf("configs[%d]->rule->asic_reg[%d]->co_relay_en: %d\n", v1, v14, v13[7]);
          v15 = v14++;
          result = printf("configs[%d]->rule->asic_reg[%d]->diode_vdd_mux_sel: %d\n", v1, v15, v13[8]);
          v13 = (_DWORD *)v13[9];
        }
        while ( v13 );
        v9 = v28;
        v31 = v14;
      }
      v16 = v9[9];
      if ( v16 )
      {
        v17 = v30;
        do
        {
          printf("configs[%d]->rule->test_method[%d]->id: %d\n", v1, v17, *(_DWORD *)v16);
          result = printf("configs[%d]->rule->test_method[%d]->method: %s\n", v1, v17, (const char *)(v16 + 4));
          v16 = *(_DWORD *)(v16 + 28);
          ++v17;
        }
        while ( v16 );
        v9 = v28;
        v30 = v17;
      }
      v18 = (_DWORD *)v9[10];
      if ( v18 )
      {
        v19 = v29;
        do
        {
          printf("configs[%d]->rule->test_loop[%d]->id: %d\n", v1, v19, *v18);
          printf("configs[%d]->rule->test_loop[%d]->frequency: %d\n", v1, v19, v18[1]);
          result = printf("configs[%d]->rule->test_loop[%d]->voltage: %d\n", v1, v19, v18[2]);
          v18 = (_DWORD *)v18[3];
          ++v19;
        }
        while ( v18 );
        v9 = v28;
        v29 = v19;
      }
      v27 = v9[11];
      if ( v27 )
      {
        v20 = v26;
        do
        {
          printf("configs[%d]->test_config[%d]->hardware_version: %s\n", v1, v20, v27);
          printf("configs[%d]->test_config[%d]->bom_version: %s\n", v1, v20, v27 + 24);
          printf("configs[%d]->test_config[%d]->chip_technology: %s\n", v1, v20, v27 + 48);
          printf("configs[%d]->test_config[%d]->ft_vesrion: %s\n", v1, v20, (const char *)(v27 + 72));
          result = printf("configs[%d]->test_config[%d]->bin: %d\n", v1, v20, *(_DWORD *)(v27 + 96));
          for ( i = *(_DWORD **)(v27 + 100); i; ++v2 )
          {
            printf("configs[%d]->test_config[%d]->data[%d]->version: %s\n", v1, v20, v2, i);
            printf("configs[%d]->test_config[%d]->data[%d]->pattern_id: %d\n", v1, v20, v2, i[6]);
            printf("configs[%d]->test_config[%d]->data[%d]->asic_reg_id: %d\n", v1, v20, v2, i[7]);
            printf("configs[%d]->test_config[%d]->data[%d]->test_method_id: %d\n", v1, v20, v2, i[8]);
            printf("configs[%d]->test_config[%d]->data[%d]->voltage_accuracy: %d\n", v1, v20, v2, i[9]);
            printf("configs[%d]->test_config[%d]->data[%d]->fan_speed: %d\n", v1, v20, v2, i[10]);
            result = printf("configs[%d]->test_config[%d]->data[%d]->pre_open_core_voltage: %d\n", v1, v20, v2, i[22]);
            if ( gTest_loop_id_array_size )
            {
              v22 = i + 10;
              v23 = 0;
              do
              {
                v24 = v22[1];
                ++v22;
                v25 = v23++;
                result = printf("configs[%d]->test_config[%d]->data[%d]->test_loop_id[%d]: %d\n", v1, v20, v2, v25, v24);
              }
              while ( gTest_loop_id_array_size > v23 );
            }
            i = (_DWORD *)i[23];
          }
          ++v20;
          v27 = *(_DWORD *)(v27 + 104);
        }
        while ( v27 );
        v26 = v20;
      }
      ++v1;
      v28 = (_DWORD *)v28[12];
    }
    while ( v28 );
  }
  return result;
}
