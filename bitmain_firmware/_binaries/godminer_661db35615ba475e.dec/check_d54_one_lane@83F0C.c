int __fastcall check_d54_one_lane(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r5
  int v9; // r3
  int back_1_chip; // r0
  int v11; // r3
  int v13; // [sp+20h] [bp-1054h]
  char v15; // [sp+28h] [bp-104Ch]
  unsigned __int8 v17; // [sp+30h] [bp-1044h] BYREF
  unsigned __int8 v18; // [sp+31h] [bp-1043h]
  int v19; // [sp+34h] [bp-1040h]
  char var1004[4112]; // [sp+70h] [bp-1004h] BYREF

  v15 = a2;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %1x exp %1x",
    "check_d54_one_lane",
    a2,
    a3,
    a4,
    a5);
  pthread_mutex_unlock(&stru_197BB8);
  v8 = 21;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54_one_lane",
    18,
    3477,
    60,
    var1004);
  v9 = a5;
  if ( a5 )
    v9 = 1;
  v13 = v9;
  do
  {
    usleep((__useconds_t)"ead_unregister_cancel");
    back_1_chip = serdes_apb_read_back_1_chip(a1, v15, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v17);
    v11 = v13;
    if ( !back_1_chip )
      v11 = 0;
    if ( v11 )
    {
      if ( (a5 & ~v19) != 0 )
        goto LABEL_8;
    }
    else if ( a5 || (v19 & 8) != 0 )
    {
LABEL_8:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(
        var1004,
        0x1000u,
        0,
        "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
        a4,
        v17,
        v18,
        v19,
        a5);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_d54_one_lane",
        18,
        3490,
        100,
        var1004);
      return 0;
    }
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(var1004, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d", a4, v17, v18, a5);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54_one_lane",
      18,
      3487,
      20,
      var1004);
    --v8;
  }
  while ( v8 );
  return 0;
}
