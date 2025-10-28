void __fastcall sub_D288C(int a1, char *a2)
{
  unsigned int v2; // r4
  char *v3; // r5
  int v4; // r6
  unsigned int v5; // r7
  int v6; // r11
  unsigned int v7; // r9
  char *v8; // r10
  unsigned int v9; // r8
  size_t v10; // r5
  size_t v11; // r7
  const void *v12; // r1
  char *v13; // r4
  _BYTE *v14; // r0
  char *v15; // r2
  pthread_cond_t *v16; // r0
  int v17; // r0
  char *v18; // r4
  char *v19; // r4
  char *v20; // r12
  unsigned int v21; // r3
  int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r2
  __int64 v25; // kr10_8
  __int64 v26; // kr18_8
  unsigned int v27; // r1
  int v28; // r3
  unsigned int v29; // r2
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
    goto LABEL_63;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  pthread_mutex_lock(mutex);
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v4 = *(_DWORD *)(a1 + 8);
      v39 = *(_DWORD *)v4;
      if ( !*(_DWORD *)v4 )
        goto LABEL_61;
      n = *(_DWORD *)v4;
      v34 = 0;
      dest = a2;
      v33 = (pthread_mutex_t *)(v4 + 36);
      cond = (pthread_cond_t *)(v4 + 88);
      while ( 1 )
      {
        pthread_mutex_lock(v33);
        v7 = *(_DWORD *)(v4 + 24);
        v2 = *(_DWORD *)(v4 + 20);
        v8 = *(char **)(v4 + 16);
        v5 = v2;
        v32 = *(_DWORD *)(v4 + 12);
        v6 = v7;
        v9 = *(_DWORD *)v4;
        if ( v2 >= v7 )
        {
          if ( (char *)v9 != &v8[v7 - *(_DWORD *)(v4 + 12) - v2] )
            goto LABEL_50;
        }
        else if ( v9 != v7 - v2 )
        {
          goto LABEL_10;
        }
        if ( *(_DWORD *)(v4 + 28) )
        {
          do
          {
            pthread_cond_wait(cond, v33);
            v21 = *(_DWORD *)(v4 + 24);
            v2 = *(_DWORD *)(v4 + 20);
            v22 = *(_DWORD *)(v4 + 12);
            v3 = *(char **)(v4 + 16);
            v23 = *(_DWORD *)v4;
            if ( v2 < v21 )
              v24 = v21 - v2;
            else
              v24 = v21 - v22;
            if ( v2 >= v21 )
              v20 = &v3[-v2];
            v5 = *(_DWORD *)(v4 + 20);
            if ( v2 >= v21 )
              v24 += (unsigned int)v20;
            v6 = *(_DWORD *)(v4 + 24);
            if ( v23 != v24 )
              break;
LABEL_63:
            ;
          }
          while ( *(_DWORD *)(v4 + 28) );
          v8 = v3;
          v7 = v21;
          v9 = v23;
          v32 = v22;
        }
        if ( v7 > v2 )
        {
LABEL_10:
          v10 = v6 - v5 - v9;
          if ( v6 - v5 == v9 )
            goto LABEL_51;
          goto LABEL_11;
        }
LABEL_50:
        v10 = (size_t)&v8[v6 - v32 - v5 - v9];
        if ( !v10 )
        {
LABEL_51:
          pthread_mutex_unlock(v33);
          v17 = v34 / v39;
LABEL_52:
          if ( v17 == 1 )
          {
            --*(_DWORD *)(a1 + 12);
            goto LABEL_37;
          }
LABEL_61:
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v43, 0x1000u, 0, "%s, unkown error", "queue_dequeue");
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/common/general/thread_safe_queue.c",
            72,
            "queue_dequeue",
            13,
            81,
            100,
            v43);
          exit(-1);
        }
LABEL_11:
        v11 = (size_t)&v8[-v5 - v9];
        v12 = (const void *)(v2 + v9);
        if ( v10 >= n )
          v10 = n;
        if ( v11 >= v10 )
          v11 = v10;
        v13 = (char *)(v2 + v11);
        v35 = v10 - v11;
        v14 = memcpy(dest, v12, v11);
        if ( v8 <= v13 )
          v13 = (char *)(v13 - v8 + v32);
        if ( v35 )
        {
          v18 = &v13[v9];
          if ( v8 <= v18 )
            v18 = (char *)(v18 - v8 + v32);
          v14 = memcpy(&dest[v11], v18, v35);
          v19 = &v18[v35];
          if ( v8 <= v19 )
            v19 = (char *)(v19 - v8 + v32);
          v13 = &v19[-v9];
          v15 = v13;
          if ( (unsigned int)v13 >= v32 )
            goto LABEL_19;
          v13 = &v8[-(v32 - (_DWORD)v13)];
        }
        v15 = v13;
LABEL_19:
        if ( (unsigned int)v13 < v7 )
          v6 -= (int)v15;
        else
          v14 = v8;
        *(_DWORD *)(v4 + 20) = v13;
        if ( (unsigned int)v13 >= v7 )
          v6 = v14 - v15 + v6 - v32;
        if ( v6 - v9 <= (unsigned int)&v8[-v32 - v9] >> 2 )
        {
          pthread_mutex_unlock(v33);
          pthread_mutex_lock((pthread_mutex_t *)(v4 + 60));
          pthread_mutex_lock(v33);
          v25 = *(_QWORD *)(v4 + 20);
          v26 = *(_QWORD *)(v4 + 12);
          v27 = *(_DWORD *)v4;
          if ( (unsigned int)v25 < HIDWORD(v25) )
            v28 = HIDWORD(v25) - v25;
          else
            v28 = HIDWORD(v25) - v26 + HIDWORD(v26) - v25;
          v29 = HIDWORD(v26) - v26 - v27;
          if ( v28 - v27 <= v29 >> 2 )
            sub_BB510(v41, (int *)v4, v29 >> 1);
          pthread_mutex_unlock(v33);
          pthread_mutex_unlock((pthread_mutex_t *)(v4 + 60));
        }
        else
        {
          pthread_mutex_unlock(v33);
        }
        v16 = (pthread_cond_t *)(v4 + 136);
        if ( v10 == *(_DWORD *)v4 )
          pthread_cond_signal(v16);
        else
          pthread_cond_broadcast(v16);
        dest += v10;
        v34 += v10;
        n -= v10;
        if ( !n )
        {
          v17 = v34 / v39;
          goto LABEL_52;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 92) )
      break;
    pthread_cond_wait((pthread_cond_t *)(a1 + 40), mutex);
  }
  *(_BYTE *)(a1 + 92) = 0;
LABEL_37:
  pthread_mutex_unlock(mutex);
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
}
