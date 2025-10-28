int __fastcall enable_rx_equalizer_tuning_one_lane(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r6
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "enable_rx_equalizer_tuning_one_lane",
    a2,
    a3,
    a4);
  pthread_mutex_unlock(&stru_3B526C);
  v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_rx_equalizer_tuning_one_lane",
    35,
    3571,
    60,
    v11);
  sub_D19C4(a1, a3, v8, 0xFFBFFFFF);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_D19C4(a1, a3, v8, 0xFFBFFFFF);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0x400000u);
  sub_D19C4(a1, a3, v8, 0xFFBFFFFF);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFF7FF);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x37, 0x800u);
  sub_D19C4(a1, a3, v8, 0xBFFFFFFF);
  v9 = (unsigned __int16)((_WORD)a4 << 12) | 0x98;
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x7E, 0x40000000u);
  sub_D19C4(a1, a3, v8, 0xFEFFFFFF);
  sub_D19C4(a1, a3, v9, 0);
  sub_D19C4(a1, a3, v8, 0xFEFFFFFF);
  sub_D19C4(a1, a3, v9, 0x1000000u);
  sub_BE26C(a1, a2, a3, a4);
  sub_D19C4(a1, a3, v8, 0xFEFFFFFF);
  sub_D19C4(a1, a3, v9, 0);
  sub_D19C4(a1, a3, v8, 0);
  sub_BE0CC(a1, a2, a3, a4);
  return 0;
}
