int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r11
  unsigned int v5; // r6
  bool v6; // cc
  int v7; // r4
  int v9; // r10
  size_t v10; // r5
  const void *v11; // r1
  unsigned int v12; // r4
  char v15[2048]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_12B688 )
    return -2;
  v5 = a4;
  if ( dword_12B68C != a1 )
    goto LABEL_17;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_17:
    strcpy(v15, "bad param\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v16, 0x1000u, 0, v15);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
      81,
      "lcd_write",
      9,
      69,
      80,
      v16);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&mutex);
    if ( v9 )
    {
      strcpy(v15, "failed to lcd lock\n");
      V_LOCK();
      logfmt_raw(v16, 0x1000u, v7, v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_lcd.c",
        81,
        "lcd_write",
        9,
        75,
        100,
        v16);
      return -4;
    }
    else
    {
      do
      {
        v10 = v5;
        if ( v5 >= 0x10 )
          v10 = 16;
        v11 = (const void *)(a3 + v9);
        v12 = (unsigned __int8)(v4 + 1);
        v9 += v10;
        memcpy((char *)&unk_12B6A8 + 16 * v4, v11, v10);
        v5 -= v10;
        v4 = (char)v12;
      }
      while ( v12 <= 3 && v5 != 0 );
      write(dword_12B68C, &unk_12B6A8, 0x40u);
      pthread_mutex_unlock(&mutex);
      return 0;
    }
  }
}
