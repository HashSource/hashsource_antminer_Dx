int __fastcall wait_pool_to_be_current_timeout(int a1)
{
  struct timespec v3; // [sp+0h] [bp-10h] BYREF
  struct timespec tp; // [sp+8h] [bp-8h] BYREF

  clock_gettime(1, &tp);
  v3.tv_sec = tp.tv_sec + (tp.tv_nsec + 1000) / 1000000000;
  v3.tv_nsec = (tp.tv_nsec + 1000) % 1000000000;
  pthread_mutex_lock(&stru_1AA810);
  if ( dword_1AA828 != a1 )
    pthread_cond_timedwait(&cond, &stru_1AA810, &v3);
  return pthread_mutex_unlock(&stru_1AA810);
}
