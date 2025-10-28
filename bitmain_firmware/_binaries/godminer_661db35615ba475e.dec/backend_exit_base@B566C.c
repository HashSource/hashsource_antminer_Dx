int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r6
  int v4; // r6
  int v5; // r6
  int v6; // r6
  void (__fastcall *v7)(int); // r3
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 129) = 0;
  *(_BYTE *)(a1 + 130) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  (*(void (**)(void))(a1 + 36))();
  v2 = *(void (__fastcall **)(int))(a1 + 60);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 628);
  *(_BYTE *)(a1 + 656) = 1;
  *(_BYTE *)(a1 + 657) = 1;
  *(_BYTE *)(a1 + 658) = 1;
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 16));
  *(_BYTE *)(v3 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v3 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 16));
  v4 = *(_DWORD *)(a1 + 632);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 16));
  *(_BYTE *)(v4 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v4 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v4 + 16));
  v5 = *(_DWORD *)(a1 + 636);
  pthread_mutex_lock((pthread_mutex_t *)(v5 + 16));
  *(_BYTE *)(v5 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v5 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v5 + 16));
  v6 = *(_DWORD *)(a1 + 624);
  pthread_mutex_lock((pthread_mutex_t *)(v6 + 16));
  *(_BYTE *)(v6 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v6 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v6 + 16));
  pthread_join(*(_DWORD *)(a1 + 648), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 644), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 652), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 660));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 684));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 708));
  queue_free(*(_DWORD **)(a1 + 628));
  queue_free(*(_DWORD **)(a1 + 632));
  queue_free(*(_DWORD **)(a1 + 636));
  queue_free(*(_DWORD **)(a1 + 624));
  free(*(void **)(a1 + 280));
  free(*(void **)(a1 + 272));
  free(*(void **)(a1 + 276));
  free(*(void **)(a1 + 284));
  free(*(void **)(a1 + 248));
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  v7 = (void (__fastcall *)(int))off_18F4DC;
  *(_DWORD *)(a1 + 224) = -1;
  *(_DWORD *)(a1 + 640) = 0;
  v7(*(_DWORD *)(a1 + 120));
  return 0;
}
