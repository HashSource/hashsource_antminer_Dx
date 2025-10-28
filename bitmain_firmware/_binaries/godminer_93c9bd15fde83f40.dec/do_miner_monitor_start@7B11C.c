int do_miner_monitor_start()
{
  int v0; // r5
  int *v1; // r4
  int *v2; // r5
  int v3; // t1
  int v4; // r4
  int v5; // r11
  int v6; // r5
  int v7; // r11
  _DWORD *v8; // r4
  char *v9; // r9
  unsigned int v10; // r11
  int v11; // lr
  int v12; // r12
  int v13; // r6
  int v14; // r6
  int v15; // r3
  struct timespec *v16; // r1
  int v17; // r6
  int v18; // lr
  int v19; // r6
  struct timespec *v20; // r10
  pthread_t *v21; // r4
  int v22; // r3
  int v23; // r6
  struct timespec *v24; // r1
  __time_t v25; // r0
  __time_t v26; // lr
  int v27; // r6
  void (__fastcall *v28)(int); // t1
  int v29; // r4
  int v30; // r11
  int v31; // r5
  int v32; // r11
  _DWORD *v33; // r4
  char *v34; // r9
  unsigned int v35; // r11
  int v36; // lr
  int v37; // r12
  int v38; // r6
  int v39; // r6
  int v40; // r3
  struct timespec *v41; // r1
  int v42; // r6
  int v43; // lr
  int v44; // r6
  struct timespec *v45; // r10
  pthread_t *v46; // r4
  int v47; // r3
  int v48; // r6
  struct timespec *v49; // r1
  __time_t v50; // r0
  __time_t v51; // lr
  int v52; // r6
  void (__fastcall *v53)(int); // t1
  pthread_t *v54; // r6
  int v55; // r5
  struct timespec *v56; // r4
  int v57; // r5
  struct timespec *v58; // r1
  pthread_t *v59; // r6
  int v60; // r5
  struct timespec *v61; // r4
  int v62; // r5
  struct timespec *v63; // r1
  int v65; // r5
  int v66; // r3
  int v67; // r2
  _DWORD *v68; // r4
  char *v69; // r9
  unsigned int v70; // r11
  int v71; // lr
  int v72; // r12
  int v73; // r0
  int v74; // r6
  int v75; // r3
  struct timespec *v76; // r1
  int v77; // r12
  int v78; // lr
  int v79; // r6
  struct timespec *v80; // r10
  pthread_t *v81; // r4
  int v82; // r3
  int v83; // r6
  struct timespec *v84; // r1
  __time_t v85; // r0
  __time_t v86; // lr
  int v87; // r6
  void (__fastcall *v88)(int); // t1
  int v89; // r5
  struct timespec *v90; // r4
  int v91; // r5
  struct timespec *v92; // r1
  int v93; // r5
  int v94; // r3
  int v95; // r2
  _DWORD *v96; // r4
  char *v97; // r9
  unsigned int v98; // r11
  int v99; // lr
  int v100; // r12
  int v101; // r0
  int v102; // r6
  int v103; // r3
  struct timespec *v104; // r1
  int v105; // r12
  int v106; // lr
  int v107; // r6
  struct timespec *v108; // r10
  pthread_t *v109; // r4
  int tv_nsec; // r3
  int v111; // r6
  struct timespec *v112; // r1
  __time_t tv_sec; // r0
  __time_t v114; // lr
  int v115; // r6
  void (__fastcall *v116)(int); // t1
  int v117; // r5
  struct timespec *v118; // r4
  int v119; // r5
  struct timespec *v120; // r1
  pthread_t *arg; // [sp+4h] [bp-18h]
  pthread_t *arga; // [sp+4h] [bp-18h]
  int v123; // [sp+8h] [bp-14h]
  int v124; // [sp+8h] [bp-14h]
  int v125; // [sp+8h] [bp-14h]
  int v126; // [sp+8h] [bp-14h]
  int v127; // [sp+Ch] [bp-10h]
  int v128; // [sp+Ch] [bp-10h]
  void *thread_return[2]; // [sp+14h] [bp-8h] BYREF

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 > 0 )
  {
    v1 = dword_1A9B64;
    v2 = &dword_1A9B64[v0];
    do
    {
      v3 = *v1++;
      if ( !*(_BYTE *)(v3 + 142) )
      {
        do
          sleep(1u);
        while ( !*(_BYTE *)(*(v1 - 1) + 142) );
      }
    }
    while ( v1 != v2 );
  }
  v4 = dword_1A44B8;
  v5 = dword_1A44B8 + 4096;
  arg = (pthread_t *)dword_1A44B8;
  v6 = *(unsigned __int8 *)(dword_1A44B8 + 6148);
  if ( *(_BYTE *)(dword_1A44B8 + 6148) )
  {
    v93 = 0;
    *(_BYTE *)(dword_1A44B8 + 6148) = 0;
    pthread_join(*(_DWORD *)(v5 + 2056), thread_return);
    v94 = *(_DWORD *)(v5 + 2048);
    v126 = v94;
    if ( v94 <= 0 )
    {
      *(_BYTE *)(v5 + 2052) = 1;
    }
    else
    {
      if ( v94 > 2 )
      {
        v95 = v4;
        v128 = v5;
        v96 = (_DWORD *)(v4 + 2124);
        v97 = (char *)(v95 + 16);
        v98 = ((v94 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v96 - 17));
          v93 += 2;
          v99 = *(v96 - 19);
          v100 = *(v96 - 17);
          v101 = *(v96 - 16) - *(v96 - 18);
          __pld(v96);
          __pld(v97);
          v97 += 8;
          v102 = 1000 * (v100 - v99) + v101 / 1000000;
          clock_gettime(1, (struct timespec *)(v96 - 19));
          (*((void (__fastcall **)(int))v97 - 6))(v102);
          clock_gettime(1, (struct timespec *)(v96 - 13));
          v103 = *(v96 - 14);
          v104 = (struct timespec *)(v96 - 15);
          v105 = *(v96 - 12);
          v106 = *(v96 - 13);
          v96 += 8;
          v107 = 1000 * (v106 - *(v96 - 23)) + (v105 - v103) / 1000000;
          clock_gettime(1, v104);
          (*((void (__fastcall **)(int))v97 - 5))(v107);
        }
        while ( v93 != v98 );
        v5 = v128;
      }
      v108 = (struct timespec *)&arg[4 * v93];
      v109 = &arg[v93];
      do
      {
        clock_gettime(1, v108 + 257);
        tv_nsec = v108[256].tv_nsec;
        v111 = v108[257].tv_nsec;
        v112 = v108 + 256;
        tv_sec = v108[257].tv_sec;
        ++v93;
        v114 = v108[256].tv_sec;
        v108 += 2;
        v115 = 1000 * (tv_sec - v114) + (v111 - tv_nsec) / 1000000;
        clock_gettime(1, v112);
        v116 = (void (__fastcall *)(int))*v109++;
        v116(v115);
      }
      while ( v126 > v93 );
      v117 = *(_DWORD *)(v5 + 2048);
      *(_BYTE *)(v5 + 2052) = 1;
      if ( v117 > 0 )
      {
        v118 = (struct timespec *)(arg + 512);
        v119 = (int)&arg[4 * v117 + 512];
        do
        {
          v120 = v118;
          v118 += 2;
          clock_gettime(1, v120);
        }
        while ( v118 != (struct timespec *)v119 );
      }
    }
    pthread_create(arg + 1538, 0, (void *(*)(void *))task_timer_thread, arg);
  }
  else
  {
    v7 = *(_DWORD *)(dword_1A44B8 + 6144);
    if ( v7 > 0 )
    {
      if ( v7 > 2 )
      {
        v123 = *(_DWORD *)(dword_1A44B8 + 6144);
        v8 = (_DWORD *)(dword_1A44B8 + 2124);
        v9 = (char *)(dword_1A44B8 + 16);
        v10 = ((v7 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v8 - 17));
          v11 = *(v8 - 19);
          v6 += 2;
          v12 = *(v8 - 17);
          v13 = *(v8 - 16) - *(v8 - 18);
          __pld(v8);
          __pld(v9);
          v9 += 8;
          v14 = 1000 * (v12 - v11) + v13 / 1000000;
          clock_gettime(1, (struct timespec *)(v8 - 19));
          (*((void (__fastcall **)(int))v9 - 6))(v14);
          clock_gettime(1, (struct timespec *)(v8 - 13));
          v15 = *(v8 - 14);
          v16 = (struct timespec *)(v8 - 15);
          v17 = *(v8 - 12);
          v18 = *(v8 - 15);
          v8 += 8;
          v19 = 1000 * (*(v8 - 21) - v18) + (v17 - v15) / 1000000;
          clock_gettime(1, v16);
          (*((void (__fastcall **)(int))v9 - 5))(v19);
        }
        while ( v6 != v10 );
        v7 = v123;
      }
      v20 = (struct timespec *)&arg[4 * v6];
      v21 = &arg[v6];
      do
      {
        clock_gettime(1, v20 + 257);
        v22 = v20[256].tv_nsec;
        v23 = v20[257].tv_nsec;
        v24 = v20 + 256;
        v25 = v20[257].tv_sec;
        ++v6;
        v26 = v20[256].tv_sec;
        v20 += 2;
        v27 = 1000 * (v25 - v26) + (v23 - v22) / 1000000;
        clock_gettime(1, v24);
        v28 = (void (__fastcall *)(int))*v21++;
        v28(v27);
      }
      while ( v7 > v6 );
    }
  }
  v29 = dword_1A44BC;
  v30 = dword_1A44BC + 4096;
  arga = (pthread_t *)dword_1A44BC;
  v31 = *(unsigned __int8 *)(dword_1A44BC + 6148);
  if ( *(_BYTE *)(dword_1A44BC + 6148) )
  {
    v65 = 0;
    *(_BYTE *)(dword_1A44BC + 6148) = 0;
    pthread_join(*(_DWORD *)(v29 + 6152), thread_return);
    v66 = *(_DWORD *)(v29 + 6144);
    v125 = v66;
    if ( v66 <= 0 )
    {
      *(_BYTE *)(v29 + 6148) = 1;
    }
    else
    {
      if ( v66 > 2 )
      {
        v67 = v29;
        v127 = v29 + 4096;
        v68 = (_DWORD *)(v29 + 2124);
        v69 = (char *)(v67 + 16);
        v70 = ((v66 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v68 - 17));
          v65 += 2;
          v71 = *(v68 - 19);
          v72 = *(v68 - 17);
          v73 = *(v68 - 16) - *(v68 - 18);
          __pld(v68);
          __pld(v69);
          v69 += 8;
          v74 = 1000 * (v72 - v71) + v73 / 1000000;
          clock_gettime(1, (struct timespec *)(v68 - 19));
          (*((void (__fastcall **)(int))v69 - 6))(v74);
          clock_gettime(1, (struct timespec *)(v68 - 13));
          v75 = *(v68 - 14);
          v76 = (struct timespec *)(v68 - 15);
          v77 = *(v68 - 12);
          v78 = *(v68 - 13);
          v68 += 8;
          v79 = 1000 * (v78 - *(v68 - 23)) + (v77 - v75) / 1000000;
          clock_gettime(1, v76);
          (*((void (__fastcall **)(int))v69 - 5))(v79);
        }
        while ( v65 != v70 );
        v30 = v127;
      }
      v80 = (struct timespec *)&arga[4 * v65];
      v81 = &arga[v65];
      do
      {
        clock_gettime(1, v80 + 257);
        v82 = v80[256].tv_nsec;
        v83 = v80[257].tv_nsec;
        v84 = v80 + 256;
        v85 = v80[257].tv_sec;
        ++v65;
        v86 = v80[256].tv_sec;
        v80 += 2;
        v87 = 1000 * (v85 - v86) + (v83 - v82) / 1000000;
        clock_gettime(1, v84);
        v88 = (void (__fastcall *)(int))*v81++;
        v88(v87);
      }
      while ( v125 > v65 );
      v89 = *(_DWORD *)(v30 + 2048);
      *(_BYTE *)(v30 + 2052) = 1;
      if ( v89 > 0 )
      {
        v90 = (struct timespec *)(arga + 512);
        v91 = (int)&arga[4 * v89 + 512];
        do
        {
          v92 = v90;
          v90 += 2;
          clock_gettime(1, v92);
        }
        while ( v90 != (struct timespec *)v91 );
      }
    }
    pthread_create(arga + 1538, 0, (void *(*)(void *))task_timer_thread, arga);
  }
  else
  {
    v32 = *(_DWORD *)(dword_1A44BC + 6144);
    if ( v32 > 0 )
    {
      if ( v32 > 2 )
      {
        v124 = *(_DWORD *)(dword_1A44BC + 6144);
        v33 = (_DWORD *)(dword_1A44BC + 2124);
        v34 = (char *)(dword_1A44BC + 16);
        v35 = ((v32 - 3) & 0xFFFFFFFE) + 2;
        do
        {
          clock_gettime(1, (struct timespec *)(v33 - 17));
          v36 = *(v33 - 19);
          v31 += 2;
          v37 = *(v33 - 17);
          v38 = *(v33 - 16) - *(v33 - 18);
          __pld(v33);
          __pld(v34);
          v34 += 8;
          v39 = 1000 * (v37 - v36) + v38 / 1000000;
          clock_gettime(1, (struct timespec *)(v33 - 19));
          (*((void (__fastcall **)(int))v34 - 6))(v39);
          clock_gettime(1, (struct timespec *)(v33 - 13));
          v40 = *(v33 - 14);
          v41 = (struct timespec *)(v33 - 15);
          v42 = *(v33 - 12);
          v43 = *(v33 - 15);
          v33 += 8;
          v44 = 1000 * (*(v33 - 21) - v43) + (v42 - v40) / 1000000;
          clock_gettime(1, v41);
          (*((void (__fastcall **)(int))v34 - 5))(v44);
        }
        while ( v31 != v35 );
        v32 = v124;
      }
      v45 = (struct timespec *)&arga[4 * v31];
      v46 = &arga[v31];
      do
      {
        clock_gettime(1, v45 + 257);
        v47 = v45[256].tv_nsec;
        v48 = v45[257].tv_nsec;
        v49 = v45 + 256;
        v50 = v45[257].tv_sec;
        ++v31;
        v51 = v45[256].tv_sec;
        v45 += 2;
        v52 = 1000 * (v50 - v51) + (v48 - v47) / 1000000;
        clock_gettime(1, v49);
        v53 = (void (__fastcall *)(int))*v46++;
        v53(v52);
      }
      while ( v31 < v32 );
    }
  }
  v54 = (pthread_t *)dword_1A44B8;
  v55 = *(_DWORD *)(dword_1A44B8 + 6144);
  *(_BYTE *)(dword_1A44B8 + 6148) = 1;
  if ( v55 > 0 )
  {
    v56 = (struct timespec *)(v54 + 512);
    v57 = (int)&v54[4 * v55 + 512];
    do
    {
      v58 = v56;
      v56 += 2;
      clock_gettime(1, v58);
    }
    while ( v56 != (struct timespec *)v57 );
  }
  pthread_create(v54 + 1538, 0, (void *(*)(void *))task_timer_thread, v54);
  v59 = (pthread_t *)dword_1A44BC;
  v60 = *(_DWORD *)(dword_1A44BC + 6144);
  *(_BYTE *)(dword_1A44BC + 6148) = 1;
  if ( v60 > 0 )
  {
    v61 = (struct timespec *)(v59 + 512);
    v62 = (int)&v59[4 * v60 + 512];
    do
    {
      v63 = v61;
      v61 += 2;
      clock_gettime(1, v63);
    }
    while ( v61 != (struct timespec *)v62 );
  }
  pthread_create(v59 + 1538, 0, (void *(*)(void *))task_timer_thread, v59);
  return 0;
}
