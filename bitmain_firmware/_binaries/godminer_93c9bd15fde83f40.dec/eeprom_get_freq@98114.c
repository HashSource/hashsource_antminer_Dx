int __fastcall eeprom_get_freq(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * a1) + 37);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      strcpy(s, "freq level not match");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v5, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_get_freq",
        15,
        692,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "No work mode freq, chain = %d.\n", a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_get_freq",
      15,
      681,
      100,
      v5);
    return -1;
  }
  return result;
}
