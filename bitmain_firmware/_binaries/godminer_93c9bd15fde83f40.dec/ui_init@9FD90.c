int ui_init()
{
  int v0; // r4
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1AA6B4 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v4, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "ui_init",
      7,
      152,
      100,
      v5);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  gpio_reg_callback(921, (int)sub_99EA4);
  gpio_reg_callback(943, (int)sub_99EA4);
  pthread_mutex_init(&stru_1A8B2C, 0);
  off_1A88D0 = 0;
  dword_1A88D4 = 0;
  dword_1A88D8 = 0;
  dword_1A88DC = 0;
  dword_1A88E0 = 0;
  v2 = malloc(4u);
  if ( v2 )
  {
    v3 = malloc(0x28u);
    if ( v3 )
    {
      v3[5] = 0;
      v3[6] = 0;
      v3[7] = 0;
      v3[8] = 0;
      v3[3] = 0;
      v3[4] = 0;
      *v2 = v3;
      v3[9] = sub_975D8;
      *v3 = v3 + 1;
      v3[1] = v3 + 1;
      v3[2] = v3 + 1;
    }
    else
    {
      *v2 = 0;
      v2 = 0;
    }
  }
  dword_1A8B28 = (int)v2;
  dword_1AA6BC = 1;
  pthread_create((pthread_t *)&dword_1AA6C0, 0, (void *(*)(void *))sub_9D34C, 0);
  dword_1AA6B4 = 1;
  return 0;
}
