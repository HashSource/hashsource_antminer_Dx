int __fastcall godminer_heartbeat_monitor(int result)
{
  int v1; // r2
  _QWORD *v2; // r4
  int v3; // r1
  int v4; // r7
  int v5; // r7
  int v6; // [sp+44h] [bp-1048h]
  int v7; // [sp+54h] [bp-1038h]
  int v8; // [sp+64h] [bp-1028h]
  char v9[4100]; // [sp+88h] [bp-1004h] BYREF

  v1 = *(_DWORD *)(result + 132);
  v2 = &qword_1A4030[10 * v1];
  v3 = *((_DWORD *)v2 + 16);
  ++*(_DWORD *)&byte_1A3B80[4 * v1 + 640];
  if ( (v3 & 1) != 0 )
  {
    v4 = result;
    pthread_mutex_lock(&stru_1A8A24);
    v5 = *(_DWORD *)(v4 + 136);
    dword_1A8A20[0] += 2;
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v8,
      "chain",
      5,
      3,
      v7,
      (__int64)v5,
      0,
      v8,
      "error",
      5,
      0,
      0,
      "pic lost",
      0,
      8,
      0,
      "heartbeat failed",
      v6,
      "chain",
      5,
      3,
      v7,
      (__int64)v5,
      0,
      v8,
      "error",
      5,
      0,
      0,
      "pic lost",
      0,
      8,
      0);
    pthread_mutex_unlock(&stru_1A8A24);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_heartbeat_monitor",
               26,
               805,
               100,
               v9);
    *((_DWORD *)v2 + 18) |= 1u;
  }
  return result;
}
