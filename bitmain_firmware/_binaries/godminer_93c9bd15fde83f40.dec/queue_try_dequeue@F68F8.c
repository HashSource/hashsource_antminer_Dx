int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int v7; // r0
  int v8; // r5

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v8 = 0;
  }
  else
  {
    v7 = pipe_pop(*(int **)(a1 + 8), a2, a3);
    if ( v7 != a3 )
      sub_20D48();
    v8 = 1;
    *(_DWORD *)(a1 + 12) -= v7;
  }
  pthread_mutex_unlock(v3);
  return v8;
}
