int sub_9B394()
{
  sprintf(byte_3B565C, "IC:%s", *(const char **)(g_config_info[0] + 16));
  sprintf(byte_3B566D, "CHIP:%2d", *(_DWORD *)(g_config_info[0] + 40));
  sprintf(&byte_3B566D[17], "FREQ: %dMHz", **(_DWORD **)(*(_DWORD *)(g_config_info[0] + 8) + 24));
  return j_sprintf(dword_3B568F, "Voltage: %3dmV", **(_DWORD **)(g_config_info[0] + 48));
}
