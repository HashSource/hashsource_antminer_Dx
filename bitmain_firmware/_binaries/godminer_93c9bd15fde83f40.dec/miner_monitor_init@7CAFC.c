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

  v0 = (void **)dword_1A4178;
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
    pthread_mutex_lock(&stru_1A9B48);
    v2 = dword_1A9B60;
    pthread_mutex_unlock(&stru_1A9B48);
    v0[6] = 0;
    v0[7] = 0;
    if ( v2 > 0 )
    {
      v3 = *(int **)(dword_1A9B64[0] + 208);
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
  while ( v0 != (void **)&dword_1A44B8 );
  dword_1A45BC = (int)calloc(1u, 0x404u);
  dword_1A45B0 = (int)calloc(1u, 0x404u);
  dword_1A45B8 = (int)calloc(1u, 0x404u);
  dword_1A4170 = (int)calloc(1u, 0x404u);
  dword_1A45B4 = (int)calloc(1u, 0x404u);
  v8 = (struct timespec *)calloc(1u, 0x180Cu);
  tv_sec = v8[768].tv_sec;
  dword_1A44B8 = (int)v8;
  *(&v8->tv_sec + tv_sec) = (__time_t)sub_812FC;
  *(&v8[128].tv_sec + tv_sec) = 1000;
  clock_gettime(1, &v8[2 * tv_sec + 256]);
  v10 = v8[768].tv_sec;
  v11 = v10 + 1;
  v12 = v10 + 129;
  v13 = &v8->tv_sec + v10;
  v8[768].tv_sec = v11;
  v13[1] = (__time_t)sub_7FD54;
  v13[257] = (__time_t)"ng_allchip";
  clock_gettime(1, &v8[2 * v12]);
  v14 = v8[768].tv_sec;
  v15 = v14 + 1;
  v16 = v14 + 129;
  v17 = &v8->tv_sec + v14;
  v8[768].tv_sec = v15;
  v17[1] = (__time_t)sub_7AB54;
  v17[257] = 10000;
  clock_gettime(1, &v8[2 * v16]);
  v18 = v8[768].tv_sec;
  v19 = v18 + 1;
  v20 = v18 + 129;
  v21 = &v8->tv_sec + v18;
  v8[768].tv_sec = v19;
  v21[1] = (__time_t)sub_813E4;
  v21[257] = 60000;
  clock_gettime(1, &v8[2 * v20]);
  ++v8[768].tv_sec;
  v22 = (struct timespec *)calloc(1u, 0x180Cu);
  v23 = v22[768].tv_sec;
  dword_1A44BC = (int)v22;
  *(&v22->tv_sec + v23) = (__time_t)sub_7C554;
  *(&v22[128].tv_sec + v23) = 5000;
  clock_gettime(1, &v22[2 * v23 + 256]);
  v24 = v22[768].tv_sec;
  v25 = v24 + 1;
  v26 = v24 + 129;
  v27 = &v22->tv_sec + v24;
  v22[768].tv_sec = v25;
  v27[1] = 528884;
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
