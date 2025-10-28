int __fastcall try_pop_ans_base(int a1, char *a2)
{
  int v3; // r4
  int v4; // r11
  unsigned int v5; // r9
  unsigned int v6; // r4
  size_t v7; // r4
  size_t v8; // r7
  const void *v9; // r1
  char *v10; // r5
  unsigned int v11; // r3
  int v12; // r5
  pthread_cond_t *v13; // r0
  unsigned int v14; // r5
  unsigned int v15; // r6
  int v16; // r3
  unsigned int v17; // r10
  unsigned int v18; // r8
  int v19; // r4
  unsigned int v20; // r1
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r4
  unsigned int v25; // r3
  unsigned int v26; // r12
  int v27; // r1
  int v28; // lr
  bool v29; // cf
  unsigned int v30; // r0
  int v31; // r2
  unsigned int v32; // r2
  char *v33; // r5
  char *v34; // r1
  char *v35; // r5
  char *dest; // [sp+0h] [bp-44h]
  pthread_mutex_t *mutex; // [sp+4h] [bp-40h]
  unsigned int v38; // [sp+8h] [bp-3Ch]
  unsigned int v39; // [sp+Ch] [bp-38h]
  size_t n; // [sp+10h] [bp-34h]
  pthread_mutex_t *v41; // [sp+14h] [bp-30h]
  int v42; // [sp+18h] [bp-2Ch]
  unsigned int v43; // [sp+1Ch] [bp-28h]
  pthread_mutex_t *v44; // [sp+20h] [bp-24h]
  int v45[7]; // [sp+28h] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 640) + 632);
  v42 = v3;
  v41 = (pthread_mutex_t *)(v3 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 16));
  if ( !*(_DWORD *)(v3 + 12) )
  {
    v23 = 0;
    goto LABEL_38;
  }
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(_DWORD *)v4;
  v43 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
LABEL_57:
    sub_1FD10();
  dest = a2;
  mutex = (pthread_mutex_t *)(v4 + 36);
  v38 = 0;
  v44 = (pthread_mutex_t *)(v4 + 60);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 36));
  while ( 1 )
  {
    v14 = *(_DWORD *)(v4 + 20);
    v15 = *(_DWORD *)(v4 + 24);
    v16 = *(_DWORD *)(v4 + 12);
    v17 = *(_DWORD *)(v4 + 16);
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
        goto LABEL_34;
    }
    do
    {
      if ( !*(_DWORD *)(v4 + 28) )
        break;
      pthread_cond_wait((pthread_cond_t *)(v4 + 88), mutex);
      v14 = *(_DWORD *)(v4 + 20);
      v15 = *(_DWORD *)(v4 + 24);
      v16 = *(_DWORD *)(v4 + 12);
      v17 = *(_DWORD *)(v4 + 16);
      v18 = *(_DWORD *)v4;
      if ( v14 < v15 )
        v21 = v15 - v14;
      else
        v21 = v15 - v16;
      if ( v14 >= v15 )
        v21 += v17 - v14;
    }
    while ( v18 == v21 );
    if ( v15 > v14 )
    {
      v6 = v15 - v14;
LABEL_5:
      v7 = v6 - v18;
      if ( !v7 )
        goto LABEL_35;
      goto LABEL_6;
    }
    v19 = v15 - v16;
    v20 = v17 - v14;
LABEL_34:
    v7 = v19 + v20 - v18;
    if ( !v7 )
    {
LABEL_35:
      pthread_mutex_unlock(mutex);
      v22 = v38 / v43;
      goto LABEL_36;
    }
LABEL_6:
    v8 = v17 - v14 - v18;
    if ( v7 >= v5 )
      v7 = v5;
    v39 = v16;
    if ( v8 >= v7 )
      v8 = v7;
    v9 = (const void *)(v14 + v18);
    v10 = (char *)(v14 + v8);
    n = v7 - v8;
    memcpy(dest, v9, v8);
    v11 = v39;
    if ( v17 <= (unsigned int)v10 )
      v10 = &v10[v39 - v17];
    if ( v7 != v8 )
    {
      v33 = &v10[v18];
      if ( v17 <= (unsigned int)v33 )
        v33 = &v33[v39 - v17];
      v34 = v33;
      v35 = &v33[n];
      memcpy(&dest[v8], v34, n);
      v11 = v39;
      if ( v17 <= (unsigned int)v35 )
        v35 = &v35[v39 - v17];
      v10 = &v35[-v18];
      if ( v39 > (unsigned int)v10 )
        v10 = (char *)(v17 - (v39 - (_DWORD)v10));
    }
    *(_DWORD *)(v4 + 20) = v10;
    v12 = v15 > (unsigned int)v10 ? v15 - (_DWORD)v10 : v15 - v11 + v17 - (_DWORD)v10;
    if ( v12 - v18 <= (v17 - v11 - v18) >> 2 )
    {
      pthread_mutex_unlock(mutex);
      pthread_mutex_lock(v44);
      pthread_mutex_lock(mutex);
      v25 = *(_DWORD *)(v4 + 24);
      v26 = *(_DWORD *)(v4 + 20);
      v27 = *(_DWORD *)(v4 + 12);
      v28 = *(_DWORD *)(v4 + 16);
      v29 = v26 >= v25;
      v30 = *(_DWORD *)v4;
      if ( v26 < v25 )
        v25 -= v26;
      v31 = v28 - v27;
      if ( v29 )
      {
        v27 = v25 - v27;
        v25 = v28 - v26;
      }
      v32 = v31 - v30;
      if ( v29 )
        v25 += v27;
      if ( v25 - v30 <= v32 >> 2 )
        sub_1596F4(v45, (int *)v4, v32 >> 1);
      pthread_mutex_unlock(mutex);
      pthread_mutex_unlock(v44);
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
    v5 -= v7;
    dest += v7;
    v38 += v7;
    if ( !v5 )
      break;
    pthread_mutex_lock(mutex);
  }
  v22 = v38 / v43;
LABEL_36:
  if ( v22 != 1 )
    goto LABEL_57;
  v23 = 1;
  --*(_DWORD *)(v42 + 12);
LABEL_38:
  pthread_mutex_unlock(v41);
  return v23;
}
