int __fastcall set_inactive_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 2608;
  HIWORD(v1) = (unsigned int)"Setting_get_addr_RVN" >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 712);
  V_UNLOCK();
  LOWORD(v4) = 6248;
  HIWORD(v4) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v4, 170, v1 + 732, 16, 216, 40, v6);
  (*(void (__fastcall **)(int))(a1 + 244))(a1);
  usleep(0x2710u);
  return 0;
}
