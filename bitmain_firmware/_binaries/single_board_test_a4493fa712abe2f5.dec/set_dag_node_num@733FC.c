int __fastcall set_dag_node_num(int a1, int a2)
{
  _DWORD v5[1024]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v5, 0x1000u, 0, "%s %08x", "set_dag_node_num", a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_dag_node_num",
    16,
    381,
    60,
    v5);
  v5[0] = a2;
  v5[2] = 720897;
  v5[3] = 255;
  v5[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
