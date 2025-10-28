int __fastcall lcd_init(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD v6[512]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18B1B0 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_18B1B4 = result;
    if ( result < 0 )
    {
      strcpy((char *)v6, "open lcd failed!!!");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
        170,
        "lcd_init",
        8,
        41,
        100,
        v7);
      return -1;
    }
    else
    {
      dword_18B1B0 = 1;
    }
  }
  else
  {
    LOWORD(v2) = 8528;
    HIWORD(v2) = (unsigned int)&unk_139CB8 >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6[0] = v3;
    v6[1] = v4;
    LOWORD(v6[2]) = v5;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
      170,
      "lcd_init",
      8,
      35,
      100,
      v7);
    return -3;
  }
  return result;
}
