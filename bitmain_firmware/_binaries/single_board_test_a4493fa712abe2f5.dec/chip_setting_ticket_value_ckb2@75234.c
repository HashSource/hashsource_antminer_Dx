int __fastcall chip_setting_ticket_value_ckb2(int a1, int a2)
{
  int v4; // r11
  _DWORD v6[2]; // [sp+18h] [bp-1014h] BYREF
  int v7; // [sp+20h] [bp-100Ch]
  int v8; // [sp+24h] [bp-1008h]
  char v9[4100]; // [sp+28h] [bp-1004h] BYREF

  v6[1] = 0;
  v7 = 0;
  v8 = 0;
  v6[0] = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v9, 0x1000u, 0, "ticket_mask %s reg %02x tm %02x", "chip_setting_ticket_value_ckb2", 3, a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/chip_setting_ckb2.c",
    78,
    "chip_setting_ticket_value_ckb2",
    30,
    103,
    60,
    v9);
  BYTE1(v8) = *(_DWORD *)(a1 + 184);
  LOBYTE(v8) = -1;
  v7 = 196609;
  BYTE2(v8) = 1;
  v6[0] = (unsigned __int8)a2;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v6);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 228) = (unsigned __int8)a2;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v9, 0x1000u, 0, "set tm %d", a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/chip_setting_ckb2.c",
    78,
    "chip_setting_ticket_value_ckb2",
    30,
    117,
    60,
    v9);
  return v4;
}
