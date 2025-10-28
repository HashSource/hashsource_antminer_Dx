int __fastcall sub_9B668(int a1)
{
  _BYTE *v2; // r6
  int v3; // r4
  _DWORD *v4; // r3
  _BYTE *v5; // r2
  int v6; // r1
  int result; // r0
  int v8; // r1
  int (*v9)(); // r2
  int (*v10)(); // r1
  _BYTE *v11; // r2
  int v12; // r4
  int v13; // r3
  int v14; // r7
  int v15; // r12
  int v16; // lr
  int v17; // r0
  int v18; // r2
  int v19; // r9
  int v20; // r1
  int v21; // r3
  int v22; // r2
  int v23; // r3
  _DWORD v24[2]; // [sp+4h] [bp-8h] BYREF

  g_patten_offset = 0;
  memset(&g_pcba_info, 0, 0x78u);
  dword_3B57B0 = a1;
  g_pcba_info = 1;
  byte_3B57B4 = 1;
  if ( !a1 )
    memset(gHistory_Result, 0, (size_t)&unk_288ED0);
  v2 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1];
  v2[1] = 1;
  v2[2] = 1;
  v2[4] = 1;
  v2[6] = 1;
  v2[5] = 1;
  *v2 = 1;
  memset(&gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 265520], -1, 0x100u);
  v3 = a1 + 1;
  memset(&gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 263216], -1, 0x400u);
  v4 = (_DWORD *)g_config_info[0];
  v5 = v2 + 264192;
  v2 += 0x40000;
  v5[1604] = -1;
  v6 = v4[8];
  *((_DWORD *)v2 + 267) = 0;
  *((_DWORD *)v2 + 266) = 0;
  if ( v6 )
    v3 = *(_DWORD *)(MES2Local_Config_Information + 16 * a1 + 224);
  result = v4[2];
  v8 = *(_DWORD *)(result + 4);
  *(_DWORD *)&gHistory_Result[265800 * a1 + 16] = v3;
  switch ( v8 )
  {
    case 2:
      off_3B57BC = pcba_ckb_recv;
      off_3B57C0 = pcba_ckb_send;
      off_3B57C4 = (int (__fastcall *)(_DWORD))pcba_is_ckb_asic_valid;
      off_3B57C8 = (int (__fastcall *)(_DWORD))pcba_calc_ckb_core_num;
      dword_3B57CC = (int)pcba_statistic_ckb_pattern_test_results;
      off_3B57D0 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_ckb_temperature;
      break;
    case 1:
      off_3B57BC = pcba_vbk_recv;
      off_3B57C0 = pcba_vbk_send;
      off_3B57C4 = (int (__fastcall *)(_DWORD))pcba_is_vbk_asic_valid;
      v9 = (int (*)())pcba_calc_vbk_core_num;
      v10 = pcba_statistic_vbk_pattern_test_results;
      goto LABEL_9;
    case 0:
      off_3B57BC = pcba_grin29_recv;
      off_3B57C0 = pcba_grin29_send;
      off_3B57C4 = (int (__fastcall *)(_DWORD))pcba_is_grin29_asic_valid;
      v9 = pcba_calc_grin29_core_num;
      v10 = pcba_statistic_grin29_pattern_test_results;
LABEL_9:
      off_3B57C8 = (int (__fastcall *)(_DWORD))v9;
      dword_3B57CC = (int)v10;
      off_3B57D0 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_fpga_temperature;
      break;
    case 6:
      off_3B57BC = pcba_ltc_recv;
      off_3B57C0 = pcba_ltc_send;
      off_3B57C4 = (int (__fastcall *)(_DWORD))pcba_is_ltc_asic_valid;
      off_3B57C8 = (int (__fastcall *)(_DWORD))pcba_calc_ltc_core_num;
      dword_3B57CC = (int)pcba_statistic_ltc_pattern_test_results;
      off_3B57D0 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_ltc_temperature;
      *(_DWORD *)(dword_12C0E0 + 52) = pcba_check_nonce_ltc;
      break;
    default:
      if ( v8 != 7 )
      {
        printf("unknow algo type %d\n", v8);
        exit(1);
      }
      off_3B57BC = pcba_dash_recv;
      off_3B57C0 = pcba_dash_send;
      off_3B57C4 = (int (__fastcall *)(_DWORD))pcba_is_dash_asic_valid;
      off_3B57C8 = (int (__fastcall *)(_DWORD))pcba_calc_dash_core_num;
      dword_3B57CC = (int)pcba_statistic_dash_pattern_test_results;
      off_3B57D0 = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))pcba_read_dash_temperature;
      *(_DWORD *)(dword_12C0E0 + 52) = pcba_check_nonce_dash;
      break;
  }
  v11 = (_BYTE *)v4[5];
  if ( *v11 == 80 && v11[1] == 84 && v11[2] == 50 )
  {
    v12 = (unsigned __int8)v11[3];
    if ( !v11[3] )
    {
      v13 = v4[10];
      v14 = *(_DWORD *)(result + 8);
      v24[0] = (unsigned __int8)v11[3];
      if ( v13 > 0 )
      {
        do
        {
          if ( off_3B57C4(v24) && (v15 = off_3B57C8(v24), v15 > 0) )
          {
            v16 = g_config_info[0];
            v17 = v24[0];
            v18 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 16);
            if ( v18 > 0 )
            {
              v19 = 104 * v18;
              v20 = 0;
              v21 = v14 + v15 * v18 * 104 * v24[0];
              do
              {
                v22 = v19 + v21;
                do
                {
                  *(_DWORD *)(v21 + 100) = v12;
                  v21 += 104;
                }
                while ( v21 != v22 );
                ++v20;
              }
              while ( v15 != v20 );
            }
          }
          else
          {
            v17 = v24[0];
            v16 = g_config_info[0];
          }
          v23 = *(_DWORD *)(v16 + 40);
          result = v17 + 1;
          v24[0] = result;
        }
        while ( result < v23 );
      }
    }
  }
  return result;
}
