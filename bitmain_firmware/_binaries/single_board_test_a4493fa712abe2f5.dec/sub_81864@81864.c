int sub_81864()
{
  char v1[2048]; // [sp+10h] [bp-800h] BYREF
  char v2[4100]; // [sp+810h] [bp+0h] BYREF

  strcpy(v1, "failed to i2c lock\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
    81,
    "iic_write_reg",
    13,
    146,
    100,
    v2);
  return -4;
}
