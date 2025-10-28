int fpga_chain_reset_all()
{
  unsigned int v0; // r5
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  *(_DWORD *)(dword_197C8C + 52) = ~(~HIWORD(*(_DWORD *)(dword_197C8C + 52)) << 16);
  sleep(3u);
  v0 = *(_DWORD *)(dword_197C8C + 52);
  *(_DWORD *)(dword_197C8C + 52) = HIWORD(v0) << 16;
  sleep(1u);
  snprintf(s, 0x800u, "fpga fpga_chain_reset_all success 0x%x\n", v0);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_common.c",
           167,
           "fpga_chain_reset_all",
           20,
           369,
           20,
           v3);
}
