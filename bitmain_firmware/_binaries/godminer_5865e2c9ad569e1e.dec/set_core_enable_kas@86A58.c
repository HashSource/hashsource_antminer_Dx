int __fastcall set_core_enable_kas(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -3992;
  HIWORD(v2) = (unsigned int)&unk_14F184 >> 16;
  V_LOCK();
  LOWORD(v5) = -2140;
  HIWORD(v5) = (unsigned int)"_2110" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 800, a2);
  V_UNLOCK();
  LOWORD(v6) = -2504;
  HIWORD(v6) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v6, 170, v2 + 820, 19, 116, 40, v8);
  sub_844D0(a1, 1, a2);
  usleep(0x2710u);
  return 0;
}
