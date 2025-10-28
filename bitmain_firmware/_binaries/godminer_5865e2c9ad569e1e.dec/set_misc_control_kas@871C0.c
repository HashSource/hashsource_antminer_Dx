int __fastcall set_misc_control_kas(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -3992;
  HIWORD(v1) = (unsigned int)&unk_14F184 >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1 + 1120);
  V_UNLOCK();
  LOWORD(v4) = -2504;
  HIWORD(v4) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v4, 170, v1 + 1144, 20, 161, 40, v6);
  v6[2] = 1835009;
  v6[3] = 0;
  v6[1] = 0;
  v6[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v6);
  usleep(0x2710u);
  return 0;
}
