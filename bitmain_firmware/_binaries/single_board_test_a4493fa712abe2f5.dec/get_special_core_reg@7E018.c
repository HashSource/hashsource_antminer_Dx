int __fastcall get_special_core_reg(int a1)
{
  int v1; // r0
  char *v2; // r4
  int v3; // r7
  int v4; // r0
  int v5; // r5
  int v6; // r6
  char *v7; // r4
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v12; // [sp+0h] [bp-103Ch]
  unsigned int v13; // [sp+1Ch] [bp-1020h]
  int v14; // [sp+20h] [bp-101Ch]
  int v15; // [sp+24h] [bp-1018h]
  char *ptr; // [sp+28h] [bp-1014h]
  int v18; // [sp+30h] [bp-100Ch]
  char v19[4100]; // [sp+38h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v19, 0x1000u, 0, "%s...", "get_special_core_reg");
  v14 = 0;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "get_special_core_reg",
    20,
    8362,
    60,
    v19);
  v18 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    v1 = sub_D412C(a1, v14, 81, ptr);
    v15 = v1;
    if ( v1 <= 0 )
      goto LABEL_12;
    if ( v1 <= 2 )
    {
      v3 = 0;
      v6 = v1;
    }
    else
    {
      v2 = ptr + 40;
      v3 = 0;
      v13 = ((v1 - 3) & 0xFFFFFFFE) + 2;
      do
      {
        __pld(v2);
        pthread_mutex_lock(&stru_3B526C);
        v4 = *((_DWORD *)v2 - 10);
        v5 = (unsigned __int8)*(v2 - 32);
        v3 += 2;
        v12 = (unsigned __int8)*(v2 - 36);
        v2 += 24;
        logfmt_raw(v19, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v12, v5, 81, v4);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_special_core_reg",
          20,
          8369,
          20,
          v19);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v19,
          0x1000u,
          0,
          "chip %02x core %02x addr %04x, %08x",
          (unsigned __int8)*(v2 - 48),
          (unsigned __int8)*(v2 - 44),
          81,
          *((_DWORD *)v2 - 13));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "get_special_core_reg",
          20,
          8369,
          20,
          v19);
      }
      while ( v3 != v13 );
      v6 = v15;
    }
    v7 = &ptr[12 * v3];
    do
    {
      pthread_mutex_lock(&stru_3B526C);
      v8 = *(_DWORD *)v7;
      v9 = (unsigned __int8)v7[8];
      v10 = (unsigned __int8)v7[4];
      ++v3;
      v7 += 12;
      logfmt_raw(v19, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v10, v9, 81, v8);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "get_special_core_reg",
        20,
        8369,
        20,
        v19);
    }
    while ( v6 > v3 );
    if ( v15 != 16 )
    {
LABEL_12:
      v18 = 1;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v19, 0x1000u, 0, "chip %02x core reg %04x, resp_num(%d) is not enough", v14, 81, v15);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "get_special_core_reg",
        20,
        8374,
        100,
        v19);
    }
    ++v14;
  }
  while ( v14 != 8 );
  free(ptr);
  return v18;
}
