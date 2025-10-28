int __fastcall sub_D6818(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-1018h]
  int v6; // [sp+10h] [bp-1014h] BYREF
  unsigned __int16 v7; // [sp+18h] [bp-100Ch]
  unsigned __int16 v8; // [sp+1Ah] [bp-100Ah]
  int v9; // [sp+1Ch] [bp-1008h]
  char v10[4100]; // [sp+20h] [bp-1004h] BYREF

  LOBYTE(v7) = 0;
  HIBYTE(v7) = a2;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v10, 0x1000u, 0, "%s chip_addr %02x reg %02x", "open_33p_double_results_grin29", a2, 2, v5, 0, 0, v7, 0);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
    77,
    "open_33p_double_results_grin29",
    30,
    264,
    60,
    v10);
  LOBYTE(v9) = -1;
  v8 = 2;
  v6 = 1;
  if ( (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v6) < 0 )
  {
    printf("%s failed, reg:%02x, core_id:%d", "open_33p_double_results_grin29", v8, 0);
    return -1;
  }
  else
  {
    usleep(0x4E20u);
    return 0;
  }
}
