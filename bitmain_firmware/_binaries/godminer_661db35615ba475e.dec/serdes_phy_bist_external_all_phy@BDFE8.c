int __fastcall serdes_phy_bist_external_all_phy(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r2
  _DWORD v11[2]; // [sp+10h] [bp-100Ch] BYREF
  char v12[4100]; // [sp+18h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v12, 0x1000u, 0, "%s...", "serdes_phy_bist_external_all_phy");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10662,
    60,
    v12);
  sub_8F7C8(
    a1,
    0xFFu,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * (_BYTE)a4) & 0x70);
  sub_8F7C8(a1, 0xFFu, 144, -15);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  sub_8F7C8(a1, 0xFFu, 144, (2 * (_BYTE)a4) & 0xE);
  sub_8F7C8(a1, 0xFFu, 145, -2147422190);
  sub_8F7C8(a1, 0xFFu, 144, 0);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  v8 = a4 & 0xF;
  v11[1] = 0;
  switch ( v8 )
  {
    case 1:
      v9 = 7;
      goto LABEL_5;
    case 2:
      v9 = 9;
LABEL_5:
      strcpy((char *)v11, "prbs");
LABEL_6:
      sprintf((char *)&v11[1], "%2d", v9);
      goto LABEL_7;
    case 3:
      v9 = 11;
      goto LABEL_5;
    case 4:
      v9 = 13;
      goto LABEL_5;
    case 5:
      v9 = 15;
      goto LABEL_5;
    case 6:
      v9 = 23;
      goto LABEL_5;
    case 7:
      v9 = 31;
      strcpy((char *)v11, "prbs");
      goto LABEL_6;
  }
  strcpy((char *)v11, "clock");
LABEL_7:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v12, 0x1000u, 0, "%s %s...", "serdes_phy_bist_external_all_phy", v11);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10696,
    60,
    v12);
  sub_8F7C8(a1, 0xFFu, 98, 255);
  enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
  read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
  sub_8F7C8(a1, 0xFFu, 144, -9);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  sub_8F7C8(a1, 0xFFu, 144, 8);
  sub_8F7C8(a1, 0xFFu, 145, -2147422063);
  sub_8F7C8(a1, 0xFFu, 144, -1073741825);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  sub_8F7C8(a1, 0xFFu, 144, 0x40000000);
  sub_8F7C8(a1, 0xFFu, 145, -2147422089);
  sub_8F7C8(a1, 0xFFu, 144, 0);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v12, 0x1000u, 0, "wait rx bist done!");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10733,
    60,
    v12);
  usleep(0xF42400u);
  sub_49BF4(a1, a2, a3);
  usleep(0x493E0u);
  sub_8F7C8(a1, 0xFFu, 144, -9);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  sub_8F7C8(a1, 0xFFu, 144, 0);
  sub_8F7C8(a1, 0xFFu, 145, -2147422063);
  sub_8F7C8(a1, 0xFFu, 144, 0);
  sub_8F7C8(a1, 0xFFu, 145, -2147422207);
  sub_134374(a1);
  sub_49E5C(a1, a2, a3);
  check_bist_error(a1, a2, 255, a3);
  if ( a4 )
  {
    enable_rx_equalizer_tuning(a1, a2, 255, a3);
    enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
    read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
    sub_8F7C8(a1, 0xFFu, 144, -9);
    sub_8F7C8(a1, 0xFFu, 145, -2147422207);
    sub_8F7C8(a1, 0xFFu, 144, 8);
    sub_8F7C8(a1, 0xFFu, 145, -2147422063);
    sub_8F7C8(a1, 0xFFu, 144, -1073741825);
    sub_8F7C8(a1, 0xFFu, 145, -2147422207);
    sub_8F7C8(a1, 0xFFu, 144, 0x40000000);
    sub_8F7C8(a1, 0xFFu, 145, -2147422089);
    sub_8F7C8(a1, 0xFFu, 144, 0);
    sub_8F7C8(a1, 0xFFu, 145, -2147422207);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "wait rx bist done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist_external_all_phy",
      32,
      10780,
      60,
      v12);
    usleep(0xF42400u);
    sub_49BF4(a1, a2, a3);
    usleep(0x493E0u);
    sub_8F7C8(a1, 0xFFu, 144, -9);
    sub_8F7C8(a1, 0xFFu, 145, -2147422207);
    sub_8F7C8(a1, 0xFFu, 144, 0);
    sub_8F7C8(a1, 0xFFu, 145, -2147422063);
    sub_8F7C8(a1, 0xFFu, 144, 0);
    sub_8F7C8(a1, 0xFFu, 145, -2147422207);
    sub_134374(a1);
    sub_49E5C(a1, a2, a3);
    check_bist_error(a1, a2, 255, a3);
  }
  sub_8F7C8(a1, 0xFFu, 98, 0);
  return 0;
}
