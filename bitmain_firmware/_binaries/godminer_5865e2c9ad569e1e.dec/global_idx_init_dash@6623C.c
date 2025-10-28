int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  void *v3; // r5
  int v4; // r3
  int v5; // r1
  int v6; // r3
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 800) = v2;
  v3 = v2;
  V_LOCK();
  LOWORD(v4) = -17560;
  HIWORD(v4) = (unsigned int)"T_MASK_DASH_1766 %d" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v4, v3);
  V_UNLOCK();
  LOWORD(v5) = -17536;
  LOWORD(v6) = -19020;
  HIWORD(v6) = (unsigned int)"freq_DASH_1766" >> 16;
  HIWORD(v5) = (unsigned int)"info error" >> 16;
  zlog(g_zc, v5, 172, v6, 20, 57, 20, v8);
  return 0;
}
