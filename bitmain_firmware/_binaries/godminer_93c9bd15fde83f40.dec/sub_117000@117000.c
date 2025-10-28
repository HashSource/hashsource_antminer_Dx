int sub_117000()
{
  int v0; // r4
  int v1; // r0
  _DWORD v3[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3[1] = (char *)&word_20000 + 1;
  v3[0] = 0;
  pthread_mutex_lock(&power_mutex);
  v0 = iic_init((int)v3);
  pthread_mutex_unlock(&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_1AA5F0 = v0;
  dword_1AA5F4 = 1;
  memset(&byte_1AA600, 0, 0x68u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_1AA5F8 = v1;
    snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    v0 = 0;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v5, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_power_open",
      18,
      416,
      40,
      v5);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v5, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_power_open",
    18,
    411,
    40,
    v5);
  if ( dword_1AA5F0 && dword_1AA5F4 )
    return v0;
  sub_116E6C();
  return v0;
}
