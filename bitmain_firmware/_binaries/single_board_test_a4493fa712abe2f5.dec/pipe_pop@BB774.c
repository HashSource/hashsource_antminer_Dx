int __fastcall pipe_pop(int *a1, char *a2, int a3)
{
  int v3; // r9
  unsigned int v6; // r4
  size_t v7; // r4
  size_t v8; // r8
  const void *v9; // r1
  unsigned int v10; // r5
  unsigned int v11; // r3
  int v12; // r5
  pthread_cond_t *v13; // r0
  unsigned int v14; // r5
  unsigned int v15; // r6
  int v16; // r3
  unsigned int v17; // r9
  unsigned int v18; // r7
  unsigned int v19; // r4
  unsigned int v20; // r1
  int v21; // r2
  __int64 v23; // kr20_8
  int v24; // r1
  int v25; // r6
  unsigned int v26; // r0
  int v27; // r2
  int v28; // r3
  unsigned int v29; // r2
  char *v30; // r5
  char *v31; // r1
  unsigned int v32; // r5
  size_t n; // [sp+0h] [bp-3Ch]
  pthread_mutex_t *mutex; // [sp+4h] [bp-38h]
  unsigned int v35; // [sp+8h] [bp-34h]
  size_t v36; // [sp+Ch] [bp-30h]
  unsigned int v37; // [sp+10h] [bp-2Ch]
  pthread_mutex_t *v38; // [sp+14h] [bp-28h]
  unsigned int v39; // [sp+18h] [bp-24h]
  pthread_cond_t *cond; // [sp+1Ch] [bp-20h]
  int v41[7]; // [sp+20h] [bp-1Ch] BYREF

  v3 = *a1 * a3;
  v39 = *a1;
  if ( v3 )
  {
    mutex = (pthread_mutex_t *)(a1 + 9);
    v35 = 0;
    cond = (pthread_cond_t *)(a1 + 22);
    v38 = (pthread_mutex_t *)(a1 + 15);
    n = *a1 * a3;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 9));
    while ( 1 )
    {
      v15 = a1[6];
      v14 = a1[5];
      v17 = a1[4];
      v16 = a1[3];
      v18 = *a1;
      if ( v14 < v15 )
      {
        v6 = v15 - v14;
        if ( v18 != v15 - v14 )
          goto LABEL_4;
      }
      else
      {
        v19 = v15 - v16;
        v20 = v17 - v14;
        if ( v18 != v15 - v16 + v17 - v14 )
          goto LABEL_31;
      }
      if ( a1[7] )
      {
        do
        {
          pthread_cond_wait(cond, mutex);
          v15 = a1[6];
          v14 = a1[5];
          v16 = a1[3];
          v18 = *a1;
          v21 = v15 - v14;
          if ( v14 >= v15 )
            v21 = v15 - v16 + a1[4] - v14;
        }
        while ( v18 == v21 && a1[7] );
        v17 = a1[4];
      }
      if ( v14 < v15 )
      {
        v6 = v15 - v14;
LABEL_4:
        v7 = v6 - v18;
        if ( !v7 )
          goto LABEL_32;
        goto LABEL_5;
      }
      v19 = v15 - v16;
      v20 = v17 - v14;
LABEL_31:
      v7 = v19 + v20 - v18;
      if ( !v7 )
      {
LABEL_32:
        pthread_mutex_unlock(mutex);
        return v35 / v39;
      }
LABEL_5:
      v37 = v16;
      v8 = v17 - v14 - v18;
      v9 = (const void *)(v14 + v18);
      if ( v7 >= n )
        v7 = n;
      if ( v8 >= v7 )
        v8 = v7;
      v36 = v7 - v8;
      v10 = v14 + v8;
      memcpy(a2, v9, v8);
      v11 = v37;
      if ( v17 <= v10 )
        v10 = v10 - v17 + v37;
      if ( v36 )
      {
        v30 = (char *)(v10 + v18);
        if ( v17 <= (unsigned int)v30 )
          v30 = &v30[v37 - v17];
        v31 = v30;
        v32 = (unsigned int)&v30[v36];
        memcpy(&a2[v8], v31, v36);
        v11 = v37;
        if ( v17 <= v32 )
          v32 = v32 - v17 + v37;
        v10 = v32 - v18;
        if ( v37 > v10 )
          v10 = v17 - (v37 - v10);
      }
      a1[5] = v10;
      if ( v15 > v10 )
        v12 = v15 - v10;
      else
        v12 = v17 - v10 + v15 - v11;
      if ( v12 - v18 <= (v17 - v11 - v18) >> 2 )
      {
        pthread_mutex_unlock(mutex);
        pthread_mutex_lock(v38);
        pthread_mutex_lock(mutex);
        v23 = *(_QWORD *)(a1 + 5);
        v25 = a1[4];
        v24 = a1[3];
        v26 = *a1;
        v27 = v25 - v24;
        if ( (unsigned int)v23 < HIDWORD(v23) )
        {
          v28 = HIDWORD(v23) - v23;
        }
        else
        {
          v24 = HIDWORD(v23) - v24;
          v28 = v25 - v23;
        }
        if ( (unsigned int)v23 >= HIDWORD(v23) )
          v28 += v24;
        v29 = v27 - v26;
        if ( v28 - v26 <= v29 >> 2 )
          sub_BB510(v41, a1, v29 >> 1);
        pthread_mutex_unlock(mutex);
        pthread_mutex_unlock(v38);
      }
      else
      {
        pthread_mutex_unlock(mutex);
      }
      v13 = (pthread_cond_t *)(a1 + 34);
      if ( v7 == *a1 )
        pthread_cond_signal(v13);
      else
        pthread_cond_broadcast(v13);
      a2 += v7;
      v35 += v7;
      n -= v7;
      if ( !n )
        return v35 / v39;
      pthread_mutex_lock(mutex);
    }
  }
  return v3;
}
