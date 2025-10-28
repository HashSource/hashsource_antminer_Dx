int __fastcall api_get_eeprom_phy_seq_level(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  v2 = dword_177378[a1 + 2];
  if ( dword_177378[0] && *(_BYTE *)(dword_177378[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_177378[0] + 4 * v2) + 55);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_phy_seq_level", v2);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "get_phy_seq_level",
    17,
    1154,
    100,
    v4);
  return 255;
}
