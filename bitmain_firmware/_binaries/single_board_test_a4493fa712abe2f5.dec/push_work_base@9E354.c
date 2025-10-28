int __fastcall push_work_base(int a1, int a2)
{
  char *v4; // r7
  int v5; // r5
  unsigned int v7; // [sp+14h] [bp-101Ch] BYREF
  char v8[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 130) && !*(_BYTE *)(a1 + 129) )
    return 4;
  v4 = (char *)calloc(1u, *(_DWORD *)(a1 + 616));
  v7 = 0;
  (*(void (__fastcall **)(int, int, char *, unsigned int *))(a1 + 44))(a1, a2, v4, &v7);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 708));
  while ( ((int (__fastcall *)())off_129474)() < v7 )
    ;
  v5 = ((size_t (__fastcall *)(int, char *, unsigned int))off_129464)(*(_DWORD *)(a1 + 120), v4, v7);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 708));
  if ( v5 <= 0 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v8, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 120), v5);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/backend/backend_base.c", 60, "push_work_base", 14, 279, 100, v8);
  }
  else
  {
    ++*(_QWORD *)(a1 + 232);
  }
  free(v4);
  return 0;
}
