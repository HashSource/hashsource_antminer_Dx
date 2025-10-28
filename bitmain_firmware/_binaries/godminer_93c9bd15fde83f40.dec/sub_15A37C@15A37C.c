int __fastcall sub_15A37C(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  result = close(a1);
  if ( result )
  {
    strcpy(v2, "lcd close failed!!!\n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v3, 0x1000u, 0, v2);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_lcd.c",
      164,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_1AB1A8 = 0;
  return result;
}
