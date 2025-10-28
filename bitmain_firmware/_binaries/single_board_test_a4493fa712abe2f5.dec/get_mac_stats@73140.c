int __fastcall get_mac_stats(int a1)
{
  const char *v1; // r9
  const char *v2; // r10
  const char *v3; // r3
  const char *v4; // r10
  const char *v5; // r9
  int v6; // r0
  char *v7; // r4
  int v8; // r9
  unsigned int v9; // r3
  int v10; // r5
  unsigned int *v11; // r4
  unsigned int v12; // r1
  unsigned int v13; // r6
  const char *v14; // r3
  int v16; // [sp+10h] [bp-30h]
  const char *v17; // [sp+18h] [bp-28h]
  unsigned int v18; // [sp+1Ch] [bp-24h]
  unsigned int v19; // [sp+1Ch] [bp-24h]
  int v20; // [sp+20h] [bp-20h]
  unsigned int v21; // [sp+24h] [bp-1Ch]
  char *v22; // [sp+28h] [bp-18h]
  char *ptr; // [sp+2Ch] [bp-14h]
  char v24; // [sp+30h] [bp-10h]
  int v26; // [sp+3Ch] [bp-4h] BYREF
  char v27[4100]; // [sp+40h] [bp+0h] BYREF

  v26 = -1734895979;
  v24 = 0;
  v1 = "[MAC STATS]chip %02x core %02x addr %04x, %08x";
  v2 = "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c";
  ptr = (char *)malloc(0x600u);
  do
  {
    v22 = (char *)&v26 + 1;
    v16 = 149;
    v3 = v2;
    v4 = v1;
    v5 = v3;
    while ( 1 )
    {
      v6 = sub_D412C(a1, v24, v16, ptr);
      v20 = v6;
      if ( v6 > 0 )
      {
        if ( v6 <= 2 )
        {
          v10 = 0;
        }
        else
        {
          v17 = v5;
          v7 = ptr + 36;
          v8 = 0;
          v21 = ((v6 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            v9 = *((_DWORD *)v7 - 9);
            __pld(v7);
            __pld(v7 + 4);
            v8 += 2;
            v18 = bswap32(v9);
            v7 += 24;
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v27, 0x1000u, 0, v4, (unsigned __int8)*(v7 - 56), (unsigned __int8)*(v7 - 52), v16, v18);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(g_zc, v17, 71, "get_mac_stats", 13, 415, 60, v27);
            v19 = bswap32(*((_DWORD *)v7 - 12));
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v27, 0x1000u, 0, v4, (unsigned __int8)*(v7 - 44), (unsigned __int8)*(v7 - 40), v16, v19);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(g_zc, v17, 71, "get_mac_stats", 13, 415, 60, v27);
          }
          while ( v8 != v21 );
          v10 = v8;
          v5 = v17;
        }
        v11 = (unsigned int *)&ptr[12 * v10];
        do
        {
          v12 = *v11;
          ++v10;
          v11 += 3;
          v13 = bswap32(v12);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v27, 0x1000u, 0, v4, *((unsigned __int8 *)v11 - 8), *((unsigned __int8 *)v11 - 4), v16, v13);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(g_zc, v5, 71, "get_mac_stats", 13, 415, 60, v27);
        }
        while ( v20 > v10 );
      }
      if ( v22 == v27 )
        break;
      v16 = (unsigned __int8)*v22++;
    }
    v14 = v5;
    v1 = v4;
    v2 = v14;
    ++v24;
  }
  while ( v24 != 8 );
  free(ptr);
  return 0;
}
