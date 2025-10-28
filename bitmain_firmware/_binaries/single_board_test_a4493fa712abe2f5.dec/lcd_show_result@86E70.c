int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_3B5460) )
  {
    v7 = -4;
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
      80,
      "lcd_show_result",
      15,
      470,
      100,
      v10);
  }
  else
  {
    v6 = dword_12978C;
    if ( dword_12978C < 0 )
    {
      dword_12978C = lcd_init(lcd_path);
      lcd_clear(dword_12978C);
      v6 = dword_12978C;
    }
    if ( v6 <= 0 )
    {
      snprintf(s, 0x800u, "failed to init %s\n", lcd_path);
      v7 = -1;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v10, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
        80,
        "lcd_show_result",
        15,
        486,
        100,
        v10);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_3B5460);
  }
  return v7;
}
