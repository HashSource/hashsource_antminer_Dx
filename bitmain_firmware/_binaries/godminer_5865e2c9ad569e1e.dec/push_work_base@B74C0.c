int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  void *v5; // r6
  unsigned int v6; // r0
  int (**v7)(); // r0
  int (**v8)(); // r0
  int v9; // r5
  int v11; // r1
  unsigned int v12; // [sp+14h] [bp-101Ch] BYREF
  char v13[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 238) && !*(_BYTE *)(a1 + 237) )
    return 13;
  v4 = (pthread_mutex_t *)(a1 + 912);
  v5 = calloc(1u, *(_DWORD *)(a1 + 816));
  v12 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 64))(a1, a2, v5, &v12);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = ((int (__fastcall *)(_DWORD))v7[17])(*(_DWORD *)(a1 + 228));
  }
  while ( v6 < v12 );
  v8 = dev_ctrl(v6);
  v9 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v8[13])(*(_DWORD *)(a1 + 228), v5, v12);
  pthread_mutex_unlock(v4);
  if ( v9 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 228), v9);
    V_UNLOCK();
    LOWORD(v11) = 27916;
    HIWORD(v11) = (unsigned int)"%s %s" >> 16;
    zlog(g_zc, v11, 149, "push_work_base", 14, 378, 100, v13);
  }
  else
  {
    ++*(_QWORD *)(a1 + 416);
  }
  free(v5);
  return 0;
}
