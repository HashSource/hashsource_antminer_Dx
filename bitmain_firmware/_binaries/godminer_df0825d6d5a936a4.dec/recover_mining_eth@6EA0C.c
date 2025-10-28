int __fastcall recover_mining_eth(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK();
  logfmt_raw((char *)v8, 0x1000u, 0, "%s ...", "recover_mining_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "recover_mining_eth",
    18,
    1513,
    60,
    v8);
  get_chip_dag_packet_num(a1);
  v9 = 1310720;
  v8[0] = 272381185;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 232);
  v10 = 0;
  v8[1] = 0;
  LOBYTE(v9) = 1;
  v2(a1, v8);
  usleep((__useconds_t)&stru_1869C.st_value);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 212));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK();
    V_INT((int)v6, "chain", *(int *)(a1 + 216));
    logfmt_raw(
      (char *)v8,
      0x1000u,
      0,
      v7,
      v6[0],
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6],
      v7,
      "eth phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "recover_mining_eth",
      18,
      1528,
      60,
      v8);
    return 31;
  }
  else
  {
    setup_serdes_phy(a1, eeprom_phy_seq_level);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 948) >> 6);
    v4 = *(_DWORD *)(a1 + 392);
    if ( !v4 )
      v4 = 32;
    set_ticketmask(a1, v4);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 221) = 1;
    *(_BYTE *)(a1 + 222) = 1;
    return 0;
  }
}
