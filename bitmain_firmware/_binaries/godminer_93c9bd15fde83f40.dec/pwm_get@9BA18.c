int __fastcall pwm_get(int a1, int *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r12
  int v5; // r2
  int v6; // r0
  int v7; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 100;
    v5 = 101;
    v6 = g_zc;
    LOWORD(v7) = 29692;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 != 1 )
      return -5;
    v3 = HIWORD(*(_DWORD *)(dword_1A8A8C + 132));
    *a2 = v3;
    snprintf(s, 0x800u, "duty of fpga = 0x%x\n", v3);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v10, 0x1000u, v2, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v4 = 20;
    v5 = 109;
    v6 = g_zc;
    LOWORD(v7) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/r"
                                   "elease/build/godminer-origin_master/backend/device/hal/platform/7007/7007_pwm.c";
  }
  HIWORD(v7) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release"
                             "/build/godminer-origin_master/backend/device/hal/platform/7007/7007_pwm.c" >> 16;
  zlog(v6, v7, 164, "pwm_get", 7, v5, v4, v10);
  return v2;
}
