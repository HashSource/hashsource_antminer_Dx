int __fastcall dhash_mining_start_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 2608;
  HIWORD(v1) = (unsigned int)"Setting_get_addr_RVN" >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 48);
  V_UNLOCK();
  LOWORD(v4) = 6248;
  HIWORD(v4) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v4, 170, v1 + 72, 22, 2301, 40, v6);
  sub_92F0C(a1, 28, 2);
  usleep(0x2710u);
  sub_92F0C(a1, 15, 3);
  usleep(0x2710u);
  sub_92F0C(a1, 207, 1);
  usleep(0x2710u);
  sub_92F0C(a1, 0, 3);
  usleep(0x2710u);
  sub_92F0C(a1, 28, 0);
  usleep(0x2710u);
  sub_92F0C(a1, 34, 20);
  usleep(0x2710u);
  sub_92F0C(a1, 33, 1);
  usleep(0x2710u);
  sub_92F0C(a1, 35, 0);
  usleep(0x2710u);
  sub_92F0C(a1, 36, 10);
  usleep(0x2710u);
  sub_92F0C(a1, 38, 0);
  usleep(0x2710u);
  sub_92F0C(a1, 31, 0);
  usleep(0x2710u);
  sub_92F0C(a1, 73, 1);
  usleep(0x2710u);
  sub_92F0C(a1, 72, 1);
  usleep(0x2710u);
  sub_92F0C(a1, 72, 0);
  usleep(0x2710u);
  *(_BYTE *)(a1 + 238) = 1;
  return 0;
}
