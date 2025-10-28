int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  int v6; // r11
  unsigned int v7; // r9
  unsigned int v8; // r4
  size_t v9; // r4
  size_t v10; // r7
  const void *v11; // r1
  char *v12; // r5
  unsigned int v13; // r3
  int v14; // r5
  pthread_cond_t *v15; // r0
  unsigned int v16; // r5
  unsigned int v17; // r6
  int v18; // r3
  unsigned int v19; // r10
  unsigned int v20; // r8
  int v21; // r4
  unsigned int v22; // r1
  unsigned int v23; // r2
  int v24; // r4
  unsigned int v26; // r3
  unsigned int v27; // r12
  int v28; // r1
  int v29; // lr
  bool v30; // cf
  unsigned int v31; // r0
  int v32; // r2
  unsigned int v33; // r2
  char *v34; // r5
  char *v35; // r1
  char *v36; // r5
  char *dest; // [sp+4h] [bp-48h]
  pthread_mutex_t *mutex; // [sp+8h] [bp-44h]
  unsigned int v39; // [sp+Ch] [bp-40h]
  unsigned int v40; // [sp+10h] [bp-3Ch]
  size_t n; // [sp+14h] [bp-38h]
  pthread_mutex_t *v43; // [sp+1Ch] [bp-30h]
  pthread_mutex_t *v45; // [sp+24h] [bp-28h]
  unsigned int v46; // [sp+28h] [bp-24h]
  int v47[7]; // [sp+30h] [bp-1Ch] BYREF

  v43 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v24 = 0;
    goto LABEL_38;
  }
  v6 = *(_DWORD *)(a1 + 8);
  v46 = *(_DWORD *)v6;
  v7 = *(_DWORD *)v6 * a3;
  if ( !v7 )
    goto LABEL_36;
  dest = a2;
  mutex = (pthread_mutex_t *)(v6 + 36);
  v39 = 0;
  v45 = (pthread_mutex_t *)(v6 + 60);
  pthread_mutex_lock((pthread_mutex_t *)(v6 + 36));
  while ( 1 )
  {
    v16 = *(_DWORD *)(v6 + 20);
    v17 = *(_DWORD *)(v6 + 24);
    v18 = *(_DWORD *)(v6 + 12);
    v19 = *(_DWORD *)(v6 + 16);
    v20 = *(_DWORD *)v6;
    if ( v16 < v17 )
    {
      v8 = v17 - v16;
      if ( v20 != v17 - v16 )
        goto LABEL_5;
    }
    else
    {
      v21 = v17 - v18;
      v22 = v19 - v16;
      if ( v20 != v17 - v18 + v19 - v16 )
        goto LABEL_34;
    }
    do
    {
      if ( !*(_DWORD *)(v6 + 28) )
        break;
      pthread_cond_wait((pthread_cond_t *)(v6 + 88), mutex);
      v16 = *(_DWORD *)(v6 + 20);
      v17 = *(_DWORD *)(v6 + 24);
      v18 = *(_DWORD *)(v6 + 12);
      v19 = *(_DWORD *)(v6 + 16);
      v20 = *(_DWORD *)v6;
      if ( v16 < v17 )
        v23 = v17 - v16;
      else
        v23 = v17 - v18;
      if ( v16 >= v17 )
        v23 += v19 - v16;
    }
    while ( v20 == v23 );
    if ( v16 < v17 )
    {
      v8 = v17 - v16;
LABEL_5:
      v9 = v8 - v20;
      if ( !v9 )
        goto LABEL_35;
      goto LABEL_6;
    }
    v21 = v17 - v18;
    v22 = v19 - v16;
LABEL_34:
    v9 = v21 + v22 - v20;
    if ( !v9 )
    {
LABEL_35:
      pthread_mutex_unlock(mutex);
      v7 = v39 / v46;
      goto LABEL_36;
    }
LABEL_6:
    v10 = v19 - v16 - v20;
    if ( v9 >= v7 )
      v9 = v7;
    v40 = v18;
    if ( v10 >= v9 )
      v10 = v9;
    v11 = (const void *)(v16 + v20);
    v12 = (char *)(v16 + v10);
    n = v9 - v10;
    memcpy(dest, v11, v10);
    v13 = v40;
    if ( v19 <= (unsigned int)v12 )
      v12 = &v12[v40 - v19];
    if ( v9 != v10 )
    {
      v34 = &v12[v20];
      if ( v19 <= (unsigned int)v34 )
        v34 = &v34[v40 - v19];
      v35 = v34;
      v36 = &v34[n];
      memcpy(&dest[v10], v35, n);
      v13 = v40;
      if ( v19 <= (unsigned int)v36 )
        v36 = &v36[v40 - v19];
      v12 = &v36[-v20];
      if ( v40 > (unsigned int)v12 )
        v12 = (char *)(v19 - (v40 - (_DWORD)v12));
    }
    *(_DWORD *)(v6 + 20) = v12;
    v14 = v17 > (unsigned int)v12 ? v17 - (_DWORD)v12 : v17 - v13 + v19 - (_DWORD)v12;
    if ( v14 - v20 <= (v19 - v13 - v20) >> 2 )
    {
      pthread_mutex_unlock(mutex);
      pthread_mutex_lock(v45);
      pthread_mutex_lock(mutex);
      v26 = *(_DWORD *)(v6 + 24);
      v27 = *(_DWORD *)(v6 + 20);
      v28 = *(_DWORD *)(v6 + 12);
      v29 = *(_DWORD *)(v6 + 16);
      v30 = v27 >= v26;
      v31 = *(_DWORD *)v6;
      if ( v27 < v26 )
        v26 -= v27;
      v32 = v29 - v28;
      if ( v30 )
      {
        v28 = v26 - v28;
        v26 = v29 - v27;
      }
      v33 = v32 - v31;
      if ( v30 )
        v26 += v28;
      if ( v26 - v31 <= v33 >> 2 )
        sub_1596F4(v47, (int *)v6, v33 >> 1);
      pthread_mutex_unlock(mutex);
      pthread_mutex_unlock(v45);
    }
    else
    {
      pthread_mutex_unlock(mutex);
    }
    v15 = (pthread_cond_t *)(v6 + 136);
    if ( v9 == *(_DWORD *)v6 )
      pthread_cond_signal(v15);
    else
      pthread_cond_broadcast(v15);
    v7 -= v9;
    dest += v9;
    v39 += v9;
    if ( !v7 )
      break;
    pthread_mutex_lock(mutex);
  }
  v7 = v39 / v46;
LABEL_36:
  if ( a3 != v7 )
    sub_1FD10();
  v24 = 1;
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_38:
  pthread_mutex_unlock(v43);
  return v24;
}
