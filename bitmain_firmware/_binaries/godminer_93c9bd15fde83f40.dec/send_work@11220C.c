int __fastcall send_work(int a1)
{
  char *v2; // r7
  int v3; // r0
  void *v4; // r0
  size_t v5; // r2
  void *v6; // r7
  char *v7; // r8
  int v8; // r10
  size_t n; // [sp+14h] [bp-1018h]
  unsigned int v11; // [sp+24h] [bp-1008h] BYREF
  char v12[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 132));
  pthread_mutex_lock(&stru_1A8A24);
  v3 = syscall(224);
  logfmt_raw(v12, 0x1000u, 0, "%s on pid %ld", v2, v3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "send_work",
    9,
    46,
    60,
    v12);
  prctl(15, v2);
  n = *(_DWORD *)(a1 + 628);
  v4 = calloc(1u, n);
  v5 = n;
  v6 = v4;
  while ( 1 )
  {
    memset(v6, 0, v5);
    sub_96D60(*(_DWORD *)(a1 + 652), (char *)v6);
    if ( *(_BYTE *)(a1 + 686) )
      break;
    if ( *(_BYTE *)(a1 + 142) || *(_BYTE *)(a1 + 141) )
    {
      v7 = (char *)calloc(1u, *(_DWORD *)(a1 + 640));
      v11 = 0;
      (*(void (__fastcall **)(int, void *, char *, unsigned int *))(a1 + 56))(a1, v6, v7, &v11);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 736));
      while ( off_1A2BA8[0]() < v11 )
        ;
      v8 = ((size_t (__fastcall *)(int, char *, unsigned int))off_1A2B98[0])(*(_DWORD *)(a1 + 132), v7, v11);
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 736));
      if ( v8 <= 0 )
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v12, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 132), v8);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_base.c",
          143,
          "push_work_base",
          14,
          282,
          100,
          v12);
      }
      else
      {
        ++*(_QWORD *)(a1 + 248);
      }
      free(v7);
    }
    v5 = *(_DWORD *)(a1 + 628);
  }
  *(_BYTE *)(a1 + 686) = 0;
  free(v6);
  return 0;
}
