int get_theory_hashrate()
{
  int v0; // r7
  int *v1; // r8
  double v2; // d9
  int v3; // r9
  int v4; // r4
  int v5; // r0
  int v6; // r4
  double v7; // d8
  int v8; // r4
  double v9; // d8
  int v10; // r4
  double v11; // d8
  int v12; // r4
  double v13; // d8
  int v14; // r4
  double v15; // d8
  int v16; // r4
  double v17; // d8
  int v18; // r4
  int v19; // t1
  double v20; // d8
  int v21; // r0
  bool v22; // zf
  bool v23; // zf
  int v24; // r2
  int v26; // lr
  double v27; // d9
  int v28; // [sp+4h] [bp-10h]
  double v29; // [sp+8h] [bp-Ch] BYREF

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 <= 0 )
  {
    v2 = 0.0;
    v4 = 0;
  }
  else
  {
    if ( v0 <= 8 )
    {
      v3 = 0;
      v2 = 0.0;
      v4 = 0;
    }
    else
    {
      v1 = (int *)&unk_1A9B80;
      v2 = 0.0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = *(v1 - 7);
        __pld(v1);
        v3 += 8;
        v6 = v4 | (*(int (**)(void))(v5 + 88))();
        v7 = v29;
        v8 = v6 | (*(int (__fastcall **)(_DWORD, double *))(*(v1 - 6) + 88))(*(v1 - 6), &v29);
        v9 = v7 + v29;
        v10 = v8 | (*(int (**)(void))(*(v1 - 5) + 88))();
        v11 = v9 + v29;
        v12 = v10 | (*(int (**)(void))(*(v1 - 4) + 88))();
        v13 = v11 + v29;
        v14 = v12 | (*(int (**)(void))(*(v1 - 3) + 88))();
        v15 = v13 + v29;
        v16 = v14 | (*(int (**)(void))(*(v1 - 2) + 88))();
        v17 = v15 + v29;
        v18 = v16 | (*(int (**)(void))(*(v1 - 1) + 88))();
        v19 = *v1;
        v1 += 8;
        v20 = v17 + v29;
        v4 = v18 | (*(int (**)(void))(v19 + 88))();
        v2 = v2 + v20 + v29;
      }
      while ( ((v0 - 9) & 0xFFFFFFF8) + 8 != v3 );
    }
    do
    {
      v21 = dword_1A9B64[v3++];
      v4 |= (*(int (**)(void))(v21 + 88))();
      v2 = v2 + v29;
    }
    while ( v3 < v0 );
  }
  v22 = opt_algo == 3;
  if ( opt_algo != 3 )
    v22 = opt_algo == 0;
  if ( v22 )
    return (int)v2;
  v23 = opt_algo == 6;
  if ( opt_algo != 6 )
    v23 = opt_algo == 1;
  v24 = v23;
  if ( v23 )
    return (int)(v2 * 0.000001);
  if ( opt_algo == 2 )
    return (int)(v2 * 0.000000001);
  if ( opt_algo != 7 )
    return v24;
  if ( v4 )
    goto LABEL_33;
  v26 = *(unsigned __int8 *)(dword_1A9B64[0] + 212);
  strcpy((char *)search_failed_info, "unknown");
  freq_scan_status[0] = 1;
  if ( v26 != 68 || *(_BYTE *)(dword_1A9B64[0] + 213) != 55 )
    goto LABEL_33;
  v27 = v2 * 0.000000001;
  if ( *(_BYTE *)(dword_1A9B64[0] + 214) )
  {
    if ( *(_BYTE *)(dword_1A9B64[0] + 214) == 101 && !*(_BYTE *)(dword_1A9B64[0] + 215) )
    {
      if ( v27 >= 1170.0 )
        return 1157;
      if ( v27 >= 1125.0 )
        return 1111;
      if ( v27 >= 1078.0 )
        return 1065;
    }
LABEL_33:
    freq_scan_status[0] = 2;
    strcpy((char *)search_failed_info, "R:1");
    return v28;
  }
  if ( v27 >= 1291.0 )
    return 1286;
  if ( v27 >= 1240.0 )
    return 1234;
  if ( v27 < 1188.0 )
  {
    if ( v27 >= 1136.0 )
      return 1131;
    goto LABEL_33;
  }
  return 1183;
}
