int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD v8[512]; // [sp+10h] [bp-1800h] BYREF
  char v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_18B1B0 )
    return -2;
  if ( dword_18B1B4 == a1 )
  {
    if ( pthread_mutex_lock(&stru_18B1B8) )
    {
      strcpy((char *)v8, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
        170,
        "lcd_clear",
        9,
        123,
        100,
        v9);
      return -4;
    }
    else
    {
      memset(&unk_18B1D0, 0x20, 0x40u);
      v1 = dword_18B1B4;
      lseek64(dword_18B1B4, v2, 0, 0, 0);
      write(v1, &unk_18B1D0, 0x40u);
      pthread_mutex_unlock(&stru_18B1B8);
      return 0;
    }
  }
  else
  {
    LOWORD(v4) = 8528;
    HIWORD(v4) = (unsigned int)&unk_139CB8 >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8[0] = v5;
    v8[1] = v6;
    LOWORD(v8[2]) = v7;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
      170,
      "lcd_clear",
      9,
      117,
      80,
      v9);
    return -3;
  }
}
