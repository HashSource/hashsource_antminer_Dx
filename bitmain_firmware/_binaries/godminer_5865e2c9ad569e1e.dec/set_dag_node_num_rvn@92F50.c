int __fastcall set_dag_node_num_rvn(int a1, int a2, int a3, int a4)
{
  int v7; // r3
  int v9; // [sp+4h] [bp-100Ch]
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v7) = 6232;
  HIWORD(v7) = (unsigned int)&unk_15F034 >> 16;
  logfmt_raw(v10, 0x1000u, 0, v7, 1378864, v9, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "set_dag_node_num_rvn",
    20,
    1895,
    60,
    v10);
  sub_92F0C(a1, 27, a3);
  usleep(0x3E8u);
  return 0;
}
