int __fastcall sub_50A88(unsigned int a1)
{
  float v1; // s0
  double v2; // d8
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(s, 0x800u, "v_an2 = %f", v2);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "decode_an_voltage_buf",
    21,
    407,
    20,
    v5);
  snprintf(s, 0x800u, "v_10 = %f", v2 * 7.5999999);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/drv_pic/pic_1704.c",
           158,
           "decode_an_voltage_buf",
           21,
           410,
           20,
           v5);
}
