int __fastcall uart_flush(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, "flush uart %d\n", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
    82,
    "uart_flush",
    10,
    737,
    20,
    v4);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_82DF8(a1);
  return 0;
}
