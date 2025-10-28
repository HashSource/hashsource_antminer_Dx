int __fastcall set_ticketmask_rvn(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 2608;
  HIWORD(v2) = (unsigned int)"Setting_get_addr_RVN" >> 16;
  V_LOCK();
  LOWORD(v5) = -2140;
  HIWORD(v5) = (unsigned int)"_2110" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 424, a2);
  V_UNLOCK();
  LOWORD(v6) = 6248;
  HIWORD(v6) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v6, 170, v2 + 444, 18, 157, 40, v8);
  sub_92F0C(a1, 26, a2);
  *(_DWORD *)(a1 + 408) = a2;
  usleep(0x2710u);
  return 0;
}
