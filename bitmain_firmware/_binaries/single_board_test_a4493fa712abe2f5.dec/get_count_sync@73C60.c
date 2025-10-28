int __fastcall get_count_sync(_DWORD *a1, int a2)
{
  int v4; // r0
  char *v5; // r4
  int v6; // lr
  int v7; // r12
  int v8; // r9
  int v9; // r11
  int v10; // r5
  char *v11; // r4
  int v12; // r3
  int v14; // [sp+Ch] [bp-1028h]
  int v15; // [sp+14h] [bp-1020h]
  unsigned int v16; // [sp+20h] [bp-1014h]
  char *ptr; // [sp+28h] [bp-100Ch]
  int v18; // [sp+2Ch] [bp-1008h]
  char v19[4100]; // [sp+30h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v19, 0x1000u, 0, "%s...", "get_count_sync");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "get_count_sync",
    14,
    341,
    60,
    v19);
  ptr = (char *)malloc(0x600u);
  v4 = sub_73570(a1, a2, 202, ptr);
  v18 = v4;
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      v10 = 0;
      v9 = v4;
    }
    else
    {
      v5 = ptr + 42;
      v16 = ((v4 - 3) & 0xFFFFFFFE) + 2;
      v15 = 0;
      do
      {
        __pld(v5);
        pthread_mutex_lock(&stru_3B526C);
        v6 = (unsigned __int8)*(v5 - 34);
        v7 = (unsigned __int8)*(v5 - 38);
        v8 = *((unsigned __int16 *)v5 - 18);
        v14 = *(_DWORD *)(v5 - 42);
        v5 += 24;
        v15 += 2;
        logfmt_raw(v19, 0x1000u, 0, "chip %02x core %02x reg %02x cnt %08x", v7, v6, v8, v14);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_count_sync",
          14,
          346,
          60,
          v19);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v19,
          0x1000u,
          0,
          "chip %02x core %02x reg %02x cnt %08x",
          (unsigned __int8)*(v5 - 50),
          (unsigned __int8)*(v5 - 46),
          *((unsigned __int16 *)v5 - 24),
          *(_DWORD *)(v5 - 54));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_count_sync",
          14,
          346,
          60,
          v19);
      }
      while ( v15 != v16 );
      v9 = v18;
      v10 = v15;
    }
    v11 = &ptr[12 * v10];
    do
    {
      pthread_mutex_lock(&stru_3B526C);
      v12 = *(_DWORD *)v11;
      ++v10;
      v11 += 12;
      logfmt_raw(
        v19,
        0x1000u,
        0,
        "chip %02x core %02x reg %02x cnt %08x",
        (unsigned __int8)*(v11 - 8),
        (unsigned __int8)*(v11 - 4),
        *((unsigned __int16 *)v11 - 3),
        v12);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "get_count_sync",
        14,
        346,
        60,
        v19);
    }
    while ( v9 > v10 );
  }
  free(ptr);
  return 0;
}
