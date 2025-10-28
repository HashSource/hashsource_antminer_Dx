int __fastcall pipe_reserve(pthread_mutex_t *mutex, int a2)
{
  int lock; // r4
  pthread_mutex_t *v3; // r7
  pthread_mutex_t *v5; // r8
  pthread_mutex_t *v6; // r0
  unsigned int owner; // r4
  struct __pthread_internal_slist *next; // r11
  unsigned int v9; // r6
  void *kind; // r9
  int v11; // r0
  unsigned int v12; // r3
  size_t v14; // r4
  char *v15; // r0
  int v16; // r10
  size_t v17; // r2
  int v18; // r6
  size_t v19; // r2
  struct __pthread_internal_slist *v20; // r1
  size_t v21; // r11
  char *v22; // r6
  char *v23; // r0
  unsigned int nusers; // [sp+4h] [bp-8h]

  v3 = (pthread_mutex_t *)((char *)mutex + 60);
  lock = mutex->__lock;
  v5 = (pthread_mutex_t *)((char *)mutex + 36);
  v6 = (pthread_mutex_t *)((char *)mutex + 60);
  owner = lock * a2;
  if ( !owner )
    owner = 32;
  pthread_mutex_lock(v6);
  pthread_mutex_lock(v5);
  next = mutex->__list.__next;
  v9 = mutex[1].__lock;
  kind = (void *)mutex->__kind;
  v11 = mutex->__lock;
  if ( (unsigned int)next < v9 )
    v12 = v9 - (_DWORD)next;
  else
    v12 = v9 - (_DWORD)kind;
  if ( (unsigned int)next >= v9 )
    v12 += mutex->__nusers - (_DWORD)next;
  if ( owner > v12 - v11 )
  {
    if ( owner >= mutex->__owner )
      owner = mutex->__owner;
    if ( owner > mutex->__count )
    {
      v14 = owner + v11;
      nusers = mutex->__nusers;
      v15 = (char *)malloc(v14);
      v16 = (int)v15;
      if ( (unsigned int)next >= v9 )
      {
        v19 = nusers - (_DWORD)next;
        v20 = next;
        v21 = v9 - (_DWORD)kind;
        v22 = &v15[v19];
        memcpy(v15, v20, v19);
        v23 = v22;
        v18 = (int)&v22[v21];
        memcpy(v23, kind, v21);
      }
      else
      {
        v17 = v9 - (_DWORD)next;
        v18 = (int)&v15[v9 - (_DWORD)next];
        memcpy(v15, next, v17);
      }
      mutex[1].__lock = v18;
      free(kind);
      mutex->__kind = v16;
      mutex->__nusers = v16 + v14;
      mutex->__spins = v16;
    }
  }
  pthread_mutex_unlock(v5);
  return pthread_mutex_unlock(v3);
}
