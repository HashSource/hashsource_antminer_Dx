int __fastcall stop_mining_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v1) = 2608;
  HIWORD(v1) = (unsigned int)"Setting_get_addr_RVN" >> 16;
  V_LOCK();
  LOWORD(v3) = -11840;
  HIWORD(v3) = (unsigned int)" cnt: %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v3, v1 + 752);
  V_UNLOCK();
  LOWORD(v4) = 6248;
  HIWORD(v4) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v4, 170, v1 + 768, 15, 1904, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[11])(*(_DWORD *)(a1 + 228));
  *(_BYTE *)(a1 + 237) = 0;
  *(_BYTE *)(a1 + 238) = 0;
  set_ticketmask_rvn(a1, 63);
  set_reset_rvn(a1);
  set_core_reset_rvn(a1);
  set_inactive_rvn(a1);
  return 0;
}
