int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  const char *v5; // r2
  size_t v6; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v9[2048]; // [sp+50h] [bp-1800h] BYREF
  char v10[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A40C) )
  {
    v3 = -1;
    strcpy(v9, "failed to api lock");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_unexport",
      13,
      273,
      100,
      v10);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( !v2 )
  {
    v4 = open64("/sys/class/gpio/unexport");
    if ( v4 < 0 )
    {
      strcpy(v9, "Failed to open unexport for writing!");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      v3 = -2;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
        171,
        "gpio_unexport",
        13,
        290,
        100,
        v10);
      pthread_mutex_unlock(&stru_18A40C);
    }
    else
    {
      LOWORD(v5) = 820;
      HIWORD(v5) = (unsigned int)&unk_137EDC >> 16;
      v6 = snprintf(s, 0x40u, v5, a1);
      if ( write(v4, s, v6) < 0 )
      {
        snprintf(v9, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        v3 = -2;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          171,
          "gpio_unexport",
          13,
          298,
          100,
          v10);
      }
      else
      {
        snprintf(v9, 0x800u, "unexport gpio %d success", a1);
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
          171,
          "gpio_unexport",
          13,
          304,
          20,
          v10);
      }
      close(v4);
      pthread_mutex_unlock(&stru_18A40C);
    }
    return v3;
  }
  snprintf(v9, 0x800u, "port %d already unexported, ret = %d", a1, v2);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7007/7007_gpio.c",
    171,
    "gpio_unexport",
    13,
    281,
    80,
    v10);
  pthread_mutex_unlock(&stru_18A40C);
  return 0;
}
