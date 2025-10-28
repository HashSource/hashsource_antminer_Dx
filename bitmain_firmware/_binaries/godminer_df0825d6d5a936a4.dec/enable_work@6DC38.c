int __fastcall enable_work(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -4608;
  HIWORD(v2) = (unsigned int)&unk_132558 >> 16;
  V_LOCK();
  LOWORD(v5) = -1040;
  HIWORD(v5) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 1408);
  V_UNLOCK();
  LOWORD(v6) = -1528;
  HIWORD(v6) = (unsigned int)&unk_133160 >> 16;
  zlog(g_zc, v6, 170, v2 + 1420, 11, 678, 20, v8);
  sub_6935C(a1, 240, a2);
  usleep(0x2710u);
  return 0;
}
