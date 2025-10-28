int sub_14F438()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  strcpy(v1, "platform not inited\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_common.c",
    167,
    "get_temperature_0_3",
    19,
    941,
    100,
    v2);
  return 0;
}
