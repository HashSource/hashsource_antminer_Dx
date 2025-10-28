int __fastcall chip_setting_ticket_value_dcr(int a1, int a2)
{
  int v3; // r2
  int v4; // r11
  _DWORD v7[2]; // [sp+18h] [bp-1014h] BYREF
  int v8; // [sp+20h] [bp-100Ch]
  int v9; // [sp+24h] [bp-1008h]
  char v10[4100]; // [sp+28h] [bp-1004h] BYREF

  v7[1] = 0;
  v8 = 0;
  v9 = 0;
  v7[0] = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v10, 0x1000u, 0, "ticket_mask %s reg %02x tm %02x", "chip_setting_ticket_value_dcr", 3, a2);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/chip_setting_dcr.c",
    159,
    "chip_setting_ticket_value_dcr",
    29,
    103,
    60,
    v10);
  v3 = *(_DWORD *)(a1 + 196);
  v8 = 196609;
  BYTE2(v9) = 1;
  BYTE1(v9) = v3;
  LOBYTE(v9) = -1;
  v7[0] = (unsigned __int8)a2;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v7);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = (unsigned __int8)a2;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v10, 0x1000u, 0, "set tm %d", a2);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/chip_setting_dcr.c",
    159,
    "chip_setting_ticket_value_dcr",
    29,
    117,
    60,
    v10);
  return v4;
}
