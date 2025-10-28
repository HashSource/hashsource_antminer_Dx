int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r6
  int v4; // r6
  int v5; // r6
  int v6; // r6
  void (__fastcall *v7)(int); // r3
  int v8; // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  (*(void (**)(void))(a1 + 48))();
  v2 = *(void (__fastcall **)(int))(a1 + 72);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 656);
  *(_BYTE *)(a1 + 684) = 1;
  *(_BYTE *)(a1 + 685) = 1;
  *(_BYTE *)(a1 + 686) = 1;
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 16));
  *(_BYTE *)(v3 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v3 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 16));
  v4 = *(_DWORD *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 16));
  *(_BYTE *)(v4 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v4 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v4 + 16));
  v5 = *(_DWORD *)(a1 + 664);
  pthread_mutex_lock((pthread_mutex_t *)(v5 + 16));
  *(_BYTE *)(v5 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v5 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v5 + 16));
  v6 = *(_DWORD *)(a1 + 652);
  pthread_mutex_lock((pthread_mutex_t *)(v6 + 16));
  *(_BYTE *)(v6 + 92) = 1;
  pthread_cond_signal((pthread_cond_t *)(v6 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v6 + 16));
  pthread_join(*(_DWORD *)(a1 + 676), thread_return);
  pthread_join(*(_DWORD *)(a1 + 672), thread_return);
  pthread_join(*(_DWORD *)(a1 + 680), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 688));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 712));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 736));
  queue_free(*(_DWORD **)(a1 + 656));
  queue_free(*(_DWORD **)(a1 + 660));
  queue_free(*(_DWORD **)(a1 + 664));
  queue_free(*(_DWORD **)(a1 + 652));
  free(*(void **)(a1 + 296));
  free(*(void **)(a1 + 288));
  free(*(void **)(a1 + 292));
  free(*(void **)(a1 + 300));
  free(*(void **)(a1 + 264));
  if ( *(_DWORD *)(a1 + 648) )
    free(*(void **)(a1 + 324));
  *(_DWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  v7 = (void (__fastcall *)(int))off_1A2B88;
  *(_QWORD *)(a1 + 256) = 0;
  v8 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 668) = 0;
  v7(v8);
  return 0;
}
