int __fastcall disable_cores(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -4608;
  HIWORD(v1) = (unsigned int)&unk_132558 >> 16;
  V_LOCK();
  LOWORD(v3) = -1040;
  HIWORD(v3) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 2504);
  V_UNLOCK();
  LOWORD(v4) = -1528;
  HIWORD(v4) = (unsigned int)&unk_133160 >> 16;
  zlog(g_zc, v4, 170, v1 + 2520, 13, 731, 20, v6);
  sub_6935C(a1, 13, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
