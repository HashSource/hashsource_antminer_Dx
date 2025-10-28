_DWORD *__fastcall _pipe_push(_DWORD *result, char *a2, size_t a3)
{
  char *v3; // r8
  _DWORD *v4; // r11
  size_t v5; // r10
  int v6; // r2
  char *v7; // r4
  char *v8; // r6
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
  unsigned int v25; // r0
  char *v26; // r12
  _BOOL4 v27; // r3
  int v28; // r2
  int v29; // r0
  unsigned int v30; // r0
  int v31; // r3
  unsigned int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // r3
  __int64 v35; // kr20_8
  char *v36; // r0
  char *v37; // r0
  char *v38; // r9
  size_t v39; // r2
  char *v40; // r4
  size_t v41; // r2
  char *v42; // r1
  size_t v43; // r6
  char *v44; // r4
  char *v45; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-2Ch]
  char *ptr; // [sp+4h] [bp-28h]
  unsigned int v49; // [sp+Ch] [bp-20h]
  pthread_cond_t *v50; // [sp+10h] [bp-1Ch]
  pthread_mutex_t *v51; // [sp+14h] [bp-18h]
  pthread_cond_t *cond; // [sp+18h] [bp-14h]
  unsigned int v53; // [sp+1Ch] [bp-10h]
  size_t v54; // [sp+20h] [bp-Ch]
  size_t v55; // [sp+20h] [bp-Ch]
  unsigned int v56; // [sp+20h] [bp-Ch]
  size_t v57; // [sp+24h] [bp-8h]

  v49 = *result;
  if ( a3 )
  {
    v4 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    cond = (pthread_cond_t *)(result + 34);
    v5 = a3;
    v51 = (pthread_mutex_t *)(result + 9);
    v50 = (pthread_cond_t *)(result + 22);
    while ( 1 )
    {
      pthread_mutex_lock(mutex);
      v7 = (char *)v4[6];
      v8 = (char *)v4[5];
      v9 = (char *)v4[3];
      v10 = (char *)v4[4];
      v11 = *v4;
      ptr = v9;
      if ( v8 >= v7 )
      {
        v9 = (char *)(v7 - v9);
        v6 = v10 - v8;
      }
      v12 = (char *)v4[2];
      if ( v8 < v7 )
        v13 = (char *)(v7 - v8);
      else
        v13 = &v9[v6];
      v14 = (char *)v4[8];
      v15 = &v13[-v11] - v12;
      if ( v8 >= v7 )
        v3 = (char *)v4[5];
      v16 = __clz(v15);
      if ( v8 < v7 )
        v3 = (char *)v4[5];
      v17 = v16 >> 5;
      if ( !v14 )
        v17 = 0;
      if ( v17 )
      {
        do
        {
          pthread_cond_wait(cond, mutex);
          v7 = (char *)v4[6];
          v8 = (char *)v4[5];
          v10 = (char *)v4[4];
          v25 = *v4;
          if ( v8 < v7 )
            v12 = (char *)v4[2];
          v3 = (char *)v4[5];
          v26 = (char *)(v7 - v8 - v25);
          v14 = (char *)v4[8];
          if ( v8 >= v7 )
          {
            v12 = (char *)v4[2];
            v26 = &v7[v10 - v8 - v4[3] - v25];
          }
          v27 = v26 == v12;
          if ( !v14 )
            v27 = 0;
        }
        while ( v27 );
        ptr = (char *)v4[3];
        v11 = *v4;
      }
      if ( !v14 )
        break;
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
      if ( v10 - ptr - v11 < v5 - v11 + v18 )
      {
        v54 = v10 - ptr - v11;
        pthread_mutex_lock(v51);
        v7 = (char *)v4[6];
        v8 = (char *)v4[5];
        v10 = (char *)v4[4];
        ptr = (char *)v4[3];
        if ( v8 < v7 )
        {
          v29 = v7 - v8;
        }
        else
        {
          v28 = v4[3];
          v29 = v10 - v8;
        }
        if ( v8 >= v7 )
          v3 = (char *)v4[5];
        v53 = *v4;
        if ( v8 >= v7 )
          v29 += (int)&v7[-v28];
        else
          v3 = (char *)v4[5];
        v57 = v54;
        v55 = v5 - v53 + v29;
        v30 = v55 / v11;
        if ( v57 < v55 )
        {
          v31 = v30 + 1;
          if ( (int)(v30 + 1) >= 0 )
          {
            v32 = v30 | (v30 >> 1) | ((v30 | (v30 >> 1)) >> 2);
            v33 = v32 | (v32 >> 4) | ((v32 | (v32 >> 4)) >> 8);
            v31 = (v33 | HIWORD(v33)) + 1;
          }
          v34 = v31 * v11;
          v35 = *(_QWORD *)(v4 + 1);
          if ( v34 >= HIDWORD(v35) )
            v34 = v4[2];
          if ( v34 > (unsigned int)v35 )
          {
            v56 = v53 + v34;
            v37 = (char *)malloc(v53 + v34);
            v38 = v37;
            if ( v8 >= v7 )
            {
              v41 = v10 - v8;
              v42 = v8;
              v43 = v7 - ptr;
              v44 = &v37[v41];
              memcpy(v37, v42, v41);
              v45 = v44;
              v40 = &v44[v43];
              memcpy(v45, ptr, v43);
            }
            else
            {
              v39 = v7 - v8;
              v40 = &v37[v7 - v8];
              memcpy(v37, v8, v39);
            }
            v4[6] = v40;
            v3 = v38;
            v8 = v38;
            free(ptr);
            v7 = (char *)v4[6];
            ptr = v38;
            v53 = *v4;
            v4[5] = v38;
            v10 = &v38[v56];
            v4[3] = v38;
            v4[4] = &v38[v56];
          }
        }
        v11 = v53;
        pthread_mutex_unlock(v51);
      }
      if ( v8 >= v7 )
      {
        v3 = (char *)(v10 - v3);
        v24 = a2;
        v23 = v12 - &v3[v7 - ptr - v11];
        if ( v23 >= v5 )
          v23 = v5;
        v21 = v23;
      }
      else
      {
        v19 = v10 - v7;
        v20 = v7 - v3 - v11;
        v3 = a2;
        v21 = (size_t)&v12[-v20];
        v22 = v7;
        if ( v21 >= v5 )
          v21 = v5;
        if ( v19 >= v21 )
          v19 = v21;
        v7 += v19;
        memcpy(v22, a2, v19);
        v23 = v21 - v19;
        v24 = &a2[v19];
      }
      if ( v23 )
      {
        if ( v10 <= v7 )
          v7 = &ptr[v7 - v10];
        v36 = v7;
        v7 += v23;
        memcpy(v36, v24, v23);
      }
      if ( v10 <= v7 )
        v7 = &ptr[v7 - v10];
      v4[6] = v7;
      pthread_mutex_unlock(mutex);
      if ( v49 == v21 )
      {
        result = (_DWORD *)pthread_cond_signal(v50);
        v5 -= v21;
        if ( !v5 )
          return result;
      }
      else
      {
        result = (_DWORD *)pthread_cond_broadcast(v50);
        v5 -= v21;
        if ( !v5 )
          return result;
      }
      a2 += v21;
      v49 = *v4;
    }
    return (_DWORD *)j_pthread_mutex_unlock(mutex);
  }
  return result;
}
