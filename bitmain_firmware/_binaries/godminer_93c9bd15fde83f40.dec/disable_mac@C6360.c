int __fastcall disable_mac(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "disable_mac");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "disable_mac",
    11,
    11535,
    60,
    v4);
  v5 = 10420224;
  v6 = 0;
  v4[1] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = -1;
  v4[0] = 0;
  v2(a1, v4);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep(0x2710u);
  return 0;
}
