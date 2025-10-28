int __fastcall sub_8B294(unsigned int a1)
{
  float v1; // s0
  double v2; // d8
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v2 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(s, 0x800u, "v_an2 = %f", v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "decode_an_voltage_buf",
    21,
    407,
    20,
    v5);
  snprintf(s, 0x800u, "v_10 = %f", v2 * 7.5999999);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
           75,
           "decode_an_voltage_buf",
           21,
           410,
           20,
           v5);
}
