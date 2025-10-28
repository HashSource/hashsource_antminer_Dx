int __fastcall set_nonce_cycle_limit(int a1)
{
  unsigned int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 940)) * 12.0);
  sub_7F768(a1, 14, HIWORD(v2));
  sub_7F768(a1, 15, (unsigned __int16)v2);
  V_LOCK();
  LOWORD(v3) = 620;
  HIWORD(v3) = (unsigned int)" %lld" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 232));
  LOWORD(v4) = -4028;
  HIWORD(v4) = (unsigned int)&unk_14F160 >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2);
  V_UNLOCK();
  LOWORD(v5) = -4556;
  HIWORD(v5) = (unsigned int)"n temperature between two readings(%d, %d), trimming remote temp(%d, %d)" >> 16;
  zlog(g_zc, v5, 170, "set_nonce_cycle_limit", 21, 524, 40, v9);
  return 0;
}
