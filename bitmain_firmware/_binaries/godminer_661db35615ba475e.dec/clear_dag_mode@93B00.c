int __fastcall clear_dag_mode(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1000h] BYREF
  int v5; // [sp+18h] [bp-FF8h]
  int v6; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "clear_dag_mode");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "clear_dag_mode",
    14,
    388,
    60,
    v4);
  v5 = 12845056;
  v6 = 0;
  v4[1] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = -1;
  v4[0] = 0;
  v2(a1, v4);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
