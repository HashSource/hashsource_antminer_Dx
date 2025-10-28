_DWORD *__fastcall _pipe_push(_DWORD *result, char *a2, size_t a3)
{
  char *v3; // r8
  size_t v4; // r10
  _DWORD *v5; // r11
  int v6; // r2
  char *v7; // r6
  char *v8; // r4
  char *v9; // r3
  char *v10; // r7
  unsigned int v11; // r9
  char *v12; // r5
  char *v13; // r3
  char *v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // r3
  unsigned int v17; // r3
  int v18; // r1
  size_t v19; // r6
  int v20; // r9
  size_t v21; // r5
  char *v22; // r0
  size_t v23; // r2
  char *v24; // r1
  int v25; // r0
  int v26; // r12
  int v27; // r1
  char *v28; // r3
  _BOOL4 v29; // r3
  int v30; // r0
  int v31; // r2
  unsigned int v32; // r0
  int v33; // r3
  unsigned int v34; // r3
  unsigned int v35; // r3
  unsigned int v36; // r9
  __int64 v37; // r2
  char *v38; // r0
  char *v39; // r0
  char *v40; // r9
  size_t v41; // r2
  char *v42; // r4
  size_t v43; // r2
  char *v44; // r1
  size_t v45; // r6
  char *v46; // r4
  char *v47; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-2Ch]
  char *ptr; // [sp+4h] [bp-28h]
  unsigned int v51; // [sp+Ch] [bp-20h]
  pthread_cond_t *cond; // [sp+10h] [bp-1Ch]
  pthread_mutex_t *v53; // [sp+14h] [bp-18h]
  pthread_cond_t *v54; // [sp+18h] [bp-14h]
  unsigned int v55; // [sp+1Ch] [bp-10h]
  size_t v56; // [sp+20h] [bp-Ch]
  size_t v57; // [sp+20h] [bp-Ch]
  unsigned int v58; // [sp+20h] [bp-Ch]
  size_t v59; // [sp+24h] [bp-8h]

  v4 = a3;
  v51 = *result;
  if ( a3 )
  {
    v5 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    v54 = (pthread_cond_t *)(result + 34);
    v53 = (pthread_mutex_t *)(result + 9);
    cond = (pthread_cond_t *)(result + 22);
    while ( 1 )
    {
      pthread_mutex_lock(mutex);
      v7 = (char *)v5[5];
      v8 = (char *)v5[6];
      v9 = (char *)v5[3];
      v10 = (char *)v5[4];
      v11 = *v5;
      ptr = v9;
      if ( v7 >= v8 )
      {
        v9 = (char *)(v8 - v9);
        v6 = v10 - v7;
      }
      v12 = (char *)v5[2];
      if ( v7 < v8 )
        v13 = (char *)(v8 - v7);
      else
        v13 = &v9[v6];
      v14 = (char *)v5[8];
      v15 = &v13[-v11] - v12;
      if ( v7 >= v8 )
        v3 = (char *)v5[5];
      v16 = __clz(v15);
      if ( v7 < v8 )
        v3 = (char *)v5[5];
      v17 = v16 >> 5;
      if ( !v14 )
        v17 = 0;
      if ( v17 )
      {
        do
        {
          v25 = pthread_cond_wait(v54, mutex);
          v7 = (char *)v5[5];
          v8 = (char *)v5[6];
          v27 = v5[3];
          v10 = (char *)v5[4];
          v3 = v7;
          v28 = (char *)(v8 - v7);
          v11 = *v5;
          if ( v7 >= v8 )
          {
            v28 = &v8[-v27];
            v26 = v10 - v7;
            v25 = (int)&v8[-v27];
          }
          v12 = (char *)v5[2];
          if ( v7 >= v8 )
            v28 = (char *)(v25 + v26);
          v14 = (char *)v5[8];
          v29 = &v28[-v11] == v12;
          if ( !v14 )
            v29 = 0;
        }
        while ( v29 );
        ptr = (char *)v5[3];
      }
      if ( !v14 )
        break;
      if ( v7 < v8 )
      {
        v18 = v8 - v7;
      }
      else
      {
        v14 = ptr;
        v18 = v10 - v7;
      }
      if ( v7 >= v8 )
        v18 += v8 - v14;
      if ( v10 - ptr - v11 < v4 - v11 + v18 )
      {
        v56 = v10 - ptr - v11;
        v30 = pthread_mutex_lock(v53);
        v7 = (char *)v5[5];
        v8 = (char *)v5[6];
        ptr = (char *)v5[3];
        v10 = (char *)v5[4];
        if ( v7 < v8 )
          v30 = v8 - v7;
        else
          v31 = v5[3];
        v55 = *v5;
        v3 = (char *)v5[5];
        if ( v7 >= v8 )
          v30 = (int)&v8[v10 - v7 - v31];
        v59 = v56;
        v57 = v4 - v55 + v30;
        v32 = v57 / v11;
        if ( v59 < v57 )
        {
          v33 = v32 + 1;
          if ( (int)(v32 + 1) >= 0 )
          {
            v34 = v32 | (v32 >> 1) | ((v32 | (v32 >> 1)) >> 2);
            v35 = v34 | (v34 >> 4) | ((v34 | (v34 >> 4)) >> 8);
            v33 = (v35 | HIWORD(v35)) + 1;
          }
          v36 = v33 * v11;
          v37 = *(_QWORD *)(v5 + 1);
          if ( v36 >= HIDWORD(v37) )
            v36 = v5[2];
          if ( v36 > (unsigned int)v37 )
          {
            v58 = v36 + v55;
            v39 = (char *)malloc(v36 + v55);
            v40 = v39;
            if ( v7 >= v8 )
            {
              v43 = v10 - v7;
              v44 = v7;
              v45 = v8 - ptr;
              v46 = &v39[v43];
              memcpy(v39, v44, v43);
              v47 = v46;
              v42 = &v46[v45];
              memcpy(v47, ptr, v45);
            }
            else
            {
              v41 = v8 - v7;
              v42 = &v39[v8 - v7];
              memcpy(v39, v7, v41);
            }
            v5[6] = v42;
            v3 = v40;
            v7 = v40;
            free(ptr);
            v8 = (char *)v5[6];
            ptr = v40;
            v55 = *v5;
            v5[3] = v40;
            v5[5] = v40;
            v10 = &v40[v58];
            v5[4] = &v40[v58];
          }
        }
        v11 = v55;
        pthread_mutex_unlock(v53);
      }
      if ( v7 >= v8 )
      {
        v3 = (char *)(v10 - v3);
        v24 = a2;
        v23 = v12 - &v3[v8 - ptr - v11];
        if ( v23 >= v4 )
          v23 = v4;
        v21 = v23;
      }
      else
      {
        v19 = v10 - v8;
        v20 = v8 - v3 - v11;
        v3 = a2;
        v21 = (size_t)&v12[-v20];
        v22 = v8;
        if ( v21 >= v4 )
          v21 = v4;
        if ( v19 >= v21 )
          v19 = v21;
        v8 += v19;
        memcpy(v22, a2, v19);
        v23 = v21 - v19;
        v24 = &a2[v19];
      }
      if ( v23 )
      {
        if ( v10 <= v8 )
          v8 = &ptr[v8 - v10];
        v38 = v8;
        v8 += v23;
        memcpy(v38, v24, v23);
      }
      if ( v10 <= v8 )
        v8 = &ptr[v8 - v10];
      v5[6] = v8;
      pthread_mutex_unlock(mutex);
      if ( v51 == v21 )
      {
        result = (_DWORD *)pthread_cond_signal(cond);
        v4 -= v21;
        if ( !v4 )
          return result;
      }
      else
      {
        result = (_DWORD *)pthread_cond_broadcast(cond);
        v4 -= v21;
        if ( !v4 )
          return result;
      }
      a2 += v21;
      v51 = *v5;
    }
    return (_DWORD *)pthread_mutex_unlock(mutex);
  }
  return result;
}
