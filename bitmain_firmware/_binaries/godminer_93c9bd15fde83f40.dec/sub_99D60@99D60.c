int sub_99D60()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(v1, "failed to api lock\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_ui.c",
           163,
           "lcd_clear_result",
           16,
           501,
           100,
           v2);
}
