_DWORD *__fastcall pipe_push(_DWORD *result, char *a2, int a3)
{
  int v3; // r11
  unsigned int v4; // r7
  _DWORD *v5; // r4
  int v6; // r2
  pthread_cond_t *v7; // r8
  char *v8; // r5
  pthread_cond_t *v9; // r3
  char *v10; // r9
  unsigned int v11; // r10
  char *v12; // r6
  char *v13; // r3
  pthread_cond_t *v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r3
  unsigned int v17; // r3
  int v18; // r1
  size_t v19; // r8
  unsigned int v20; // r6
  char *v21; // r0
  size_t v22; // r2
  char *v23; // r1
  pthread_cond_t *v24; // r0
  int v25; // r0
  int v26; // r2
  unsigned int v27; // r3
  unsigned int v28; // r0
  int v29; // r3
  unsigned int v30; // r3
  unsigned int v31; // r3
  unsigned int v32; // r10
  __int64 v33; // r2
  char *v34; // r0
  pthread_cond_t *v35; // r0
  char *v36; // r12
  _BOOL4 v37; // r3
  pthread_cond_t *v38; // r0
  pthread_cond_t *v39; // r10
  size_t v40; // r2
  char *v41; // r5
  size_t v42; // r2
  pthread_cond_t *v43; // r1
  size_t v44; // r8
  char *v45; // r5
  char *v46; // r0
  pthread_cond_t *cond; // [sp+0h] [bp-24h]
  pthread_cond_t *v49; // [sp+8h] [bp-1Ch]
  unsigned int v50; // [sp+8h] [bp-1Ch]
  pthread_mutex_t *mutex; // [sp+Ch] [bp-18h]
  unsigned int v52; // [sp+10h] [bp-14h]
  unsigned int v53; // [sp+18h] [bp-Ch]
  unsigned int v54; // [sp+18h] [bp-Ch]

  v3 = *result;
  v4 = *result * a3;
  if ( v4 )
  {
    v5 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    pthread_mutex_lock((pthread_mutex_t *)(result + 15));
    v7 = (pthread_cond_t *)v5[5];
    v8 = (char *)v5[6];
    v9 = (pthread_cond_t *)v5[3];
    v10 = (char *)v5[4];
    v11 = *v5;
    cond = v9;
    if ( v7 >= (pthread_cond_t *)v8 )
    {
      v9 = (pthread_cond_t *)(v8 - (char *)v9);
      v6 = v10 - (char *)v7;
    }
    v12 = (char *)v5[2];
    if ( v7 < (pthread_cond_t *)v8 )
      v13 = (char *)(v8 - (char *)v7);
    else
      v13 = (char *)v9 + v6;
    v14 = (pthread_cond_t *)v5[8];
    v15 = &v13[-v11] - v12;
    if ( v7 >= (pthread_cond_t *)v8 )
      v49 = (pthread_cond_t *)v5[5];
    v16 = __clz(v15);
    if ( v7 < (pthread_cond_t *)v8 )
      v49 = (pthread_cond_t *)v5[5];
    v17 = v16 >> 5;
    if ( !v14 )
      v17 = 0;
    if ( v17 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v5 + 34), mutex);
        v7 = (pthread_cond_t *)v5[5];
        v8 = (char *)v5[6];
        v10 = (char *)v5[4];
        v35 = v7;
        v11 = *v5;
        v14 = (pthread_cond_t *)v5[8];
        if ( v7 >= (pthread_cond_t *)v8 )
        {
          v12 = (char *)v5[2];
          v36 = &v8[v10 - (char *)v7 - v5[3] - v11];
          v35 = (pthread_cond_t *)v5[5];
        }
        else
        {
          v36 = (char *)(v8 - (char *)v7 - v11);
          v12 = (char *)v5[2];
        }
        v37 = v36 == v12;
        if ( !v14 )
          v37 = 0;
      }
      while ( v37 );
      cond = (pthread_cond_t *)v5[3];
      v49 = v35;
    }
    if ( v14 )
    {
      if ( v7 < (pthread_cond_t *)v8 )
      {
        v18 = v8 - (char *)v7;
      }
      else
      {
        v14 = cond;
        v18 = v10 - (char *)v7;
      }
      if ( v7 >= (pthread_cond_t *)v8 )
        v18 += v8 - (char *)v14;
      if ( v10 - (char *)cond - v11 < v4 - v11 + v18 )
      {
        v50 = v10 - (char *)cond - v11;
        v25 = pthread_mutex_lock((pthread_mutex_t *)(v5 + 9));
        v7 = (pthread_cond_t *)v5[5];
        v8 = (char *)v5[6];
        cond = (pthread_cond_t *)v5[3];
        v10 = (char *)v5[4];
        if ( v7 < (pthread_cond_t *)v8 )
          v25 = v8 - (char *)v7;
        else
          v26 = v5[3];
        v52 = *v5;
        v27 = v50;
        v49 = (pthread_cond_t *)v5[5];
        if ( v7 >= (pthread_cond_t *)v8 )
          v25 = (int)&v8[v10 - (char *)v7 - v26];
        v53 = v4 - v52 + v25;
        v28 = v53 / v11;
        if ( v27 < v53 )
        {
          v29 = v28 + 1;
          if ( (int)(v28 + 1) >= 0 )
          {
            v30 = v28 | (v28 >> 1) | ((v28 | (v28 >> 1)) >> 2);
            v31 = v30 | (v30 >> 4) | ((v30 | (v30 >> 4)) >> 8);
            v29 = (v31 | HIWORD(v31)) + 1;
          }
          v32 = v11 * v29;
          v33 = *(_QWORD *)(v5 + 1);
          if ( v32 >= HIDWORD(v33) )
            v32 = v5[2];
          if ( v32 > (unsigned int)v33 )
          {
            v54 = v32 + v52;
            v38 = (pthread_cond_t *)malloc(v32 + v52);
            v39 = v38;
            if ( v7 >= (pthread_cond_t *)v8 )
            {
              v42 = v10 - (char *)v7;
              v43 = v7;
              v44 = v8 - (char *)cond;
              v45 = (char *)v38 + v42;
              memcpy(v38, v43, v42);
              v46 = v45;
              v41 = &v45[v44];
              memcpy(v46, cond, v44);
            }
            else
            {
              v40 = v8 - (char *)v7;
              v41 = (char *)v38 + v8 - (char *)v7;
              memcpy(v38, v7, v40);
            }
            v5[6] = v41;
            v7 = v39;
            free(cond);
            v8 = (char *)v5[6];
            v10 = (char *)v39 + v54;
            v49 = v39;
            v52 = *v5;
            cond = v39;
            v5[4] = (char *)v39 + v54;
            v5[3] = v39;
            v5[5] = v39;
          }
        }
        v11 = v52;
        pthread_mutex_unlock((pthread_mutex_t *)(v5 + 9));
      }
      if ( v7 >= (pthread_cond_t *)v8 )
      {
        v23 = a2;
        v22 = (size_t)&v12[-(v8 - (char *)cond + v10 - (char *)v49 - v11)];
        if ( v22 >= v4 )
          v22 = v4;
        v20 = v22;
      }
      else
      {
        v19 = v10 - v8;
        v20 = (unsigned int)&v12[-(v8 - (char *)v49 - v11)];
        v21 = v8;
        if ( v20 >= v4 )
          v20 = v4;
        if ( v19 >= v20 )
          v19 = v20;
        v8 += v19;
        memcpy(v21, a2, v19);
        v22 = v20 - v19;
        v23 = &a2[v19];
      }
      if ( v22 )
      {
        if ( v10 <= v8 )
          v8 = (char *)cond + v8 - v10;
        v34 = v8;
        v8 += v22;
        memcpy(v34, v23, v22);
      }
      if ( v10 <= v8 )
        v8 = (char *)cond + v8 - v10;
      v5[6] = v8;
      pthread_mutex_unlock(mutex);
      v24 = (pthread_cond_t *)(v5 + 22);
      if ( v3 == v20 )
        result = (_DWORD *)pthread_cond_signal(v24);
      else
        result = (_DWORD *)pthread_cond_broadcast(v24);
      if ( v4 != v20 )
        return _pipe_push(v5, &a2[v20], v4 - v20);
    }
    else
    {
      return (_DWORD *)pthread_mutex_unlock(mutex);
    }
  }
  return result;
}
