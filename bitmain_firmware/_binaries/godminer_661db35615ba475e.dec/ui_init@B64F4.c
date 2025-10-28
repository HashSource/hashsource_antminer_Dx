int ui_init()
{
  int v0; // r4
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_195C1C )
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
  gpio_reg_callback(921, (int)sub_B2CD4);
  gpio_reg_callback(943, (int)sub_B2CD4);
  pthread_mutex_init(&stru_195C30, 0);
  off_195D18 = 0;
  dword_195D1C = 0;
  dword_195D20 = 0;
  dword_195D24 = 0;
  dword_195D28 = 0;
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
      v3[9] = sub_AE278;
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
  dword_195C2C = (int)v2;
  dword_195C24 = 1;
  pthread_create((pthread_t *)&dword_195C28, 0, (void *(*)(void *))sub_B5C6C, 0);
  dword_195C1C = 1;
  return 0;
}
