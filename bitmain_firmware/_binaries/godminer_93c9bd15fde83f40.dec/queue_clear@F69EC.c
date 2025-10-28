int __fastcall queue_clear(int a1)
{
  int v2; // r11
  unsigned int v3; // r9
  unsigned int v4; // r4
  size_t v5; // r4
  size_t v6; // r7
  const void *v7; // r1
  char *v8; // r5
  unsigned int v9; // r3
  int v10; // r5
  pthread_cond_t *v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r6
  int v14; // r3
  unsigned int v15; // r10
  unsigned int v16; // r8
  int v17; // r4
  unsigned int v18; // r1
  unsigned int v19; // r2
  int v20; // r0
  int v21; // r3
  bool v22; // zf
  unsigned int v24; // r3
  unsigned int v25; // r12
  int v26; // r1
  int v27; // lr
  bool v28; // cf
  unsigned int v29; // r0
  int v30; // r2
  unsigned int v31; // r2
  char *v32; // r5
  char *v33; // r1
  char *v34; // r5
  char *dest; // [sp+4h] [bp-48h]
  pthread_mutex_t *mutex; // [sp+8h] [bp-44h]
  unsigned int v37; // [sp+Ch] [bp-40h]
  unsigned int v38; // [sp+10h] [bp-3Ch]
  size_t n; // [sp+14h] [bp-38h]
  unsigned int v40; // [sp+18h] [bp-34h]
  pthread_mutex_t *v42; // [sp+20h] [bp-2Ch]
  char *ptr; // [sp+28h] [bp-24h]
  pthread_mutex_t *v44; // [sp+2Ch] [bp-20h]
  int v45[7]; // [sp+30h] [bp-1Ch] BYREF

  v44 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  ptr = (char *)calloc(1u, **(_DWORD **)a1);
  if ( *(int *)(a1 + 12) <= 0 )
    goto LABEL_39;
  while ( 2 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    v3 = *(_DWORD *)v2;
    v40 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
LABEL_57:
      sub_F6964();
    mutex = (pthread_mutex_t *)(v2 + 36);
    dest = ptr;
    v37 = 0;
    v42 = (pthread_mutex_t *)(v2 + 60);
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 36));
    while ( 1 )
    {
      v12 = *(_DWORD *)(v2 + 20);
      v13 = *(_DWORD *)(v2 + 24);
      v14 = *(_DWORD *)(v2 + 12);
      v15 = *(_DWORD *)(v2 + 16);
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
          goto LABEL_34;
      }
      do
      {
        if ( !*(_DWORD *)(v2 + 28) )
          break;
        pthread_cond_wait((pthread_cond_t *)(v2 + 88), mutex);
        v12 = *(_DWORD *)(v2 + 20);
        v13 = *(_DWORD *)(v2 + 24);
        v14 = *(_DWORD *)(v2 + 12);
        v15 = *(_DWORD *)(v2 + 16);
        v16 = *(_DWORD *)v2;
        if ( v12 < v13 )
          v19 = v13 - v12;
        else
          v19 = v13 - v14;
        if ( v12 >= v13 )
          v19 += v15 - v12;
      }
      while ( v16 == v19 );
      if ( v12 < v13 )
      {
        v4 = v13 - v12;
LABEL_5:
        v5 = v4 - v16;
        if ( !v5 )
          goto LABEL_35;
        goto LABEL_6;
      }
      v17 = v13 - v14;
      v18 = v15 - v12;
LABEL_34:
      v5 = v17 + v18 - v16;
      if ( !v5 )
      {
LABEL_35:
        pthread_mutex_unlock(mutex);
        v20 = v37 / v40;
        goto LABEL_36;
      }
LABEL_6:
      v6 = v15 - v12 - v16;
      if ( v5 >= v3 )
        v5 = v3;
      v38 = v14;
      if ( v6 >= v5 )
        v6 = v5;
      v7 = (const void *)(v12 + v16);
      v8 = (char *)(v12 + v6);
      n = v5 - v6;
      memcpy(dest, v7, v6);
      v9 = v38;
      if ( v15 <= (unsigned int)v8 )
        v8 = &v8[v38 - v15];
      if ( v5 != v6 )
      {
        v32 = &v8[v16];
        if ( v15 <= (unsigned int)v32 )
          v32 = &v32[v38 - v15];
        v33 = v32;
        v34 = &v32[n];
        memcpy(&dest[v6], v33, n);
        v9 = v38;
        if ( v15 <= (unsigned int)v34 )
          v34 = &v34[v38 - v15];
        v8 = &v34[-v16];
        if ( v38 > (unsigned int)v8 )
          v8 = (char *)(v15 - (v38 - (_DWORD)v8));
      }
      *(_DWORD *)(v2 + 20) = v8;
      v10 = v13 > (unsigned int)v8 ? v13 - (_DWORD)v8 : v13 - v9 + v15 - (_DWORD)v8;
      if ( v10 - v16 <= (v15 - v9 - v16) >> 2 )
      {
        pthread_mutex_unlock(mutex);
        pthread_mutex_lock(v42);
        pthread_mutex_lock(mutex);
        v24 = *(_DWORD *)(v2 + 24);
        v25 = *(_DWORD *)(v2 + 20);
        v26 = *(_DWORD *)(v2 + 12);
        v27 = *(_DWORD *)(v2 + 16);
        v28 = v25 >= v24;
        v29 = *(_DWORD *)v2;
        if ( v25 < v24 )
          v24 -= v25;
        v30 = v27 - v26;
        if ( v28 )
        {
          v26 = v24 - v26;
          v24 = v27 - v25;
        }
        v31 = v30 - v29;
        if ( v28 )
          v24 += v26;
        if ( v24 - v29 <= v31 >> 2 )
          sub_16A550(v45, (int *)v2, v31 >> 1);
        pthread_mutex_unlock(mutex);
        pthread_mutex_unlock(v42);
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
      v3 -= v5;
      dest += v5;
      v37 += v5;
      if ( !v3 )
        break;
      pthread_mutex_lock(mutex);
    }
    v20 = v37 / v40;
LABEL_36:
    if ( v20 != 1 )
      goto LABEL_57;
    v21 = *(_DWORD *)(a1 + 12) - 1;
    v22 = *(_DWORD *)(a1 + 12) == 1;
    *(_DWORD *)(a1 + 12) = v21;
    if ( v21 >= 0 && !v22 )
      continue;
    break;
  }
LABEL_39:
  free(ptr);
  return pthread_mutex_unlock(v44);
}
