int __fastcall queue_enqueue(int a1, char *a2, int a3)
{
  pthread_mutex_t *v3; // r11
  int *v6; // r5
  unsigned int v7; // r7
  char *v8; // r4
  char *v9; // r6
  char *v10; // r9
  unsigned int v11; // r10
  int v12; // r3
  char *v13; // r2
  _BOOL4 v14; // r1
  int v15; // r1
  size_t v16; // r6
  char *v17; // r0
  unsigned int v18; // r10
  size_t v19; // r2
  char *v20; // r1
  pthread_cond_t *v21; // r0
  char *v23; // r12
  int v24; // r10
  int v25; // r2
  _BOOL4 v26; // r3
  int v27; // r2
  int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r0
  int v31; // r3
  unsigned int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // r3
  __int64 v35; // kr18_8
  char *v36; // r0
  char *v37; // r0
  char *v38; // r10
  size_t v39; // r2
  char *v40; // r4
  size_t v41; // r2
  char *v42; // r1
  size_t v43; // r6
  char *v44; // r4
  char *v45; // r0
  char *v46; // [sp+4h] [bp-30h]
  char *v49; // [sp+10h] [bp-24h]
  unsigned int v50; // [sp+10h] [bp-24h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-20h]
  unsigned int v52; // [sp+18h] [bp-1Ch]
  int v53; // [sp+1Ch] [bp-18h]
  unsigned int v54; // [sp+20h] [bp-14h]
  unsigned int v55; // [sp+28h] [bp-Ch]
  unsigned int v56; // [sp+28h] [bp-Ch]

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v6 = *(int **)(a1 + 4);
  v52 = *v6;
  v7 = *v6 * a3;
  if ( v7 )
  {
    mutex = (pthread_mutex_t *)(v6 + 15);
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 15));
    v8 = (char *)v6[6];
    v9 = (char *)v6[5];
    v10 = (char *)v6[4];
    v11 = *v6;
    v46 = (char *)v6[3];
    if ( v9 < v8 )
      v12 = v8 - v9;
    else
      v12 = (int)&v8[v10 - v9 - v6[3]];
    v13 = (char *)v6[8];
    v53 = v6[2];
    v49 = (char *)v6[5];
    v14 = v12 - v11 == v53;
    if ( !v13 )
      v14 = 0;
    if ( v14 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v6 + 34), mutex);
        v8 = (char *)v6[6];
        v9 = (char *)v6[5];
        v46 = (char *)v6[3];
        v23 = v9;
        v24 = v8 - v9 - *v6;
        if ( v9 >= v8 )
        {
          v23 = (char *)v6[5];
          v25 = v6[2];
          v24 = v6[4] - (_DWORD)v9 + v8 - v46 - *v6;
        }
        else
        {
          v25 = v6[2];
        }
        v26 = v24 == v25;
        if ( !v6[8] )
          v26 = 0;
      }
      while ( v26 );
      v53 = v25;
      v10 = (char *)v6[4];
      v11 = *v6;
      v13 = (char *)v6[8];
      v49 = v23;
    }
    if ( v13 )
    {
      if ( v9 < v8 )
      {
        v15 = v8 - v9;
      }
      else
      {
        v13 = v46;
        v15 = v10 - v9;
      }
      if ( v9 >= v8 )
        v15 += v8 - v13;
      if ( v10 - v46 - v11 < v7 - v11 + v15 )
      {
        v50 = v10 - v46 - v11;
        pthread_mutex_lock((pthread_mutex_t *)(v6 + 9));
        v8 = (char *)v6[6];
        v9 = (char *)v6[5];
        v10 = (char *)v6[4];
        v46 = (char *)v6[3];
        if ( v9 < v8 )
        {
          v28 = v8 - v9;
        }
        else
        {
          v27 = v6[3];
          v28 = v10 - v9;
        }
        v54 = *v6;
        v29 = v50;
        if ( v9 >= v8 )
          v28 += (int)&v8[-v27];
        v49 = (char *)v6[5];
        v55 = v7 - v54 + v28;
        v30 = v55 / v11;
        if ( v29 < v55 )
        {
          v31 = v30 + 1;
          if ( (int)(v30 + 1) >= 0 )
          {
            v32 = v30 | (v30 >> 1) | ((v30 | (v30 >> 1)) >> 2);
            v33 = v32 | (v32 >> 4) | ((v32 | (v32 >> 4)) >> 8);
            v31 = (v33 | HIWORD(v33)) + 1;
          }
          v34 = v11 * v31;
          v35 = *(_QWORD *)(v6 + 1);
          if ( v34 >= HIDWORD(v35) )
            v34 = v6[2];
          if ( v34 > (unsigned int)v35 )
          {
            v56 = v54 + v34;
            v37 = (char *)malloc(v54 + v34);
            v38 = v37;
            if ( v9 >= v8 )
            {
              v41 = v10 - v9;
              v42 = v9;
              v43 = v8 - v46;
              v44 = &v37[v41];
              memcpy(v37, v42, v41);
              v45 = v44;
              v40 = &v44[v43];
              memcpy(v45, v46, v43);
            }
            else
            {
              v39 = v8 - v9;
              v40 = &v37[v8 - v9];
              memcpy(v37, v9, v39);
            }
            v6[6] = (int)v40;
            v9 = v38;
            v49 = v38;
            free((void *)v6[3]);
            v8 = (char *)v6[6];
            v46 = v38;
            v54 = *v6;
            v6[5] = (int)v38;
            v10 = &v38[v56];
            v6[3] = (int)v38;
            v6[4] = (int)&v38[v56];
          }
        }
        v11 = v54;
        pthread_mutex_unlock((pthread_mutex_t *)(v6 + 9));
      }
      if ( v9 >= v8 )
      {
        v20 = a2;
        v19 = v53 - (v8 - v46 + v10 - v49 - v11);
        if ( v19 >= v7 )
          v19 = v7;
        v18 = v19;
      }
      else
      {
        v16 = v10 - v8;
        v17 = v8;
        v18 = v53 - (v8 - v49 - v11);
        if ( v18 >= v7 )
          v18 = v7;
        if ( v16 >= v18 )
          v16 = v18;
        v8 += v16;
        memcpy(v17, a2, v16);
        v19 = v18 - v16;
        v20 = &a2[v16];
      }
      if ( v19 )
      {
        if ( v10 <= v8 )
          v8 = &v46[v8 - v10];
        v36 = v8;
        v8 += v19;
        memcpy(v36, v20, v19);
      }
      if ( v10 <= v8 )
        v8 = &v46[v8 - v10];
      v6[6] = (int)v8;
      pthread_mutex_unlock(mutex);
      v21 = (pthread_cond_t *)(v6 + 22);
      if ( v52 == v18 )
        pthread_cond_signal(v21);
      else
        pthread_cond_broadcast(v21);
      if ( v7 != v18 )
        _pipe_push(v6, &a2[v18], v7 - v18);
    }
    else
    {
      pthread_mutex_unlock(mutex);
    }
  }
  *(_DWORD *)(a1 + 12) += a3;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  return j_pthread_mutex_unlock(v3);
}
