int __fastcall set_dhash_acc_control(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  *(_DWORD *)(dword_197C8C + 256) = a1;
  snprintf(s, 0x800u, "set DHASH_ACC_CONTROL is 0x%x\n", a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_common.c",
           167,
           "set_dhash_acc_control",
           21,
           343,
           40,
           v3);
}
