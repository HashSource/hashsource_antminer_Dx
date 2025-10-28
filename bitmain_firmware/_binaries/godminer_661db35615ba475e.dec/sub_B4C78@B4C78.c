int sub_B4C78()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(v1, "failed to i2c lock\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_iic.c",
    164,
    "iic_write",
    9,
    103,
    100,
    v2);
  return -4;
}
