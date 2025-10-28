int sub_84FD4()
{
  int v0; // r6
  _DWORD *v1; // r0
  _DWORD *v2; // r4
  void (__fastcall *v3)(_DWORD *, _DWORD *, int); // r3
  int v4; // r7
  _DWORD *v5; // r5
  int v6; // r6
  unsigned __int8 v8; // [sp+27h] [bp-1805h] BYREF
  char s[2048]; // [sp+28h] [bp-1804h] BYREF
  _DWORD v10[1025]; // [sp+828h] [bp-1004h] BYREF

  while ( dword_12B700 )
  {
    if ( !pthread_mutex_lock(&stru_12B708) )
    {
      v0 = dword_12B720;
      v1 = malloc(0x18u);
      v1[3] = v0;
      v2 = v1;
      v1[4] = 0;
      v1[5] = 0;
      *v1 = sub_57DDC;
      v1[1] = sub_57FD4;
      v1[2] = sub_5802C;
      if ( sub_57DDC((int)v1) )
      {
        while ( 1 )
        {
          v4 = v2[5];
          v5 = (_DWORD *)((int (*)(void))v2[2])();
          v6 = ***(_DWORD ***)(v4 + 16);
          v8 = 0;
          if ( gpio_read(v6, &v8) )
            break;
          if ( v5[1] != v8 )
          {
            snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d\n", ***(_DWORD ***)(v4 + 16), v5[1], v8);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)v10, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
              82,
              "gpio_thread_function",
              20,
              72,
              20,
              v10);
            ((void (__fastcall *)(int, _DWORD))*v5)(v6, v8);
            v3 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v2[1];
            v10[0] = *v5;
            v10[1] = v8;
            v3(v2, v10, 8);
          }
          free(v5);
          if ( !((int (__fastcall *)(_DWORD *))*v2)(v2) )
            goto LABEL_12;
        }
        snprintf(s, 0x800u, "failed to read gpio port %d\n", v6);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)v10, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_thread_function",
          20,
          65,
          20,
          v10);
        free(v5);
      }
LABEL_12:
      free(v2);
      pthread_mutex_unlock(&stru_12B708);
    }
    usleep(0x30D40u);
  }
  return 0;
}
