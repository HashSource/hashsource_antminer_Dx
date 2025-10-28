int __fastcall read_fpga_id(char *a1)
{
  int v1; // r5
  int v2; // r6
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  v1 = *(_DWORD *)(dword_3B52A4 + 240);
  v2 = *(_DWORD *)(dword_3B52A4 + 244);
  sprintf(a1, "%08x%08x", v2, v1);
  snprintf(s, 0x800u, "\n%x %x\n", v1, v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
           84,
           "read_fpga_id",
           12,
           379,
           100,
           v5);
}
