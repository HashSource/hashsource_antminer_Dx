void *machine_runtime_ctrl_hns_2130()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD v3[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v3[5], 0, 0x5Cu);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = sub_4A1B8;
    v3[1] = sub_4A120;
    v3[2] = get_working_voltage_base;
    v3[3] = start_voltage_monitor_base;
    v3[4] = start_temp_monitor_base;
    v3[6] = 304048;
    v3[7] = set_voltage_base;
    v3[10] = set_baud_base;
    v3[11] = set_frequency_with_voltage_base;
    v3[12] = start_mining_base;
    v3[13] = stop_mining_base;
    v3[14] = reset_mining_base;
    v3[15] = check_asic_num_base;
    v3[16] = check_bringup_temperature_base;
    v3[21] = 3000000;
    v3[20] = "json_delete";
    v3[25] = &loc_493E0;
    v3[29] = "/config/sn";
    v3[19] = 37;
    v3[26] = 1141882880;
    v3[28] = 1065353216;
    v3[22] = 20;
    v3[24] = 1700;
    memcpy(v0, v3, 0x78u);
  }
  else
  {
    printf(aInvalidPointer, "new_machine_runtime");
  }
  return v1;
}
