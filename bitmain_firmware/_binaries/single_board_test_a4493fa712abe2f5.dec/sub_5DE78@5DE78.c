int __fastcall sub_5DE78(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  result = close(a1);
  if ( result )
  {
    strcpy(v2, "lcd close failed!!!\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v3, 0x1000u, 0, v2);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      81,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_12B688 = 0;
  return result;
}
