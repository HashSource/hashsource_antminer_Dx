int __fastcall check_d54_one_lane(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r1
  int v9; // r3
  int v10; // r5
  int v11; // r3
  int back_1_chip; // r0
  int v13; // r3
  int v14; // r3
  int v16; // r3
  int v17; // [sp+20h] [bp-1054h]
  char v19; // [sp+28h] [bp-104Ch]
  unsigned __int8 v21; // [sp+30h] [bp-1044h] BYREF
  unsigned __int8 v22; // [sp+31h] [bp-1043h]
  int v23; // [sp+34h] [bp-1040h]
  char var1004[4112]; // [sp+70h] [bp-1004h] BYREF

  v19 = a2;
  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v8) = -15436;
  HIWORD(v8) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  logfmt_raw(var1004, 0x1000u, 0, 1530588, v8, a2, a3, a4, a5);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v9) = -15416;
  HIWORD(v9) = (unsigned int)"build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  v10 = 21;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    v9,
    18,
    3477,
    60,
    var1004);
  v11 = a5;
  if ( a5 )
    v11 = 1;
  v17 = v11;
  do
  {
    usleep((__useconds_t)&stru_18694.st_info);
    back_1_chip = serdes_apb_read_back_1_chip(a1, v19, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v21);
    v13 = v17;
    if ( !back_1_chip )
      v13 = 0;
    if ( v13 )
    {
      if ( (a5 & ~v23) != 0 )
        goto LABEL_8;
    }
    else if ( a5 || (v23 & 8) != 0 )
    {
LABEL_8:
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(var1004, 0x1000u, 0, 1530508, a4, v21, v22, v23, a5);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v14) = -15416;
      HIWORD(v14) = (unsigned int)"build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        v14,
        18,
        3490,
        100,
        var1004);
      return 0;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(var1004, 0x1000u, 0, 1530444, a4, v21, v22, a5);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v16) = -15416;
    HIWORD(v16) = (unsigned int)"build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      v16,
      18,
      3487,
      20,
      var1004);
    --v10;
  }
  while ( v10 );
  return 0;
}
