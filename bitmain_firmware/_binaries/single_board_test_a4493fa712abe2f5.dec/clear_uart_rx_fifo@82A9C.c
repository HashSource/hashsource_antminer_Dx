int __fastcall clear_uart_rx_fifo(int a1)
{
  pthread_mutex_t *v1; // r5
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  v1 = &stru_12B508[a1];
  pthread_mutex_lock(v1);
  v3 = sub_828CC((unsigned __int8)a1);
  if ( !v3 )
    return pthread_mutex_unlock(v1);
  v4 = v3;
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_8258C(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      snprintf(s, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n", "clear_uart_rx_fifo", a1, v4, v7);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v10, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
        82,
        "clear_uart_rx_fifo",
        18,
        718,
        100,
        v10);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v1);
  }
  snprintf(s, 0x800u, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v10, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
    82,
    "clear_uart_rx_fifo",
    18,
    709,
    100,
    v10);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v1);
}
