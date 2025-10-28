int __fastcall set_chip0_1_work_1_pe_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-20h] BYREF
  int v8; // [sp+44h] [bp-4h]
  char v9[4100]; // [sp+48h] [bp+0h] BYREF

  LOWORD(v2) = 2608;
  V_LOCK();
  LOWORD(v3) = 620;
  HIWORD(v3) = (unsigned int)" %lld" >> 16;
  HIWORD(v2) = (unsigned int)"Setting_get_addr_RVN" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 232));
  LOWORD(v4) = -11848;
  HIWORD(v4) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2 + 3180);
  V_UNLOCK();
  LOWORD(v5) = 6248;
  HIWORD(v5) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v5, 170, v2 + 3208, 25, 884, 60, v9);
  sub_94708(a1, 0);
  usleep(0x2710u);
  sub_94708(a1, 1);
  usleep(0x2710u);
  return 0;
}
