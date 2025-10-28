int __fastcall pwm_get(int a1, int *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // r2
  int v6; // r1
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    v4 = 100;
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    v5 = 101;
    LOWORD(v6) = 6164;
    v7 = g_zc;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 != 1 )
      return -5;
    v3 = HIWORD(*(_DWORD *)(dword_3B52A4 + 132));
    *a2 = v3;
    v4 = 20;
    snprintf(s, 0x800u, "duty of fpga = 0x%x\n", v3);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v10, 0x1000u, v2, s);
    pthread_mutex_unlock(&stru_3B526C);
    v5 = 109;
    LOWORD(v6) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_pwm.c";
    v7 = g_zc;
  }
  HIWORD(v6) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_pwm.c" >> 16;
  zlog(v7, v6, 81, "pwm_get", 7, v5, v4, v10);
  return v2;
}
