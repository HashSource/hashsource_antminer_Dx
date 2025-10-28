int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int buf; // [sp+14h] [bp-1844h] BYREF
  char s[64]; // [sp+18h] [bp-1840h] BYREF
  char v10[2048]; // [sp+58h] [bp-1800h] BYREF
  char v11[4096]; // [sp+858h] [bp-1000h] BYREF

  buf = 0;
  if ( pthread_mutex_lock(&stru_3B52AC) )
  {
    strcpy(v10, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    v4 = -1;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      82,
      "gpio_read",
      9,
      372,
      100,
      v11);
  }
  else
  {
    v4 = 0;
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open(s, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_read",
        9,
        380,
        100,
        v11);
      v4 = -2;
      pthread_mutex_unlock(&stru_3B52AC);
    }
    else if ( read(v5, &buf, 4u) < 0 )
    {
      strcpy(v10, "Failed to read value!\n");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      v4 = -3;
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_read",
        9,
        387,
        100,
        v11);
      close(v6);
      pthread_mutex_unlock(&stru_3B52AC);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_3B52AC);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
