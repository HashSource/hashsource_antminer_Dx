int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v4[4100]; // [sp+820h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "key_version", *a1 & 0xF);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    364,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "algorithm_code", *a1 >> 4);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    365,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "fixture_info_len", a1[1]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    366,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "fixture_standard", a1[45]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    367,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%04x\n", "test_standard", a1[46]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    368,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_technology", *(const char **)(a1 + 31));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    369,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x\n", "fixture_fmt_version", a1[2]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    370,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "SN", *(const char **)(a1 + 3));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    372,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "pcb", a1[27], a1[28]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    373,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "bom", a1[29], a1[30]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    374,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "hash_board_voltage", *(unsigned __int16 *)(a1 + 35));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    375,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "hash_board_freq", *(unsigned __int16 *)(a1 + 37));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    376,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %.2f\n", "nonce_response_rate", *(float *)(a1 + 39));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    377,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "inlet_temperature", a1[43]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    378,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %u\n", "outlet_temperature", a1[44]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    379,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "asic sensor", a1[20] >> 7, a1[20] & 0x7F);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    380,
    100,
    v4);
  snprintf(
    s,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x\n",
    "asic sensor addr",
    **(unsigned __int8 **)(a1 + 21),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 3));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    381,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x-%02x\n", "pic sensor", a1[25] >> 7, a1[25] & 0x7F);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    382,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : 0x%02x\n", "pic sensor addr", a1[26]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    383,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : bin%d\n", "chip_bin", a1[15]);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    384,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "FT", *((const char **)a1 + 4));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    385,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_die", *(const char **)(a1 + 7));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    386,
    100,
    v4);
  snprintf(s, 0x800u, "%-30s : %s\n", "chip_marking", *(const char **)(a1 + 11));
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    387,
    100,
    v4);
  strcpy(s, "\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
           163,
           "eeprom_dump_fixture",
           19,
           388,
           100,
           v4);
}
