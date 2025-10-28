int bitmain_get_power_status()
{
  int v0; // r5
  int v2; // [sp+10h] [bp-1814h] BYREF
  __int16 v3; // [sp+14h] [bp-1810h]
  int v4; // [sp+18h] [bp-180Ch] BYREF
  int v5; // [sp+1Ch] [bp-1808h]
  _DWORD s[512]; // [sp+20h] [bp-1804h] BYREF
  char v7[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_17745C || (v0 = sub_A80F8(), v0 >= 0) )
  {
    v5 = 0;
    v4 = 0;
    v2 = 168077909;
    v3 = 14;
    if ( sub_A7840((void *)dword_177458, (unsigned __int8 *)&v2, 6u, (unsigned __int8 *)&v4, 8u) )
    {
      strcpy((char *)s, "get power status failed");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "_bitmain_get_power_status",
        25,
        503,
        100,
        v7);
      strcpy((char *)s, "can nont get power status");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "bitmain_get_power_status",
        24,
        557,
        100,
        v7);
      return -2147482880;
    }
    return (unsigned __int16)v5;
  }
  else
  {
    snprintf((char *)s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      172,
      "bitmain_get_power_status",
      24,
      553,
      100,
      v7);
  }
  return v0;
}
