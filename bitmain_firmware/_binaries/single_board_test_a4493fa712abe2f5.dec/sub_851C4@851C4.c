int sub_851C4()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( munmap((void *)dword_3B52A4, 0x1200u) < 0 )
  {
    strcpy(v1, "munmap axi_fpga_addr_hal failed!\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v2, 0x1000u, 0, v1);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
      82,
      "fpga_uninit",
      11,
      95,
      100,
      v2);
  }
  if ( munmap((void *)dword_12B734, 0x1000000u) < 0 )
  {
    strcpy(v1, "munmap fpga_mem_addr_hal failed!\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v2, 0x1000u, 0, v1);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
      82,
      "fpga_uninit",
      11,
      101,
      100,
      v2);
  }
  dword_12B6EC = 0;
  return close(dword_12B75C);
}
