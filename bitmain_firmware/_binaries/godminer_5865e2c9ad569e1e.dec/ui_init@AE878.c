int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18A788 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v2, "gpio init failed");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_ui.c",
      169,
      "ui_init",
      7,
      152,
      100,
      v3);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  gpio_reg_callback(921, 713840);
  gpio_reg_callback(943, 713840);
  pthread_mutex_init(&stru_18A758, 0);
  off_18A774 = 0;
  dword_18A778 = 0;
  dword_18A77C = 0;
  dword_18A780 = 0;
  dword_18A784 = 0;
  dword_18A770 = (int)new_c_map(713180, 0, 0);
  dword_18A754[0] = 1;
  pthread_create((pthread_t *)&dword_18A78C, 0, (void *(*)(void *))sub_AE1EC, 0);
  dword_18A788 = 1;
  return 0;
}
