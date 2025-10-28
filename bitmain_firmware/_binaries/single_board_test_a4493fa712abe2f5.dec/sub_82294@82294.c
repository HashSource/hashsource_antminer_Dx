int __fastcall sub_82294(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v3; // r4
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

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
      "uart_set_config",
      15,
      576,
      80,
      v8);
  }
  else
  {
    *(_DWORD *)(dword_3B52A4 + 60) = *a3;
  }
  pthread_mutex_unlock(v3);
  return -5;
}
