int __fastcall gpio_direction(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  const char *v6; // r4
  size_t v7; // r2
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v10[2048]; // [sp+50h] [bp-1804h] BYREF
  char v11[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1AA6E8) )
  {
    strcpy(v10, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_direction",
      14,
      327,
      100,
      v11);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s);
    v5 = v4;
    if ( v4 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d direction for writing!\n", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_gpio.c",
        165,
        "gpio_direction",
        14,
        334,
        100,
        v11);
      pthread_mutex_unlock(&stru_1AA6E8);
      return -2;
    }
    else
    {
      v6 = "in";
      if ( a2 )
        v7 = 3;
      else
        v7 = 2;
      if ( a2 )
        v6 = "out";
      if ( write(v4, v6, v7) < 0 )
      {
        snprintf(v10, 0x800u, "Failed to set gpio %d direction %s !\n", a1, v6);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_gpio.c",
          165,
          "gpio_direction",
          14,
          343,
          100,
          v11);
        close(v5);
        pthread_mutex_unlock(&stru_1AA6E8);
        return -3;
      }
      else
      {
        snprintf(v10, 0x800u, "set gpio %d direction %s success!\n", a1, v6);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v11, 0x1000u, 0, v10);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_gpio.c",
          165,
          "gpio_direction",
          14,
          350,
          20,
          v11);
        close(v5);
        pthread_mutex_unlock(&stru_1AA6E8);
        return 0;
      }
    }
  }
}
