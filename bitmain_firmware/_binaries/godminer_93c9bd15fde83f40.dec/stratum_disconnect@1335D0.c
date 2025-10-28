int __fastcall stratum_disconnect(int *a1)
{
  pthread_mutex_t *v1; // r6
  int v3; // r0
  _BYTE *v4; // r3
  int v5; // r8
  int v7; // [sp+24h] [bp-1028h]
  int v8; // [sp+34h] [bp-1018h]
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v3 = a1[8];
  if ( v3 != -1 )
  {
    shutdown(v3, 2);
    close(a1[8]);
    v4 = (_BYTE *)a1[10];
    a1[8] = -1;
    *v4 = 0;
    pthread_mutex_lock(&stru_1A8A24);
    v5 = *a1;
    ++dword_1A8A20[0];
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v9,
      1506612,
      6,
      3,
      v8,
      (__int64)v5,
      0,
      v9,
      1618176,
      v7,
      1506612,
      6,
      3,
      v8,
      (__int64)v5,
      0);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_disconnect",
      18,
      205,
      20,
      v10);
  }
  return pthread_mutex_unlock(v1);
}
