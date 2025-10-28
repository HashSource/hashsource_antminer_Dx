int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  pthread_mutex_t *v4; // r4
  int v5; // r3
  int v6; // r1
  char *v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r1
  char *v11; // r0
  int v12; // r3
  int v13; // r5
  int v14; // r10
  int v15; // r12
  unsigned int v16; // r6
  int v17; // r10
  unsigned int v18; // r5
  int v19; // r0
  bool v20; // zf
  pthread_mutex_t *v21; // r1
  signed __int64 v22; // r0
  int v23; // r0
  void *v24; // r5
  char *v25; // r1
  int owner; // r8
  _DWORD *current_pool; // r0
  int v28; // r1
  int v29; // r3
  void (__fastcall *v30)(pthread_mutex_t *); // r2
  char *v31; // r1
  int v32; // r1
  char *v33; // r1
  int v34; // r4
  int v35; // r1
  char *v37; // [sp+30h] [bp-108Ch]
  int lock; // [sp+34h] [bp-1088h]
  int v39; // [sp+38h] [bp-1084h]
  int v40; // [sp+3Ch] [bp-1080h]
  __time_t v41; // [sp+40h] [bp-107Ch]
  int v42; // [sp+48h] [bp-1074h]
  int v43; // [sp+50h] [bp-106Ch]
  int v44; // [sp+54h] [bp-1068h]
  _DWORD v45[7]; // [sp+58h] [bp-1064h] BYREF
  int v46; // [sp+74h] [bp-1048h]
  _DWORD v47[7]; // [sp+78h] [bp-1044h] BYREF
  int v48; // [sp+94h] [bp-1028h]
  int v49; // [sp+98h] [bp-1024h] BYREF
  int v50; // [sp+9Ch] [bp-1020h]
  int v51; // [sp+A0h] [bp-101Ch]
  int v52; // [sp+A4h] [bp-1018h]
  int v53; // [sp+A8h] [bp-1014h]
  int v54; // [sp+ACh] [bp-1010h]
  int v55; // [sp+B0h] [bp-100Ch]
  int v56; // [sp+B4h] [bp-1008h]
  char v57[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v41 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (pthread_mutex_t *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    LOWORD(v5) = 9500;
    HIWORD(v5) = (unsigned int)"ool url: %s" >> 16;
    logfmt_raw(v57, 0x1000u, 0, v5, v4->__kind);
    V_UNLOCK();
    LOWORD(v6) = 8852;
    HIWORD(v6) = (unsigned int)"rror %d" >> 16;
    zlog(g_zc, v6, 144, "stratum_thread", 14, 249, 20, v57);
    v7 = (char *)calloc(1u, 0x40u);
    snprintf(v7, 0x40u, "%.10s_%d", "stratum_thread", v4->__lock);
    V_LOCK();
    v8 = syscall(224);
    LOWORD(v9) = 4248;
    HIWORD(v9) = (unsigned int)"" >> 16;
    logfmt_raw(v57, 0x1000u, 0, v9, v7, v8);
    V_UNLOCK();
    LOWORD(v10) = 8852;
    HIWORD(v10) = (unsigned int)"rror %d" >> 16;
    zlog(g_zc, v10, 144, "stratum_thread", 14, 251, 40, v57);
    prctl(15, v7);
    v11 = _strdup((const char *)v4->__kind);
    v4[1].__owner = (int)v11;
    if ( v11 )
    {
      v37 = &v4[79].__size[20];
      pool_tset((int)v4, &v4[79].__size[8], 0);
      LOWORD(v12) = 9524;
      HIWORD(v12) = (unsigned int)"te tcp connection failed" >> 16;
      v39 = v12;
      LOWORD(v13) = 9612;
      pool_tclear((int)v4, &v4[79].__size[20], 0);
      LOWORD(v14) = 9640;
      LOWORD(v15) = 9564;
      HIWORD(v13) = (unsigned int)"y from pool:%d dose not match the machine" >> 16;
      HIWORD(v14) = (unsigned int)"h the machine" >> 16;
      HIWORD(v15) = (unsigned int)"n failed" >> 16;
      v40 = 1;
      v44 = v13;
      v43 = v14;
      v42 = v15;
      dword_174CCC = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          LOWORD(v17) = 8852;
          v16 = 0;
          HIWORD(v17) = (unsigned int)"rror %d" >> 16;
          v18 = 0;
          while ( 1 )
          {
            v19 = (int)v4;
            if ( v4[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v20 = (*(int (__fastcall **)(int))v2)(v19) == 0;
              v21 = v4;
              if ( !v20 )
              {
                if ( (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v4) )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v4, v21);
              pool_tclear((int)v4, v37, 0);
              pool_died(&v4->__lock);
              v22 = __PAIR64__(v18, v16);
              v18 = (__PAIR64__(v18, v16) + 1) >> 32;
              if ( !(v22 % 50) )
              {
                V_LOCK();
                LOWORD(v25) = 5072;
                HIWORD(v25) = (unsigned int)"unknow config parameter!" >> 16;
                V_INT((int)v45, v25, v4->__lock);
                logfmt_raw(
                  v57,
                  0x1000u,
                  0,
                  v46,
                  v45[0],
                  v45[1],
                  v45[2],
                  v45[3],
                  v45[4],
                  v45[5],
                  v45[6],
                  v46,
                  v39,
                  30,
                  v16 + 1,
                  v18);
                V_UNLOCK();
                zlog(g_zc, v17, 144, "stratum_thread", 14, 284, 100, v57);
              }
              ++v16;
              sleep(0x1Eu);
              v19 = (int)v4;
              if ( v4[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK();
            owner = v4[1].__owner;
            lock = v4->__lock;
            current_pool = (_DWORD *)get_current_pool();
            logfmt_raw(v57, 0x1000u, 0, v42, lock, owner, *current_pool);
            V_UNLOCK();
            zlog(g_zc, v17, 144, "stratum_thread", 14, 290, 20, v57);
            pool_alive(v4);
            if ( v40 )
            {
              v40 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v19);
          if ( stratum_socket_full((int)v4, v41) )
            break;
          V_LOCK();
          V_INT((int)v47, "poolno", v4->__lock);
          logfmt_raw(v57, 0x1000u, 0, v48, v47[0], v47[1], v47[2], v47[3], v47[4], v47[5], v47[6], v48, v44);
          V_UNLOCK();
          LOWORD(v28) = 8852;
          HIWORD(v28) = (unsigned int)"rror %d" >> 16;
          zlog(g_zc, v28, 144, "stratum_thread", 14, 304, 100, v57);
LABEL_19:
          v29 = v4[81].__count + 1;
          pools_active = 0;
          v30 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          ++total_go;
          v4[81].__count = v29;
          v30(v4);
          pool_tclear((int)v4, v37, 0);
          pool_died(&v4->__lock);
          V_LOCK();
          LOWORD(v31) = 5072;
          HIWORD(v31) = (unsigned int)"unknow config parameter!" >> 16;
          V_INT((int)&v49, v31, v4->__lock);
          logfmt_raw(v57, 0x1000u, 0, v56, v49, v50, v51, v52, v53, v54, v55, v56, v43);
          V_UNLOCK();
          LOWORD(v32) = 8852;
          HIWORD(v32) = (unsigned int)"rror %d" >> 16;
          zlog(g_zc, v32, 144, "stratum_thread", 14, 332, 20, v57);
          sleep(0x1Eu);
        }
        v23 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v4);
        v24 = (void *)v23;
        if ( !v23 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v4, v23) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v24, v4);
        free(v24);
        pools_active = 1;
      }
    }
  }
  V_LOCK();
  LOWORD(v33) = 5072;
  HIWORD(v33) = (unsigned int)"unknow config parameter!" >> 16;
  V_INT((int)&v49, v33, v4->__lock);
  LOWORD(v34) = 9672;
  HIWORD(v34) = (unsigned int)"ng = N%d:2." >> 16;
  logfmt_raw(v57, 0x1000u, 0, v56, v49, v50, v51, v52, v53, v54, v55, v56, v34);
  V_UNLOCK();
  LOWORD(v35) = 8852;
  HIWORD(v35) = (unsigned int)"rror %d" >> 16;
  zlog(g_zc, v35, 144, "stratum_thread", 14, 339, 60, v57);
  return 0;
}
