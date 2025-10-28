int sub_82354()
{
  char v1[2048]; // [sp+10h] [bp-800h] BYREF
  char v2[4100]; // [sp+810h] [bp+0h] BYREF

  strcpy(v1, "please init platform first!!\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
    82,
    "uart_init",
    9,
    342,
    100,
    v2);
  return -1;
}
