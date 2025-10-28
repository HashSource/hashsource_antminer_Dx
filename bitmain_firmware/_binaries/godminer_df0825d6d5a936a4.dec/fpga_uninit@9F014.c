void fpga_uninit()
{
  char v0[2048]; // [sp+10h] [bp-1804h] BYREF
  char v1[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_176FC4 )
  {
    if ( munmap((void *)dword_176FCC, 0x1200u) < 0 )
    {
      strcpy(v0, "munmap axi_fpga_addr_hal failed!");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_fpga.c",
        171,
        "fpga_uninit",
        11,
        95,
        100,
        v1);
    }
    if ( munmap((void *)dword_176FD0, 0x1000000u) < 0 )
    {
      strcpy(v0, "munmap fpga_mem_addr_hal failed!");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_fpga.c",
        171,
        "fpga_uninit",
        11,
        101,
        100,
        v1);
    }
    dword_176FC4 = 0;
    close(dword_176FC8);
  }
}
