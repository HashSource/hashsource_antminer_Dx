int __fastcall queue_clear(int a1)
{
  int v2; // r11
  char *v3; // r10
  unsigned int v4; // r4
  size_t v5; // r4
  size_t v6; // r8
  const void *v7; // r1
  char *v8; // r5
  unsigned int v9; // r3
  int v10; // r5
  pthread_cond_t *v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r6
  int v14; // r3
  unsigned int v15; // r9
  unsigned int v16; // r7
  int v17; // r4
  unsigned int v18; // r1
  int v19; // r2
  int v20; // r0
  int v21; // r3
  bool v22; // zf
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
  size_t n; // [sp+4h] [bp-48h]
  pthread_mutex_t *mutex; // [sp+8h] [bp-44h]
  unsigned int v36; // [sp+Ch] [bp-40h]
  size_t v37; // [sp+10h] [bp-3Ch]
  unsigned int v38; // [sp+14h] [bp-38h]
  unsigned int v39; // [sp+18h] [bp-34h]
  pthread_mutex_t *v41; // [sp+20h] [bp-2Ch]
  char *ptr; // [sp+28h] [bp-24h]
  pthread_mutex_t *v43; // [sp+2Ch] [bp-20h]
  int v44[7]; // [sp+30h] [bp-1Ch] BYREF

  v43 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  ptr = (char *)calloc(1u, **(_DWORD **)a1);
  if ( *(int *)(a1 + 12) <= 0 )
    goto LABEL_38;
  while ( 2 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    v39 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
LABEL_57:
      sub_DDF1C();
    v36 = 0;
    mutex = (pthread_mutex_t *)(v2 + 36);
    v3 = ptr;
    v41 = (pthread_mutex_t *)(v2 + 60);
    n = *(_DWORD *)v2;
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 36));
    while ( 1 )
    {
      v13 = *(_DWORD *)(v2 + 24);
      v12 = *(_DWORD *)(v2 + 20);
      v15 = *(_DWORD *)(v2 + 16);
      v14 = *(_DWORD *)(v2 + 12);
      v16 = *(_DWORD *)v2;
      if ( v12 < v13 )
      {
        v4 = v13 - v12;
        if ( v16 != v13 - v12 )
          goto LABEL_5;
      }
      else
      {
        v17 = v13 - v14;
        v18 = v15 - v12;
        if ( v16 != v13 - v14 + v15 - v12 )
          goto LABEL_33;
      }
      if ( *(_DWORD *)(v2 + 28) )
      {
        do
        {
          pthread_cond_wait((pthread_cond_t *)(v2 + 88), mutex);
          v13 = *(_DWORD *)(v2 + 24);
          v12 = *(_DWORD *)(v2 + 20);
          v14 = *(_DWORD *)(v2 + 12);
          v16 = *(_DWORD *)v2;
          if ( v12 < v13 )
            v19 = v13 - v12;
          else
            v19 = v13 - v14 + *(_DWORD *)(v2 + 16) - v12;
        }
        while ( v16 == v19 && *(_DWORD *)(v2 + 28) );
        v15 = *(_DWORD *)(v2 + 16);
      }
      if ( v12 < v13 )
      {
        v4 = v13 - v12;
LABEL_5:
        v5 = v4 - v16;
        if ( !v5 )
          goto LABEL_34;
        goto LABEL_6;
      }
      v17 = v13 - v14;
      v18 = v15 - v12;
LABEL_33:
      v5 = v17 + v18 - v16;
      if ( !v5 )
      {
LABEL_34:
        pthread_mutex_unlock(mutex);
        v20 = v36 / v39;
        goto LABEL_35;
      }
LABEL_6:
      v38 = v14;
      v6 = v15 - v12 - v16;
      v7 = (const void *)(v12 + v16);
      if ( v5 >= n )
        v5 = n;
      if ( v6 >= v5 )
        v6 = v5;
      v37 = v5 - v6;
      v8 = (char *)(v12 + v6);
      memcpy(v3, v7, v6);
      v9 = v38;
      if ( v15 <= (unsigned int)v8 )
        v8 = &v8[v38 - v15];
      if ( v37 )
      {
        v31 = &v8[v16];
        if ( v15 <= (unsigned int)v31 )
          v31 = &v31[v38 - v15];
        v32 = v31;
        v33 = &v31[v37];
        memcpy(&v3[v6], v32, v37);
        v9 = v38;
        if ( v15 <= (unsigned int)v33 )
          v33 = &v33[v38 - v15];
        v8 = &v33[-v16];
        if ( v38 > (unsigned int)v8 )
          v8 = (char *)(v15 - (v38 - (_DWORD)v8));
      }
      *(_DWORD *)(v2 + 20) = v8;
      v10 = v13 > (unsigned int)v8 ? v13 - (_DWORD)v8 : v15 - (_DWORD)v8 + v13 - v9;
      if ( v10 - v16 <= (v15 - v9 - v16) >> 2 )
      {
        pthread_mutex_unlock(mutex);
        pthread_mutex_lock(v41);
        pthread_mutex_lock(mutex);
        v24 = *(_QWORD *)(v2 + 20);
        v26 = *(_DWORD *)(v2 + 16);
        v25 = *(_DWORD *)(v2 + 12);
        v27 = *(_DWORD *)v2;
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
          sub_BB510(v44, (int *)v2, v30 >> 1);
        pthread_mutex_unlock(mutex);
        pthread_mutex_unlock(v41);
      }
      else
      {
        pthread_mutex_unlock(mutex);
      }
      v11 = (pthread_cond_t *)(v2 + 136);
      if ( v5 == *(_DWORD *)v2 )
        pthread_cond_signal(v11);
      else
        pthread_cond_broadcast(v11);
      v3 += v5;
      v36 += v5;
      n -= v5;
      if ( !n )
        break;
      pthread_mutex_lock(mutex);
    }
    v20 = v36 / v39;
LABEL_35:
    if ( v20 != 1 )
      goto LABEL_57;
    v21 = *(_DWORD *)(a1 + 12) - 1;
    v22 = *(_DWORD *)(a1 + 12) == 1;
    *(_DWORD *)(a1 + 12) = v21;
    if ( v21 >= 0 && !v22 )
      continue;
    break;
  }
LABEL_38:
  free(ptr);
  return j_pthread_mutex_unlock(v43);
}
