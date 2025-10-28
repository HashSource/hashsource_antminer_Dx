int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r6
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 600) = v2;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v4, 0x1000u, 0, "__custom_data init %p\n", v2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "global_idx_init_dash",
    20,
    59,
    20,
    v4);
  return 0;
}
