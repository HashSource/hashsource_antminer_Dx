int *__fastcall _exec_all_task(int *result)
{
  int v1; // r11
  _DWORD *v2; // r4
  char *v3; // r9
  int v4; // r5
  int v5; // lr
  int v6; // r12
  int v7; // r6
  int v8; // r6
  int v9; // r3
  struct timespec *v10; // r1
  int v11; // r6
  int v12; // lr
  int v13; // r6
  int v14; // r3
  struct timespec *v15; // r4
  int (__fastcall **v16)(int); // r8
  int tv_nsec; // r3
  int v18; // r6
  struct timespec *v19; // r1
  __time_t tv_sec; // r0
  __time_t v21; // lr
  int v22; // r6
  int (__fastcall *v23)(int); // t1
  int v24; // [sp+4h] [bp-8h]

  v1 = result[1536];
  if ( v1 > 0 )
  {
    v24 = (int)result;
    if ( v1 <= 2 )
    {
      v4 = 0;
      v14 = (int)result;
    }
    else
    {
      v2 = result + 531;
      v3 = (char *)(result + 4);
      v4 = 0;
      do
      {
        clock_gettime(1, (struct timespec *)(v2 - 17));
        v5 = *(v2 - 19);
        v4 += 2;
        v6 = *(v2 - 17);
        v7 = *(v2 - 16) - *(v2 - 18);
        __pld(v2);
        __pld(v3);
        v3 += 8;
        v8 = 1000 * (v6 - v5) + v7 / 1000000;
        clock_gettime(1, (struct timespec *)(v2 - 19));
        (*((void (__fastcall **)(int))v3 - 6))(v8);
        clock_gettime(1, (struct timespec *)(v2 - 13));
        v9 = *(v2 - 14);
        v10 = (struct timespec *)(v2 - 15);
        v11 = *(v2 - 12);
        v12 = *(v2 - 15);
        v2 += 8;
        v13 = 1000 * (*(v2 - 21) - v12) + (v11 - v9) / 1000000;
        clock_gettime(1, v10);
        (*((void (__fastcall **)(int))v3 - 5))(v13);
      }
      while ( v4 != ((v1 - 3) & 0xFFFFFFFE) + 2 );
      v14 = v24;
    }
    v15 = (struct timespec *)(v14 + 16 * v4);
    v16 = (int (__fastcall **)(int))(v14 + 4 * v4);
    do
    {
      clock_gettime(1, v15 + 257);
      tv_nsec = v15[256].tv_nsec;
      v18 = v15[257].tv_nsec;
      v19 = v15 + 256;
      tv_sec = v15[256].tv_sec;
      ++v4;
      v21 = v15[257].tv_sec;
      v15 += 2;
      v22 = 1000 * (v21 - tv_sec) + (v18 - tv_nsec) / 1000000;
      clock_gettime(1, v19);
      v23 = *v16++;
      result = (int *)v23(v22);
    }
    while ( v1 > v4 );
  }
  return result;
}
