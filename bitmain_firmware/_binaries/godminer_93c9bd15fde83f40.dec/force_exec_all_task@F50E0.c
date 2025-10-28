int __fastcall force_exec_all_task(int result)
{
  int v1; // r11
  int v2; // r5
  int v3; // r4
  int v4; // r11
  _DWORD *v5; // r4
  char *v6; // r9
  unsigned int v7; // r11
  int v8; // lr
  int v9; // r12
  int v10; // r6
  int v11; // r6
  int v12; // r3
  struct timespec *v13; // r1
  int v14; // r6
  int v15; // lr
  int v16; // r6
  struct timespec *v17; // r10
  pthread_t *v18; // r4
  int v19; // r3
  int v20; // r6
  struct timespec *v21; // r1
  __time_t v22; // r0
  __time_t v23; // lr
  int v24; // r6
  int (__fastcall *v25)(int); // t1
  int v26; // r5
  int v27; // r3
  int v28; // r2
  _DWORD *v29; // r4
  char *v30; // r8
  unsigned int v31; // r11
  int v32; // lr
  int v33; // r12
  int v34; // r6
  int v35; // r6
  int v36; // r3
  struct timespec *v37; // r1
  int v38; // r6
  int v39; // lr
  int v40; // r6
  struct timespec *v41; // r10
  pthread_t *v42; // r4
  int tv_nsec; // r3
  int v44; // r6
  struct timespec *v45; // r1
  __time_t tv_sec; // r0
  __time_t v47; // lr
  int v48; // r6
  void (__fastcall *v49)(int); // t1
  int v50; // r5
  struct timespec *v51; // r4
  int v52; // r5
  struct timespec *v53; // r1
  pthread_t *arg; // [sp+4h] [bp-18h]
  int v55; // [sp+8h] [bp-14h]
  int v56; // [sp+8h] [bp-14h]
  int v57; // [sp+Ch] [bp-10h]
  void *thread_return; // [sp+14h] [bp-8h] BYREF

  v1 = result + 4096;
  v2 = *(unsigned __int8 *)(result + 6148);
  v3 = result;
  arg = (pthread_t *)result;
  if ( *(_BYTE *)(result + 6148) )
  {
    v26 = 0;
    *(_BYTE *)(result + 6148) = 0;
    pthread_join(*(_DWORD *)(result + 6152), &thread_return);
    v27 = *(_DWORD *)(v1 + 2048);
    v56 = v27;
    if ( v27 <= 0 )
    {
      *(_BYTE *)(v1 + 2052) = 1;
    }
    else
    {
      if ( v27 > 2 )
      {
        v28 = v3;
        v57 = v1;
        v29 = (_DWORD *)(v3 + 2124);
        v30 = (char *)(v28 + 16);
        v31 = ((v27 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v29 - 17));
          v32 = *(v29 - 19);
          v26 += 2;
          v33 = *(v29 - 17);
          v34 = *(v29 - 16) - *(v29 - 18);
          __pld(v29);
          __pld(v30);
          v30 += 8;
          v35 = 1000 * (v33 - v32) + v34 / 1000000;
          clock_gettime(1, (struct timespec *)(v29 - 19));
          (*((void (__fastcall **)(int))v30 - 6))(v35);
          clock_gettime(1, (struct timespec *)(v29 - 13));
          v36 = *(v29 - 14);
          v37 = (struct timespec *)(v29 - 15);
          v38 = *(v29 - 12);
          v39 = *(v29 - 15);
          v29 += 8;
          v40 = 1000 * (*(v29 - 21) - v39) + (v38 - v36) / 1000000;
          clock_gettime(1, v37);
          (*((void (__fastcall **)(int))v30 - 5))(v40);
        }
        while ( v26 != v31 );
        v1 = v57;
      }
      v41 = (struct timespec *)&arg[4 * v26];
      v42 = &arg[v26];
      do
      {
        clock_gettime(1, v41 + 257);
        tv_nsec = v41[256].tv_nsec;
        v44 = v41[257].tv_nsec;
        v45 = v41 + 256;
        tv_sec = v41[257].tv_sec;
        ++v26;
        v47 = v41[256].tv_sec;
        v41 += 2;
        v48 = 1000 * (tv_sec - v47) + (v44 - tv_nsec) / 1000000;
        clock_gettime(1, v45);
        v49 = (void (__fastcall *)(int))*v42++;
        v49(v48);
      }
      while ( v56 > v26 );
      v50 = *(_DWORD *)(v1 + 2048);
      *(_BYTE *)(v1 + 2052) = 1;
      if ( v50 > 0 )
      {
        v51 = (struct timespec *)(arg + 512);
        v52 = (int)&arg[4 * v50 + 512];
        do
        {
          v53 = v51;
          v51 += 2;
          clock_gettime(1, v53);
        }
        while ( v51 != (struct timespec *)v52 );
      }
    }
    return pthread_create(arg + 1538, 0, (void *(*)(void *))task_timer_thread, arg);
  }
  else
  {
    v4 = *(_DWORD *)(result + 6144);
    if ( v4 > 0 )
    {
      if ( v4 > 2 )
      {
        v55 = *(_DWORD *)(result + 6144);
        v5 = (_DWORD *)(result + 2124);
        v6 = (char *)(result + 16);
        v7 = ((v4 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v5 - 17));
          v8 = *(v5 - 19);
          v2 += 2;
          v9 = *(v5 - 17);
          v10 = *(v5 - 16) - *(v5 - 18);
          __pld(v5);
          __pld(v6);
          v6 += 8;
          v11 = 1000 * (v9 - v8) + v10 / 1000000;
          clock_gettime(1, (struct timespec *)(v5 - 19));
          (*((void (__fastcall **)(int))v6 - 6))(v11);
          clock_gettime(1, (struct timespec *)(v5 - 13));
          v12 = *(v5 - 14);
          v13 = (struct timespec *)(v5 - 15);
          v14 = *(v5 - 12);
          v15 = *(v5 - 15);
          v5 += 8;
          v16 = 1000 * (*(v5 - 21) - v15) + (v14 - v12) / 1000000;
          clock_gettime(1, v13);
          (*((void (__fastcall **)(int))v6 - 5))(v16);
        }
        while ( v2 != v7 );
        v4 = v55;
      }
      v17 = (struct timespec *)&arg[4 * v2];
      v18 = &arg[v2];
      do
      {
        clock_gettime(1, v17 + 257);
        v19 = v17[256].tv_nsec;
        v20 = v17[257].tv_nsec;
        v21 = v17 + 256;
        v22 = v17[257].tv_sec;
        ++v2;
        v23 = v17[256].tv_sec;
        v17 += 2;
        v24 = 1000 * (v22 - v23) + (v20 - v19) / 1000000;
        clock_gettime(1, v21);
        v25 = (int (__fastcall *)(int))*v18++;
        result = v25(v24);
      }
      while ( v4 > v2 );
    }
  }
  return result;
}
