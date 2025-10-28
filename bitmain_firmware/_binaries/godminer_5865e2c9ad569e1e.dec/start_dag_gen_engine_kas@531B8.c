int start_dag_gen_engine_kas()
{
  int v1; // r3
  int v2; // r1
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v1) = 24488;
    HIWORD(v1) = (unsigned int)&unk_13DC5C >> 16;
    logfmt_raw(v3, 0x1000u, 0, v1);
    V_UNLOCK();
    LOWORD(v2) = 30244;
    HIWORD(v2) = (unsigned int)"%d" >> 16;
    zlog(g_zc, v2, 163, "start_dag_gen_engine_rvn", 24, 452, 100, v3);
    return 1;
  }
  else
  {
    pthread_create((pthread_t *)&dword_1726CC, 0, (void *(*)(void *))dag_gen_rvn_thread_func, 0);
    return 0;
  }
}
