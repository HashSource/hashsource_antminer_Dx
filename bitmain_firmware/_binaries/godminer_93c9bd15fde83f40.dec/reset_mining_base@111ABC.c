int __fastcall reset_mining_base(int a1)
{
  int v2; // lr
  int v3; // r2
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v5, 0x1000u, 0, "chain %d reset mining!", *(_DWORD *)(a1 + 136));
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "reset_mining_base",
    17,
    385,
    100,
    v5);
  (*(void (__fastcall **)(int))(a1 + 8))(a1);
  v2 = *(_DWORD *)(a1 + 648);
  v3 = *(_DWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 248) = 0;
  *(_BYTE *)(a1 + 141) = 0;
  *(_BYTE *)(a1 + 142) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  memset(*(void **)(a1 + 324), 0, v2 * v3);
  off_1A2B88(*(_DWORD *)(a1 + 132));
  sleep(0xAu);
  ((void (__fastcall *)(int, unsigned __int16, int))off_1A2B84[0])(
    *(_DWORD *)(a1 + 132),
    *(_DWORD *)(a1 + 764),
    *(_DWORD *)(a1 + 776));
  sleep(1u);
  off_1A2B7C("r");
  usleep(0x2710u);
  (*(void (__fastcall **)(int, int))(a1 + 76))(a1, 3125000);
  usleep(0x2710u);
  off_1A2B7C((char *)0x2FAF08);
  usleep(0x2710u);
  off_1A2B90(*(_DWORD *)(a1 + 132));
  ((void (__fastcall *)(unsigned int))off_1A2B70[0])(*(_DWORD *)(a1 + 132));
  return (*(int (__fastcall **)(int))(a1 + 4))(a1);
}
