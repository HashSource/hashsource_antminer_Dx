void *runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v2; // [sp+14h] [bp-13C0h]
  _QWORD v3[119]; // [sp+18h] [bp-13BCh] BYREF
  char v4[4100]; // [sp+3D0h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "runtime_ctrl_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    170,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v4);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[33]) = 14156;
  HIDWORD(v3[41]) = 210;
  LODWORD(v3[42]) = 500;
  LODWORD(v3[35]) = 6517868;
  HIDWORD(v3[43]) = sensor_info_ltc_1489;
  v3[44] = qword_1637C4;
  v3[45] = qword_1637CC;
  v3[46] = qword_1637D4;
  v0 = calloc(1u, 0x3B8u);
  LODWORD(v3[2]) = dhash_mining_start_base;
  HIDWORD(v3[2]) = dhash_mining_stop_base;
  LODWORD(v3[3]) = dhash_mining_reset_base;
  HIDWORD(v3[3]) = backend_exit_base;
  LODWORD(v3[4]) = push_work_base;
  HIDWORD(v3[4]) = async_push_work_base;
  LODWORD(v3[5]) = pop_ans_base;
  HIDWORD(v3[5]) = try_pop_ans_base;
  LODWORD(v3[7]) = softreset_all_chip_ltc;
  HIDWORD(v3[7]) = setup_all_chip_ltc;
  LODWORD(v3[8]) = work_2_packet_ltc;
  HIDWORD(v3[8]) = packet_2_nonce_ltc;
  LODWORD(v3[9]) = check_nonce_ltc;
  HIDWORD(v3[9]) = global_idx_init_ltc;
  LODWORD(v3[10]) = global_idx_free_ltc;
  HIDWORD(v3[10]) = set_baud_ltc;
  LODWORD(v3[11]) = sub_83EF4;
  HIDWORD(v3[11]) = sub_83DD8;
  LODWORD(v3[12]) = sub_82090;
  HIDWORD(v3[12]) = sub_81B00;
  LODWORD(v3[13]) = sub_81B08;
  HIDWORD(v3[13]) = sub_83B04;
  LODWORD(v3[14]) = sub_82E84;
  HIDWORD(v3[14]) = sub_83730;
  LODWORD(v3[15]) = sub_83708;
  LODWORD(v3[16]) = get_chip_status_ltc;
  v2 = v0;
  LODWORD(v3[0]) = backend_init_base;
  HIDWORD(v3[0]) = reset_base;
  HIDWORD(v3[16]) = get_theory_hashrate_ltc;
  LODWORD(v3[17]) = get_sale_hashrate_ltc;
  HIDWORD(v3[17]) = get_qualify_hashrate_ltc;
  LODWORD(v3[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(v3[18]) = set_sensor_extern_mode_ltc;
  LODWORD(v3[19]) = read_sensor_temp_local_ltc;
  HIDWORD(v3[20]) = overclock_update_ltc;
  HIDWORD(v3[19]) = read_sensor_temp_remote_ltc;
  HIDWORD(v3[21]) = get_packet_remain_len_ltc;
  LODWORD(v3[23]) = adjust_working_freq_ltc;
  LODWORD(v3[21]) = get_pcba_test_level_ltc;
  LODWORD(v3[25]) = sub_820A8;
  HIDWORD(v3[25]) = top_init_ltc;
  HIDWORD(v3[23]) = sub_8333C;
  LODWORD(v3[20]) = parameter_update_ltc;
  HIDWORD(v3[28]) = set_inactive_base;
  LODWORD(v3[29]) = set_chip_reg_ltc;
  LODWORD(v3[26]) = dhash_start_ltc;
  LODWORD(v3[24]) = sub_84478;
  HIDWORD(v3[31]) = sync_get_chip_reg_ltc;
  HIDWORD(v3[32]) = sync_get_core_reg_ltc;
  HIDWORD(v3[30]) = set_core_enable_ltc;
  v3[36] = 0x100001489LL;
  v3[37] = 0x7500000078LL;
  LODWORD(v3[28]) = set_chipaddr_base;
  v3[38] = 0x8000003A8LL;
  LODWORD(v3[49]) = 27;
  HIDWORD(v3[97]) = 216;
  HIDWORD(v3[29]) = set_core_reg_ltc;
  LODWORD(v3[30]) = set_core_reg_ltc;
  HIDWORD(v3[39]) = 2;
  HIDWORD(v3[48]) = 2;
  LODWORD(v3[31]) = sync_get_status_ltc;
  HIDWORD(v3[60]) = 2;
  v3[98] = 0x400000070LL;
  LODWORD(v3[118]) = 1;
  v3[117] = 949793;
  v3[99] = 0x900000056LL;
  LODWORD(v3[100]) = 8;
  v3[114] = 0x44D1600042480000LL;
  LODWORD(v3[115]) = 1500;
  memcpy(v0, v3, 0x3B8u);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "runtime_ctrl_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    170,
    "runtime_ctrl_ltc_1489",
    21,
    1060,
    40,
    v4);
  return v2;
}
