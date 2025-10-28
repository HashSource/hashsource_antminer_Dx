int __fastcall chip_setting_misc_ckb2(int a1)
{
  _DWORD v3[4]; // [sp+10h] [bp-1010h] BYREF
  char v4[4096]; // [sp+20h] [bp-1000h] BYREF

  v3[3] = 0;
  v3[0] = 7479056;
  v3[2] = 1835009;
  v3[1] = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v4, 0x1000u, 0, "set_misc value %08x", 7479056);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/chip_setting_ckb2.c",
    78,
    "chip_setting_misc_ckb2",
    22,
    93,
    60,
    v4);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
}
