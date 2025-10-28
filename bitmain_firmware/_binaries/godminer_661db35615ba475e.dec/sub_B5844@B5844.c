int sub_B5844()
{
  int v0; // r6
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  strcpy(v2, "bitmain power close ===========\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v3, 0x1000u, 0, v2);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_power_close",
    19,
    384,
    40,
    v3);
  v0 = dword_195CAC[0];
  if ( pthread_mutex_lock(&stru_197C58) )
  {
    strcpy(v2, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v3, 0x1000u, 0, v2);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_iic.c",
      164,
      "iic_uninit",
      10,
      64,
      100,
      v3);
  }
  else
  {
    i2c_uninit(v0);
    pthread_mutex_unlock(&stru_197C58);
  }
  dword_195CB0 = 0;
  dword_195CB4 = 0;
  return pthread_mutex_unlock(&power_mutex);
}
