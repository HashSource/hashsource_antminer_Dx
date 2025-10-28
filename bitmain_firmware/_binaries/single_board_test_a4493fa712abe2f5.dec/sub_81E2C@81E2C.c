int sub_81E2C()
{
  char v1[2048]; // [sp+10h] [bp-800h] BYREF
  char v2[4100]; // [sp+810h] [bp+0h] BYREF

  strcpy(v1, "failed to api lock\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
           80,
           "lcd_clear_result",
           16,
           501,
           100,
           v2);
}
