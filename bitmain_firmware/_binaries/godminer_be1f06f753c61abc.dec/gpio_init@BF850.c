int gpio_init()
{
  int v0; // r0
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4194 )
  {
    strcpy(v2, "gpio re init");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
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
      v3);
  }
  else
  {
    pthread_mutex_init(&stru_1B4198, 0);
    LOWORD(v0) = -1984;
    HIWORD(v0) = (unsigned int)&loc_B3170 >> 16;
    dword_1B41B0 = (int)new_c_map(v0, 0, 0);
    pthread_mutex_init(&stru_1B41B4, 0);
    dword_1B41CC = 1;
    pthread_create((pthread_t *)&dword_1B41D0, 0, (void *(*)(void *))sub_C0A10, 0);
    dword_1B4194 = 1;
  }
  return 0;
}
