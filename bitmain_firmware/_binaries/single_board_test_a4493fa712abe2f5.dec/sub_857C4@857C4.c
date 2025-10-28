int sub_857C4()
{
  char v1[2048]; // [sp+10h] [bp-800h] BYREF
  char v2[4100]; // [sp+810h] [bp+0h] BYREF

  strcpy(v1, "platform not inited\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, v1);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
    84,
    "get_bt8d_control",
    16,
    1029,
    100,
    v2);
  return 0;
}
