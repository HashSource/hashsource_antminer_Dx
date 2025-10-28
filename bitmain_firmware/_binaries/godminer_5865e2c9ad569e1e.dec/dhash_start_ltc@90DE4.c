int __fastcall dhash_start_ltc(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-1020h] BYREF
  int v8; // [sp+44h] [bp-1004h]
  char v9[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 232));
  LOWORD(v3) = 1368;
  HIWORD(v3) = (unsigned int)"dminer-origin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = 572;
  HIWORD(v4) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_godminer-new/./backend/chip_setting.c" >> 16;
  zlog(g_zc, v4, 170, "dhash_start_ltc", 15, 527, 40, v9);
  sub_90CD8(a1);
  v5 = *(unsigned __int8 *)(a1 + 436);
  result = 0;
  *(_BYTE *)(a1 + 237) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  return result;
}
