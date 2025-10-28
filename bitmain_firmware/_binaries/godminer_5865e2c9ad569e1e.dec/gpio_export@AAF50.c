int __fastcall gpio_export(int a1)
{
  int v2; // r6
  const char *v3; // r2
  size_t v4; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v7[2048]; // [sp+50h] [bp-1800h] BYREF
  char v8[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A40C) )
  {
    strcpy(v7, "failed to api lock");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_export",
      11,
      221,
      100,
      v8);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      v2 = open64("/sys/class/gpio/export");
      if ( v2 < 0 )
      {
        strcpy(v7, "Failed to open export for writing!");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          171,
          "gpio_export",
          11,
          238,
          100,
          v8);
        pthread_mutex_unlock(&stru_18A40C);
        return -2;
      }
      else
      {
        LOWORD(v3) = 820;
        HIWORD(v3) = (unsigned int)&unk_137EDC >> 16;
        v4 = snprintf(s, 0x40u, v3, a1);
        if ( write(v2, s, v4) < 0 )
        {
          snprintf(v7, 0x800u, "Failed to export gpio %d!", a1);
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
            171,
            "gpio_export",
            11,
            246,
            100,
            v8);
          close(v2);
          pthread_mutex_unlock(&stru_18A40C);
          return -3;
        }
        else
        {
          snprintf(v7, 0x800u, "export gpio %d success", a1);
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
            171,
            "gpio_export",
            11,
            251,
            20,
            v8);
          close(v2);
          pthread_mutex_unlock(&stru_18A40C);
          return 0;
        }
      }
    }
    else
    {
      snprintf(v7, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
        171,
        "gpio_export",
        11,
        229,
        80,
        v8);
      pthread_mutex_unlock(&stru_18A40C);
      return 0;
    }
  }
}
