int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  char *all_created_runtime; // r5
  double v3; // d8
  double v4; // d9
  int v5; // r6
  char *v6; // r5
  int v7; // t1
  int v8; // r0
  unsigned int v9; // r5
  int result; // r0
  int v11; // [sp+0h] [bp-28h] BYREF
  unsigned int v12; // [sp+4h] [bp-24h]
  double v13[2]; // [sp+8h] [bp-20h] BYREF
  char v14[12]; // [sp+1Ch] [bp-Ch] BYREF

  v1 = 0;
  v11 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v11);
  v12 = 1;
  get_miner_elapsed_time();
  v3 = 0.0;
  v4 = v0;
  v13[0] = 0.0;
  if ( v11 > 0 )
  {
    v6 = all_created_runtime - 4;
    v5 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v5 |= (*(int (**)(void))(v7 + 136))();
      v3 = v3 + v13[1];
    }
    while ( v11 > v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( opt_algo == 6 )
    v4 = v0 - 2700.0;
  if ( v4 < 1.0 )
  {
    freq_scan_status = 0;
    return 0;
  }
  if ( v5 )
  {
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
  }
  v8 = frontend_runtime_instance();
  format_hashrate_double(*(const char **)(*(_DWORD *)(v8 + 72) + 16), v13, v14);
  v9 = v12;
  result = sub_122118((int)v13[0], v12) * v9;
  if ( opt_algo == 6 )
  {
    result -= 50;
    if ( result > 3729 )
      return 3780;
    if ( (unsigned int)(result - 3630) <= 0x63 )
      return 3680;
    if ( (unsigned int)(result - 3530) <= 0x63 )
      return 3580;
    if ( (unsigned int)(result - 3430) <= 0x63 )
      return 3480;
    if ( (unsigned int)(result - 3330) <= 0x63 )
      return 3380;
    if ( (unsigned int)(result - 3230) <= 0x63 )
      return 3280;
    if ( (unsigned int)(result - 3130) <= 0x63 )
      return 3180;
    return sub_122118(result, v9) * v9;
  }
  if ( opt_algo == 8 )
  {
    if ( result >= 860 )
      return 860;
    if ( (unsigned int)(result - 840) <= 0x13 )
      return 840;
    if ( (unsigned int)(result - 820) <= 0x13 )
      return 820;
    if ( (unsigned int)(result - 800) <= 0x13 )
      return 800;
    return sub_122118(result, v9) * v9;
  }
  return result;
}
