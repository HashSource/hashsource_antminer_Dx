int __fastcall set_safe_mode(int a1, int a2)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD v6[2]; // [sp+10h] [bp-1000h] BYREF
  int v7; // [sp+18h] [bp-FF8h]
  int v8; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v6, 0x1000u, 0, "%s...", "set_safe_mode");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_safe_mode",
    13,
    11749,
    60,
    v6);
  v7 = 0;
  v8 = 0;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v7) = 1;
  LOBYTE(v8) = -1;
  v6[0] = a2;
  v6[1] = 0;
  HIWORD(v7) = 158;
  v4(a1, v6);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
