int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v3; // lr
  unsigned int v4; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_pwm.c",
      164,
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
    v3 = dword_197C8C;
    v4 = (unsigned __int16)(dword_195D2C * (100 - a2) / 0x64) | ((dword_195D2C * a2 / 0x64) << 16);
    *(_DWORD *)(dword_197C8C + 132) = v4;
    *(_DWORD *)(v3 + 160) = v4;
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "pwm type %d not supported\n", a1 - 1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v6, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_pwm.c",
      164,
      "pwm_set",
      7,
      81,
      100,
      v6);
    return 0;
  }
}
