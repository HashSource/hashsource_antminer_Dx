int fpga_chain_reset_all()
{
  unsigned int v0; // r5
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  *(_DWORD *)(dword_3B52A4 + 52) = ~(~HIWORD(*(_DWORD *)(dword_3B52A4 + 52)) << 16);
  sleep(3u);
  v0 = *(_DWORD *)(dword_3B52A4 + 52);
  *(_DWORD *)(dword_3B52A4 + 52) = HIWORD(v0) << 16;
  sleep(1u);
  snprintf(s, 0x800u, "fpga fpga_chain_reset_all success 0x%x\n", v0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
           84,
           "fpga_chain_reset_all",
           20,
           369,
           20,
           v3);
}
