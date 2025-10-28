int __fastcall sub_821D4(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v3; // r4
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v3 = &stru_3B52C4[a1];
  pthread_mutex_lock(v3);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d\n", a2);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v8, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
      82,
      "high_speed_uart_set_config",
      26,
      620,
      80,
      v8);
  }
  else
  {
    *(_DWORD *)(dword_3B52A4 + 60) = *a3 << 16;
  }
  pthread_mutex_unlock(v3);
  return -5;
}
