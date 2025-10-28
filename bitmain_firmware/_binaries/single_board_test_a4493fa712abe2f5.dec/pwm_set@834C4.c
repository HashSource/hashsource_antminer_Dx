int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v3; // r6
  unsigned int v4; // r3
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_pwm.c",
      81,
      "pwm_set",
      7,
      62,
      100,
      v6);
    return -3;
  }
  else if ( a1 == 1 )
  {
    if ( a2 >= 0x64 )
      a2 = 100;
    v3 = dword_3B52A4;
    v4 = (unsigned __int16)(dword_12B74C * (100 - a2) / 0x64) | ((dword_12B74C * a2 / 0x64) << 16);
    *(_DWORD *)(dword_3B52A4 + 132) = v4;
    *(_DWORD *)(v3 + 160) = v4;
    return a1 - 1;
  }
  else
  {
    snprintf(s, 0x800u, "pwm type %d not supported\n", a1 - 1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v6, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_pwm.c",
      81,
      "pwm_set",
      7,
      81,
      100,
      v6);
    return 0;
  }
}
