int pre_pool_stratum_connect()
{
  int v0; // r4
  _DWORD *i; // r5
  int v2; // r7
  char *v3; // r0

  v0 = 0;
  pools_active = 0;
  update_miner_working_status();
  set_current_pool(*(_DWORD *)pools);
  if ( total_pools <= 0 )
    return 0;
  for ( i = &stratum_thr_info; ; i += 12 )
  {
    v2 = *(_DWORD *)(pools + 4 * v0);
    if ( *(_BYTE *)(v2 + 24) )
      break;
LABEL_3:
    if ( total_pools <= ++v0 )
      return 0;
  }
  *i = v0 + 4;
  v3 = tq_new();
  i[11] = v3;
  if ( v3 )
  {
    tq_push((int)v3, v2);
    pre_stratum_connect((int)i);
    goto LABEL_3;
  }
  return -1;
}
