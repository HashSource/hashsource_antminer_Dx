int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  void (__fastcall *v5)(int, unsigned __int16, int); // r3
  char *v6; // r5
  _DWORD *v7; // r10
  char *v8; // r0
  _BOOL4 v9; // r7
  char *v10; // r6
  int v11; // r9
  int v12; // r6
  char *v13; // r5
  _DWORD *v14; // r0
  pthread_mutex_t *v15; // r10
  _DWORD *v16; // r6
  int v17; // r10
  char *v18; // r9
  _DWORD *v19; // r6
  char *v20; // r0
  _BOOL4 v21; // r5
  char *v22; // r10
  int v23; // r7
  int v24; // r7
  char *v25; // r6
  _DWORD *v26; // r0
  pthread_mutex_t *v27; // r9
  _DWORD *v28; // r7
  int v29; // r9
  size_t v30; // r6
  void *v31; // r0
  int v32; // r1
  int v33; // r0
  int v34; // r3
  bool v35; // zf
  void (__fastcall *v36)(int); // r3

  v2 = ((int (__fastcall *)(int))off_18F4E8[0])(*(_DWORD *)(a1 + 120));
  v3 = *(_DWORD *)(a1 + 748);
  v4 = *(_DWORD *)(a1 + 736);
  v5 = (void (__fastcall *)(int, unsigned __int16, int))off_18F4D8[0];
  *(_DWORD *)(a1 + 124) = v2;
  v5(*(_DWORD *)(a1 + 120), v4, v3);
  off_18F4E4(*(_DWORD *)(a1 + 120));
  ((void (__fastcall *)(unsigned int))off_18F4C4[0])(*(_DWORD *)(a1 + 120));
  v6 = (char *)calloc(1u, 0x60u);
  v7 = malloc(0xB8u);
  v8 = (char *)malloc(0x20u);
  v9 = v8 == 0;
  if ( !v7 )
    v9 = 1;
  v10 = v8;
  if ( v9 )
  {
    free(v7);
    free(v10);
    *(_DWORD *)v6 = 0;
    pthread_mutex_lock((pthread_mutex_t *)0x3C);
    __und(0);
  }
  memset(v7, 0, 0xB8u);
  v7[2] = -1;
  v7[4] = v10 + 32;
  v7[6] = v10 + 1;
  v7[3] = v10;
  v7[5] = v10;
  *v7 = 1;
  v7[7] = 1;
  v7[8] = 1;
  v7[1] = 32;
  pthread_mutex_init((pthread_mutex_t *)(v7 + 9), 0);
  pthread_mutex_init((pthread_mutex_t *)(v7 + 15), 0);
  pthread_cond_init((pthread_cond_t *)(v7 + 22), 0);
  pthread_cond_init((pthread_cond_t *)(v7 + 34), 0);
  *(_DWORD *)v6 = v7;
  pthread_mutex_lock((pthread_mutex_t *)(v7 + 15));
  ++v7[8];
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 15));
  v11 = *(_DWORD *)v6;
  *((_DWORD *)v6 + 2) = v7;
  pthread_mutex_lock((pthread_mutex_t *)(v11 + 36));
  ++*(_DWORD *)(v11 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v11 + 36));
  *((_DWORD *)v6 + 1) = v11;
  pthread_mutex_init((pthread_mutex_t *)(v6 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v6 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v6 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v6 + 40), (const pthread_condattr_t *)v6 + 22);
  v12 = *(_DWORD *)(a1 + 608);
  *(_DWORD *)(a1 + 628) = v6;
  *((_DWORD *)v6 + 3) = 0;
  v6[92] = 0;
  v13 = (char *)calloc(1u, 0x60u);
  v14 = pipe_new(v12, 0);
  v15 = (pthread_mutex_t *)(v14 + 15);
  v16 = v14;
  *(_DWORD *)v13 = v14;
  pthread_mutex_lock((pthread_mutex_t *)(v14 + 15));
  ++v16[8];
  pthread_mutex_unlock(v15);
  v17 = *(_DWORD *)v13;
  *((_DWORD *)v13 + 2) = v16;
  pthread_mutex_lock((pthread_mutex_t *)(v17 + 36));
  ++*(_DWORD *)(v17 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v17 + 36));
  *((_DWORD *)v13 + 1) = v17;
  pthread_mutex_init((pthread_mutex_t *)(v13 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v13 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v13 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v13 + 40), (const pthread_condattr_t *)v13 + 22);
  *(_DWORD *)(a1 + 632) = v13;
  *((_DWORD *)v13 + 3) = 0;
  v13[92] = 0;
  v18 = (char *)calloc(1u, 0x60u);
  v19 = malloc(0xB8u);
  v20 = (char *)malloc(0x20u);
  v21 = v20 == 0;
  if ( !v19 )
    v21 = 1;
  v22 = v20;
  if ( v21 )
  {
    free(v19);
    free(v22);
    *(_DWORD *)v18 = 0;
    pthread_mutex_lock((pthread_mutex_t *)0x3C);
    __und(0);
  }
  memset(v19, 0, 0xB8u);
  *v19 = 1;
  v19[1] = 32;
  v19[4] = v22 + 32;
  v19[6] = v22 + 1;
  v19[3] = v22;
  v19[5] = v22;
  v19[7] = 1;
  v19[8] = 1;
  v19[2] = -1;
  pthread_mutex_init((pthread_mutex_t *)(v19 + 9), 0);
  pthread_mutex_init((pthread_mutex_t *)(v19 + 15), 0);
  pthread_cond_init((pthread_cond_t *)(v19 + 22), 0);
  pthread_cond_init((pthread_cond_t *)(v19 + 34), 0);
  *(_DWORD *)v18 = v19;
  pthread_mutex_lock((pthread_mutex_t *)(v19 + 15));
  ++v19[8];
  pthread_mutex_unlock((pthread_mutex_t *)(v19 + 15));
  v23 = *(_DWORD *)v18;
  *((_DWORD *)v18 + 2) = v19;
  pthread_mutex_lock((pthread_mutex_t *)(v23 + 36));
  ++*(_DWORD *)(v23 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v23 + 36));
  *((_DWORD *)v18 + 1) = v23;
  pthread_mutex_init((pthread_mutex_t *)(v18 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v18 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v18 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v18 + 40), (const pthread_condattr_t *)v18 + 22);
  v24 = *(_DWORD *)(a1 + 604);
  *(_DWORD *)(a1 + 636) = v18;
  *((_DWORD *)v18 + 3) = 0;
  v18[92] = 0;
  v25 = (char *)calloc(1u, 0x60u);
  v26 = pipe_new(v24, 0);
  v27 = (pthread_mutex_t *)(v26 + 15);
  v28 = v26;
  *(_DWORD *)v25 = v26;
  pthread_mutex_lock((pthread_mutex_t *)(v26 + 15));
  ++v28[8];
  pthread_mutex_unlock(v27);
  v29 = *(_DWORD *)v25;
  *((_DWORD *)v25 + 2) = v28;
  pthread_mutex_lock((pthread_mutex_t *)(v29 + 36));
  ++*(_DWORD *)(v29 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v29 + 36));
  *((_DWORD *)v25 + 1) = v29;
  pthread_mutex_init((pthread_mutex_t *)(v25 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v25 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v25 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v25 + 40), (const pthread_condattr_t *)v25 + 22);
  *(_DWORD *)(a1 + 624) = v25;
  *((_DWORD *)v25 + 3) = 0;
  v25[92] = 0;
  pthread_mutex_init((pthread_mutex_t *)(a1 + 660), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 684), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 708), 0);
  v30 = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(a1 + 280) = calloc(v30, 1u);
  v31 = calloc(v30, 4u);
  v32 = *(_DWORD *)(a1 + 612);
  *(_DWORD *)(a1 + 272) = v31;
  *(_DWORD *)(a1 + 276) = calloc(v30, 2 * v32);
  if ( (int)(v30 + 31) >= 0 )
    v33 = v30 + 31;
  else
    v33 = v30 + 62;
  *(_DWORD *)(a1 + 284) = calloc(v33 >> 5, 4u);
  *(_DWORD *)(a1 + 248) = calloc(v30, 0x30u);
  *(_DWORD *)(a1 + 224) = -1;
  *(_BYTE *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  memset((void *)(a1 + 344), 0, 0x100u);
  v34 = *(_DWORD *)(a1 + 640);
  *(_BYTE *)(a1 + 656) = 0;
  *(_BYTE *)(a1 + 657) = 0;
  v35 = v34 == 0;
  v36 = *(void (__fastcall **)(int))(a1 + 56);
  if ( v35 )
    *(_DWORD *)(a1 + 640) = a1;
  *(_BYTE *)(a1 + 658) = 0;
  if ( v36 )
    v36(a1);
  pthread_create((pthread_t *)(a1 + 648), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 644), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 652), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 128) = 1;
  return 0;
}
