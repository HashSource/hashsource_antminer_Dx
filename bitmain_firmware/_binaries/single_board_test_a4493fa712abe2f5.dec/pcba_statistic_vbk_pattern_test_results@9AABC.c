int pcba_statistic_vbk_pattern_test_results()
{
  int v0; // r10
  int v1; // r3
  int v2; // r8
  int *v3; // r9
  int v4; // r5
  int v5; // r6
  int v6; // r4
  int v7; // t1
  int v8; // r0
  int v9; // r3
  int v10; // r7
  int v11; // r1
  int v12; // r3
  int v13; // r2
  double v14; // d7
  int v16; // [sp+8h] [bp-Ch]

  v0 = *(_DWORD *)(g_config_info[0] + 40);
  if ( v0 <= 0 )
  {
    v6 = 0;
    v14 = NAN;
    v5 = 0;
  }
  else
  {
    v1 = *(_DWORD *)(g_config_info[0] + 8);
    v2 = 0;
    v3 = fpga_type;
    v4 = *(_DWORD *)(v1 + 16);
    v5 = 0;
    v6 = 0;
    v16 = *(_DWORD *)(v1 + 8);
    do
    {
      v7 = *v3++;
      v8 = 0;
      if ( v7 == 1 )
        v9 = 5;
      else
        v9 = 4;
      v10 = v9;
      v11 = v16 + 104 * (v4 + v9 * v4 * v2);
      do
      {
        if ( v4 > 0 )
        {
          v12 = v11 - 104 * v4;
          do
          {
            v13 = *(_DWORD *)(v12 + 100);
            v12 += 104;
            if ( v13 )
              ++v6;
          }
          while ( v11 != v12 );
          v5 += v4;
        }
        ++v8;
        v11 += 104 * v4;
      }
      while ( v8 != v10 );
      ++v2;
    }
    while ( v2 != v0 );
    v14 = (double)v6 / (double)v5 * 100.0;
    if ( *(double *)*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 36) > v14 )
      return printf("Pattern Test Failed %0.4f match nocnes %d total nonces %d\n", v14, v6, v5);
  }
  return printf("Pattern Test Success %0.4f match nocnes %d total nonces %d\n", v14, v6, v5);
}
