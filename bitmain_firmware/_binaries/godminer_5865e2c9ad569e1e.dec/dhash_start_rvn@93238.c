int __fastcall dhash_start_rvn(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+44h] [bp-1008h]
  char v8[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v6, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -12352;
  HIWORD(v3) = (unsigned int)"" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, v3, "dhash_start_rvn");
  V_UNLOCK();
  LOWORD(v4) = 6248;
  HIWORD(v4) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v4, 170, "dhash_start_rvn", 15, 1089, 40, v8);
  result = 0;
  if ( !*(_BYTE *)(a1 + 436) )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
