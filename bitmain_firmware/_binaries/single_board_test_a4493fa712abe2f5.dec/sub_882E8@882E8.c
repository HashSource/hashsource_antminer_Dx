int sub_882E8()
{
  int v0; // r4
  int v1; // r0
  _DWORD v3[2]; // [sp+10h] [bp-180Ch] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  char v5[4100]; // [sp+818h] [bp-1004h] BYREF

  v3[0] = 0;
  v3[1] = &loc_20000;
  pthread_mutex_lock(&power_mutex);
  v0 = iic_init((int)v3);
  pthread_mutex_unlock(&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_12B728[0] = v0;
  dword_12B72C = 1;
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_12B730 = v1;
    snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v5, 0x1000u, 0, s);
    v0 = 0;
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      83,
      "bitmain_power_open",
      18,
      372,
      40,
      v5);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
    83,
    "bitmain_power_open",
    18,
    367,
    40,
    v5);
  if ( dword_12B728[0] && dword_12B72C )
    return v0;
  sub_87ED0();
  return v0;
}
