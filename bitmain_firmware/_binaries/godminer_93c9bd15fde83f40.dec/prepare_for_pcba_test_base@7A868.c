int __fastcall prepare_for_pcba_test_base(int a1, unsigned int *a2)
{
  unsigned int v2; // r5
  _DWORD *v4; // r3

  v2 = *a2;
  if ( *a2 > 4 )
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_base");
    return 6;
  }
  else
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_base");
    v4 = *(_DWORD **)(a1 + 296);
    *v4 = 50462976;
    v4[1] = 117835012;
    *(_DWORD *)(a1 + 240) = 1;
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 144))(a1, *(_DWORD *)(a1 + 296), 8);
    sub_C1A38(a1);
    setup_clk(a1);
    set_debug_ctrl(a1, 19);
    get_special_core_reg(a1);
    set_safe_mode(a1, 42);
    disable_mac(a1);
    set_logic_core_id(a1);
    setup_mac_lane_cross(a1);
    phy_power_reset(a1);
    if ( v2 )
    {
      if ( v2 != 4 )
        setup_serdes_phy(a1);
    }
    membist1(a1);
    set_dag_node_num(a1, 100663198);
    set_start_delay(a1, (int)&word_10012);
    set_reset_to_normal(a1, 2);
    reverse_start_nonce(a1, 0);
    set_data_preemptive(a1, 1);
    set_nonce_num(a1, 0);
    setup_mac(a1);
    open_core_clk(a1);
    set_work_mode(a1, 0);
    set_work_timeout(a1, 1);
    sub_C16E8(a1);
    set_core_bus_reset(a1);
    setup_count_sync(a1, 255);
    set_ticketmask(a1, 63);
    open_cores_by_work_num(a1);
    set_ticketmask(a1, 29);
    *(_BYTE *)(a1 + 141) = 1;
    *(_BYTE *)(a1 + 142) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_base");
    return 0;
  }
}
