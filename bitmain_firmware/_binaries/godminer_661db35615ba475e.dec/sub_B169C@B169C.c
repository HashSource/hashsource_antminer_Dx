int __fastcall sub_B169C(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
  {
    sprintf(
      s,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_195D14 + 4 * a1) + 27),
      *(unsigned __int8 *)(*(_DWORD *)(dword_195D14 + 4 * a1) + 28));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_pcb_version", a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v4, 0x1000u, 0, sa);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "get_pcb_version",
      15,
      743,
      100,
      v4);
    return 255;
  }
}
