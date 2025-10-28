int __fastcall get_timeout_count(int a1)
{
  int v2; // r3
  int v3; // r1
  int v4; // r4
  char v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -11848;
  HIWORD(v2) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, "get_timeout_count");
  V_UNLOCK();
  LOWORD(v3) = -12340;
  HIWORD(v3) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
  v4 = 23;
  zlog(g_zc, v3, 170, "get_timeout_count", 17, 184, 0x14u, v6);
  do
  {
    sub_703F8(a1, 255, v4++, 0);
    usleep(0x2710u);
  }
  while ( v4 != 29 );
  return 0;
}
