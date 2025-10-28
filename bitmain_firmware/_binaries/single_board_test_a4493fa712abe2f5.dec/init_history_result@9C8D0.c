int __fastcall init_history_result(int c)
{
  _BYTE *v2; // r5
  int result; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r2

  if ( !c )
    memset(gHistory_Result, 0, (size_t)&unk_288ED0);
  v2 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * c];
  v2[1] = 1;
  v2[2] = 1;
  v2[4] = 1;
  v2[6] = 1;
  v2[5] = 1;
  *v2 = 1;
  memset(&gHistory_Result[((_DWORD)&loc_40E46 + 2) * c + 265520], -1, 0x100u);
  memset(&gHistory_Result[((_DWORD)&loc_40E46 + 2) * c + 263216], -1, 0x400u);
  result = 255;
  v4 = g_config_info[0];
  v2 += 0x40000;
  gHistory_Result[((_DWORD)&loc_40E46 + 2) * c + 265796] = -1;
  *((_DWORD *)v2 + 267) = 0;
  v5 = *(_DWORD *)(v4 + 32);
  *((_DWORD *)v2 + 266) = 0;
  v6 = c + 1;
  if ( v5 )
    v6 = *(_DWORD *)(MES2Local_Config_Information + 16 * c + 224);
  *(_DWORD *)&gHistory_Result[265800 * c + 16] = v6;
  return result;
}
