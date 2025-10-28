_DWORD *__fastcall pipe_push(_DWORD *result, char *a2, int a3)
{
  unsigned int v3; // r8
  pthread_mutex_t *v4; // r11
  _DWORD *v5; // r4
  int v6; // r2
  char *v7; // r5
  char *v8; // r7
  char *v9; // r3
  char *v10; // r9
  unsigned int v11; // r10
  int v12; // r6
  char *v13; // r3
  char *v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r3
  unsigned int v17; // r3
  int v18; // r1
  size_t v19; // r7
  unsigned int v20; // r6
  char *v21; // r0
  size_t v22; // r2
  char *v23; // r1
  pthread_cond_t *v24; // r0
  char *v25; // r12
  int v26; // lr
  _BOOL4 v27; // r3
  int v28; // r2
  int v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r0
  int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // r3
  unsigned int v35; // r3
  __int64 v36; // kr18_8
  char *v37; // r0
  char *v38; // r0
  char *v39; // r10
  size_t v40; // r2
  char *v41; // r5
  size_t v42; // r2
  char *v43; // r1
  size_t v44; // r7
  char *v45; // r5
  char *v46; // r0
  char *ptr; // [sp+0h] [bp-24h]
  char *v49; // [sp+8h] [bp-1Ch]
  unsigned int v50; // [sp+8h] [bp-1Ch]
  int v51; // [sp+Ch] [bp-18h]
  unsigned int v52; // [sp+10h] [bp-14h]
  unsigned int v53; // [sp+18h] [bp-Ch]
  unsigned int v54; // [sp+18h] [bp-Ch]

  v3 = *result * a3;
  v51 = *result;
  if ( v3 )
  {
    v4 = (pthread_mutex_t *)(result + 15);
    v5 = result;
    pthread_mutex_lock((pthread_mutex_t *)(result + 15));
    v7 = (char *)v5[6];
    v8 = (char *)v5[5];
    v9 = (char *)v5[3];
    v10 = (char *)v5[4];
    v11 = *v5;
    ptr = v9;
    if ( v8 >= v7 )
    {
      v9 = (char *)(v7 - v9);
      v6 = v10 - v8;
    }
    v12 = v5[2];
    if ( v8 < v7 )
      v13 = (char *)(v7 - v8);
    else
      v13 = &v9[v6];
    v14 = (char *)v5[8];
    v15 = (unsigned int)&v13[-v11 - v12];
    if ( v8 >= v7 )
      v49 = (char *)v5[5];
    v16 = __clz(v15);
    if ( v8 < v7 )
      v49 = (char *)v5[5];
    v17 = v16 >> 5;
    if ( !v14 )
      v17 = 0;
    if ( v17 )
    {
      do
      {
        pthread_cond_wait((pthread_cond_t *)(v5 + 34), v4);
        v7 = (char *)v5[6];
        v8 = (char *)v5[5];
        ptr = (char *)v5[3];
        v25 = v8;
        v26 = v7 - v8 - *v5;
        v14 = (char *)v5[8];
        if ( v8 >= v7 )
        {
          v25 = (char *)v5[5];
          v12 = v5[2];
          v26 = v5[4] - (_DWORD)v8 + v7 - ptr - *v5;
        }
        else
        {
          v12 = v5[2];
        }
        v27 = v26 == v12;
        if ( !v14 )
          v27 = 0;
      }
      while ( v27 );
      v10 = (char *)v5[4];
      v11 = *v5;
      v49 = v25;
    }
    if ( v14 )
    {
      if ( v8 < v7 )
      {
        v18 = v7 - v8;
      }
      else
      {
        v14 = ptr;
        v18 = v10 - v8;
      }
      if ( v8 >= v7 )
        v18 += v7 - v14;
      if ( v10 - ptr - v11 < v3 - v11 + v18 )
      {
        v50 = v10 - ptr - v11;
        pthread_mutex_lock((pthread_mutex_t *)(v5 + 9));
        v7 = (char *)v5[6];
        v8 = (char *)v5[5];
        v10 = (char *)v5[4];
        ptr = (char *)v5[3];
        if ( v8 < v7 )
        {
          v29 = v7 - v8;
        }
        else
        {
          v28 = v5[3];
          v29 = v10 - v8;
        }
        v52 = *v5;
        v30 = v50;
        if ( v8 >= v7 )
          v29 += (int)&v7[-v28];
        v49 = (char *)v5[5];
        v53 = v3 - v52 + v29;
        v31 = v53 / v11;
        if ( v30 < v53 )
        {
          v32 = v31 + 1;
          if ( (int)(v31 + 1) >= 0 )
          {
            v33 = v31 | (v31 >> 1) | ((v31 | (v31 >> 1)) >> 2);
            v34 = v33 | (v33 >> 4) | ((v33 | (v33 >> 4)) >> 8);
            v32 = (v34 | HIWORD(v34)) + 1;
          }
          v35 = v11 * v32;
          v36 = *(_QWORD *)(v5 + 1);
          if ( v35 >= HIDWORD(v36) )
            v35 = v5[2];
          if ( v35 > (unsigned int)v36 )
          {
            v54 = v52 + v35;
            v38 = (char *)malloc(v52 + v35);
            v39 = v38;
            if ( v8 >= v7 )
            {
              v42 = v10 - v8;
              v43 = v8;
              v44 = v7 - ptr;
              v45 = &v38[v42];
              memcpy(v38, v43, v42);
              v46 = v45;
              v41 = &v45[v44];
              memcpy(v46, ptr, v44);
            }
            else
            {
              v40 = v7 - v8;
              v41 = &v38[v7 - v8];
              memcpy(v38, v8, v40);
            }
            v5[6] = v41;
            v8 = v39;
            free(ptr);
            v7 = (char *)v5[6];
            v49 = v39;
            v52 = *v5;
            ptr = v39;
            v5[5] = v39;
            v10 = &v39[v54];
            v5[3] = v39;
            v5[4] = &v39[v54];
          }
        }
        v11 = v52;
        pthread_mutex_unlock((pthread_mutex_t *)(v5 + 9));
      }
      if ( v8 >= v7 )
      {
        v23 = a2;
        v22 = v12 - (v7 - ptr + v10 - v49 - v11);
        if ( v22 >= v3 )
          v22 = v3;
        v20 = v22;
      }
      else
      {
        v19 = v10 - v7;
        v20 = v12 - (v7 - v49 - v11);
        v21 = v7;
        if ( v20 >= v3 )
          v20 = v3;
        if ( v19 >= v20 )
          v19 = v20;
        v7 += v19;
        memcpy(v21, a2, v19);
        v22 = v20 - v19;
        v23 = &a2[v19];
      }
      if ( v22 )
      {
        if ( v10 <= v7 )
          v7 = &ptr[v7 - v10];
        v37 = v7;
        v7 += v22;
        memcpy(v37, v23, v22);
      }
      if ( v10 <= v7 )
        v7 = &ptr[v7 - v10];
      v5[6] = v7;
      pthread_mutex_unlock(v4);
      v24 = (pthread_cond_t *)(v5 + 22);
      if ( v51 == v20 )
        result = (_DWORD *)pthread_cond_signal(v24);
      else
        result = (_DWORD *)pthread_cond_broadcast(v24);
      if ( v3 != v20 )
        return _pipe_push(v5, &a2[v20], v3 - v20);
    }
    else
    {
      return (_DWORD *)j_pthread_mutex_unlock(v4);
    }
  }
  return result;
}
