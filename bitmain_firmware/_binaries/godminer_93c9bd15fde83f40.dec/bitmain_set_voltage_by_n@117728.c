int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r6
  int v4; // [sp+10h] [bp-1814h] BYREF
  __int16 v5; // [sp+14h] [bp-1810h]
  int v6; // [sp+16h] [bp-180Eh] BYREF
  __int16 v7; // [sp+1Ah] [bp-180Ah]
  int v8; // [sp+1Ch] [bp-1808h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v10[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_1AA5F4 || (v2 = sub_117000(), v2 >= 0) )
  {
    v8 = 0;
    v7 = 0;
    v5 = (unsigned __int8)a1;
    v6 = (unsigned __int16)(a1 + 137);
    v4 = -2096715179;
    if ( sub_BF930(dword_1AA5F0, (unsigned __int8 *)&v4, 8u, (unsigned __int8 *)&v6 + 2) )
    {
      v2 = -2147482880;
      strcpy(s, "set DA conversion N failed\n");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "_bitmain_set_DA_conversion_N",
        28,
        357,
        100,
        v10);
    }
    else
    {
      return (unsigned __int16)v8;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v10, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_set_voltage_by_n",
      24,
      493,
      100,
      v10);
  }
  return v2;
}
