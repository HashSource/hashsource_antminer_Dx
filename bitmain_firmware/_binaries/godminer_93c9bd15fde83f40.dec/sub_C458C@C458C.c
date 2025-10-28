int __fastcall sub_C458C(int a1, int a2, int a3, int a4)
{
  int v9; // [sp+1Ch] [bp-1048h]
  unsigned __int8 v10; // [sp+20h] [bp-1044h] BYREF
  unsigned __int8 v11; // [sp+21h] [bp-1043h]
  int v12; // [sp+24h] [bp-1040h]
  char v13[4100]; // [sp+60h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(
    v13,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %1x exp %1x",
    "check_d54_one_lane",
    a2,
    a3,
    a4,
    8);
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
    v13);
  v9 = 21;
  while ( 1 )
  {
    usleep((__useconds_t)&stru_18694.st_info);
    if ( !serdes_apb_read_back_1_chip(a1, a2, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v10)
      || (v12 & 8) == 0 )
    {
      break;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v13, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d", a4, v10, v11, 8);
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
      v13);
    if ( !--v9 )
      return 0;
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(
    v13,
    0x1000u,
    0,
    "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
    a4,
    v10,
    v11,
    v12,
    8);
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
    v13);
  return 0;
}
