int __fastcall sub_B132C(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
           163,
           "eeprom_close",
           12,
           70,
           100,
           v3);
}
