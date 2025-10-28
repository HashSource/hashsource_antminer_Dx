int sub_85E3C()
{
  int v0; // r4
  int v1; // r7
  int v3; // r0
  int v4; // r2
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v6[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(s, "platform_init\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v6, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
    84,
    "platform_init",
    13,
    63,
    100,
    v6);
  if ( !dword_12B6EC )
  {
    dword_12B75C = open("/dev/axi_fpga_dev", 2);
    if ( dword_12B75C < 0 )
    {
      snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", dword_12B75C);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fpga.c",
        82,
        "fpga_init",
        9,
        45,
        100,
        v6);
    }
    else if ( !sub_852FC() )
    {
      goto LABEL_2;
    }
    v0 = -1;
    strcpy(s, "fpga init failed\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = g_zc;
    v4 = 67;
LABEL_8:
    zlog(
      v3,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
      84,
      "platform_init",
      13,
      v4,
      100,
      v6);
    return v0;
  }
LABEL_2:
  v0 = gpio_init();
  if ( v0 )
  {
    v0 = -2;
    strcpy(s, "gpio init failed\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v3 = g_zc;
    v4 = 73;
    goto LABEL_8;
  }
  memset(&unk_12B760, 0, 0x124u);
  v1 = *(_DWORD *)dword_3B52A4 | 0x20000000;
  snprintf(s, 0x800u, "HARDWARE_VERSION = 0x%x\n", v1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v6, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
    84,
    "platform_init",
    13,
    86,
    40,
    v6);
  *(_DWORD *)dword_3B52A4 = v1;
  platform_inited = 1;
  return v0;
}
