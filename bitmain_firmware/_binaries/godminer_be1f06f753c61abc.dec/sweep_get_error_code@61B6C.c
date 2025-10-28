int __fastcall sweep_get_error_code(_DWORD *a1)
{
  int v2; // r9
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r11
  _BYTE *v8; // r8
  _BYTE *v9; // r9
  int i; // r7
  _BYTE *v11; // r9
  int j; // r7
  _BYTE *v13; // r7
  int k; // r9
  int m; // r7
  time_t v17; // [sp+0h] [bp-30Ch]
  time_t v18; // [sp+4h] [bp-308h]
  time_t v19; // [sp+8h] [bp-304h]
  time_t v20; // [sp+Ch] [bp-300h]
  time_t v21; // [sp+10h] [bp-2FCh]
  time_t v22; // [sp+14h] [bp-2F8h]
  char s[256]; // [sp+18h] [bp-2F4h] BYREF
  _BYTE dest[500]; // [sp+118h] [bp-1F4h] BYREF

  memcpy(dest, &byte_196BD0, 0x1F0u);
  v2 = (unsigned __int8)byte_196BD0;
  v3 = (unsigned __int8)byte_196BD8;
  v19 = dword_196BD4;
  v4 = (unsigned __int8)byte_196BE0;
  v5 = (unsigned __int8)byte_196DA8;
  v20 = dword_196BDC;
  v6 = (unsigned __int8)byte_196DB0;
  v7 = (unsigned __int8)byte_196DB8;
  v18 = dword_196BE4;
  v21 = dword_196DAC;
  v22 = dword_196DB4;
  v17 = dword_196DBC;
  pthread_mutex_lock(&miner_6060info_lock);
  if ( v2 )
    set_json_info_by_errorcode_and_time(a1, "P:1", v19);
  if ( v3 )
    set_json_info_by_errorcode_and_time(a1, "P:2", v20);
  if ( v4 )
    set_json_info_by_errorcode_and_time(a1, "J:6", v18);
  v8 = dest;
  v9 = dest;
  for ( i = 0; i != 8; ++i )
  {
    while ( !v9[24] )
    {
      ++i;
      v9 += 8;
      if ( i == 8 )
        goto LABEL_11;
    }
    snprintf(s, 0x100u, "F%d:1", i);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v9 + 7));
    v9 += 8;
  }
LABEL_11:
  v11 = dest;
  for ( j = 0; j != 16; ++j )
  {
    while ( !v11[88] )
    {
      ++j;
      v11 += 8;
      if ( j == 16 )
        goto LABEL_15;
    }
    snprintf(s, 0x100u, "R%d:1", j);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v11 + 23));
    v11 += 8;
  }
LABEL_15:
  v13 = dest;
  for ( k = 0; k != 16; ++k )
  {
    while ( !v13[216] )
    {
      ++k;
      v13 += 8;
      if ( k == 16 )
        goto LABEL_19;
    }
    snprintf(s, 0x100u, "J%d:1", k);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v13 + 55));
    v13 += 8;
  }
LABEL_19:
  for ( m = 0; m != 16; ++m )
  {
    while ( !v8[344] )
    {
      ++m;
      v8 += 8;
      if ( m == 16 )
        goto LABEL_23;
    }
    snprintf(s, 0x100u, "J%d:2", m);
    set_json_info_by_errorcode_and_time(a1, s, *((_DWORD *)v8 + 87));
    v8 += 8;
  }
LABEL_23:
  if ( v5 )
    set_json_info_by_errorcode_and_time(a1, "N:4", v21);
  if ( v6 )
    set_json_info_by_errorcode_and_time(a1, "M:1", v22);
  if ( v7 )
    set_json_info_by_errorcode_and_time(a1, "J:8", v17);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
