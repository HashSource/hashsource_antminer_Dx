int __fastcall try_pop_ans_base(int a1, char *a2)
{
  int v3; // r4
  int v4; // r11
  char *v5; // r10
  unsigned int v6; // r4
  size_t v7; // r4
  size_t v8; // r8
  const void *v9; // r1
  char *v10; // r5
  unsigned int v11; // r3
  int v12; // r5
  pthread_cond_t *v13; // r0
  unsigned int v14; // r5
  unsigned int v15; // r6
  int v16; // r3
  unsigned int v17; // r9
  unsigned int v18; // r7
  int v19; // r4
  unsigned int v20; // r1
  int v21; // r2
  int v22; // r0
  __int64 v24; // kr20_8
  int v25; // r1
  int v26; // r6
  unsigned int v27; // r0
  int v28; // r2
  int v29; // r3
  unsigned int v30; // r2
  char *v31; // r5
  char *v32; // r1
  char *v33; // r5
  size_t n; // [sp+0h] [bp-44h]
  pthread_mutex_t *mutex; // [sp+4h] [bp-40h]
  unsigned int v36; // [sp+8h] [bp-3Ch]
  size_t v37; // [sp+Ch] [bp-38h]
  unsigned int v38; // [sp+10h] [bp-34h]
  int v39; // [sp+18h] [bp-2Ch]
  unsigned int v40; // [sp+1Ch] [bp-28h]
  pthread_mutex_t *v41; // [sp+20h] [bp-24h]
  int v42[7]; // [sp+28h] [bp-1Ch] BYREF

  v39 = *(_DWORD *)(*(_DWORD *)(a1 + 640) + 632);
  pthread_mutex_lock((pthread_mutex_t *)(v39 + 16));
  v3 = *(_DWORD *)(v39 + 12);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v39 + 8);
    v40 = *(_DWORD *)v4;
    if ( !*(_DWORD *)v4 )
      goto LABEL_54;
    v36 = 0;
    mutex = (pthread_mutex_t *)(v4 + 36);
    v41 = (pthread_mutex_t *)(v4 + 60);
    v5 = a2;
    n = *(_DWORD *)v4;
    pthread_mutex_lock((pthread_mutex_t *)(v4 + 36));
    while ( 1 )
    {
      v15 = *(_DWORD *)(v4 + 24);
      v14 = *(_DWORD *)(v4 + 20);
      v17 = *(_DWORD *)(v4 + 16);
      v16 = *(_DWORD *)(v4 + 12);
      v18 = *(_DWORD *)v4;
      if ( v14 < v15 )
      {
        v6 = v15 - v14;
        if ( v18 != v15 - v14 )
          goto LABEL_5;
      }
      else
      {
        v19 = v15 - v16;
        v20 = v17 - v14;
        if ( v18 != v15 - v16 + v17 - v14 )
          goto LABEL_33;
      }
      if ( *(_DWORD *)(v4 + 28) )
      {
        do
        {
          pthread_cond_wait((pthread_cond_t *)(v4 + 88), mutex);
          v15 = *(_DWORD *)(v4 + 24);
          v14 = *(_DWORD *)(v4 + 20);
          v16 = *(_DWORD *)(v4 + 12);
          v18 = *(_DWORD *)v4;
          if ( v14 < v15 )
            v21 = v15 - v14;
          else
            v21 = v15 - v16 + *(_DWORD *)(v4 + 16) - v14;
        }
        while ( v18 == v21 && *(_DWORD *)(v4 + 28) );
        v17 = *(_DWORD *)(v4 + 16);
      }
      if ( v15 > v14 )
      {
        v6 = v15 - v14;
LABEL_5:
        v7 = v6 - v18;
        if ( !v7 )
          goto LABEL_34;
        goto LABEL_6;
      }
      v19 = v15 - v16;
      v20 = v17 - v14;
LABEL_33:
      v7 = v19 + v20 - v18;
      if ( !v7 )
      {
LABEL_34:
        pthread_mutex_unlock(mutex);
        v22 = v36 / v40;
        goto LABEL_35;
      }
LABEL_6:
      v38 = v16;
      v8 = v17 - v14 - v18;
      v9 = (const void *)(v14 + v18);
      if ( v7 >= n )
        v7 = n;
      if ( v8 >= v7 )
        v8 = v7;
      v37 = v7 - v8;
      v10 = (char *)(v14 + v8);
      memcpy(v5, v9, v8);
      v11 = v38;
      if ( v17 <= (unsigned int)v10 )
        v10 = &v10[v38 - v17];
      if ( v37 )
      {
        v31 = &v10[v18];
        if ( v17 <= (unsigned int)v31 )
          v31 = &v31[v38 - v17];
        v32 = v31;
        v33 = &v31[v37];
        memcpy(&v5[v8], v32, v37);
        v11 = v38;
        if ( v17 <= (unsigned int)v33 )
          v33 = &v33[v38 - v17];
        v10 = &v33[-v18];
        if ( v38 > (unsigned int)v10 )
          v10 = (char *)(v17 - (v38 - (_DWORD)v10));
      }
      *(_DWORD *)(v4 + 20) = v10;
      if ( v15 > (unsigned int)v10 )
        v12 = v15 - (_DWORD)v10;
      else
        v12 = v17 - (_DWORD)v10 + v15 - v11;
      if ( v12 - v18 <= (v17 - v11 - v18) >> 2 )
      {
        pthread_mutex_unlock(mutex);
        pthread_mutex_lock(v41);
        pthread_mutex_lock(mutex);
        v24 = *(_QWORD *)(v4 + 20);
        v26 = *(_DWORD *)(v4 + 16);
        v25 = *(_DWORD *)(v4 + 12);
        v27 = *(_DWORD *)v4;
        v28 = v26 - v25;
        if ( (unsigned int)v24 < HIDWORD(v24) )
        {
          v29 = HIDWORD(v24) - v24;
        }
        else
        {
          v25 = HIDWORD(v24) - v25;
          v29 = v26 - v24;
        }
        if ( (unsigned int)v24 >= HIDWORD(v24) )
          v29 += v25;
        v30 = v28 - v27;
        if ( v29 - v27 <= v30 >> 2 )
          sub_BB510(v42, (int *)v4, v30 >> 1);
        pthread_mutex_unlock(mutex);
        pthread_mutex_unlock(v41);
      }
      else
      {
        pthread_mutex_unlock(mutex);
      }
      v13 = (pthread_cond_t *)(v4 + 136);
      if ( v7 == *(_DWORD *)v4 )
        pthread_cond_signal(v13);
      else
        pthread_cond_broadcast(v13);
      v5 += v7;
      v36 += v7;
      n -= v7;
      if ( !n )
      {
        v22 = v36 / v40;
LABEL_35:
        if ( v22 == 1 )
        {
          v3 = 1;
          --*(_DWORD *)(v39 + 12);
          break;
        }
LABEL_54:
        sub_1F9DC();
      }
      pthread_mutex_lock(mutex);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(v39 + 16));
  return v3;
}
