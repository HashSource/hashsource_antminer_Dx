int __fastcall sub_D26E8(_BYTE *a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r6
  int buf; // [sp+14h] [bp-1844h] BYREF
  char s[64]; // [sp+18h] [bp-1840h] BYREF
  char v8[2048]; // [sp+58h] [bp-1800h] BYREF
  char v9[4096]; // [sp+858h] [bp-1000h] BYREF

  buf = 0;
  if ( pthread_mutex_lock(&stru_3B52AC) )
  {
    strcpy(v8, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    v2 = -1;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      82,
      "gpio_read",
      9,
      372,
      100,
      v9);
  }
  else
  {
    v2 = 0;
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", 943);
    v3 = open(s, 0);
    v4 = v3;
    if ( v3 < 0 )
    {
      snprintf(v8, 0x800u, "Failed to open gpio %d value for reading!\n", 943);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      v2 = -2;
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_read",
        9,
        380,
        100,
        v9);
      pthread_mutex_unlock(&stru_3B52AC);
    }
    else if ( read(v3, &buf, 4u) < 0 )
    {
      strcpy(v8, "Failed to read value!\n");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      v2 = -3;
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_read",
        9,
        387,
        100,
        v9);
      close(v4);
      pthread_mutex_unlock(&stru_3B52AC);
    }
    else
    {
      close(v4);
      pthread_mutex_unlock(&stru_3B52AC);
      *a1 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v2;
}
