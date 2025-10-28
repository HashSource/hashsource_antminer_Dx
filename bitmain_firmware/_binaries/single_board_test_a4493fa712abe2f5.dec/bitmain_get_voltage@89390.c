int bitmain_get_voltage()
{
  int result; // r0
  int v1; // [sp+10h] [bp-1810h] BYREF
  __int16 v2; // [sp+14h] [bp-180Ch]
  _DWORD v3[2]; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v5[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_12B72C || sub_882E8() >= 0 )
  {
    v1 = 50637397;
    v3[0] = 0;
    v2 = 7;
    v3[1] = 0;
    result = sub_D1B24(dword_12B728[0], (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)v3);
    if ( result )
    {
      strcpy(s, "get AD conversion N failed\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        83,
        "_bitmain_get_AD_conversion_N",
        28,
        268,
        100,
        v5);
      strcpy(s, "can nont get voltage\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v5, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      return zlog(
               g_zc,
               "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
               83,
               "bitmain_get_voltage",
               19,
               410,
               100,
               v5);
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    return zlog(
             g_zc,
             "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
             83,
             "bitmain_get_voltage",
             19,
             406,
             100,
             v5);
  }
  return result;
}
