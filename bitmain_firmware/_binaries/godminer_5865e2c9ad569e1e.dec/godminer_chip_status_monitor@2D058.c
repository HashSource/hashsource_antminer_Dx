pthread_mutex_t *__fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  pthread_mutex_t *result; // r0
  int v4; // r1
  pthread_mutex_t *v5; // r5
  char *v6; // r1
  int v7; // r5
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char *v11; // r1
  int v12; // r10
  int v13; // r1
  int v14; // r3
  int v15; // r1
  _DWORD v16[7]; // [sp+28h] [bp-1040h] BYREF
  int v17; // [sp+44h] [bp-1024h]
  _DWORD v18[7]; // [sp+48h] [bp-1020h] BYREF
  int v19; // [sp+64h] [bp-1004h]
  char v20[4096]; // [sp+68h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  result = (pthread_mutex_t *)get_current_pool();
  v4 = *((_DWORD *)flag_from_monitor + 12);
  v5 = result;
  if ( (v4 & 2) != 0 )
  {
    result = (pthread_mutex_t *)pool_tget(result, (unsigned __int8 *)&result[79].__size[8]);
    if ( !result )
    {
      V_LOCK();
      LOWORD(v11) = 620;
      HIWORD(v11) = (unsigned int)" %lld" >> 16;
      LOWORD(v12) = 4668;
      V_INT((int)v16, v11, *(int *)(a1 + 232));
      HIWORD(v12) = (unsigned int)"SIGSEGV received, exiting" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v12);
      V_UNLOCK();
      LOWORD(v13) = 4264;
      HIWORD(v13) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      zlog(g_zc, v13, 138, "godminer_chip_status_monitor", 28, 707, 20, v20);
      set_miner_6060info_some_chip_not_working_err(*(_DWORD *)(a1 + 232), 1);
      V_LOCK();
      LOWORD(v14) = 4692;
      HIWORD(v14) = (unsigned int)"g" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v14, *(_DWORD *)(a1 + 232));
      V_UNLOCK();
      LOWORD(v15) = 4264;
      HIWORD(v15) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      result = (pthread_mutex_t *)zlog(g_zc, v15, 138, "godminer_chip_status_monitor", 28, 709, 100, v20);
    }
    v4 = *((_DWORD *)flag_from_monitor + 12);
    *((_DWORD *)flag_from_monitor + 14) |= 2u;
  }
  if ( (v4 & 4) != 0 )
  {
    result = (pthread_mutex_t *)pool_tget(v5, (unsigned __int8 *)&v5[79].__size[8]);
    if ( !result )
    {
      V_LOCK();
      LOWORD(v6) = 620;
      HIWORD(v6) = (unsigned int)" %lld" >> 16;
      V_INT((int)v18, v6, *(int *)(a1 + 232));
      LOWORD(v7) = 4720;
      HIWORD(v7) = (unsigned int)" log" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v7);
      V_UNLOCK();
      LOWORD(v8) = 4264;
      HIWORD(v8) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      zlog(g_zc, v8, 138, "godminer_chip_status_monitor", 28, 723, 20, v20);
      V_LOCK();
      LOWORD(v9) = 4692;
      HIWORD(v9) = (unsigned int)"g" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v9, *(_DWORD *)(a1 + 232));
      V_UNLOCK();
      LOWORD(v10) = 4264;
      HIWORD(v10) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      result = (pthread_mutex_t *)zlog(g_zc, v10, 138, "godminer_chip_status_monitor", 28, 724, 100, v20);
    }
    *((_DWORD *)flag_from_monitor + 14) |= 4u;
  }
  return result;
}
