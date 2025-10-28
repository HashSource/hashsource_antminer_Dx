int sub_14E70C()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( munmap((void *)dword_197C8C, 0x1200u) < 0 )
  {
    strcpy(v1, "munmap axi_fpga_addr_hal failed!\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v2, 0x1000u, 0, v1);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_fpga.c",
      165,
      "fpga_uninit",
      11,
      95,
      100,
      v2);
  }
  if ( munmap((void *)dword_197CA8, 0x1000000u) < 0 )
  {
    strcpy(v1, "munmap fpga_mem_addr_hal failed!\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v2, 0x1000u, 0, v1);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_fpga.c",
      165,
      "fpga_uninit",
      11,
      101,
      100,
      v2);
  }
  dword_195C18 = 0;
  return close(dword_197E00);
}
