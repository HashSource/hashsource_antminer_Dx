int __fastcall div32_20210813_500M_one_lane(int a1, int a2, int a3, int a4)
{
  int v9; // [sp+Ch] [bp-1004h]
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  v9 = a4;
  LOWORD(a4) = (_WORD)a4 << 12;
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "div32_20210813_500M_one_lane",
    a2,
    a3,
    v9);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "div32_20210813_500M_one_lane",
    28,
    10003,
    60,
    v10);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8B, 0xFFFF0000);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFF0000);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8C, 0xFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, (unsigned int)"_all_phy");
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8C, 0);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFF00000);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8D, 0);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8D, 0xFF000000);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFF000000);
  sub_D19C4(a1, a3, a4 & 0xF000 | 0x8E, 0xFFFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFu);
  sub_D19C4(a1, a3, a4 & 0xF000 | 0x8A, 0);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFF000);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 0x8B, 0);
  sub_D19C4(a1, a3, (unsigned __int16)a4 | 1, 0);
  return 0;
}
