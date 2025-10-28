int __fastcall queue_enqueue(int a1, char *a2, int a3)
{
  pthread_mutex_t *v3; // r11
  int *v6; // r5
  unsigned int v7; // r6
  pthread_cond_t *v8; // r7
  char *v9; // r4
  char *v10; // r9
  unsigned int v11; // r10
  int v12; // r3
  pthread_cond_t *v13; // r2
  unsigned int v14; // r1
  unsigned int v15; // r1
  int v16; // r1
  size_t v17; // r7
  char *v18; // r0
  unsigned int v19; // r10
  size_t v20; // r2
  char *v21; // r1
  pthread_cond_t *v22; // r0
  int v24; // r0
  int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r0
  int v28; // r3
  unsigned int v29; // r3
  unsigned int v30; // r3
  unsigned int v31; // r10
  __int64 v32; // r2
  char *v33; // r0
  pthread_cond_t *v34; // r12
  char *v35; // lr
  char *v36; // r1
  _BOOL4 v37; // r3
  pthread_cond_t *v38; // r0
  pthread_cond_t *v39; // r10
  size_t v40; // r2
  char *v41; // r4
  size_t v42; // r2
  pthread_cond_t *v43; // r1
  size_t v44; // r7
  char *v45; // r4
  char *v46; // r0
  pthread_cond_t *cond; // [sp+4h] [bp-30h]
  pthread_cond_t *v50; // [sp+10h] [bp-24h]
  unsigned int v51; // [sp+10h] [bp-24h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-20h]
  unsigned int v53; // [sp+18h] [bp-1Ch]
  char *v54; // [sp+1Ch] [bp-18h]
  unsigned int v55; // [sp+20h] [bp-14h]
  unsigned int v56; // [sp+28h] [bp-Ch]
  unsigned int v57; // [sp+28h] [bp-Ch]

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v6 = *(int **)(a1 + 4);
  v53 = *v6;
  v7 = *v6 * a3;
  if ( v7 )
  {
    mutex = (pthread_mutex_t *)(v6 + 15);
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 15));
    v8 = (pthread_cond_t *)v6[5];
    v9 = (char *)v6[6];
    v10 = (char *)v6[4];
    v11 = *v6;
    cond = (pthread_cond_t *)v6[3];
    if ( v8 < (pthread_cond_t *)v9 )
      v12 = v9 - (char *)v8;
    else
      v12 = (int)&v9[v10 - (char *)v8 - v6[3]];
    v13 = (pthread_cond_t *)v6[8];
    v54 = (char *)v6[2];
    v14 = __clz(v12 - v11 - (_DWORD)v54);
    if ( v8 >= (pthread_cond_t *)v9 )
      v50 = (pthread_cond_t *)v6[5];
    v15 = v14 >> 5;
    if ( v8 < (pthread_cond_t *)v9 )
      v50 = (pthread_cond_t *)v6[5];
    if ( !v13 )
      v15 = 0;
    if ( v15 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v6 + 34), mutex);
        v8 = (pthread_cond_t *)v6[5];
        v9 = (char *)v6[6];
        v10 = (char *)v6[4];
        v34 = v8;
        v11 = *v6;
        v13 = (pthread_cond_t *)v6[8];
        if ( v8 >= (pthread_cond_t *)v9 )
        {
          v36 = (char *)v6[2];
          v35 = &v9[v10 - (char *)v8 - v6[3] - v11];
          v34 = (pthread_cond_t *)v6[5];
        }
        else
        {
          v35 = (char *)(v9 - (char *)v8 - v11);
          v36 = (char *)v6[2];
        }
        v37 = v35 == v36;
        if ( !v13 )
          v37 = 0;
      }
      while ( v37 );
      v54 = v36;
      cond = (pthread_cond_t *)v6[3];
      v50 = v34;
    }
    if ( v13 )
    {
      if ( v8 < (pthread_cond_t *)v9 )
      {
        v16 = v9 - (char *)v8;
      }
      else
      {
        v13 = cond;
        v16 = v10 - (char *)v8;
      }
      if ( v8 >= (pthread_cond_t *)v9 )
        v16 += v9 - (char *)v13;
      if ( v10 - (char *)cond - v11 < v7 - v11 + v16 )
      {
        v51 = v10 - (char *)cond - v11;
        v24 = pthread_mutex_lock((pthread_mutex_t *)(v6 + 9));
        v8 = (pthread_cond_t *)v6[5];
        v9 = (char *)v6[6];
        cond = (pthread_cond_t *)v6[3];
        v10 = (char *)v6[4];
        if ( v8 < (pthread_cond_t *)v9 )
          v24 = v9 - (char *)v8;
        else
          v25 = v6[3];
        v55 = *v6;
        v26 = v51;
        v50 = (pthread_cond_t *)v6[5];
        if ( v8 >= (pthread_cond_t *)v9 )
          v24 = (int)&v9[v10 - (char *)v8 - v25];
        v56 = v7 - v55 + v24;
        v27 = v56 / v11;
        if ( v26 < v56 )
        {
          v28 = v27 + 1;
          if ( (int)(v27 + 1) >= 0 )
          {
            v29 = v27 | (v27 >> 1) | ((v27 | (v27 >> 1)) >> 2);
            v30 = v29 | (v29 >> 4) | ((v29 | (v29 >> 4)) >> 8);
            v28 = (v30 | HIWORD(v30)) + 1;
          }
          v31 = v11 * v28;
          v32 = *(_QWORD *)(v6 + 1);
          if ( v31 >= HIDWORD(v32) )
            v31 = v6[2];
          if ( v31 > (unsigned int)v32 )
          {
            v57 = v31 + v55;
            v38 = (pthread_cond_t *)malloc(v31 + v55);
            v39 = v38;
            if ( v8 >= (pthread_cond_t *)v9 )
            {
              v42 = v10 - (char *)v8;
              v43 = v8;
              v44 = v9 - (char *)cond;
              v45 = (char *)v38 + v42;
              memcpy(v38, v43, v42);
              v46 = v45;
              v41 = &v45[v44];
              memcpy(v46, cond, v44);
            }
            else
            {
              v40 = v9 - (char *)v8;
              v41 = (char *)v38 + v9 - (char *)v8;
              memcpy(v38, v8, v40);
            }
            v6[6] = (int)v41;
            v8 = v39;
            v50 = v39;
            free((void *)v6[3]);
            v9 = (char *)v6[6];
            cond = v39;
            v55 = *v6;
            v6[3] = (int)v39;
            v6[5] = (int)v39;
            v10 = (char *)v39 + v57;
            v6[4] = (int)v39 + v57;
          }
        }
        v11 = v55;
        pthread_mutex_unlock((pthread_mutex_t *)(v6 + 9));
      }
      if ( v8 >= (pthread_cond_t *)v9 )
      {
        v21 = a2;
        v20 = (size_t)&v54[-(v9 - (char *)cond + v10 - (char *)v50 - v11)];
        if ( v20 >= v7 )
          v20 = v7;
        v19 = v20;
      }
      else
      {
        v17 = v10 - v9;
        v18 = v9;
        v19 = (unsigned int)&v54[-(v9 - (char *)v50 - v11)];
        if ( v19 >= v7 )
          v19 = v7;
        if ( v17 >= v19 )
          v17 = v19;
        v9 += v17;
        memcpy(v18, a2, v17);
        v20 = v19 - v17;
        v21 = &a2[v17];
      }
      if ( v20 )
      {
        if ( v10 <= v9 )
          v9 = (char *)cond + v9 - v10;
        v33 = v9;
        v9 += v20;
        memcpy(v33, v21, v20);
      }
      if ( v10 <= v9 )
        v9 = (char *)cond + v9 - v10;
      v6[6] = (int)v9;
      pthread_mutex_unlock(mutex);
      v22 = (pthread_cond_t *)(v6 + 22);
      if ( v53 == v19 )
        pthread_cond_signal(v22);
      else
        pthread_cond_broadcast(v22);
      if ( v7 != v19 )
        _pipe_push(v6, &a2[v19], v7 - v19);
    }
    else
    {
      pthread_mutex_unlock(mutex);
    }
  }
  *(_DWORD *)(a1 + 12) += a3;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  return pthread_mutex_unlock(v3);
}
