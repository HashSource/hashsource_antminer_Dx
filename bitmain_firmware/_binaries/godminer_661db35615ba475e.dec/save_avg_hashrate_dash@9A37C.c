int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  unsigned int v3; // r0
  int result; // r0
  unsigned int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r0
  int v8; // [sp+4h] [bp-1814h]
  unsigned __int8 v9; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v10; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v12[4096]; // [sp+818h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 124);
  v10 = 0;
  v9 = 0;
  result = sub_13479C(v3, 195, &v10);
  if ( v10 != 165 )
  {
    if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v12, 0x1000u, 0, "avg hashrate to save: %d, lifetime_avg: %f", (int)(v1 * 0.000000001), v8, v1);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        733,
        20,
        v12);
      v5 = *(_DWORD *)(a1 + 124);
      v9 = (unsigned __int16)(int)(v1 * 0.000000001) >> 8;
      eeprom_write(v5, 196, &v9, 1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate high %02x to addr %d", v9, 196);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        736,
        20,
        v12);
      v6 = *(_DWORD *)(a1 + 124);
      v9 = (int)(v1 * 0.000000001);
      eeprom_write(v6, 197, &v9, 1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate low %02x to addr %d", v9, 197);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        739,
        20,
        v12);
      v7 = *(_DWORD *)(a1 + 124);
      v9 = -91;
      eeprom_write(v7, 195, &v9, 1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v12, 0x1000u, 0, "save hashrate marker addr %d", v9, 195);
      pthread_mutex_unlock(&stru_197BB8);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_dash/backend_dash.c",
                 156,
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
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v12, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
               163,
               "is_eeprom_loaded",
               16,
               692,
               20,
               v12);
    }
  }
  return result;
}
