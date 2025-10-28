int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r6
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 600) = v2;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v4, 0x1000u, 0, "__custom_data init %p\n", v2);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "global_idx_init_dash",
    20,
    59,
    20,
    v4);
  return 0;
}
