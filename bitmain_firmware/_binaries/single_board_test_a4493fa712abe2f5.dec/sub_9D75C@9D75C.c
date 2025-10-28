int __fastcall sub_9D75C(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 732));
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
           73,
           "parameter_update_dash",
           21,
           820,
           60,
           v3);
}
