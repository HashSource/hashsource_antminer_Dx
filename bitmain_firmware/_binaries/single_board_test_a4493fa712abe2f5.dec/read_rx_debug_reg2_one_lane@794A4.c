int __fastcall read_rx_debug_reg2_one_lane(_DWORD *a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r8
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  a4 <<= 12;
  logfmt_raw(v10, 0x1000u, 0, "%s...", "read_rx_debug_reg2_one_lane");
  pthread_mutex_unlock(&stru_3B526C);
  v7 = a4 | 1;
  v8 = a4 | 0x16;
  a4 |= 0x1Au;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "read_rx_debug_reg2_one_lane",
    27,
    9286,
    60,
    v10);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 8u);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D469C(a1, a3, a4);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 8u);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D469C(a1, a3, a4);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 8u);
  sub_D19C4((int)a1, (char)a3, v7, 0xFFFFFFF7);
  sub_D19C4((int)a1, (char)a3, v8, 0);
  sub_D469C(a1, a3, a4);
  sub_D19C4((int)a1, (char)a3, v7, 0);
  return 0;
}
