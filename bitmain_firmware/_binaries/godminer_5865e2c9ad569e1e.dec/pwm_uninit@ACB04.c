int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD v6[2]; // [sp+10h] [bp-1808h] BYREF
  __int16 v7; // [sp+18h] [bp-1800h]
  char v8[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v2) = 8528;
    HIWORD(v2) = (unsigned int)&unk_139CB8 >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6[0] = v3;
    v6[1] = v4;
    v7 = v5;
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v6);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_godminer-new/backend/device/hal/platform/7007/7007_pwm.c",
             170,
             "pwm_uninit",
             10,
             41,
             100,
             v8);
  }
  else
  {
    result = a1 - 1;
    dword_18A444[2 * result] = 0;
    byte_18A448[8 * result] = 0;
  }
  return result;
}
