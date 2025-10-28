int __fastcall send_work(int a1)
{
  char *v2; // r7
  int v3; // r0
  void *v4; // r0
  size_t v5; // r2
  void *v6; // r8
  char *v7; // r9
  int v8; // r7
  size_t n; // [sp+14h] [bp-1018h]
  unsigned int v11; // [sp+24h] [bp-1008h] BYREF
  char v12[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 120));
  pthread_mutex_lock(&stru_3B526C);
  v3 = syscall(224);
  logfmt_raw(v12, 0x1000u, 0, "%s on pid %ld", v2, v3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/backend/backend_base.c", 60, "send_work", 9, 46, 60, v12);
  prctl(15, v2);
  n = *(_DWORD *)(a1 + 604);
  v4 = calloc(1u, n);
  v5 = n;
  v6 = v4;
  while ( 1 )
  {
    memset(v6, 0, v5);
    sub_D288C(*(_DWORD *)(a1 + 624), (char *)v6);
    if ( *(_BYTE *)(a1 + 658) )
      break;
    if ( *(_BYTE *)(a1 + 130) || *(_BYTE *)(a1 + 129) )
    {
      v7 = (char *)calloc(1u, *(_DWORD *)(a1 + 616));
      v11 = 0;
      (*(void (__fastcall **)(int, void *, char *, unsigned int *))(a1 + 44))(a1, v6, v7, &v11);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 708));
      while ( ((int (__fastcall *)())off_129474)() < v11 )
        ;
      v8 = ((size_t (__fastcall *)(int, char *, unsigned int))off_129464)(*(_DWORD *)(a1 + 120), v7, v11);
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 708));
      if ( v8 <= 0 )
      {
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v12, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 120), v8);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_base.c",
          60,
          "push_work_base",
          14,
          279,
          100,
          v12);
      }
      else
      {
        ++*(_QWORD *)(a1 + 232);
      }
      free(v7);
    }
    v5 = *(_DWORD *)(a1 + 604);
  }
  *(_BYTE *)(a1 + 658) = 0;
  free(v6);
  return 0;
}
