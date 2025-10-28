int __fastcall set_dhash_acc_control(int a1)
{
  const char *v1; // r2
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = 12168;
  HIWORD(v1) = (unsigned int)" not match (%d!=%d) expected diff %d" >> 16;
  *(_DWORD *)(dword_1A8A8C + 256) = a1;
  snprintf(s, 0x800u, v1, a1);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_common.c",
           167,
           "set_dhash_acc_control",
           21,
           343,
           40,
           v4);
}
