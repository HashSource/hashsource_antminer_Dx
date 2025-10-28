int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v4[4100]; // [sp+820h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%-30s : 0x%04x", "key_version", *a1 & 0xF);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    441,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "algorithm_code", *a1 >> 4);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    442,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_info_len", a1[1]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    443,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_standard", a1[49]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    444,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x", "test_standard", a1[50]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    445,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_technology", *(const char **)(a1 + 35));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    446,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", a1[2]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    447,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "SN", *(const char **)(a1 + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    449,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pcb", a1[31], a1[32]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    450,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "bom", a1[33], a1[34]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    451,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 39));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    452,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 41));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    453,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 43));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    454,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "inlet_temperature", a1[47]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    455,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u", "outlet_temperature", a1[48]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    456,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", a1[24] >> 7, a1[24] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    457,
    100,
    v4);
  snprintf(
    s,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x",
    "asic sensor addr",
    **(unsigned __int8 **)(a1 + 25),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 3));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    458,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", a1[29] >> 7, a1[29] & 0x7F);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    459,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x", "pic sensor addr", a1[30]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    460,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : bin%d", "chip_bin", a1[15]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    461,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "FT", *((const char **)a1 + 4));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    462,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_die", *(const char **)(a1 + 7));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    463,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_dump_fixture",
    19,
    464,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : P%d", "phy_seq_level", a1[55]);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
           169,
           "eeprom_dump_fixture",
           19,
           465,
           100,
           v4);
}
