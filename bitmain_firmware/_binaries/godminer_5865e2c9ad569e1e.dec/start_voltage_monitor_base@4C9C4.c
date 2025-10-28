int __fastcall start_voltage_monitor_base(void *arg)
{
  void *(*v1)(void *); // r2
  int v2; // r3
  int v3; // r1
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -16816;
  HIWORD(v1) = (unsigned int)&loc_4BF18 >> 16;
  if ( pthread_create((pthread_t *)&dword_174FCC, 0, v1, arg) )
  {
    V_LOCK();
    LOWORD(v5) = 25996;
    HIWORD(v5) = (unsigned int)"ck asic num test loop" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 25580;
    HIWORD(v6) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v6, 165, "start_voltage_monitor_base", 26, 411, 100, v7);
    return 5;
  }
  else
  {
    pthread_detach(dword_174FCC);
    V_LOCK();
    LOWORD(v2) = 26028;
    HIWORD(v2) = (unsigned int)"it error!" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 25580;
    HIWORD(v3) = (unsigned int)"or_addr %02x, J0:6" >> 16;
    zlog(g_zc, v3, 165, "start_voltage_monitor_base", 26, 415, 60, v7);
    return 0;
  }
}
