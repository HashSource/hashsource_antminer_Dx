int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5
  size_t v5; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v8[2048]; // [sp+50h] [bp-1804h] BYREF
  char v9[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_3B52AC) )
  {
    v3 = -1;
    strcpy(v8, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      82,
      "gpio_unexport",
      13,
      273,
      100,
      v9);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( !v2 )
  {
    v4 = open("/sys/class/gpio/unexport", 1);
    if ( v4 < 0 )
    {
      strcpy(v8, "Failed to open unexport for writing!\n");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_unexport",
        13,
        290,
        100,
        v9);
      v3 = -2;
      pthread_mutex_unlock(&stru_3B52AC);
    }
    else
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        snprintf(v8, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, v8);
        V_UNLOCK();
        v3 = -2;
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_unexport",
          13,
          298,
          100,
          v9);
      }
      else
      {
        snprintf(v8, 0x800u, "unexport gpio %d success\n", a1);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v9, 0x1000u, 0, v8);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_unexport",
          13,
          304,
          20,
          v9);
      }
      close(v4);
      pthread_mutex_unlock(&stru_3B52AC);
    }
    return v3;
  }
  snprintf(v8, 0x800u, "port %d already unexported, ret = %d\n", a1, v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v9, 0x1000u, 0, v8);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
    82,
    "gpio_unexport",
    13,
    281,
    80,
    v9);
  pthread_mutex_unlock(&stru_3B52AC);
  return 0;
}
