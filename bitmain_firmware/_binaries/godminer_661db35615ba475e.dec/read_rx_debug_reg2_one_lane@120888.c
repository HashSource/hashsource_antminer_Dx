int __fastcall read_rx_debug_reg2_one_lane(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r8
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  a4 <<= 12;
  logfmt_raw(v10, 0x1000u, 0, "%s...", "read_rx_debug_reg2_one_lane");
  pthread_mutex_unlock(&stru_197BB8);
  v7 = a4 | 1;
  v8 = a4 | 0x16;
  a4 |= 0x1Au;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2_one_lane",
    27,
    9286,
    60,
    v10);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 8u);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_133F78(a1, a3, a4);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 8u);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_133F78(a1, a3, a4);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 8u);
  sub_1325F4(a1, (char)a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, (char)a3, v8, 0);
  sub_133F78(a1, a3, a4);
  sub_1325F4(a1, (char)a3, v7, 0);
  return 0;
}
