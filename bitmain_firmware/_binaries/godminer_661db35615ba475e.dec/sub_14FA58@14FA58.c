int sub_14FA58()
{
  int v0; // r8
  int v1; // r6
  int v3; // r0
  int v4; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(s, "platform_init\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v6, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_common.c",
    167,
    "platform_init",
    13,
    63,
    100,
    v6);
  if ( fpga_init() )
  {
    v0 = -1;
    strcpy(s, "fpga init failed\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = g_zc;
    v4 = 67;
LABEL_6:
    zlog(
      v3,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_common.c",
      167,
      "platform_init",
      13,
      v4,
      100,
      v6);
    return v0;
  }
  v0 = gpio_init();
  if ( v0 )
  {
    v0 = -2;
    strcpy(s, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = g_zc;
    v4 = 73;
    goto LABEL_6;
  }
  memset(&unk_197CDC, 0, 0x124u);
  v1 = *(_DWORD *)dword_197C8C | 0x20000000;
  snprintf(s, 0x800u, "HARDWARE_VERSION = 0x%x\n", v1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v6, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_common.c",
    167,
    "platform_init",
    13,
    86,
    40,
    v6);
  *(_DWORD *)dword_197C8C = v1;
  platform_inited = 1;
  return v0;
}
