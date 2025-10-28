int __fastcall pwm_init(unsigned int a1, int a2)
{
  int result; // r0
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD v8[512]; // [sp+10h] [bp-1804h] BYREF
  char v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 > 1 )
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
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_pwm.c",
        170,
        "pwm_init",
        8,
        30,
        100,
        v9);
      return -3;
    }
    else
    {
      result = a1 + 1;
      dword_18A444[2 * a1] = a2;
      byte_18A448[8 * a1] = 1;
    }
  }
  else
  {
    strcpy((char *)v8, "please init platform first!!");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_pwm.c",
      170,
      "pwm_init",
      8,
      25,
      100,
      v9);
    return -2;
  }
  return result;
}
