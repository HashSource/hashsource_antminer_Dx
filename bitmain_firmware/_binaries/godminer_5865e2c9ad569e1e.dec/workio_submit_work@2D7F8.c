int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int lock; // r2
  char *v9; // r1
  int v10; // r4
  int v11; // r1
  int v12; // r1
  __int64 v13; // r2
  char *v14; // r1
  int v15; // lr
  int v16; // r1
  _DWORD v17[7]; // [sp+38h] [bp-1C24h] BYREF
  int v18; // [sp+54h] [bp-1C08h]
  _DWORD v19[7]; // [sp+58h] [bp-1C04h] BYREF
  int v20; // [sp+74h] [bp-1BE8h]
  char v21[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]);
  if ( v5 )
  {
    V_LOCK();
    lock = a2->__lock;
    LOWORD(v9) = 5072;
    HIWORD(v9) = (unsigned int)"unknow config parameter!" >> 16;
    LOWORD(v10) = 5080;
    V_INT((int)v19, v9, lock);
    HIWORD(v10) = (unsigned int)"onfig parameter!" >> 16;
    logfmt_raw(v21, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, v10);
    V_UNLOCK();
    LOWORD(v11) = 4264;
    HIWORD(v11) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v11, 138, "workio_submit_work", 18, 143, 20, v21);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes(&a2->__lock);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _DWORD *))(v4 + 32))(a1, a2, v19);
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(pthread_mutex_t *, _DWORD *))(v4 + 12))(a2, v19);
      if ( v6 )
        break;
      v12 = dword_174158;
      v13 = 3518437209LL * (unsigned int)dword_174158;
      LODWORD(v13) = a2[81].__owner;
      ++total_ro;
      ++dword_174158;
      a2[81].__owner = v13 + 1;
      if ( v12 == 10000 * (HIDWORD(v13) >> 13) )
      {
        V_LOCK();
        LOWORD(v14) = 5072;
        HIWORD(v14) = (unsigned int)"unknow config parameter!" >> 16;
        V_INT((int)v17, v14, a2->__lock);
        LOWORD(v15) = 5108;
        HIWORD(v15) = (unsigned int)"algo parameter '%s'" >> 16;
        logfmt_raw(v21, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v15, 0, v5);
        V_UNLOCK();
        LOWORD(v16) = 4264;
        HIWORD(v16) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v16, 138, "workio_submit_work", 18, 157, 100, v21);
        if ( v5 == 3 )
          return v6;
      }
      else if ( v5 == 3 )
      {
        return v6;
      }
      ++v5;
    }
    return v6;
  }
}
