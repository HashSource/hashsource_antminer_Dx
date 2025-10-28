int __fastcall task_timer_thread(_DWORD *a1)
{
  char *v2; // r4
  int v3; // r7
  int v4; // r0
  int v5; // r3
  int result; // r0
  void (__fastcall **v7)(int); // r10
  _DWORD *v8; // r11
  _DWORD *v9; // r9
  _DWORD *v10; // r8
  int v11; // r3
  int v12; // r4
  int v13; // r4
  void (__fastcall *v14)(int); // r3
  _DWORD *v15; // r8
  int v16; // r10
  int v17; // r3
  int v18; // r7
  int v19; // r4
  int v20; // r9
  int v21; // r12
  int v22; // r4
  int v23; // r4
  int v24; // r12
  int v25; // r7
  int v26; // r9
  int v27; // r12
  int v28; // r4
  int v29; // r7
  int v30; // r12
  int v31; // r9
  int v32; // r2
  int v33; // r4
  int v34; // r12
  int v35; // r7
  int v36; // r9
  int v37; // r12
  int v38; // r5
  int v39; // r7
  int v40; // r3
  struct timespec *v41; // r1
  int v42; // r12
  int v43; // r4
  int v44; // lr
  int v45; // r4
  int v46; // r5
  int v47; // r2
  int v48; // r4
  int v49; // r2
  int v50; // r11
  int v51; // r9
  struct timespec *v52; // r5
  _DWORD *v53; // r8
  int v54; // t1
  int tv_nsec; // r1
  int v56; // r2
  int v57; // r4
  int v58; // [sp+10h] [bp-1024h]
  int v59; // [sp+1Ch] [bp-1018h]
  int v60; // [sp+24h] [bp-1010h]
  _DWORD *v62; // [sp+2Ch] [bp-1008h]
  char v63[4100]; // [sp+30h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "task_timer_thread", 0);
  v3 = 1125899907;
  pthread_mutex_lock(&stru_197BB8);
  v4 = syscall(224);
  logfmt_raw(v63, 0x1000u, 0, "%s on pid %ld", v2, v4);
  v62 = a1 + 1024;
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/task_timer.c",
    148,
    "task_timer_thread",
    17,
    44,
    60,
    v63);
  prctl(15, v2);
  while ( 1 )
  {
    v5 = v62[512];
    v60 = v5;
    if ( v5 > 0 )
    {
      v7 = (void (__fastcall **)(int))a1;
      v8 = a1;
      v9 = a1 + 531;
      v10 = &a1[4 * v5 + 531];
      do
      {
        while ( 1 )
        {
          clock_gettime(1, (struct timespec *)(v9 - 17));
          v11 = *(v9 - 18);
          v12 = *(v9 - 16);
          __pld(v9);
          v13 = 1000 * (*(v9 - 17) - *(v9 - 19))
              + ((int)((unsigned __int64)((v12 - v11) * (__int64)v3) >> 32) >> 18)
              - ((v12 - v11) >> 31);
          if ( (int)v7[256] <= v13 )
            break;
          v9 += 4;
          ++v7;
          if ( v9 == v10 )
            goto LABEL_8;
        }
        clock_gettime(1, (struct timespec *)(v9 - 19));
        v9 += 4;
        v14 = *v7++;
        v14(v13);
      }
      while ( v9 != v10 );
LABEL_8:
      if ( v60 <= 8 )
      {
        v51 = 0;
        v50 = 0x7FFFFFFF;
      }
      else
      {
        v15 = a1 + 551;
        v59 = 0x7FFFFFFF;
        v16 = v3;
        v17 = 0;
        do
        {
          v18 = v8[256];
          v58 = v17 + 8;
          v8 += 8;
          clock_gettime(1, (struct timespec *)(v15 - 37));
          v19 = *(v15 - 36) - *(v15 - 38);
          v20 = v8[249];
          v21 = *(v15 - 37) - *(v15 - 39);
          __pld(v15 - 8);
          __pld(v15);
          __pld(v15 + 8);
          __pld(v15 + 16);
          v22 = 1000 * v21 + ((int)((unsigned __int64)(v19 * (__int64)v16) >> 32) >> 18) - (v19 >> 31);
          clock_gettime(1, (struct timespec *)(v15 - 33));
          v23 = v18 - v22;
          v24 = *(v15 - 32) - *(v15 - 34);
          v25 = v8[250];
          v26 = v20
              - (1000 * (*(v15 - 33) - *(v15 - 35))
               + ((int)((unsigned __int64)(v24 * (__int64)v16) >> 32) >> 18)
               - (v24 >> 31));
          if ( v26 >= v23 )
            v26 = v23;
          clock_gettime(1, (struct timespec *)(v15 - 29));
          v27 = *(v15 - 28) - *(v15 - 30);
          v28 = v8[251];
          v29 = v25
              - (1000 * (*(v15 - 29) - *(v15 - 31))
               + ((int)((unsigned __int64)(v27 * (__int64)v16) >> 32) >> 18)
               - (v27 >> 31));
          if ( v29 >= v26 )
            v29 = v26;
          clock_gettime(1, (struct timespec *)(v15 - 25));
          v30 = *(v15 - 24) - *(v15 - 26);
          v31 = v8[252];
          v32 = 1000 * (*(v15 - 25) - *(v15 - 27))
              + ((int)((unsigned __int64)(v30 * (__int64)v16) >> 32) >> 18)
              - (v30 >> 31);
          if ( v28 - v32 < v29 )
            v33 = v28 - v32;
          else
            v33 = v29;
          clock_gettime(1, (struct timespec *)(v15 - 21));
          v34 = *(v15 - 20) - *(v15 - 22);
          v35 = v8[253];
          v36 = v31
              - (1000 * (*(v15 - 21) - *(v15 - 23))
               + ((int)((unsigned __int64)(v34 * (__int64)v16) >> 32) >> 18)
               - (v34 >> 31));
          if ( v36 >= v33 )
            v36 = v33;
          clock_gettime(1, (struct timespec *)(v15 - 17));
          v37 = *(v15 - 16) - *(v15 - 18);
          v38 = v8[254];
          v39 = v35
              - (1000 * (*(v15 - 17) - *(v15 - 19))
               + ((int)((unsigned __int64)(v37 * (__int64)v16) >> 32) >> 18)
               - (v37 >> 31));
          if ( v39 >= v36 )
            v39 = v36;
          clock_gettime(1, (struct timespec *)(v15 - 13));
          v40 = *(v15 - 14);
          v41 = (struct timespec *)(v15 - 9);
          v42 = *(v15 - 12);
          v43 = *(v15 - 13);
          v15 += 32;
          v44 = v43 - *(v15 - 47);
          v45 = v8[255];
          v46 = v38
              - (1000 * v44
               + ((int)((unsigned __int64)((v42 - v40) * (__int64)v16) >> 32) >> 18)
               - ((v42 - v40) >> 31));
          if ( v46 < v39 )
            v39 = v46;
          clock_gettime(1, v41);
          v47 = *(v15 - 40) - *(v15 - 42);
          v17 = v58;
          v48 = v45
              - (1000 * (*(v15 - 41) - *(v15 - 43))
               + ((int)((unsigned __int64)(v47 * (__int64)v16) >> 32) >> 18)
               - (v47 >> 31));
          v49 = v59;
          if ( v48 < v39 )
            v39 = v48;
          if ( v59 >= v39 )
            v49 = v39;
          v59 = v49;
        }
        while ( v58 != ((v60 - 9) & 0xFFFFFFF8) + 8 );
        v50 = v49;
        v51 = v58;
        v3 = v16;
      }
      v52 = (struct timespec *)&a1[4 * v51];
      v53 = &a1[v51 + 255];
      do
      {
        v54 = v53[1];
        ++v53;
        ++v51;
        clock_gettime(1, v52 + 257);
        tv_nsec = v52[256].tv_nsec;
        v56 = v52[257].tv_nsec;
        v52 += 2;
        v57 = v54
            - (1000 * (v52[255].tv_sec - v52[254].tv_sec)
             + ((int)((unsigned __int64)((v56 - tv_nsec) * (__int64)v3) >> 32) >> 18)
             - ((v56 - tv_nsec) >> 31));
        if ( v50 >= v57 )
          v50 = v57;
      }
      while ( v51 < v60 );
      result = v50 & ~(v50 >> 31);
    }
    else
    {
      result = 0x7FFFFFFF;
    }
    if ( !*((_BYTE *)v62 + 2052) )
      return result;
    usleep(1000 * result);
  }
}
