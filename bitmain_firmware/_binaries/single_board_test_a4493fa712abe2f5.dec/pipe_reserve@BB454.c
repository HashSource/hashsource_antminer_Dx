int __fastcall pipe_reserve(pthread_mutex_t *mutex, int a2)
{
  int lock; // r4
  pthread_mutex_t *v3; // r7
  pthread_mutex_t *v5; // r8
  pthread_mutex_t *v6; // r0
  unsigned int owner; // r4
  __int64 v8; // kr00_8
  __int64 v9; // kr08_8
  int v10; // r1
  int v11; // r3
  __int64 v12; // kr10_8
  size_t v14; // r4
  char *v15; // r0
  int v16; // r11
  int v17; // r6
  char *v18; // r6
  char *v19; // r0

  v3 = (pthread_mutex_t *)((char *)mutex + 60);
  lock = mutex->__lock;
  v5 = (pthread_mutex_t *)((char *)mutex + 36);
  v6 = (pthread_mutex_t *)((char *)mutex + 60);
  owner = lock * a2;
  if ( !owner )
    owner = 32;
  pthread_mutex_lock(v6);
  pthread_mutex_lock(v5);
  v8 = *(_QWORD *)(&mutex->__align + 5);
  v9 = *(_QWORD *)(&mutex->__align + 3);
  v10 = mutex->__lock;
  if ( (unsigned int)v8 < HIDWORD(v8) )
    v11 = HIDWORD(v8) - v8;
  else
    v11 = HIDWORD(v8) - v9 + HIDWORD(v9) - v8;
  if ( owner > v11 - v10 )
  {
    v12 = *(_QWORD *)(&mutex->__align + 1);
    if ( owner >= HIDWORD(v12) )
      owner = mutex->__owner;
    if ( owner > (unsigned int)v12 )
    {
      v14 = owner + v10;
      v15 = (char *)malloc(v14);
      v16 = (int)v15;
      if ( (unsigned int)v8 >= HIDWORD(v8) )
      {
        v18 = &v15[HIDWORD(v9) - v8];
        memcpy(v15, (const void *)v8, HIDWORD(v9) - v8);
        v19 = v18;
        v17 = (int)&v18[HIDWORD(v8) - v9];
        memcpy(v19, (const void *)v9, HIDWORD(v8) - v9);
      }
      else
      {
        v17 = (int)&v15[HIDWORD(v8) - v8];
        memcpy(v15, (const void *)v8, HIDWORD(v8) - v8);
      }
      mutex[1].__lock = v17;
      free((void *)v9);
      mutex->__kind = v16;
      mutex->__nusers = v14 + v16;
      mutex->__spins = v16;
    }
  }
  pthread_mutex_unlock(v5);
  return j_pthread_mutex_unlock(v3);
}
