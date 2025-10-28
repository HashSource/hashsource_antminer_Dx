int sub_87ED0()
{
  int v0; // r4
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
  strcpy(v2, "bitmain power close ===========\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, v2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
    83,
    "bitmain_power_close",
    19,
    384,
    40,
    v3);
  v0 = dword_12B728[0];
  if ( pthread_mutex_lock(&stru_3B5254) )
  {
    strcpy(v2, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v3, 0x1000u, 0, v2);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
      81,
      "iic_uninit",
      10,
      64,
      100,
      v3);
  }
  else
  {
    i2c_uninit(v0);
    pthread_mutex_unlock(&stru_3B5254);
  }
  dword_12B72C = 0;
  dword_12B730 = 0;
  return pthread_mutex_unlock(&power_mutex);
}
