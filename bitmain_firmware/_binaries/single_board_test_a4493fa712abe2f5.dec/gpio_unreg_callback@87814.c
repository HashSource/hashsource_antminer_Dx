int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v2; // r11
  __int64 *v3; // r4
  int v4; // r8
  int v5; // r6
  size_t v6; // r7
  void *v7; // r0
  void *v8; // r5
  int v9; // r6
  __int64 v10; // kr00_8
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  char v17[4100]; // [sp+818h] [bp-1004h] BYREF

  v15 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 183;
    v14 = g_zc;
    LOWORD(v13) = 6384;
    goto LABEL_16;
  }
  if ( pthread_mutex_lock(&stru_12B708) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 189;
    LOWORD(v13) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c";
    v14 = g_zc;
LABEL_16:
    HIWORD(v13) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c" >> 16;
    zlog(v14, v13, 82, "gpio_unreg_callback", 19, v12, 100, v17);
    return -1;
  }
  if ( dword_12B720 )
  {
    v2 = *(_DWORD *)dword_12B720;
    v4 = *(_DWORD *)dword_12B720 + 4;
    v3 = **(__int64 ***)dword_12B720;
    while ( v3 != (__int64 *)v4 )
    {
      v5 = *((_DWORD *)v3 + 4);
      v6 = *(_DWORD *)(v5 + 4);
      v7 = malloc(v6);
      v8 = v7;
      if ( v7 )
        memcpy(v7, *(const void **)v5, v6);
      v9 = (*(int (__fastcall **)(int *, void *))(v2 + 36))(&v15, v8);
      free(v8);
      if ( !v9 )
      {
        snprintf(s, 0x800u, "remove %d from callback list\n", v15);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v17, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_unreg_callback",
          19,
          195,
          20,
          v17);
        remove_c_map((int *)dword_12B720, (int)&v15);
        goto LABEL_12;
      }
      v10 = *v3;
      v3 = (__int64 *)*((_DWORD *)v3 + 1);
      if ( v9 < 0 )
        v3 = (__int64 *)v10;
    }
  }
  strcpy(s, "callback function not registered before\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v17, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
    82,
    "gpio_unreg_callback",
    19,
    200,
    80,
    v17);
LABEL_12:
  pthread_mutex_unlock(&stru_12B708);
  return 0;
}
