int __fastcall set_ticket_mask_dash(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+Ch] [bp-1014h]
  _DWORD v6[3]; // [sp+10h] [bp-1010h] BYREF
  char v7; // [sp+1Ch] [bp-1004h]
  char v8; // [sp+1Dh] [bp-1003h]
  char v9[4096]; // [sp+20h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v9, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, a2, v5, 0, 0, 0, 0);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v9);
  v7 = -1;
  v6[0] = a2;
  v6[2] = 1310721;
  v8 = 10;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v6);
  *(_DWORD *)(a1 + 228) = a2;
  return result;
}
