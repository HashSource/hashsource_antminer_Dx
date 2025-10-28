int bitmain_set_voltage()
{
  int v0; // r5
  unsigned int v1; // r0
  int v3; // [sp+10h] [bp-1810h] BYREF
  __int16 v4; // [sp+14h] [bp-180Ch]
  __int16 v5; // [sp+16h] [bp-180Ah]
  int v6; // [sp+18h] [bp-1808h] BYREF
  int v7; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v9[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_1AA5F4 || (v0 = sub_117000(), v0 >= 0) )
  {
    v1 = bitmain_convert_V_to_N();
    if ( v1 > 0xFF )
    {
      return -2147482879;
    }
    else
    {
      v3 = -2096715179;
      v7 = 0;
      v5 = v1 + 137;
      v6 = 0;
      v4 = (unsigned __int8)v1;
      if ( sub_BF930(dword_1AA5F0, (unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v6) )
      {
        v0 = -2147482880;
        strcpy(s, "set DA conversion N failed\n");
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/power/bitmain_power_APW9.c",
          166,
          "_bitmain_set_DA_conversion_N",
          28,
          357,
          100,
          v9);
      }
      else
      {
        return (unsigned __int16)v7;
      }
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v9, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_set_voltage",
      19,
      479,
      100,
      v9);
  }
  return v0;
}
