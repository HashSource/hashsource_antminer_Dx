int __fastcall read_fpga_id(char *a1)
{
  int v1; // r5
  int v2; // r6
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = *(_DWORD *)(dword_197C8C + 240);
  v2 = *(_DWORD *)(dword_197C8C + 244);
  sprintf(a1, "%08x%08x", v2, v1);
  snprintf(s, 0x800u, "\n%x %x\n", v1, v2);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_common.c",
           167,
           "read_fpga_id",
           12,
           379,
           100,
           v5);
}
