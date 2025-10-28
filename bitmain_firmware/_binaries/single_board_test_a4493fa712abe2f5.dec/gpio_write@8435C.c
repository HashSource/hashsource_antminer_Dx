int __fastcall gpio_write(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  char *v6; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v9[2048]; // [sp+50h] [bp-1800h] BYREF
  char v10[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_3B52AC) )
  {
    strcpy(v9, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
      82,
      "gpio_write",
      10,
      415,
      100,
      v10);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open(s, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      strcpy(v9, "Failed to open gpio value for writing!\n");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
        82,
        "gpio_write",
        10,
        423,
        100,
        v10);
      pthread_mutex_unlock(&stru_3B52AC);
      return -2;
    }
    else
    {
      if ( a2 )
        v6 = "1";
      else
        v6 = "01";
      if ( write(v4, v6, 1u) < 0 )
      {
        strcpy(v9, "Failed to write value!\n");
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_write",
          10,
          429,
          100,
          v10);
        close(v5);
        pthread_mutex_unlock(&stru_3B52AC);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_3B52AC);
        return 0;
      }
    }
  }
}
