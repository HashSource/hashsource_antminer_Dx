int __fastcall power_init(int a1)
{
  double v1; // d0
  int v3; // r6
  unsigned __int16 v4; // r0
  int power_status; // r6
  int v7; // r8
  int v8; // r0
  int v9; // r7
  double v10; // d9
  int v11; // r10
  double v12; // d8
  int device_num; // r0
  double v14; // d14
  int v15; // r8
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r8
  bool v22; // zf
  unsigned int v23; // r7
  double v24; // d14
  int v25; // r3
  int v26; // r2
  int v27; // r12
  double v28; // d8
  int v29; // r8
  int chain_num; // r11
  int v31; // r6
  int i; // r9
  int j; // r5
  int v34; // r0
  int v35; // [sp+0h] [bp-1024h]
  int v36; // [sp+0h] [bp-1024h]
  int v37; // [sp+4h] [bp-1020h]
  int v38; // [sp+4h] [bp-1020h]
  int v39; // [sp+4h] [bp-1020h]
  int v40; // [sp+18h] [bp-100Ch]
  int v41; // [sp+18h] [bp-100Ch]
  char v42[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, 1290236, "power_init");
    V_UNLOCK();
    power_status = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      294,
      100,
      v42);
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, 1198464, 1290284);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      295,
      100,
      v42);
    return power_status;
  }
  v3 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v3) )
  {
    V_LOCK();
    v36 = v3;
    power_status = -1;
    logfmt_raw(v42, 0x1000u, 0, 1290288, v36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      301,
      100,
      v42);
    return power_status;
  }
  if ( !platform_is_pic_mcu_en() )
  {
    v4 = bitmain_set_watchdog(0);
    v3 = v4;
    if ( v4 )
    {
      V_LOCK();
      v35 = v3;
      power_status = 0;
      logfmt_raw(v42, 0x1000u, 0, 1290320, v35);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/power_api.c",
        149,
        "power_init",
        10,
        308,
        100,
        v42);
      return power_status;
    }
    sleep(1u);
  }
  bitmain_power_off_0();
  byte_165F30 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1290352);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    320,
    60,
    v42);
  sleep(0x3Cu);
  if ( !platform_is_pic_mcu_en() )
  {
    v28 = 0.0;
    v29 = 21;
    v41 = v3;
    chain_num = platform_get_chain_num();
    v31 = 1;
    for ( i = 100; ; i = 20 )
    {
      while ( 1 )
      {
        if ( chain_num > 0 )
        {
          for ( j = 0; j != chain_num; ++j )
          {
            v34 = j;
            read_feedback_voltage(v34);
            if ( v1 > v28 )
              v28 = v1;
          }
        }
        if ( v28 > 10.0 )
          break;
        if ( v28 <= 4.0 )
          goto LABEL_79;
        if ( i == 2 )
        {
          v3 = v41;
          sleep(1u);
          if ( v29 != 1 )
            goto LABEL_12;
          goto LABEL_77;
        }
        i = 2;
        sleep(1u);
        if ( !--v29 )
          goto LABEL_75;
LABEL_73:
        v31 = 1;
      }
      if ( i > 20 )
      {
        i = 20;
        sleep(1u);
        if ( !--v29 )
        {
LABEL_75:
          v3 = v41;
LABEL_77:
          V_LOCK();
          logfmt_raw(v42, 0x1000u, 0, 1290420);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/miner_util/power_api.c",
            149,
            "wait_for_psu_discharge",
            22,
            187,
            100,
            v42);
          break;
        }
        goto LABEL_73;
      }
      sleep(1u);
      if ( !--v29 )
        goto LABEL_75;
      if ( ++v31 > 19 )
      {
LABEL_79:
        v3 = v41;
        break;
      }
    }
  }
LABEL_12:
  v7 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1290460, v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    329,
    60,
    v42);
  byte_165F31 = 0;
  dword_165F34 = 0;
  dword_165F38 = 0;
  byte_165F18 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_165F24 = opt_custom_voltage;
  byte_165F1C = platform_is_adjustable_power();
  byte_165F28 = platform_is_check_asic_voltage_enable();
  dword_165F2C = platfrom_get_check_asic_voltage();
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1290492);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    348,
    40,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_165F34);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    349,
    40,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_165F24);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    350,
    40,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_165F28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    351,
    40,
    v42);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_165F2C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    352,
    40,
    v42);
  if ( byte_165F1C && byte_165F28 )
    v8 = set_check_asic_voltage(0);
  else
    v8 = set_working_voltage(0);
  if ( v8 )
  {
    V_LOCK();
    power_status = -1;
    logfmt_raw(v42, 0x1000u, 0, 1290620);
    V_UNLOCK();
    v27 = 360;
LABEL_50:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      v27,
      100,
      v42);
    return power_status;
  }
  bitmain_power_on();
  byte_165F30 = 1;
  sleep(1u);
  if ( byte_165F18 )
    v9 = dword_165F34;
  else
    v9 = sub_4FC30();
  v10 = (double)v9;
  v11 = 3;
  v12 = (double)v9 * 0.75 / 100.0;
  while ( 1 )
  {
    sleep(1u);
    if ( !platform_is_pic_mcu_en() )
      break;
    device_num = query_device_num();
    v14 = 0.0;
    v40 = device_num;
    if ( device_num > 0 )
    {
      v15 = 0;
      do
      {
        v16 = dev_ctrl(device_num);
        v17 = (*(int (__fastcall **)(int))(v16 + 48))(v15);
        read_feedback_voltage(v17);
        v18 = V_LOCK();
        v19 = dev_ctrl(v18);
        v20 = (*(int (__fastcall **)(int))(v19 + 48))(v15);
        logfmt_raw(v42, 0x1000u, 0, 1290648, v20, v37, v1);
        V_UNLOCK();
        device_num = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_godminer-new/miner_util/power_api.c",
                       149,
                       "get_minimal_feedback_voltage",
                       28,
                       69,
                       40,
                       v42);
        if ( v1 > 0.1 )
        {
          if ( v1 >= v14 )
          {
            if ( v14 < 0.1 )
              v14 = v1;
          }
          else
          {
            v14 = v1;
          }
        }
        ++v15;
      }
      while ( v40 != v15 );
    }
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, 1290684, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "get_minimal_feedback_voltage",
      28,
      74,
      20,
      v42);
    if ( v12 <= v14 )
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, 1290808, v9, v38, v14, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/power_api.c",
        149,
        "check_feedback_voltage",
        22,
        95,
        80,
        v42);
      goto LABEL_33;
    }
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, 1290712, v9, v38, v14, v12);
    V_UNLOCK();
    v25 = 80;
    v26 = 91;
LABEL_48:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "check_feedback_voltage",
      22,
      v26,
      v25,
      v42);
    if ( !--v11 )
    {
      V_LOCK();
      power_status = -1;
      logfmt_raw(v42, 0x1000u, 0, 1291080);
      V_UNLOCK();
      v27 = 383;
      goto LABEL_50;
    }
  }
  read_feedback_voltage(0);
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1290888, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "check_feedback_voltage",
    22,
    100,
    20,
    v42);
  if ( v1 >= 0.0 )
  {
    v24 = v1 * 100.0;
    if ( v1 * 100.0 <= v10 * 1.1 && v24 >= v10 * 0.9 )
      goto LABEL_33;
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, 1290952, v9, v39, v24);
    V_UNLOCK();
    v25 = 100;
    v26 = 107;
    goto LABEL_48;
  }
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1290912);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "check_feedback_voltage",
    22,
    102,
    80,
    v42);
LABEL_33:
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1291112);
  V_UNLOCK();
  LOWORD(v21) = -19716;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    388,
    40,
    v42);
  v22 = v3 == 113;
  if ( v3 != 113 )
    v22 = v3 == 116;
  HIWORD(v21) = 19;
  v23 = 0;
  if ( !v22 )
  {
    while ( 1 )
    {
      power_status = bitmain_get_power_status();
      ++v23;
      if ( !power_status )
        break;
      if ( v23 == 5 * (v23 / 5) )
      {
        V_LOCK();
        logfmt_raw(v42, 0x1000u, v23 % 5, v21, power_status);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          400,
          100,
          v42);
      }
      sleep(3u);
      if ( v23 == 20 )
        goto LABEL_43;
    }
  }
  power_status = 0;
LABEL_43:
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, 1291048);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    407,
    40,
    v42);
  return power_status;
}
