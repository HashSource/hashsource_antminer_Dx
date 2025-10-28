int ui_init()
{
  int v0; // r4
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v0 = 0;
  if ( dword_12B6F0 )
    return v0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v4, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
      80,
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
  gpio_reg_callback(921, (int)sub_81F18);
  gpio_reg_callback(943, (int)sub_81F18);
  pthread_mutex_init(&stru_3B5460, 0);
  off_12B738 = 0;
  dword_12B73C = 0;
  dword_12B740 = 0;
  dword_12B744 = 0;
  dword_12B748 = 0;
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
      v3[9] = sub_805A0;
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
  dword_3B545C = (int)v2;
  dword_12B6F8 = 1;
  pthread_create((pthread_t *)&dword_12B6FC, 0, (void *(*)(void *))sub_84518, 0);
  dword_12B6F0 = 1;
  return 0;
}
