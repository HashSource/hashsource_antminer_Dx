int power_init()
{
  int v0; // r5
  unsigned __int16 v1; // r7
  int v2; // r1
  int v4; // r0
  int v5; // lr
  int v6; // r2
  int v7; // r12
  int v8; // r1
  const char *v9; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_1A4600;
  if ( !byte_1A4600 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v11, 0x1000u, v0, "%s, current algo donot use adjustable power!", "power_init");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      177,
      60,
      v11);
    return v0;
  }
  v1 = bitmain_power_version();
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "power type version: 0x%04x", v1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    182,
    60,
    v11);
  if ( (unsigned __int16)word_1A4602 != v1 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v11, 0x1000u, 0, "power version error, expect %04x, actual %04x", (unsigned __int16)word_1A4602, v1);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      186,
      60,
      v11);
    return -1;
  }
  if ( (unsigned __int16)bitmain_power_fw_version() > 0x14u )
    get_power_voltage_calibration_data();
  byte_1A4614 = 0;
  dword_1A4618 = 0;
  dword_1A461C = 0;
  byte_1A45FC = 1;
  if ( opt_custom_voltage_swith || dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
  {
    dword_1A4608 = opt_custom_voltage;
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "is_eeprom_loaded",
      16,
      718,
      20,
      v11);
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "Power init:");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    204,
    60,
    v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "current_voltage_raw     = %d", dword_1A4618);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    205,
    60,
    v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "working_voltage_raw     = %d", dword_1A4608);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    206,
    60,
    v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_enable     = %d", (unsigned __int8)byte_1A460C);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    207,
    60,
    v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_raw  = %d", dword_1A4610);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "power_init",
    10,
    208,
    60,
    v11);
  if ( byte_1A4600 )
  {
    v2 = (unsigned __int8)byte_1A45FC;
    if ( byte_1A460C )
    {
      if ( !set_voltage(dword_1A4610, (unsigned __int8)byte_1A45FC) )
        goto LABEL_10;
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
      V_UNLOCK();
      v4 = g_zc;
      v5 = 100;
      v6 = 318;
      v7 = 22;
      LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp"
                                     "/release/build/godminer-origin_master/miner_util/power_api.c";
      v9 = "set_check_asic_voltage";
LABEL_15:
      HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rel"
                                 "ease/build/godminer-origin_master/miner_util/power_api.c" >> 16;
      zlog(v4, v8, 143, v9, v7, v6, v5, v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "set_voltage_by_steps error!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "power_init",
        10,
        216,
        60,
        v11);
      return -1;
    }
  }
  else
  {
    v2 = (unsigned __int8)byte_1A45FC;
  }
  if ( (unsigned __int16)set_voltage(dword_1A4608, v2) )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s error!", "set_working_voltage");
    V_UNLOCK();
    v4 = g_zc;
    v5 = 60;
    v6 = 296;
    v7 = 19;
    LOWORD(v8) = 28916;
    v9 = "set_working_voltage";
    goto LABEL_15;
  }
LABEL_10:
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  gpio_write(907, 0);
  sleep(1u);
  return 0;
}
