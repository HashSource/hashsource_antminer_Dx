int bitmain_power_version()
{
  int v0; // r5
  int v2; // [sp+10h] [bp-1810h] BYREF
  __int16 v3; // [sp+14h] [bp-180Ch]
  int v4; // [sp+18h] [bp-1808h] BYREF
  int v5; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v7[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_12B72C || (v0 = sub_882E8(), v0 >= 0) )
  {
    v2 = 33860181;
    v4 = 0;
    v3 = 6;
    v5 = 0;
    if ( sub_D1B24(dword_12B728[0], (unsigned __int8 *)&v2, 6u, (unsigned __int8 *)&v4) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed\n");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        83,
        "_bitmain_get_power_version",
        26,
        208,
        100,
        v7);
    }
    else
    {
      v0 = (unsigned __int16)v5;
      if ( (_WORD)v5 )
        dword_12B730 = (unsigned __int16)v5;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v7, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      83,
      "bitmain_power_version",
      21,
      396,
      100,
      v7);
  }
  return v0;
}
