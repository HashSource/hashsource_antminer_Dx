int __fastcall stop_mining_ks5(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s ...", "stop_mining_ks5");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    170,
    "stop_mining_ks5",
    15,
    938,
    60,
    v5);
  v2 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  sub_9A908((int *)a1, 127);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
