int create_pool_stratum_threads()
{
  int v0; // r5
  int v1; // r1
  _DWORD *v2; // r5
  int v3; // r4
  int v4; // r11
  char *v5; // r6
  pthread_mutex_t *v6; // r8
  pthread_cond_t *v7; // r9
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  int v10; // r8
  _DWORD *ptr; // [sp+4h] [bp-10h]
  _DWORD *v13; // [sp+8h] [bp-Ch]

  v0 = *(_DWORD *)pools;
  pthread_mutex_lock(&stru_196218);
  dword_196230 = v0;
  pthread_cond_broadcast(&cond);
  pthread_mutex_unlock(&stru_196218);
  v1 = total_pools;
  if ( total_pools <= 0 )
    return 0;
  v2 = stratum_thr_info;
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(pools + 4 * v3);
      if ( *(_BYTE *)(v4 + 24) )
        break;
      ++v3;
      v2 += 12;
      if ( v3 >= v1 )
        return 0;
    }
    *v2 = v3 + 4;
    __pld(v2 + 24);
    v5 = (char *)calloc(1u, 0x58u);
    v6 = (pthread_mutex_t *)(v5 + 12);
    v7 = (pthread_cond_t *)(v5 + 40);
    __pld(v2 + 35);
    if ( !v5 )
    {
      stratum_thr_info[12 * v3 + 11] = 0;
      return -1;
    }
    *(_DWORD *)v5 = v5;
    *((_DWORD *)v5 + 1) = v5;
    pthread_mutex_init((pthread_mutex_t *)(v5 + 12), 0);
    pthread_cond_init(v7, 0);
    v2[11] = v5;
    v8 = calloc(1u, 0xCu);
    if ( v8 )
    {
      *v8 = v4;
      v8[1] = v8 + 1;
      v8[2] = v8 + 1;
      ptr = v8;
      v13 = v8 + 1;
      pthread_mutex_lock(v6);
      if ( v5[8] )
      {
        free(ptr);
      }
      else
      {
        v9 = (_DWORD *)*((_DWORD *)v5 + 1);
        ptr[1] = v5;
        ptr[2] = v9;
        *((_DWORD *)v5 + 1) = v13;
        *v9 = v13;
      }
      pthread_cond_signal(v7);
      pthread_mutex_unlock(v6);
    }
    pthread_attr_init((pthread_attr_t *)(v2 + 2));
    v10 = pthread_create(v2 + 1, (const pthread_attr_t *)(v2 + 2), (void *(*)(void *))stratum_thread, v2);
    pthread_attr_destroy((pthread_attr_t *)(v2 + 2));
    if ( v10 )
      break;
    v1 = total_pools;
    ++v3;
    v2 += 12;
    if ( v3 >= total_pools )
      return 0;
  }
  return sub_10859C();
}
