int __fastcall start_temp_monitor_base(void *arg)
{
  void *(*v1)(void *); // r2
  int v2; // r3
  int v3; // r1
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -16544;
  HIWORD(v1) = (unsigned int)&loc_4C028 >> 16;
  if ( pthread_create((pthread_t *)&dword_174FD0, 0, v1, arg) )
  {
    V_LOCK();
    LOWORD(v5) = 26052;
    HIWORD(v5) = (unsigned int)"eck asic num test, loop:%d done, total failed times:%d" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 25580;
    HIWORD(v6) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v6, 165, "start_temp_monitor_base", 23, 452, 100, v7);
    return 5;
  }
  else
  {
    pthread_detach(dword_174FD0);
    V_LOCK();
    LOWORD(v2) = 26080;
    HIWORD(v2) = (unsigned int)"one, total failed times:%d" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 25580;
    HIWORD(v3) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v3, 165, "start_temp_monitor_base", 23, 456, 60, v7);
    return 0;
  }
}
