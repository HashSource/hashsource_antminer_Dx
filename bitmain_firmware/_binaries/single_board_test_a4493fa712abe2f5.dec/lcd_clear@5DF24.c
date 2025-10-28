int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  char v3[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_12B688 )
    return -2;
  if ( dword_12B68C == a1 )
  {
    if ( pthread_mutex_lock(&mutex) )
    {
      strcpy(v3, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        81,
        "lcd_clear",
        9,
        123,
        100,
        v4);
      return -4;
    }
    else
    {
      memset(&unk_12B6A8, 32, 0x40u);
      v1 = dword_12B68C;
      lseek(dword_12B68C, 0, 0);
      write(v1, &unk_12B6A8, 0x40u);
      pthread_mutex_unlock(&mutex);
      return 0;
    }
  }
  else
  {
    strcpy(v3, "bad param\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      81,
      "lcd_clear",
      9,
      117,
      80,
      v4);
    return -3;
  }
}
