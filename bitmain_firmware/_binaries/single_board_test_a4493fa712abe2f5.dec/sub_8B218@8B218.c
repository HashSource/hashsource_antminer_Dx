int __fastcall sub_8B218(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d", "close_pic", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
           75,
           "close_pic",
           9,
           762,
           100,
           v3);
}
