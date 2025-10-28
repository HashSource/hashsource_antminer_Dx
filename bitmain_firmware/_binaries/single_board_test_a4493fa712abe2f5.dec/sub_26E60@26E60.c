int __fastcall sub_26E60(int a1, void *a2)
{
  const char *v4; // r5
  size_t v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_12C0EC && *(_BYTE *)(dword_12C0EC + 80) )
  {
    v4 = *(const char **)(*(_DWORD *)(dword_12C0EC + 4 * a1) + 47);
    v5 = strlen(v4);
    memcpy(a2, v4, v5);
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_miner_type", a1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v7, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "get_miner_type",
      14,
      766,
      100,
      v7);
    return 0;
  }
}
