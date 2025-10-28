int __fastcall check_bist_rx_running_one_lane(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  _QWORD *v8; // r4
  _QWORD *v9; // r9
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r3
  _BYTE v15[20]; // [sp+18h] [bp-1044h] BYREF
  _QWORD v16[5]; // [sp+2Ch] [bp-1030h] BYREF
  char v17[4100]; // [sp+58h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v17, 0x1000u, 0, "%s...", "check_bist_rx_running_one_lane");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_bist_rx_running_one_lane",
    30,
    8974,
    60,
    v17);
  v7 = sub_D47F8(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x11, (int)v15);
  if ( v7 > 0 )
  {
    v8 = v16;
    v9 = &v16[v7];
    do
    {
      v13 = *((_DWORD *)v8 - 4);
      __pld(v8);
      if ( (v13 & 0x400) != 0 || (v13 & 0x8000000) == 0 )
      {
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v17,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x rx bist run failed",
          a4,
          *((unsigned __int8 *)v8 - 20),
          *((unsigned __int8 *)v8 - 19));
        pthread_mutex_unlock(&stru_3B526C);
        v10 = g_zc;
        v11 = 100;
        v12 = 8983;
      }
      else
      {
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v17,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x rx bist is running",
          a4,
          *((unsigned __int8 *)v8 - 20),
          *((unsigned __int8 *)v8 - 19));
        pthread_mutex_unlock(&stru_3B526C);
        v10 = g_zc;
        v11 = 60;
        v12 = 8980;
      }
      ++v8;
      zlog(
        v10,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "check_bist_rx_running_one_lane",
        30,
        v12,
        v11,
        v17);
    }
    while ( v8 != v9 );
  }
  return 0;
}
