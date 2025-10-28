int __fastcall sub_26F2C(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_12C0EC && *(_BYTE *)(dword_12C0EC + 80) )
  {
    sprintf(
      s,
      "%x%x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_12C0EC + 4 * a1) + 29),
      *(unsigned __int8 *)(*(_DWORD *)(dword_12C0EC + 4 * a1) + 30));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_bom_version", a1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v4, 0x1000u, 0, sa);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "get_bom_version",
      15,
      754,
      100,
      v4);
    return 255;
  }
}
