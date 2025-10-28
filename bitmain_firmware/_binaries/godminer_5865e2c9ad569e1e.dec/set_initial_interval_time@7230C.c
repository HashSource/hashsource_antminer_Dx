int __fastcall set_initial_interval_time(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -15404;
  HIWORD(v2) = (unsigned int)"_ETH" >> 16;
  V_LOCK();
  LOWORD(v5) = -11848;
  HIWORD(v5) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 616);
  V_UNLOCK();
  LOWORD(v6) = -12340;
  HIWORD(v6) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
  zlog(g_zc, v6, 170, v2 + 644, 25, 168, 20, v8);
  sub_7002C(a1, 59, a2);
  usleep(0x2710u);
  return 0;
}
