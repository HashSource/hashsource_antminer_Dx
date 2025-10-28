int __fastcall sub_B1478(int a1, void *a2)
{
  const char *v4; // r5
  size_t v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
  {
    v4 = *(const char **)(*(_DWORD *)(dword_195D14 + 4 * a1) + 47);
    v5 = strlen(v4);
    memcpy(a2, v4, v5);
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_miner_type", a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v7, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "get_miner_type",
      14,
      766,
      100,
      v7);
    return 0;
  }
}
