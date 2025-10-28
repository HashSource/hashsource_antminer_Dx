int __fastcall push_work_base(int a1, int a2)
{
  char *v4; // r7
  int v5; // r5
  unsigned int v7; // [sp+14h] [bp-101Ch] BYREF
  char v8[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 142) && !*(_BYTE *)(a1 + 141) )
    return 4;
  v4 = (char *)calloc(1u, *(_DWORD *)(a1 + 640));
  v7 = 0;
  (*(void (__fastcall **)(int, int, char *, unsigned int *))(a1 + 56))(a1, a2, v4, &v7);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 736));
  while ( off_1A2BA8[0]() < v7 )
    ;
  v5 = ((size_t (__fastcall *)(int, char *, unsigned int))off_1A2B98[0])(*(_DWORD *)(a1 + 132), v4, v7);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 736));
  if ( v5 <= 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v8, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 132), v5);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_base.c",
      143,
      "push_work_base",
      14,
      282,
      100,
      v8);
  }
  else
  {
    ++*(_QWORD *)(a1 + 248);
  }
  free(v4);
  return 0;
}
