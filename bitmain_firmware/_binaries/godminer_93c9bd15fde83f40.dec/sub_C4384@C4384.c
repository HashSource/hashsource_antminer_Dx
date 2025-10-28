int __fastcall sub_C4384(int a1, int a2, int a3, int a4)
{
  int v7; // r5
  char v10; // [sp+20h] [bp-104Ch]
  unsigned __int8 v12; // [sp+28h] [bp-1044h] BYREF
  unsigned __int8 v13; // [sp+29h] [bp-1043h]
  int v14; // [sp+2Ch] [bp-1040h]
  char v15[4100]; // [sp+68h] [bp-1004h] BYREF

  v10 = a2;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(
    v15,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %1x exp %1x",
    "check_d54_one_lane",
    a2,
    a3,
    a4,
    0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54_one_lane",
    18,
    3477,
    60,
    v15);
  v7 = 21;
  while ( 1 )
  {
    usleep((__useconds_t)&stru_18694.st_info);
    serdes_apb_read_back_1_chip(a1, v10, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v12);
    if ( (v14 & 8) != 0 )
      break;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v15, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d", a4, v12, v13, 0);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54_one_lane",
      18,
      3487,
      20,
      v15);
    if ( !--v7 )
      return 0;
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(
    v15,
    0x1000u,
    0,
    "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
    a4,
    v12,
    v13,
    v14,
    0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54_one_lane",
    18,
    3490,
    100,
    v15);
  return 0;
}
