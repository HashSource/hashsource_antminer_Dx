int __fastcall sub_B31B8(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v3; // r4
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  v3 = &stru_190C74[a1];
  pthread_mutex_lock(v3);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d\n", a2);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v8, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_uart.c",
      165,
      "uart_set_config",
      15,
      576,
      80,
      v8);
  }
  else
  {
    *(_DWORD *)(dword_197C8C + 60) = *a3;
  }
  pthread_mutex_unlock(v3);
  return -5;
}
