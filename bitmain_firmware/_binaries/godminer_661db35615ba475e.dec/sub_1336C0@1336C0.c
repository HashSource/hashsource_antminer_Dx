int __fastcall sub_1336C0(int a1)
{
  _DWORD v3[4]; // [sp+10h] [bp-1014h] BYREF
  char v4[4100]; // [sp+20h] [bp-1004h] BYREF

  v3[0] = 1;
  v3[2] = 4718593;
  v3[3] = 0;
  v3[1] = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v4, 0x1000u, 0, "set analog value %08x", 1);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_ETH",
    26,
    480,
    60,
    v4);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
}
