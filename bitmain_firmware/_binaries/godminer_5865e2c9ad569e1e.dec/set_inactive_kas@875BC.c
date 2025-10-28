int __fastcall set_inactive_kas(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -3992;
  HIWORD(v1) = (unsigned int)&unk_14F184 >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 1248);
  V_UNLOCK();
  LOWORD(v4) = -2504;
  HIWORD(v4) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v4, 170, v1 + 1268, 16, 179, 40, v6);
  (*(void (__fastcall **)(int))(a1 + 244))(a1);
  usleep(0x2710u);
  return 0;
}
