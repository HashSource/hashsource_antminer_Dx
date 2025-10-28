void *runtime_ctrl_ltc_1489()
{
  void *v0; // r6
  _QWORD v2[148]; // [sp+10h] [bp-14A4h] BYREF
  char v3[4100]; // [sp+4B0h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "runtime_ctrl_ltc() in");
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
    v3);
  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = backend_init_base;
  HIDWORD(v2[0]) = reset_base;
  LODWORD(v2[2]) = dhash_mining_start_base;
  LODWORD(v2[3]) = dhash_mining_stop_base;
  HIDWORD(v2[3]) = dhash_mining_reset_base;
  HIDWORD(v2[4]) = push_work_base;
  LODWORD(v2[5]) = async_push_work_base;
  HIDWORD(v2[5]) = pop_ans_base;
  LODWORD(v2[6]) = try_pop_ans_base;
  HIDWORD(v2[7]) = softreset_all_chip_ltc;
  LODWORD(v2[8]) = setup_all_chip_ltc;
  HIDWORD(v2[8]) = work_2_packet_ltc;
  LODWORD(v2[9]) = packet_2_nonce_ltc;
  HIDWORD(v2[9]) = check_nonce_ltc;
  LODWORD(v2[10]) = global_idx_init_ltc;
  HIDWORD(v2[10]) = global_idx_free_ltc;
  LODWORD(v2[11]) = set_baud_ltc;
  HIDWORD(v2[11]) = sub_A0CA0;
  LODWORD(v2[12]) = sub_A0B84;
  HIDWORD(v2[12]) = sub_9EE78;
  LODWORD(v2[13]) = sub_9E8E8;
  HIDWORD(v2[13]) = sub_9E8F0;
  LODWORD(v2[14]) = sub_A08B0;
  HIDWORD(v2[14]) = sub_9FC6C;
  LODWORD(v2[15]) = sub_A04DC;
  HIDWORD(v2[15]) = sub_A04B4;
  HIDWORD(v2[16]) = get_chip_status_ltc;
  LODWORD(v2[17]) = get_theory_hashrate_ltc;
  HIDWORD(v2[17]) = get_sale_hashrate_ltc;
  LODWORD(v2[18]) = get_qualify_hashrate_ltc;
  HIDWORD(v2[18]) = get_qualify_nonce_num_ltc;
  LODWORD(v2[4]) = backend_exit_base;
  LODWORD(v2[19]) = set_sensor_extern_mode_ltc;
  HIDWORD(v2[19]) = read_sensor_temp_local_ltc;
  LODWORD(v2[20]) = read_sensor_temp_remote_ltc;
  HIDWORD(v2[20]) = parameter_update_ltc;
  LODWORD(v2[21]) = overclock_update_ltc;
  HIDWORD(v2[21]) = get_pcba_test_level_ltc;
  LODWORD(v2[22]) = get_packet_remain_len_ltc;
  HIDWORD(v2[23]) = adjust_working_freq_ltc;
  LODWORD(v2[24]) = sub_A00E8;
  HIDWORD(v2[24]) = set_frequency_by_temp_single_base;
  LODWORD(v2[25]) = set_frequency_single_base;
  LODWORD(v2[26]) = sub_A11D4;
  LODWORD(v2[27]) = sub_9EE90;
  HIDWORD(v2[27]) = top_init_ltc;
  HIDWORD(v2[28]) = dhash_start_ltc;
  HIDWORD(v2[33]) = set_chipaddr_base;
  LODWORD(v2[34]) = set_inactive_base;
  HIDWORD(v2[34]) = set_chip_reg_ltc;
  LODWORD(v2[36]) = set_core_enable_ltc;
  HIDWORD(v2[36]) = sync_get_status_ltc;
  LODWORD(v2[37]) = sync_get_chip_reg_ltc;
  LODWORD(v2[40]) = 14156;
  LODWORD(v2[42]) = 6517868;
  v2[43] = 0x100001489LL;
  HIDWORD(v2[39]) = sync_get_core_reg_ltc;
  v2[44] = 0x7500000078LL;
  LODWORD(v2[35]) = set_core_reg_ltc;
  HIDWORD(v2[35]) = set_core_reg_ltc;
  HIDWORD(v2[46]) = 2;
  v2[45] = 0x8000003A8LL;
  LODWORD(v2[108]) = 8;
  HIDWORD(v2[48]) = 210;
  LODWORD(v2[49]) = 500;
  HIDWORD(v2[55]) = 2;
  HIDWORD(v2[67]) = 2;
  HIDWORD(v2[50]) = sensor_info_ltc_1489;
  v2[51] = qword_193AF4;
  v2[52] = qword_193AFC;
  LODWORD(v2[128]) = 1;
  v2[124] = 0x44D1600042480000LL;
  v2[53] = qword_193B04;
  LODWORD(v2[56]) = 27;
  HIDWORD(v2[105]) = 216;
  v2[107] = 0x900000056LL;
  v2[127] = 949793;
  LODWORD(v2[125]) = 1500;
  v2[106] = 0x400000070LL;
  v0 = calloc(1u, 0x4A0u);
  memcpy(v0, v2, 0x4A0u);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "runtime_ctrl_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    170,
    "runtime_ctrl_ltc_1489",
    21,
    1064,
    40,
    v3);
  return v0;
}
