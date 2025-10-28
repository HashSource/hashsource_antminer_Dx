int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r6
  int v3; // s15
  float v4; // s14
  float v5; // s15
  float v6; // s16
  void (__fastcall *v7)(int, _DWORD *); // r3
  void (__fastcall *v8)(int, _DWORD *); // r3
  void *v9; // r0
  char v10; // r9
  int v11; // r7
  char v12; // r0
  int v14; // r7
  int v15; // [sp+4h] [bp-1030h]
  unsigned __int8 v16; // [sp+1Eh] [bp-1016h] BYREF
  unsigned __int8 v17; // [sp+1Fh] [bp-1015h] BYREF
  _DWORD v18[2]; // [sp+20h] [bp-1014h] BYREF
  int v19; // [sp+28h] [bp-100Ch]
  int v20; // [sp+2Ch] [bp-1008h]
  _DWORD v21[2]; // [sp+30h] [bp-1004h] BYREF
  int v22; // [sp+38h] [bp-FFCh]
  int v23; // [sp+3Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "setup_all_chip_dash\n");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v21);
  v17 = 0;
  v16 = 0;
  if ( (unsigned __int16)set_voltage_by_steps(dword_12C104, (unsigned __int8)byte_12C0F0) )
  {
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
      60,
      "set_check_asic_voltage",
      22,
      295,
      60,
      v21);
  }
  v2 = 25;
  do
  {
    sub_9E014(a1);
    usleep(0x61A8u);
    v3 = v2;
    v2 += 25;
    v4 = (float)v3;
    v5 = *(float *)(a1 + 732);
  }
  while ( (float)(v4 + 50.0) <= v5 );
  v6 = v4 + 25.0;
  if ( v5 > (float)(v4 + 25.0) )
  {
    sub_9E014(a1);
    usleep(0x61A8u);
    v6 = *(float *)(a1 + 732);
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "Set chip final freq=%f", v6);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v21);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_DASH", 68);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_software_reset_DASH",
    31,
    108,
    20,
    v21);
  v21[0] = 1;
  v22 = 4456448;
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  v21[1] = 0;
  v23 = 0;
  LOBYTE(v22) = 1;
  v7(a1, v21);
  usleep(0x4E20u);
  eeprom_read(*(_DWORD *)(a1 + 124), 0xC3u, (int)&v17, 1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "read marker %x", v17);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "setup_all_chip_dash",
    19,
    357,
    60,
    v21);
  if ( v17 == 165 )
  {
    *(_BYTE *)(a1 + 294) = 1;
    eeprom_read(*(_DWORD *)(a1 + 124), 0xC4u, (int)&v16, 1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v21, 0x1000u, 0, "read eeprom high hashrate: %02x", v16);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "setup_all_chip_dash",
      19,
      361,
      20,
      v21);
    v14 = v16;
    eeprom_read(*(_DWORD *)(a1 + 124), 0xC5u, (int)&v16, 1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v21, 0x1000u, 0, "read eeprom low hashrate: %02x", v16);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v21);
    *(double *)(a1 + 296) = (double)(v16 | (v14 << 8)) * 1000000000.0;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      (char *)v21,
      0x1000u,
      0,
      "chain%d  avg hashrate is %f",
      *(_DWORD *)(a1 + 124),
      v15,
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 300));
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "setup_all_chip_dash",
      19,
      367,
      20,
      v21);
  }
  v18[1] = 0;
  v18[0] = 0;
  v19 = 0;
  v20 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, 255);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v21);
  v18[0] = 255;
  LOWORD(v20) = 2815;
  v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  v19 = 1310721;
  v8(a1, v18);
  *(_DWORD *)(a1 + 228) = 255;
  v9 = calloc(1u, 0xB0u);
  v10 = *(_BYTE *)(a1 + 120);
  v11 = (int)v9;
  v12 = rand();
  memset((void *)(v11 + 40), (unsigned __int8)(v10 + v12), 0x50u);
  push_work_base(a1, v11);
  free((void *)v11);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v21, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "setup_all_chip_dash",
    19,
    378,
    60,
    v21);
  sub_D2B8C(a1);
  if ( (unsigned __int16)set_voltage_by_steps(dword_12C0FC, (unsigned __int8)byte_12C0F0) )
  {
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "%s error!", "set_working_voltage");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
      60,
      "set_working_voltage",
      19,
      277,
      60,
      v21);
  }
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
