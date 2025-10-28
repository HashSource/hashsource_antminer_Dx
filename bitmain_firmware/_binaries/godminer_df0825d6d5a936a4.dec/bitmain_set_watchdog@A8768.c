int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r2
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_17745C )
  {
    v3 = sub_A80F8();
    if ( v3 < 0 )
    {
      snprintf((char *)s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_watchdog");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      v4 = 567;
LABEL_7:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "bitmain_set_watchdog",
        20,
        v4,
        100,
        v6);
      return v3;
    }
  }
  result = sub_A7CD8((void *)dword_177458, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    strcpy((char *)s, "can nont set power watchdog");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    v4 = 579;
    goto LABEL_7;
  }
  return result;
}
