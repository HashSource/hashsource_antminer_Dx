int sub_A7E54()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock((pthread_mutex_t *)&power_mutex);
  strcpy(v1, "bitmain power close ===========");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    172,
    "bitmain_power_close",
    19,
    628,
    40,
    v2);
  iic_uninit(dword_177458);
  dword_17745C = 0;
  dword_177460 = 0;
  memset(byte_177468, 0, 0x68u);
  return pthread_mutex_unlock((pthread_mutex_t *)&power_mutex);
}
