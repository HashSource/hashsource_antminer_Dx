void __fastcall sub_96D60(int a1, char *a2)
{
  unsigned int v2; // r5
  int v3; // r6
  unsigned int v4; // r7
  unsigned int v5; // r8
  unsigned int v6; // r9
  char *v7; // r10
  int v8; // r11
  size_t v9; // r4
  size_t v10; // r7
  const void *v11; // r1
  char *v12; // r5
  _BYTE *v13; // r0
  char *v14; // r2
  pthread_cond_t *v15; // r0
  bool v16; // zf
  char *v17; // r1
  int v18; // r2
  unsigned int v19; // r3
  int v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r0
  int v23; // r12
  int v24; // lr
  bool v25; // cf
  unsigned int v26; // r1
  unsigned int v27; // r2
  char *v28; // r5
  char *v29; // r5
  char *dest; // [sp+10h] [bp-116Ch]
  size_t n; // [sp+14h] [bp-1168h]
  unsigned int v32; // [sp+18h] [bp-1164h]
  pthread_mutex_t *v33; // [sp+1Ch] [bp-1160h]
  unsigned int v34; // [sp+20h] [bp-115Ch]
  size_t v35; // [sp+2Ch] [bp-1150h]
  pthread_mutex_t *mutex; // [sp+34h] [bp-1148h]
  unsigned int v39; // [sp+3Ch] [bp-1140h]
  pthread_cond_t *cond; // [sp+40h] [bp-113Ch]
  int v41[6]; // [sp+48h] [bp-1134h] BYREF
  struct __jmp_buf_tag env; // [sp+60h] [bp-111Ch] BYREF
  char v43[4100]; // [sp+178h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)(a1 + 16);
  if ( _sigsetjmp(&env, 0) )
  {
    pthread_mutex_unlock(mutex);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
    goto LABEL_65;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  pthread_mutex_lock(mutex);
  while ( !*(_DWORD *)(a1 + 12) )
  {
    if ( *(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 0;
      goto LABEL_47;
    }
    pthread_cond_wait((pthread_cond_t *)(a1 + 40), mutex);
  }
  v3 = *(_DWORD *)(a1 + 8);
  v39 = *(_DWORD *)v3;
  if ( !*(_DWORD *)v3 )
  {
LABEL_63:
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, "%s, unkown error", "queue_dequeue");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/thread_safe_queue.c",
      155,
      "queue_dequeue",
      13,
      81,
      100,
      v43);
    exit(-1);
  }
  n = *(_DWORD *)v3;
  v34 = 0;
  dest = a2;
  v33 = (pthread_mutex_t *)(v3 + 36);
  cond = (pthread_cond_t *)(v3 + 88);
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 36));
  while ( 1 )
  {
    v2 = *(_DWORD *)(v3 + 20);
    v6 = *(_DWORD *)(v3 + 24);
    v4 = v2;
    v7 = *(char **)(v3 + 16);
    v8 = v6;
    v32 = *(_DWORD *)(v3 + 12);
    v5 = *(_DWORD *)v3;
    if ( v2 < v6 )
    {
      if ( v5 != v6 - v2 )
        goto LABEL_9;
    }
    else if ( (char *)v5 != &v7[v6 - *(_DWORD *)(v3 + 12) - v2] )
    {
      goto LABEL_42;
    }
    if ( *(_DWORD *)(v3 + 28) )
    {
      do
      {
        pthread_cond_wait(cond, v33);
        v2 = *(_DWORD *)(v3 + 20);
        v6 = *(_DWORD *)(v3 + 24);
        v18 = *(_DWORD *)(v3 + 12);
        v7 = *(char **)(v3 + 16);
        v4 = v2;
        v5 = *(_DWORD *)v3;
        if ( v2 < v6 )
          v19 = v6 - v2;
        else
          v19 = v6 - v18;
        if ( v2 >= v6 )
          v17 = &v7[-v2];
        v8 = *(_DWORD *)(v3 + 24);
        if ( v2 >= v6 )
          v19 += (unsigned int)v17;
        if ( v5 != v19 )
          break;
LABEL_65:
        ;
      }
      while ( *(_DWORD *)(v3 + 28) );
      v32 = v18;
    }
    if ( v6 > v2 )
    {
LABEL_9:
      v9 = v8 - v4 - v5;
      if ( v8 - v4 == v5 )
        goto LABEL_43;
      goto LABEL_10;
    }
LABEL_42:
    v9 = (size_t)&v7[v8 - v32 - v4 - v5];
    if ( !v9 )
    {
LABEL_43:
      pthread_mutex_unlock(v33);
      v20 = v34 / v39;
      goto LABEL_44;
    }
LABEL_10:
    v10 = (size_t)&v7[-v4 - v5];
    v11 = (const void *)(v2 + v5);
    if ( v9 >= n )
      v9 = n;
    if ( v10 >= v9 )
      v10 = v9;
    v12 = (char *)(v2 + v10);
    v35 = v9 - v10;
    v13 = memcpy(dest, v11, v10);
    if ( v7 <= v12 )
      v12 = (char *)(v32 + v12 - v7);
    if ( !v35 )
      goto LABEL_17;
    v28 = &v12[v5];
    if ( v7 <= v28 )
      v28 = (char *)(v32 + v28 - v7);
    v13 = memcpy(&dest[v10], v28, v35);
    v29 = &v28[v35];
    if ( v7 <= v29 )
      v29 = (char *)(v32 + v29 - v7);
    v12 = &v29[-v5];
    v14 = v12;
    if ( (unsigned int)v12 < v32 )
    {
      v12 = &v7[-(v32 - (_DWORD)v12)];
LABEL_17:
      v14 = v12;
    }
    if ( (unsigned int)v12 < v6 )
      v8 -= (int)v14;
    else
      v13 = v7;
    *(_DWORD *)(v3 + 20) = v12;
    if ( (unsigned int)v12 >= v6 )
      v8 = v8 - v32 + v13 - v14;
    if ( v8 - v5 <= (unsigned int)&v7[-v32 - v5] >> 2 )
    {
      pthread_mutex_unlock(v33);
      pthread_mutex_lock((pthread_mutex_t *)(v3 + 60));
      pthread_mutex_lock(v33);
      v21 = *(_DWORD *)(v3 + 24);
      v22 = *(_DWORD *)(v3 + 20);
      v23 = *(_DWORD *)(v3 + 16);
      v24 = *(_DWORD *)(v3 + 12);
      v25 = v22 >= v21;
      v26 = *(_DWORD *)v3;
      if ( v22 < v21 )
        v21 -= v22;
      else
        v22 = v23 - v22;
      if ( v25 )
        v21 = v21 - v24 + v22;
      v27 = v23 - v24 - v26;
      if ( v21 - v26 <= v27 >> 2 )
        sub_16A550(v41, (int *)v3, v27 >> 1);
      pthread_mutex_unlock(v33);
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 60));
    }
    else
    {
      pthread_mutex_unlock(v33);
    }
    v15 = (pthread_cond_t *)(v3 + 136);
    if ( v9 == *(_DWORD *)v3 )
      pthread_cond_signal(v15);
    else
      pthread_cond_broadcast(v15);
    v16 = n == v9;
    n -= v9;
    dest += v9;
    v34 += v9;
    if ( v16 )
      break;
    pthread_mutex_lock(v33);
  }
  v20 = v34 / v39;
LABEL_44:
  if ( v20 != 1 )
    goto LABEL_63;
  --*(_DWORD *)(a1 + 12);
LABEL_47:
  pthread_mutex_unlock(mutex);
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
}
