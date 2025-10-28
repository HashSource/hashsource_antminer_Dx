int miner_monitor_init()
{
  void **v0; // r4
  _BYTE *v1; // r0
  int v2; // r9
  int *v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r2
  struct timespec *v8; // r4
  __time_t tv_sec; // r3
  __time_t v10; // r3
  __time_t v11; // lr
  int v12; // r1
  __time_t *v13; // r3
  __time_t v14; // r3
  __time_t v15; // lr
  int v16; // r1
  __time_t *v17; // r3
  __time_t v18; // r3
  __time_t v19; // lr
  int v20; // r1
  __time_t *v21; // r3
  struct timespec *v22; // r4
  __time_t v23; // r3
  __time_t v24; // r3
  __time_t v25; // r12
  int v26; // r1
  __time_t *v27; // r3
  __time_t v28; // r3
  __time_t v29; // r12
  int v30; // r1
  __time_t *v31; // r3
  int result; // r0

  v0 = (void **)dword_191398;
  do
  {
    v1 = calloc(0x100u, 1u);
    *v1 = 63;
    v0[15] = v1;
    v0[22] = calloc(0x10u, 4u);
    v0[23] = calloc(0x10u, 4u);
    v0[1] = calloc(0x10u, 4u);
    *v0 = calloc(0x10u, 4u);
    v0[3] = calloc(0x10u, 4u);
    v0[2] = calloc(0x10u, 4u);
    *((_QWORD *)v0 + 25) = 0;
    v0[48] = 0;
    pthread_mutex_lock(&stru_190E30);
    v2 = dword_190E48;
    pthread_mutex_unlock(&stru_190E30);
    v0[6] = 0;
    v0[7] = 0;
    if ( v2 > 0 )
    {
      v3 = *(int **)(dword_190E4C[0] + 196);
      v4 = v3[1];
      if ( v4 > 0 )
      {
        v5 = *v3;
        v6 = v5 + 20 * v4;
        do
        {
          while ( 1 )
          {
            v7 = *(_DWORD *)(v5 + 8);
            if ( v7 )
              break;
            v5 += 20;
            v0[6] = (char *)v0[6] + 1;
            if ( v6 == v5 )
              goto LABEL_10;
          }
          v5 += 20;
          if ( v7 == 1 )
            v0[7] = (char *)v0[7] + 1;
        }
        while ( v6 != v5 );
      }
    }
LABEL_10:
    v0 += 52;
  }
  while ( v0 != (void **)&dword_1916D8 );
  dword_191BD4 = (int)calloc(1u, 0x404u);
  dword_191BC8 = (int)calloc(1u, 0x404u);
  dword_191BD0 = (int)calloc(1u, 0x404u);
  dword_191390 = (int)calloc(1u, 0x404u);
  dword_191BCC = (int)calloc(1u, 0x404u);
  v8 = (struct timespec *)calloc(1u, 0x180Cu);
  tv_sec = v8[768].tv_sec;
  dword_1916D8 = (int)v8;
  *(&v8->tv_sec + tv_sec) = (__time_t)sub_62800;
  *(&v8[128].tv_sec + tv_sec) = 1000;
  clock_gettime(1, &v8[2 * tv_sec + 256]);
  v10 = v8[768].tv_sec;
  v11 = v10 + 1;
  v12 = v10 + 129;
  v13 = &v8->tv_sec + v10;
  v8[768].tv_sec = v11;
  v13[1] = (__time_t)sub_62D18;
  v13[257] = (__time_t)"et";
  clock_gettime(1, &v8[2 * v12]);
  v14 = v8[768].tv_sec;
  v15 = v14 + 1;
  v16 = v14 + 129;
  v17 = &v8->tv_sec + v14;
  v8[768].tv_sec = v15;
  v17[1] = (__time_t)sub_5D1B8;
  v17[257] = 10000;
  clock_gettime(1, &v8[2 * v16]);
  v18 = v8[768].tv_sec;
  v19 = v18 + 1;
  v20 = v18 + 129;
  v21 = &v8->tv_sec + v18;
  v8[768].tv_sec = v19;
  v21[1] = (__time_t)sub_67814;
  v21[257] = 60000;
  clock_gettime(1, &v8[2 * v20]);
  ++v8[768].tv_sec;
  v22 = (struct timespec *)calloc(1u, 0x180Cu);
  v23 = v22[768].tv_sec;
  dword_1916DC = (int)v22;
  *(&v22->tv_sec + v23) = (__time_t)sub_5F3B0;
  *(&v22[128].tv_sec + v23) = 5000;
  clock_gettime(1, &v22[2 * v23 + 256]);
  v24 = v22[768].tv_sec;
  v25 = v24 + 1;
  v26 = v24 + 129;
  v27 = &v22->tv_sec + v24;
  v22[768].tv_sec = v25;
  v27[1] = 423704;
  v27[257] = 1000;
  clock_gettime(1, &v22[2 * v26]);
  v28 = v22[768].tv_sec;
  v29 = v28 + 1;
  v30 = v28 + 129;
  v31 = &v22->tv_sec + v28;
  v22[768].tv_sec = v29;
  v31[257] = 1000;
  v31[1] = (__time_t)task_check_miner_status;
  result = clock_gettime(1, &v22[2 * v30]);
  ++v22[768].tv_sec;
  return result;
}
