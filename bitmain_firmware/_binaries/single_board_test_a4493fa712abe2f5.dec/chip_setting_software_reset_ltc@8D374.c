int __fastcall chip_setting_software_reset_ltc(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v3, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 52);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_software_reset_ltc",
    31,
    38,
    20,
    v3);
  v3[2] = 3407873;
  v3[0] = 0;
  v3[1] = 0;
  v3[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
}
