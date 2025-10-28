int pcba_calc_ltc_core_num()
{
  return *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 12);
}
