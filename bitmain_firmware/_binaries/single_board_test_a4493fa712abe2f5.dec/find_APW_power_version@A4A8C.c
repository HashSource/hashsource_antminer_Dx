int __fastcall find_APW_power_version(int a1)
{
  int v1; // r3
  int v2; // r1
  _DWORD *v3; // r4
  unsigned int v5; // r2

  v1 = *(_DWORD *)(g_config_info[0] + 32);
  if ( !v1 )
  {
    v2 = *(_DWORD *)(g_config_info[0] + 60);
    if ( v2 > 0 )
    {
      v3 = *(_DWORD **)(g_config_info[0] + 56);
      if ( a1 == *v3 )
        return 1;
      while ( 1 )
      {
        v1 = (unsigned __int8)(v1 + 1);
        if ( v1 >= v2 )
          break;
        if ( v3[v1] == a1 )
          return 1;
      }
    }
    return 0;
  }
  if ( !gPower_version_array_size )
    return 0;
  if ( a1 != (unsigned __int8)APW_power_version[0] )
  {
    LOBYTE(v5) = 0;
    while ( 1 )
    {
      v5 = (unsigned __int8)(v5 + 1);
      if ( gPower_version_array_size <= v5 )
        break;
      if ( a1 == (unsigned __int8)APW_power_version[v5] )
        return 1;
    }
    return 0;
  }
  return 1;
}
