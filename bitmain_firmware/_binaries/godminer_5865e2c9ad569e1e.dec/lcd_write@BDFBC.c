int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r11
  unsigned __int8 v10; // r5
  size_t v11; // r6
  const void *v12; // r1
  int *v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  _DWORD v19[512]; // [sp+10h] [bp-1804h] BYREF
  char v20[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_18B1B0 )
    return -2;
  v5 = a4;
  if ( dword_18B1B4 != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    LOWORD(v15) = 8528;
    HIWORD(v15) = (unsigned int)&unk_139CB8 >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v19[0] = v16;
    v19[1] = v17;
    LOWORD(v19[2]) = v18;
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
      170,
      "lcd_write",
      9,
      69,
      80,
      v20);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_18B1B8);
    if ( v9 )
    {
      strcpy((char *)v19, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(v20, 0x1000u, v7, v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
        170,
        "lcd_write",
        9,
        75,
        100,
        v20);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        v12 = (const void *)(a3 + v9);
        v9 += v11;
        memcpy((char *)&unk_18B1D0 + 16 * v4, v12, v11);
        v5 -= v11;
        v4 = (char)v10;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_18B1B4, &unk_18B1D0, 0x40u);
      pthread_mutex_unlock(&stru_18B1B8);
      return 0;
    }
  }
}
