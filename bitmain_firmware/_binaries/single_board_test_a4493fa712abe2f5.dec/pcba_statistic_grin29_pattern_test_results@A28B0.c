int pcba_statistic_grin29_pattern_test_results()
{
  _DWORD *v0; // r9
  int v1; // r10
  int v2; // r7
  int v3; // r6
  int v4; // r4
  int v5; // r12
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r2
  double v11; // d7

  v0 = *(_DWORD **)(g_config_info[0] + 8);
  v1 = *(_DWORD *)(g_config_info[0] + 40);
  if ( v1 <= 0 )
  {
    v3 = 0;
    v11 = NAN;
    v4 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
      if ( (v2 & 0xFFFFFFFD) != 1 )
      {
        v5 = v0[3];
        if ( v5 > 0 )
        {
          v6 = v0[4];
          v7 = 0;
          v8 = v0[2] + 104 * (v6 + v2 * v6 * v5);
          do
          {
            if ( v6 > 0 )
            {
              v9 = v8 - 104 * v6;
              do
              {
                v10 = *(_DWORD *)(v9 + 100);
                v9 += 104;
                if ( v10 )
                  ++v4;
              }
              while ( v8 != v9 );
              v3 += v6;
            }
            ++v7;
            v8 += 104 * v6;
          }
          while ( v7 != v5 );
        }
      }
      ++v2;
    }
    while ( v2 != v1 );
    v11 = (double)v4 / (double)v3 * 100.0;
    if ( *(double *)v0[9] > v11 )
      return printf("Pattern Test Failed %0.4f match nocnes %d total nonces %d\n", v11, v4, v3);
  }
  return printf("Pattern Test Success %0.4f match nocnes %d total nonces %d\n", v11, v4, v3);
}
