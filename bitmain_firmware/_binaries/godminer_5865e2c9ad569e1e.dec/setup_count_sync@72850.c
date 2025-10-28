int __fastcall setup_count_sync(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = -15404;
  HIWORD(v2) = (unsigned int)"_ETH" >> 16;
  V_LOCK();
  LOWORD(v5) = -11848;
  HIWORD(v5) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 856);
  V_UNLOCK();
  LOWORD(v6) = -12340;
  HIWORD(v6) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
  zlog(g_zc, v6, 170, v2 + 876, 16, 231, 20, v8);
  sub_70158(a1, a2, 202, 0);
  sub_70158(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_70158(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
