int fpga_init()
{
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  result = 0;
  if ( !dword_12B6EC )
  {
    dword_12B75C = open("/dev/axi_fpga_dev", 2);
    if ( dword_12B75C < 0 )
    {
      snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", dword_12B75C);
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        82,
        "fpga_init",
        9,
        45,
        100,
        v2);
      return -1;
    }
    else
    {
      return sub_852FC();
    }
  }
  return result;
}
