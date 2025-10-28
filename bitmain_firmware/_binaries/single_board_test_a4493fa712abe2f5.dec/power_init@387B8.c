int power_init()
{
  int v0; // r5
  unsigned __int16 v1; // r6
  int v2; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v0 = (unsigned __int8)byte_12C0F4;
  if ( !byte_12C0F4 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v5, 0x1000u, v0, "%s, current algo donot use adjustable power!", "power_init");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 172, 60, v5);
    return v0;
  }
  v1 = bitmain_power_version();
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "power type version: 0x%04x", v1);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 177, 60, v5);
  if ( (unsigned __int16)word_12C0F6 != v1 )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_12C0F6, v1);
    V_UNLOCK();
    zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 181, 60, v5);
    return -1;
  }
  byte_12C108 = 0;
  dword_12C10C = 0;
  dword_12C110 = 0;
  byte_12C0F0 = 1;
  if ( opt_custom_voltage_swith || dword_12C0EC && *(_BYTE *)(dword_12C0EC + 80) )
  {
    dword_12C0FC = opt_custom_voltage;
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "is_eeprom_loaded",
      16,
      692,
      20,
      v5);
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "Power init:");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 194, 60, v5);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "current_voltage_raw     = %d", dword_12C10C);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 195, 60, v5);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "working_voltage_raw     = %d", dword_12C0FC);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 196, 60, v5);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_12C100);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 197, 60, v5);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_12C104);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 198, 60, v5);
  if ( byte_12C0F4 )
  {
    v2 = (unsigned __int8)byte_12C0F0;
    if ( byte_12C100 )
    {
      if ( !(unsigned __int16)set_voltage_by_steps(dword_12C104, (unsigned __int8)byte_12C0F0) )
        goto LABEL_8;
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
        60,
        "set_check_asic_voltage",
        22,
        295,
        60,
        v5);
LABEL_13:
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "set_voltage_by_steps error!");
      V_UNLOCK();
      zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c", 60, "power_init", 10, 206, 60, v5);
      return -1;
    }
  }
  else
  {
    v2 = (unsigned __int8)byte_12C0F0;
  }
  if ( (unsigned __int16)set_voltage_by_steps(dword_12C0FC, v2) )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s error!", "set_working_voltage");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
      60,
      "set_working_voltage",
      19,
      277,
      60,
      v5);
    goto LABEL_13;
  }
LABEL_8:
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  gpio_write(907, 0);
  sleep(1u);
  return 0;
}
