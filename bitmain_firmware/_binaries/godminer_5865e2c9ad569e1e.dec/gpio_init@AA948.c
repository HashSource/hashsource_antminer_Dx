int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18A3EC )
  {
    strcpy(v1, "gpio re init");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_gpio.c",
      171,
      "gpio_init",
      9,
      98,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_18A3F0, 0);
    dword_18A408 = (int)new_c_map(698680, 0, 0);
    pthread_mutex_init(&stru_18A40C, 0);
    dword_18A424 = 1;
    pthread_create((pthread_t *)&dword_18A428, 0, (void *(*)(void *))sub_ABB08, 0);
    dword_18A3EC = 1;
  }
  return 0;
}
