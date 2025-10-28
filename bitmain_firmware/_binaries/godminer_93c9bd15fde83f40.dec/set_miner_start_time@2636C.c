time_t set_miner_start_time()
{
  int v0; // r3
  time_t result; // r0
  int v2; // r4
  char *v3; // r0
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  char v6[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v2 = *_errno_location();
    v3 = strerror(v2);
    sprintf(v6, "Failed to get sysinfo, errno:%u, reason:%s", v2, v3);
    result = time(0);
    dword_1A3E58 = result + 1;
    dword_1A3E54 = result;
  }
  else
  {
    dword_1A3E54 = info.uptime;
    dword_1A3E58 = info.uptime + 1;
    sprintf(s, "%s total_tv_start_sys=%ld total_tv_end_sys=%ld", "set_miner_start_time");
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v0) = 26612;
    HIWORD(v0) = (unsigned int)"essfully authenticated to server!" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/api_new.c",
             130,
             "set_miner_start_time",
             20,
             312,
             60,
             v6);
  }
  return result;
}
