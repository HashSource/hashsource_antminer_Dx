int __fastcall dump_pt2_result(int a1, int a2)
{
  FILE *v4; // r0
  FILE *v5; // r7
  struct tm *v6; // r0
  _BYTE *v7; // r4
  int v8; // r6
  _QWORD *v9; // r5
  _QWORD *v10; // r9
  int v11; // r2
  double *v12; // r6
  int v13; // r4
  double v14; // t1
  time_t timer; // [sp+1Ch] [bp-4h] BYREF

  v4 = fopen("/config/stats.log", "a+");
  if ( !v4 )
  {
    puts("open /config/stats.log failed!");
    exit(-1);
  }
  v5 = v4;
  time(&timer);
  v6 = localtime(&timer);
  fprintf(
    v5,
    "chain[%1d], %d%d%d %d:%d:%d\n",
    gChain,
    v6->tm_year + 1900,
    v6->tm_mon + 1,
    v6->tm_mday,
    v6->tm_hour,
    v6->tm_min,
    v6->tm_sec);
  if ( *(int *)(*(_DWORD *)(g_config_info[0] + 8) + 28) > 0 )
  {
    v7 = gHistory_Result;
    v8 = 0;
    do
    {
      ++v8;
      fprintf(v5, "\t%4d", *((_DWORD *)v7 + 7));
      v7 += 265800;
    }
    while ( *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 28) > v8 );
  }
  if ( a2 > 0 )
  {
    v9 = (_QWORD *)(a1 + 16);
    v10 = &v9[34 * a2];
    do
    {
      v11 = *((_DWORD *)v9 - 4);
      __pld(v9 + 168);
      fprintf(v5, "\n%4d", v11);
      if ( *((int *)v9 - 2) > 0 )
      {
        v12 = (double *)v9;
        v13 = 0;
        do
        {
          v14 = *v12++;
          ++v13;
          fprintf(v5, "\t%.4f", v14);
        }
        while ( *((_DWORD *)v9 - 2) > v13 );
      }
      v9 += 34;
    }
    while ( v9 != v10 );
  }
  fwrite("\n-------------\n", 1u, 0xFu, v5);
  return fclose(v5);
}
