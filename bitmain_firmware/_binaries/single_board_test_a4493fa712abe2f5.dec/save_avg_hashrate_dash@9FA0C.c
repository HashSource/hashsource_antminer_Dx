int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  unsigned int v3; // r0
  int result; // r0
  unsigned int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r0
  int v8; // [sp+4h] [bp-17FCh]
  unsigned __int8 v9; // [sp+16h] [bp-17EAh] BYREF
  unsigned __int8 v10; // [sp+17h] [bp-17E9h] BYREF
  char s[2048]; // [sp+18h] [bp-17E8h] BYREF
  char v12[4072]; // [sp+818h] [bp-FE8h] BYREF

  v3 = *(_DWORD *)(a1 + 124);
  v10 = 0;
  v9 = 0;
  result = eeprom_read(v3, 0xC3u, (int)&v10, 1);
  if ( v10 != 165 )
  {
    if ( dword_12C0EC && *(_BYTE *)(dword_12C0EC + 80) )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, "avg hashrate to save: %d, lifetime_avg: %f", (int)(v1 * 0.000000001), v8, v1);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
        73,
        "save_avg_hashrate_dash",
        22,
        733,
        20,
        v12);
      v5 = *(_DWORD *)(a1 + 124);
      v9 = (unsigned __int16)(int)(v1 * 0.000000001) >> 8;
      eeprom_write(v5, 196, &v9, 1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate high %02x to addr %d", v9, 196);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
        73,
        "save_avg_hashrate_dash",
        22,
        736,
        20,
        v12);
      v6 = *(_DWORD *)(a1 + 124);
      v9 = (int)(v1 * 0.000000001);
      eeprom_write(v6, 197, &v9, 1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate low %02x to addr %d", v9, 197);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
        73,
        "save_avg_hashrate_dash",
        22,
        739,
        20,
        v12);
      v7 = *(_DWORD *)(a1 + 124);
      v9 = -91;
      eeprom_write(v7, 195, &v9, 1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate marker addr %d", v9, 195);
      pthread_mutex_unlock(&stru_3B526C);
      result = zlog(
                 g_zc,
                 "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
                 73,
                 "save_avg_hashrate_dash",
                 22,
                 742,
                 20,
                 v12);
      *(double *)(a1 + 296) = v1;
      *(_BYTE *)(a1 + 294) = 1;
    }
    else
    {
      snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      return zlog(
               g_zc,
               "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
               80,
               "is_eeprom_loaded",
               16,
               692,
               20,
               v12);
    }
  }
  return result;
}
