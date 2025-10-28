int __fastcall get_mac_stats(int a1)
{
  const char *v1; // r8
  const char *v2; // r3
  int v3; // r8
  const char *v4; // r10
  int v5; // r0
  char *v6; // r4
  int v7; // r10
  unsigned int v8; // r1
  int v9; // r12
  int v10; // r0
  int v11; // r5
  unsigned int *v12; // r4
  unsigned int v13; // r1
  unsigned int v14; // r7
  const char *v16; // [sp+18h] [bp-102Ch]
  unsigned int v17; // [sp+1Ch] [bp-1028h]
  unsigned int v18; // [sp+1Ch] [bp-1028h]
  int v19; // [sp+20h] [bp-1024h]
  unsigned int v20; // [sp+24h] [bp-1020h]
  char *v21; // [sp+28h] [bp-101Ch]
  char *ptr; // [sp+2Ch] [bp-1018h]
  char i; // [sp+30h] [bp-1014h]
  int v25; // [sp+3Ch] [bp-1008h] BYREF
  char v26[4100]; // [sp+40h] [bp-1004h] BYREF

  v1 = "[MAC STATS]chip %02x core %02x addr %04x, %08x";
  v25 = -1734895979;
  ptr = (char *)malloc(0x600u);
  for ( i = 0; i != 8; ++i )
  {
    v21 = (char *)&v25 + 1;
    v2 = v1;
    v3 = 149;
    v4 = v2;
    while ( 1 )
    {
      v5 = sub_133874(a1, i, v3, ptr);
      v19 = v5;
      if ( v5 > 0 )
      {
        if ( v5 <= 2 )
        {
          v11 = 0;
        }
        else
        {
          v16 = v4;
          v6 = ptr + 36;
          v7 = 0;
          v20 = ((v5 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            v8 = *((_DWORD *)v6 - 9);
            __pld(v6);
            __pld(v6 + 4);
            v17 = bswap32(v8);
            v7 += 2;
            pthread_mutex_lock(&stru_197BB8);
            v9 = (unsigned __int8)*(v6 - 32);
            v10 = (unsigned __int8)*(v6 - 28);
            v6 += 24;
            logfmt_raw(v26, 0x1000u, 0, v16, v9, v10, v3, v17);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "get_mac_stats",
              13,
              415,
              60,
              v26);
            v18 = bswap32(*((_DWORD *)v6 - 12));
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(v26, 0x1000u, 0, v16, (unsigned __int8)*(v6 - 44), (unsigned __int8)*(v6 - 40), v3, v18);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "get_mac_stats",
              13,
              415,
              60,
              v26);
          }
          while ( v7 != v20 );
          v11 = v7;
          v4 = v16;
        }
        v12 = (unsigned int *)&ptr[12 * v11];
        do
        {
          v13 = *v12;
          ++v11;
          v12 += 3;
          v14 = bswap32(v13);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v26, 0x1000u, 0, v4, *((unsigned __int8 *)v12 - 8), *((unsigned __int8 *)v12 - 4), v3, v14);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "get_mac_stats",
            13,
            415,
            60,
            v26);
        }
        while ( v19 > v11 );
      }
      if ( v21 == v26 )
        break;
      v3 = (unsigned __int8)*v21++;
    }
    v1 = v4;
  }
  free(ptr);
  return 0;
}
