int pcba_calc_dash_core_num()
{
  return *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 12);
}
