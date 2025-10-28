int __fastcall async_push_work_base(int a1, char *a2)
{
  int v2; // r8
  int v3; // r5
  size_t v4; // r6
  pthread_cond_t *v5; // r7
  char *v6; // r4
  char *v7; // r9
  size_t v8; // r10
  int v9; // r3
  pthread_cond_t *v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r1
  int v13; // r1
  size_t v14; // r7
  char *v15; // r0
  size_t v16; // r10
  size_t v17; // r2
  char *v18; // r1
  pthread_cond_t *v19; // r0
  int v21; // r0
  int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r0
  int v25; // r3
  unsigned int v26; // r3
  unsigned int v27; // r3
  unsigned int v28; // r10
  __int64 v29; // r2
  char *v30; // r0
  pthread_cond_t *v31; // r12
  char *v32; // lr
  char *v33; // r1
  _BOOL4 v34; // r3
  pthread_cond_t *v35; // r0
  pthread_cond_t *v36; // r10
  size_t v37; // r2
  char *v38; // r4
  size_t v39; // r2
  pthread_cond_t *v40; // r1
  size_t v41; // r7
  char *v42; // r4
  char *v43; // r0
  pthread_cond_t *cond; // [sp+4h] [bp-28h]
  pthread_cond_t *v46; // [sp+Ch] [bp-20h]
  unsigned int v47; // [sp+Ch] [bp-20h]
  pthread_mutex_t *mutex; // [sp+10h] [bp-1Ch]
  char *v49; // [sp+14h] [bp-18h]
  size_t v50; // [sp+18h] [bp-14h]
  unsigned int v51; // [sp+20h] [bp-Ch]
  unsigned int v52; // [sp+20h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 652);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 16));
  v3 = *(_DWORD *)(v2 + 4);
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
  {
    mutex = (pthread_mutex_t *)(v3 + 60);
    pthread_mutex_lock((pthread_mutex_t *)(v3 + 60));
    v5 = *(pthread_cond_t **)(v3 + 20);
    v6 = *(char **)(v3 + 24);
    v7 = *(char **)(v3 + 16);
    v8 = *(_DWORD *)v3;
    cond = *(pthread_cond_t **)(v3 + 12);
    if ( v5 < (pthread_cond_t *)v6 )
      v9 = v6 - (char *)v5;
    else
      v9 = (int)&v6[v7 - (char *)v5 - *(_DWORD *)(v3 + 12)];
    v10 = *(pthread_cond_t **)(v3 + 32);
    v49 = *(char **)(v3 + 8);
    v11 = __clz(v9 - v8 - (_DWORD)v49);
    if ( v5 >= (pthread_cond_t *)v6 )
      v46 = *(pthread_cond_t **)(v3 + 20);
    v12 = v11 >> 5;
    if ( v5 < (pthread_cond_t *)v6 )
      v46 = *(pthread_cond_t **)(v3 + 20);
    if ( !v10 )
      v12 = 0;
    if ( v12 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v3 + 136), mutex);
        v5 = *(pthread_cond_t **)(v3 + 20);
        v6 = *(char **)(v3 + 24);
        v7 = *(char **)(v3 + 16);
        v31 = v5;
        v8 = *(_DWORD *)v3;
        v10 = *(pthread_cond_t **)(v3 + 32);
        if ( v5 >= (pthread_cond_t *)v6 )
        {
          v33 = *(char **)(v3 + 8);
          v32 = &v6[v7 - (char *)v5 - *(_DWORD *)(v3 + 12) - v8];
          v31 = *(pthread_cond_t **)(v3 + 20);
        }
        else
        {
          v32 = (char *)(v6 - (char *)v5 - v8);
          v33 = *(char **)(v3 + 8);
        }
        v34 = v32 == v33;
        if ( !v10 )
          v34 = 0;
      }
      while ( v34 );
      v49 = v33;
      cond = *(pthread_cond_t **)(v3 + 12);
      v46 = v31;
    }
    if ( v10 )
    {
      if ( v5 < (pthread_cond_t *)v6 )
      {
        v13 = v6 - (char *)v5;
      }
      else
      {
        v10 = cond;
        v13 = v7 - (char *)v5;
      }
      if ( v5 >= (pthread_cond_t *)v6 )
        v13 += v6 - (char *)v10;
      if ( v7 - (char *)cond - v8 < v4 - v8 + v13 )
      {
        v47 = v7 - (char *)cond - v8;
        v21 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 36));
        v5 = *(pthread_cond_t **)(v3 + 20);
        v6 = *(char **)(v3 + 24);
        cond = *(pthread_cond_t **)(v3 + 12);
        v7 = *(char **)(v3 + 16);
        if ( v5 < (pthread_cond_t *)v6 )
          v21 = v6 - (char *)v5;
        else
          v22 = *(_DWORD *)(v3 + 12);
        v50 = *(_DWORD *)v3;
        v23 = v47;
        v46 = *(pthread_cond_t **)(v3 + 20);
        if ( v5 >= (pthread_cond_t *)v6 )
          v21 = (int)&v6[v7 - (char *)v5 - v22];
        v51 = v4 - v50 + v21;
        v24 = v51 / v8;
        if ( v23 < v51 )
        {
          v25 = v24 + 1;
          if ( (int)(v24 + 1) >= 0 )
          {
            v26 = v24 | (v24 >> 1) | ((v24 | (v24 >> 1)) >> 2);
            v27 = v26 | (v26 >> 4) | ((v26 | (v26 >> 4)) >> 8);
            v25 = (v27 | HIWORD(v27)) + 1;
          }
          v28 = v8 * v25;
          v29 = *(_QWORD *)(v3 + 4);
          if ( v28 >= HIDWORD(v29) )
            v28 = *(_DWORD *)(v3 + 8);
          if ( v28 > (unsigned int)v29 )
          {
            v52 = v28 + v50;
            v35 = (pthread_cond_t *)malloc(v28 + v50);
            v36 = v35;
            if ( v5 >= (pthread_cond_t *)v6 )
            {
              v39 = v7 - (char *)v5;
              v40 = v5;
              v41 = v6 - (char *)cond;
              v42 = (char *)v35 + v39;
              memcpy(v35, v40, v39);
              v43 = v42;
              v38 = &v42[v41];
              memcpy(v43, cond, v41);
            }
            else
            {
              v37 = v6 - (char *)v5;
              v38 = (char *)v35 + v6 - (char *)v5;
              memcpy(v35, v5, v37);
            }
            *(_DWORD *)(v3 + 24) = v38;
            v5 = v36;
            v46 = v36;
            free(*(void **)(v3 + 12));
            v6 = *(char **)(v3 + 24);
            cond = v36;
            v50 = *(_DWORD *)v3;
            *(_DWORD *)(v3 + 12) = v36;
            *(_DWORD *)(v3 + 20) = v36;
            v7 = (char *)v36 + v52;
            *(_DWORD *)(v3 + 16) = (char *)v36 + v52;
          }
        }
        v8 = v50;
        pthread_mutex_unlock((pthread_mutex_t *)(v3 + 36));
      }
      if ( v5 >= (pthread_cond_t *)v6 )
      {
        v18 = a2;
        v17 = (size_t)&v49[-(v6 - (char *)cond + v7 - (char *)v46 - v8)];
        if ( v17 >= v4 )
          v17 = v4;
        v16 = v17;
      }
      else
      {
        v14 = v7 - v6;
        v15 = v6;
        v16 = (size_t)&v49[-(v6 - (char *)v46 - v8)];
        if ( v16 >= v4 )
          v16 = v4;
        if ( v14 >= v16 )
          v14 = v16;
        v6 += v14;
        memcpy(v15, a2, v14);
        v17 = v16 - v14;
        v18 = &a2[v14];
      }
      if ( v17 )
      {
        if ( v7 <= v6 )
          v6 = (char *)cond + v6 - v7;
        v30 = v6;
        v6 += v17;
        memcpy(v30, v18, v17);
      }
      if ( v7 <= v6 )
        v6 = (char *)cond + v6 - v7;
      *(_DWORD *)(v3 + 24) = v6;
      pthread_mutex_unlock(mutex);
      v19 = (pthread_cond_t *)(v3 + 88);
      if ( v4 == v16 )
        pthread_cond_signal(v19);
      else
        pthread_cond_broadcast(v19);
      if ( v4 != v16 )
        _pipe_push((_DWORD *)v3, &a2[v16], v4 - v16);
    }
    else
    {
      pthread_mutex_unlock(mutex);
    }
  }
  ++*(_DWORD *)(v2 + 12);
  pthread_cond_signal((pthread_cond_t *)(v2 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(v2 + 16));
  return 0;
}
