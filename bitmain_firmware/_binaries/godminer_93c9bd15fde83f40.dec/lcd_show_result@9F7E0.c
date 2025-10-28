int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1A8B2C) )
  {
    v7 = -4;
    strcpy((char *)s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "lcd_show_result",
      15,
      470,
      100,
      v10);
  }
  else
  {
    v6 = dword_1A25E0;
    if ( dword_1A25E0 < 0 )
    {
      dword_1A25E0 = lcd_init((int)lcd_path);
      lcd_clear(dword_1A25E0);
      v6 = dword_1A25E0;
    }
    if ( v6 <= 0 )
    {
      snprintf((char *)s, 0x800u, "failed to init %s\n", lcd_path);
      v7 = -1;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_ui.c",
        163,
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
    pthread_mutex_unlock(&stru_1A8B2C);
  }
  return v7;
}
