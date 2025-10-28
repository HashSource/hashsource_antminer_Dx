int __fastcall serdes_phy_bist_internal_digital(int a1, int a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  int v8; // r11
  int v9; // r8
  bool v10; // zf
  int v11; // lr
  int v12; // r12
  int v13; // r10
  int v14; // r11
  void (__fastcall *v15)(int, int *); // r3
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]
  int v21; // [sp+28h] [bp+0h] BYREF
  int v22; // [sp+2Ch] [bp+4h]
  int v23; // [sp+30h] [bp+8h]
  int v24; // [sp+34h] [bp+Ch]

  v8 = 61559;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v21, 0x1000u, 0, "%s...", "serdes_phy_bist_internal_digital");
  pthread_mutex_unlock(&stru_1A8A24);
  v9 = 61441;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_internal_digital",
    32,
    9437,
    60,
    &v21);
  v10 = a4 == 8;
  v11 = 61585;
  if ( a4 != 8 )
  {
    v9 = 1;
    v8 = 119;
    v11 = 145;
  }
  v12 = 61458;
  v17 = a4;
  if ( a4 != 8 )
    v12 = 18;
  v13 = 61513;
  if ( !v10 )
    v13 = 73;
  v18 = v11;
  v19 = v8;
  v14 = v12;
  sub_BF774(a1, a3, v9, 0xFFFFFDF7);
  sub_BF774(a1, a3, v13, 0x208u);
  sub_BF774(a1, a3, v9, 0);
  v22 = 0;
  v24 = (unsigned __int8)a3;
  v23 = 6356993;
  v21 = (a5 << 28) & 0x70000000
      | (a5 << 24) & 0x7000000
      | a5 & 7
      | (a5 << 20) & 0x700000
      | (a5 << 16) & 0x70000
      | (a5 << 12) & 0x7000
      | (a5 << 8) & 0x700
      | (16 * a5) & 0x70;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_BF774(a1, a3, v9, 0xFFFFFFF1);
  sub_BF774(a1, a3, v14, (2 * a5) & 0xE);
  sub_BF774(a1, a3, v9, 0);
  v23 = 6422529;
  v22 = 0;
  v24 = (unsigned __int8)a3;
  v21 = 255;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_BF774(a1, a3, v9, 0xFFFFFFF7);
  sub_BF774(a1, a3, v18, 8u);
  sub_BF774(a1, a3, v9, 0xBFFFFFFF);
  sub_BF774(a1, a3, v19, 0x40000000u);
  sub_BF774(a1, a3, v9, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_tx_running(a1, a2, a3, v17);
  check_bist_rx_running(a1, a2, a3, v17);
  sub_BF774(a1, a3, v9, 0xFFFFFFF7);
  sub_BF774(a1, a3, v18, 0);
  sub_BF774(a1, a3, v9, 0);
  v23 = 1;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v22 = 0;
  v24 = (unsigned __int8)a3;
  HIWORD(v23) = 98;
  v21 = 0;
  v15(a1, &v21);
  usleep((__useconds_t)&stru_18694.st_info);
  check_ref_clock_ready(a1, a2, a3);
  check_bist_done(a1, a2, a3, v17);
  check_bist_error(a1, a2, a3, v17);
  return 0;
}
