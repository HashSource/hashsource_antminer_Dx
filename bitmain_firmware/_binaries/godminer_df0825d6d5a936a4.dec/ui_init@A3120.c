int ui_init()
{
  int v0; // r5
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_177370 )
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
  gpio_reg_callback(921, 666904);
  gpio_reg_callback(943, 666904);
  pthread_mutex_init(&stru_177340, 0);
  off_17735C = 0;
  dword_177360 = 0;
  dword_177364 = 0;
  dword_177368 = 0;
  dword_17736C = 0;
  dword_177358 = (int)new_c_map(666244, 0, 0);
  dword_17733C[0] = 1;
  pthread_create((pthread_t *)&dword_177374, 0, (void *(*)(void *))sub_A2A94, 0);
  dword_177370 = 1;
  return 0;
}
