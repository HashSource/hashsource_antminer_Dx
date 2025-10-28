int __fastcall sub_BD954(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v3, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_GRIN32", 1, 8, 20000);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_open_cores_GRIN32",
    29,
    315,
    40,
    v3);
  v3[0] = 1;
  v3[2] = 524289;
  v3[1] = 0;
  v3[3] = 272;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 152))(a1, v3, 20000, 0);
}
