int __fastcall stop_mining_kas(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -3992;
  HIWORD(v1) = (unsigned int)&unk_14F184 >> 16;
  V_LOCK();
  LOWORD(v3) = -11840;
  HIWORD(v3) = (unsigned int)" cnt: %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v3, v1 + 1368);
  V_UNLOCK();
  LOWORD(v4) = -2504;
  HIWORD(v4) = (unsigned int)" passed! diff %d expected_diff %d " >> 16;
  zlog(g_zc, v4, 170, v1 + 1384, 15, 1007, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[11])(*(_DWORD *)(a1 + 228));
  *(_BYTE *)(a1 + 237) = 0;
  *(_BYTE *)(a1 + 238) = 0;
  sub_845E4((int *)a1, 127);
  set_reset_kas(a1);
  set_core_reset_kas(a1);
  set_inactive_kas(a1);
  return 0;
}
