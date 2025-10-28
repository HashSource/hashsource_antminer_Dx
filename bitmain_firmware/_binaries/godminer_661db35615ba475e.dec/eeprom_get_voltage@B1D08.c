int __fastcall eeprom_get_voltage(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * a1) + 35);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      strcpy(s, "voltage level not match");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v5, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_get_voltage",
        18,
        627,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "No work mode voltage, chain = %d.\n", a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_get_voltage",
      18,
      616,
      100,
      v5);
    return -1;
  }
  return result;
}
