int __fastcall get_core_clk(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r10
  int v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r5
  int v7; // r1
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r10
  int v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r5
  int v15; // r1
  int v16; // r0
  int i; // [sp+1Ch] [bp-Ch]
  char *ptr; // [sp+20h] [bp-8h]
  char v21[4100]; // [sp+28h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v21, 0x1000u, 0, "%s...", "get_core_clk");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "get_core_clk",
    12,
    8432,
    60,
    v21);
  ptr = (char *)malloc(0x600u);
  for ( i = 0; i != 8; ++i )
  {
    v1 = sub_D412C(a1, i, 121, ptr);
    if ( v1 > 0 )
    {
      v2 = ptr + 36;
      v3 = (int)&ptr[12 * v1 + 36];
      do
      {
        v5 = *(v2 - 9);
        __pld(v2);
        v6 = bswap32(v5);
        pthread_mutex_lock(&stru_3B526C);
        if ( v6 )
        {
          v2 += 3;
          v4 = sub_F7A2C(0x8BB2C97u, v6);
          logfmt_raw(
            v21,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx_clk %lld",
            *((unsigned __int8 *)v2 - 44),
            *((unsigned __int8 *)v2 - 40),
            121,
            v6,
            v4);
        }
        else
        {
          v7 = *((unsigned __int8 *)v2 - 28);
          v8 = *((unsigned __int8 *)v2 - 32);
          v2 += 3;
          logfmt_raw(v21, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x, tx_clk %lld", v8, v7, 121, 0, 0);
        }
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_core_clk",
          12,
          8446,
          60,
          v21);
      }
      while ( v2 != (_DWORD *)v3 );
    }
    v9 = sub_D412C(a1, i, 122, ptr);
    if ( v9 > 0 )
    {
      v10 = ptr + 36;
      v11 = (int)&ptr[12 * v9 + 36];
      do
      {
        v13 = *(v10 - 9);
        __pld(v10);
        v14 = bswap32(v13);
        pthread_mutex_lock(&stru_3B526C);
        if ( v14 )
        {
          v10 += 3;
          v12 = sub_F7A2C(0x8BB2C97u, v14);
          logfmt_raw(
            v21,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, rx_clk0 %lld",
            *((unsigned __int8 *)v10 - 44),
            *((unsigned __int8 *)v10 - 40),
            122,
            v14,
            v12);
        }
        else
        {
          v15 = *((unsigned __int8 *)v10 - 28);
          v16 = *((unsigned __int8 *)v10 - 32);
          v10 += 3;
          logfmt_raw(v21, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x, rx_clk0 %lld", v16, v15, 122, 0, 0);
        }
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_core_clk",
          12,
          8456,
          60,
          v21);
      }
      while ( (_DWORD *)v11 != v10 );
    }
  }
  free(ptr);
  return 0;
}
