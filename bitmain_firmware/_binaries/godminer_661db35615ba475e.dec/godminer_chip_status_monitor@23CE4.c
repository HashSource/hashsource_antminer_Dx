int __fastcall godminer_chip_status_monitor(_DWORD *a1)
{
  int v1; // r2
  char *v3; // r3
  _QWORD *v4; // r4
  int v5; // r2
  int result; // r0
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // [sp+34h] [bp-1054h]
  int v10; // [sp+44h] [bp-1044h]
  int v11; // [sp+54h] [bp-1034h]
  __int64 v12; // [sp+58h] [bp-1030h]
  int v13; // [sp+64h] [bp-1024h]
  int v14; // [sp+74h] [bp-1014h]
  __int64 v15; // [sp+78h] [bp-1010h]
  int v16; // [sp+84h] [bp-1004h]
  char v17[4096]; // [sp+88h] [bp-1000h] BYREF

  v1 = a1[30];
  v3 = &byte_190870[4 * v1];
  v4 = &qword_191250[10 * v1];
  v5 = *((_DWORD *)v4 + 12);
  ++*((_DWORD *)v3 + 150);
  if ( (v5 & 1) != 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    v7 = (_DWORD *)a1[71];
    v8 = a1[31];
    ++dword_197BD4;
    logfmt_raw(
      v17,
      0x1000u,
      0,
      v10,
      "chain",
      5,
      3,
      v9,
      (__int64)v8,
      0,
      v10,
      "some chip died %x",
      *v7,
      "chain",
      5,
      3,
      v9,
      (__int64)v8,
      0);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "godminer_chip_status_monitor",
      28,
      783,
      20,
      v17);
    v5 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 1u;
  }
  if ( (v5 & 2) != 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    v12 = (int)a1[31];
    ++dword_197BD4;
    logfmt_raw(v17, 0x1000u, 0, v13, "chain", 5, 3, v11, v12, 0, v13, "some chip working slow");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "godminer_chip_status_monitor",
      28,
      788,
      20,
      v17);
    v5 = *((_DWORD *)v4 + 12);
    *((_DWORD *)v4 + 14) |= 2u;
  }
  result = v5 & 4;
  if ( (v5 & 4) != 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    v15 = (int)a1[31];
    ++dword_197BD4;
    logfmt_raw(v17, 0x1000u, 0, v16, "chain", 5, 3, v14, v15, 0, v16, "some chip working slow");
    pthread_mutex_unlock(&stru_197BB8);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_chip_status_monitor",
               28,
               793,
               20,
               v17);
    *((_DWORD *)v4 + 14) |= 4u;
  }
  return result;
}
