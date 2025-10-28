int __fastcall get_miner_info(char *a1)
{
  int v2; // r7
  int v3; // r4
  int i; // r5
  int v5; // r4
  int v6; // r4
  int v7; // r0
  char *v8; // r0
  int v9; // r0

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v2 <= 0 )
  {
    v8 = a1;
    v3 = 0;
  }
  else
  {
    v3 = 0;
    for ( i = 0; i != v2; v3 = v6 + v7 + sprintf(&a1[v6 + v7], "chain%d_badcore=%d;", i, 0) )
    {
      v5 = v3 + sprintf(&a1[v3], "chain%d_voltage=%d;", ++i, 12);
      v6 = v5 + sprintf(&a1[v5], "chain%d_voladded=%d;", i, 0);
      v7 = sprintf(&a1[v6], "chain%d_basefreq=%d;", i, 0);
    }
    v8 = &a1[v3];
  }
  v9 = sprintf(v8, "chainnum=%d;", v2);
  return sprintf(&a1[v3 + v9], "version=%s;", g_miner_compiletime);
}
