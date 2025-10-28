int sub_14D304()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(v1, "gpio re init\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_gpio.c",
           165,
           "gpio_init",
           9,
           98,
           80,
           v2);
}
