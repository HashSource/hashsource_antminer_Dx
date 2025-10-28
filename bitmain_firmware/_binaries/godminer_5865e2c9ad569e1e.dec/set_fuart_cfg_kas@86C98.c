int __fastcall set_fuart_cfg_kas(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -3992;
  HIWORD(v1) = (unsigned int)&unk_14F184 >> 16;
  V_LOCK();
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1 + 912);
  V_UNLOCK();
  LOWORD(v4) = -2504;
  HIWORD(v4) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v4, 170, v1 + 932, 17, 138, 40, v7);
  v8 = 6291456;
  v9 = 0;
  v7[1] = 0;
  v7[0] = 32;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  LOBYTE(v8) = 1;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
