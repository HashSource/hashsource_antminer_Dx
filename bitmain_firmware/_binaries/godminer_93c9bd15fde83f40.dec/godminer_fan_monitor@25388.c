int __fastcall godminer_fan_monitor(int a1)
{
  int v1; // r2
  _QWORD *v2; // r4
  int v3; // r12
  int result; // r0
  int v5; // [sp+24h] [bp-1044h]
  char v6[4096]; // [sp+68h] [bp-1000h] BYREF

  v1 = *(_DWORD *)(a1 + 132);
  v2 = &qword_1A4030[10 * v1];
  v3 = *((_DWORD *)v2 + 8);
  ++*(_DWORD *)&byte_1A3B80[4 * v1 + 680];
  result = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    ++dword_1A8A20[0];
    logfmt_raw(
      v6,
      0x1000u,
      0,
      0,
      "error",
      5,
      0,
      0,
      "fan lost",
      0,
      8,
      0,
      "fan lost happend",
      v5,
      "error",
      5,
      0,
      0,
      "fan lost",
      0,
      8,
      0);
    pthread_mutex_unlock(&stru_1A8A24);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_fan_monitor",
               20,
               817,
               20,
               v6);
    v3 = *((_DWORD *)v2 + 8);
    *((_DWORD *)v2 + 10) |= 2u;
  }
  if ( (v3 & 1) != 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    ++dword_1A8A20[0];
    logfmt_raw(v6, 0x1000u, 0, 0, "error", 5, 0, 0, "fan slow", 0, 8, 0, "fan slow happend");
    pthread_mutex_unlock(&stru_1A8A24);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_fan_monitor",
               20,
               822,
               20,
               v6);
    *((_DWORD *)v2 + 10) |= 1u;
  }
  return result;
}
