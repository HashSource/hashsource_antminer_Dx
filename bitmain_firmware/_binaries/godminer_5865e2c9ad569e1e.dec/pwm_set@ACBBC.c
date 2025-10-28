int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  unsigned int v4; // r5
  int *v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  _DWORD s[2]; // [sp+10h] [bp-1804h] BYREF
  __int16 v10; // [sp+18h] [bp-17FCh]
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v5) = 8528;
    HIWORD(v5) = (unsigned int)&unk_139CB8 >> 16;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    s[0] = v6;
    s[1] = v7;
    v10 = v8;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_pwm.c",
      170,
      "pwm_set",
      7,
      62,
      100,
      v11);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      if ( a2 >= 0x64 )
        a2 = 100;
      v4 = (unsigned __int16)(dword_18A444[0] * (100 - a2) / 0x64) | ((dword_18A444[0] * a2 / 0x64) << 16);
      fpga_write(132, v4);
      fpga_write(160, v4);
      return v2;
    }
    else
    {
      snprintf((char *)s, 0x800u, "pwm type %d not supported", a1 - 1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_pwm.c",
        170,
        "pwm_set",
        7,
        81,
        100,
        v11);
      return 0;
    }
  }
}
