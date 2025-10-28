int sub_84118()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(v1, "gpio re init\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
           82,
           "gpio_init",
           9,
           98,
           80,
           v2);
}
