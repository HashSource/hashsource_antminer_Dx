int __fastcall sub_97BBC(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
  {
    sprintf(
      s,
      "%x%x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_1AA6AC + 4 * a1) + 29),
      *(unsigned __int8 *)(*(_DWORD *)(dword_1AA6AC + 4 * a1) + 30));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_bom_version", a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v4, 0x1000u, 0, sa);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "get_bom_version",
      15,
      780,
      100,
      v4);
    return 255;
  }
}
