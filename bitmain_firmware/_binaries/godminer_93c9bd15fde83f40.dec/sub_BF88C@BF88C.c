int sub_BF88C()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(v1, "unsuported gpio port\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_ui.c",
    163,
    "gpio_ctrl_ui",
    12,
    273,
    100,
    v2);
  return -1;
}
