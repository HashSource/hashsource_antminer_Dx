int __fastcall get_work_mode(_DWORD *a1)
{
  int v2; // r0
  char *v3; // r4
  int v4; // lr
  int v5; // r12
  int v6; // r9
  int v7; // r11
  int v8; // r5
  char *v9; // r4
  int v10; // r3
  int v12; // [sp+Ch] [bp-1028h]
  int v13; // [sp+14h] [bp-1020h]
  unsigned int v14; // [sp+20h] [bp-1014h]
  char *ptr; // [sp+28h] [bp-100Ch]
  int v16; // [sp+2Ch] [bp-1008h]
  char v17[4100]; // [sp+30h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v17, 0x1000u, 0, "%s...", "get_work_mode");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "get_work_mode",
    13,
    353,
    60,
    v17);
  ptr = (char *)malloc(0x600u);
  v2 = sub_73570(a1, 255, 12, ptr);
  v16 = v2;
  if ( v2 > 0 )
  {
    if ( v2 <= 2 )
    {
      v8 = 0;
      v7 = v2;
    }
    else
    {
      v3 = ptr + 42;
      v14 = ((v2 - 3) & 0xFFFFFFFE) + 2;
      v13 = 0;
      do
      {
        __pld(v3);
        pthread_mutex_lock(&stru_3B526C);
        v4 = (unsigned __int8)*(v3 - 34);
        v5 = (unsigned __int8)*(v3 - 38);
        v6 = *((unsigned __int16 *)v3 - 18);
        v12 = *(_DWORD *)(v3 - 42);
        v3 += 24;
        v13 += 2;
        logfmt_raw(v17, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v5, v4, v6, v12);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_work_mode",
          13,
          358,
          60,
          v17);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v17,
          0x1000u,
          0,
          "chip %02x core %02x reg %02x cnt %08x",
          (unsigned __int8)*(v3 - 50),
          (unsigned __int8)*(v3 - 46),
          *((unsigned __int16 *)v3 - 24),
          *(_DWORD *)(v3 - 54));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_work_mode",
          13,
          358,
          60,
          v17);
      }
      while ( v13 != v14 );
      v7 = v16;
      v8 = v13;
    }
    v9 = &ptr[12 * v8];
    do
    {
      pthread_mutex_lock(&stru_3B526C);
      v10 = *(_DWORD *)v9;
      ++v8;
      v9 += 12;
      logfmt_raw(
        v17,
        0x1000u,
        0,
        "chip %02x core %02x reg %02x cnt %08x",
        (unsigned __int8)*(v9 - 8),
        (unsigned __int8)*(v9 - 4),
        *((unsigned __int16 *)v9 - 3),
        v10);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "get_work_mode",
        13,
        358,
        60,
        v17);
    }
    while ( v7 > v8 );
  }
  free(ptr);
  return 0;
}
