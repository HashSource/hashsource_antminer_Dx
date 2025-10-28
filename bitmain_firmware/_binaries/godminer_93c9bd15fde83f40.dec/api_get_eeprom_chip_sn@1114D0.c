int __fastcall api_get_eeprom_chip_sn(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  v2 = total_chain[a1 + 128];
  if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
    return *(_DWORD *)(*(_DWORD *)(dword_1AA6AC + 4 * v2) + 3);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_sn", v2);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "get_chip_sn",
    11,
    759,
    100,
    v4);
  return 0;
}
