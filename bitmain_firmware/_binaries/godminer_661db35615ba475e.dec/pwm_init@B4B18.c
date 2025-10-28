int __fastcall pwm_init(unsigned int a1, int a2)
{
  int v2; // r2
  int *v3; // r3
  char v5[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 > 1 )
    {
      strcpy(v5, "bad param\n");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_pwm.c",
        164,
        "pwm_init",
        8,
        30,
        100,
        v6);
      return -3;
    }
    else
    {
      v2 = a1 + 1;
      v3 = &dword_195CAC[2 * a1];
      v3[32] = a2;
      *((_BYTE *)v3 + 132) = 1;
    }
  }
  else
  {
    strcpy(v5, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_pwm.c",
      164,
      "pwm_init",
      8,
      25,
      100,
      v6);
    return -2;
  }
  return v2;
}
