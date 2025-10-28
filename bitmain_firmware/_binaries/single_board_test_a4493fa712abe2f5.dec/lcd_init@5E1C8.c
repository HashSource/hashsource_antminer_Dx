int __fastcall lcd_init(const char *a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_12B688 )
    return 0;
  if ( a1 )
  {
    result = open(a1, 2050);
    dword_12B68C = result;
    if ( result < 0 )
    {
      strcpy(v2, "open lcd failed!!!\n");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        81,
        "lcd_init",
        8,
        41,
        100,
        v3);
      return -1;
    }
    else
    {
      dword_12B688 = 1;
    }
  }
  else
  {
    strcpy(v2, "bad param\n");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      81,
      "lcd_init",
      8,
      35,
      100,
      v3);
    return -3;
  }
  return result;
}
