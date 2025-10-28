int sub_9A480()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(v1, "please init platform first!!\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_uart.c",
    165,
    "uart_init",
    9,
    342,
    100,
    v2);
  return -1;
}
