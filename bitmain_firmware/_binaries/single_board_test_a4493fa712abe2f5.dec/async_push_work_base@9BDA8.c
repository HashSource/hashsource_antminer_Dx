int __fastcall async_push_work_base(int a1, char *a2)
{
  int v2; // r8
  int v3; // r5
  size_t v4; // r6
  char *v5; // r4
  char *v6; // r7
  char *v7; // r9
  size_t v8; // r10
  int v9; // r3
  char *v10; // r2
  _BOOL4 v11; // r1
  int v12; // r1
  size_t v13; // r7
  char *v14; // r0
  size_t v15; // r10
  size_t v16; // r2
  char *v17; // r1
  pthread_cond_t *v18; // r0
  char *v20; // r12
  int v21; // r10
  int v22; // r2
  _BOOL4 v23; // r3
  int v24; // r2
  int v25; // r0
  size_t v26; // r3
  unsigned int v27; // r0
  int v28; // r3
  unsigned int v29; // r3
  unsigned int v30; // r3
  unsigned int v31; // r3
  __int64 v32; // kr18_8
  char *v33; // r0
  char *v34; // r0
  char *v35; // r10
  size_t v36; // r2
  char *v37; // r4
  size_t v38; // r2
  char *v39; // r1
  size_t v40; // r7
  char *v41; // r4
  char *v42; // r0
  char *v43; // [sp+4h] [bp-28h]
  char *v45; // [sp+Ch] [bp-20h]
  size_t v46; // [sp+Ch] [bp-20h]
  pthread_mutex_t *mutex; // [sp+10h] [bp-1Ch]
  int v48; // [sp+14h] [bp-18h]
  size_t v49; // [sp+18h] [bp-14h]
  size_t v50; // [sp+20h] [bp-Ch]
  size_t v51; // [sp+20h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 624);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 16));
  v3 = *(_DWORD *)(v2 + 4);
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 )
  {
    mutex = (pthread_mutex_t *)(v3 + 60);
    pthread_mutex_lock((pthread_mutex_t *)(v3 + 60));
    v5 = *(char **)(v3 + 24);
    v6 = *(char **)(v3 + 20);
    v7 = *(char **)(v3 + 16);
    v8 = *(_DWORD *)v3;
    v43 = *(char **)(v3 + 12);
    if ( v6 < v5 )
      v9 = v5 - v6;
    else
      v9 = (int)&v5[v7 - v6 - *(_DWORD *)(v3 + 12)];
    v10 = *(char **)(v3 + 32);
    v48 = *(_DWORD *)(v3 + 8);
    v45 = *(char **)(v3 + 20);
    v11 = v9 - v8 == v48;
    if ( !v10 )
      v11 = 0;
    if ( v11 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v3 + 136), mutex);
        v5 = *(char **)(v3 + 24);
        v6 = *(char **)(v3 + 20);
        v43 = *(char **)(v3 + 12);
        v20 = v6;
        v21 = v5 - v6 - *(_DWORD *)v3;
        if ( v6 >= v5 )
        {
          v20 = *(char **)(v3 + 20);
          v22 = *(_DWORD *)(v3 + 8);
          v21 = *(_DWORD *)(v3 + 16) - (_DWORD)v6 + v5 - v43 - *(_DWORD *)v3;
        }
        else
        {
          v22 = *(_DWORD *)(v3 + 8);
        }
        v23 = v21 == v22;
        if ( !*(_DWORD *)(v3 + 32) )
          v23 = 0;
      }
      while ( v23 );
      v48 = v22;
      v7 = *(char **)(v3 + 16);
      v8 = *(_DWORD *)v3;
      v10 = *(char **)(v3 + 32);
      v45 = v20;
    }
    if ( v10 )
    {
      if ( v6 < v5 )
      {
        v12 = v5 - v6;
      }
      else
      {
        v10 = v43;
        v12 = v7 - v6;
      }
      if ( v6 >= v5 )
        v12 += v5 - v10;
      if ( v7 - v43 - v8 < v4 - v8 + v12 )
      {
        v46 = v7 - v43 - v8;
        pthread_mutex_lock((pthread_mutex_t *)(v3 + 36));
        v5 = *(char **)(v3 + 24);
        v6 = *(char **)(v3 + 20);
        v7 = *(char **)(v3 + 16);
        v43 = *(char **)(v3 + 12);
        if ( v6 < v5 )
        {
          v25 = v5 - v6;
        }
        else
        {
          v24 = *(_DWORD *)(v3 + 12);
          v25 = v7 - v6;
        }
        v49 = *(_DWORD *)v3;
        v26 = v46;
        if ( v6 >= v5 )
          v25 += (int)&v5[-v24];
        v45 = *(char **)(v3 + 20);
        v50 = v4 - v49 + v25;
        v27 = v50 / v8;
        if ( v26 < v50 )
        {
          v28 = v27 + 1;
          if ( (int)(v27 + 1) >= 0 )
          {
            v29 = v27 | (v27 >> 1) | ((v27 | (v27 >> 1)) >> 2);
            v30 = v29 | (v29 >> 4) | ((v29 | (v29 >> 4)) >> 8);
            v28 = (v30 | HIWORD(v30)) + 1;
          }
          v31 = v8 * v28;
          v32 = *(_QWORD *)(v3 + 4);
          if ( v31 >= HIDWORD(v32) )
            v31 = *(_DWORD *)(v3 + 8);
          if ( v31 > (unsigned int)v32 )
          {
            v51 = v49 + v31;
            v34 = (char *)malloc(v49 + v31);
            v35 = v34;
            if ( v6 >= v5 )
            {
              v38 = v7 - v6;
              v39 = v6;
              v40 = v5 - v43;
              v41 = &v34[v38];
              memcpy(v34, v39, v38);
              v42 = v41;
              v37 = &v41[v40];
              memcpy(v42, v43, v40);
            }
            else
            {
              v36 = v5 - v6;
              v37 = &v34[v5 - v6];
              memcpy(v34, v6, v36);
            }
            *(_DWORD *)(v3 + 24) = v37;
            v6 = v35;
            v45 = v35;
            free(*(void **)(v3 + 12));
            v5 = *(char **)(v3 + 24);
            v43 = v35;
            v49 = *(_DWORD *)v3;
            *(_DWORD *)(v3 + 20) = v35;
            v7 = &v35[v51];
            *(_DWORD *)(v3 + 12) = v35;
            *(_DWORD *)(v3 + 16) = &v35[v51];
          }
        }
        v8 = v49;
        pthread_mutex_unlock((pthread_mutex_t *)(v3 + 36));
      }
      if ( v6 >= v5 )
      {
        v17 = a2;
        v16 = v48 - (v5 - v43 + v7 - v45 - v8);
        if ( v16 >= v4 )
          v16 = v4;
        v15 = v16;
      }
      else
      {
        v13 = v7 - v5;
        v14 = v5;
        v15 = v48 - (v5 - v45 - v8);
        if ( v15 >= v4 )
          v15 = v4;
        if ( v13 >= v15 )
          v13 = v15;
        v5 += v13;
        memcpy(v14, a2, v13);
        v16 = v15 - v13;
        v17 = &a2[v13];
      }
      if ( v16 )
      {
        if ( v7 <= v5 )
          v5 = &v43[v5 - v7];
        v33 = v5;
        v5 += v16;
        memcpy(v33, v17, v16);
      }
      if ( v7 <= v5 )
        v5 = &v43[v5 - v7];
      *(_DWORD *)(v3 + 24) = v5;
      pthread_mutex_unlock(mutex);
      v18 = (pthread_cond_t *)(v3 + 88);
      if ( v4 == v15 )
        pthread_cond_signal(v18);
      else
        pthread_cond_broadcast(v18);
      if ( v4 != v15 )
        _pipe_push((_DWORD *)v3, &a2[v15], v4 - v15);
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
