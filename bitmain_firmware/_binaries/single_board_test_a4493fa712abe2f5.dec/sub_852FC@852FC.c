int sub_852FC()
{
  void *v0; // r0
  int fd; // r0
  void *v2; // r0
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v0 = mmap(0, 0x1200u, 3, 1, dword_12B75C, 0);
  dword_3B52A4 = (int)v0;
  if ( v0 )
  {
    snprintf(s, 0x800u, "fpga_init success. axi_fpga_addr_hal = 0x%x\n", v0);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
      82,
      "fpga_init",
      9,
      59,
      20,
      v5);
    fd = open("/dev/fpga_mem", 2);
    if ( fd < 0 )
    {
      snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", fd);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        82,
        "fpga_init",
        9,
        64,
        100,
        v5);
      perror("open");
      return -1;
    }
    else
    {
      v2 = mmap(0, 0x1000000u, 3, 1, fd, 0);
      dword_12B734 = (int)v2;
      if ( v2 )
      {
        snprintf(s, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", v2);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v5, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
          82,
          "fpga_init",
          9,
          76,
          40,
          v5);
        result = 0;
        dword_12B6EC = 1;
      }
      else
      {
        snprintf(s, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
          82,
          "fpga_init",
          9,
          73,
          100,
          v5);
        return -1;
      }
    }
  }
  else
  {
    snprintf(s, 0x800u, "mmap axi_fpga_addr_hal failed. axi_fpga_addr_hal = 0x%x\n", 0);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
      82,
      "fpga_init",
      9,
      53,
      100,
      v5);
    close(dword_12B75C);
    return -2;
  }
  return result;
}
