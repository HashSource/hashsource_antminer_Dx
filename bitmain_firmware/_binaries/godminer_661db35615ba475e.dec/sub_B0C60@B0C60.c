int __fastcall sub_B0C60(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(
    s,
    0x800u,
    "%s: g_eeprom_data is not ready, chain = %d.\n",
    "api_get_eeprom_chain_load_state",
    dword_195CAC[a1 + 4]);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "api_get_eeprom_chain_load_state",
    31,
    820,
    100,
    v3);
  return -1;
}
