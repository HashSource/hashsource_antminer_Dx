int __fastcall set_dhash_acc_control(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  *(_DWORD *)(dword_3B52A4 + 256) = a1;
  snprintf(s, 0x800u, "set DHASH_ACC_CONTROL is 0x%x\n", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
           84,
           "set_dhash_acc_control",
           21,
           343,
           40,
           v3);
}
