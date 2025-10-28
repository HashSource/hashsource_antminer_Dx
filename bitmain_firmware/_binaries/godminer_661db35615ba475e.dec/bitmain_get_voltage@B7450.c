int bitmain_get_voltage()
{
  int result; // r0
  int v1; // [sp+10h] [bp-1814h] BYREF
  __int16 v2; // [sp+14h] [bp-1810h]
  _DWORD v3[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v5[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_195CB0 || sub_B6B8C() >= 0 )
  {
    v3[1] = 0;
    v3[0] = 0;
    v1 = 50637397;
    v2 = 7;
    result = sub_AFE88(dword_195CAC[0], (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)v3, 8u);
    if ( result )
    {
      strcpy(s, "get AD conversion N failed\n");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "_bitmain_get_AD_conversion_N",
        28,
        268,
        100,
        v5);
      strcpy(s, "can nont get voltage\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v5, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/device/hal/power/bitmain_power_APW9.c",
               166,
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
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/power/bitmain_power_APW9.c",
             166,
             "bitmain_get_voltage",
             19,
             406,
             100,
             v5);
  }
  return result;
}
