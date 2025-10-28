int __fastcall set_baud_rvn(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  int v6; // r1
  int v7; // r4
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  char v11[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = 620;
  HIWORD(v4) = (unsigned int)" %lld" >> 16;
  V_INT((int)v9, v4, *(int *)(a1 + 232));
  LOWORD(v5) = -12156;
  HIWORD(v5) = (unsigned int)"ue %04x resp value %04x" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = 6248;
  HIWORD(v6) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v6, 170, "set_baud_rvn", 12, 1173, 60, v11);
  v7 = sub_93308(a1, (int)&loc_121F10);
  usleep(0x2710u);
  return v7 | sub_93308(a1, (int)&loc_121F10 + 1);
}
