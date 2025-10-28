int __fastcall disable_mac(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -15404;
  HIWORD(v1) = (unsigned int)"_ETH" >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 1300);
  V_UNLOCK();
  LOWORD(v4) = -12340;
  HIWORD(v4) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
  zlog(g_zc, v4, 170, v1 + 1312, 11, 532, 20, v6);
  sub_7002C(a1, 143, 0);
  usleep(0x2710u);
  return 0;
}
