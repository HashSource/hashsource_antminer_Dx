int __fastcall chip_speed_test(_DWORD *a1, int *a2)
{
  unsigned int v3; // r7
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r3
  int v7; // r5
  int *v8; // r6
  char v9; // r3
  int v10; // r7
  char v11; // r9
  int v12; // r0
  int v13; // r11
  int v14; // r0
  int v15; // r3
  _DWORD *v16; // r1
  unsigned int v18; // r3
  int v19; // r2
  bool v20; // zf
  int v21; // r3
  unsigned int v22; // [sp+10h] [bp-101Ch]
  int v24; // [sp+14h] [bp-1018h]
  char v25[4100]; // [sp+28h] [bp-1004h] BYREF

  if ( (int)a1[45] <= 0 )
  {
    v22 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v25, 0x1000u, 0, "asic %d nonce count %d\n", v4, *(_DWORD *)(a1[68] + 4 * v4));
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        186,
        "chip_speed_test",
        15,
        25,
        20,
        v25);
      v5 = a1[45];
      v6 = *(_DWORD *)(a1[68] + 4 * v4++);
      v3 += v6;
    }
    while ( (int)v5 > v4 );
    v22 = (v3 / v5) >> 3;
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v25, 0x1000u, 0, "avg nonce count %d\n", v22);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    186,
    "chip_speed_test",
    15,
    39,
    20,
    v25);
  if ( (int)a1[45] <= 0 )
    return 0;
  v7 = 0;
  v8 = a2;
  v24 = 0;
  do
  {
    v9 = v7 & 0x1F;
    v10 = 4 * v7;
    v11 = v7;
    v12 = *(_DWORD *)(a1[71] + 4 * (v7++ >> 5));
    if ( (v12 & (1 << v9)) != 0 )
    {
      v13 = a1[43];
      if ( (!strcmp((const char *)v13, "grin29")
         || *(_BYTE *)v13 == 97 && *(_BYTE *)(v13 + 1) == 101 && !*(_BYTE *)(v13 + 2))
        && (v11 & 1) != 0 )
      {
        *v8 = 0;
      }
      else
      {
        v14 = strcmp((const char *)v13, "dash");
        v15 = a1[68];
        v16 = (_DWORD *)(v15 + v10);
        if ( v14 )
        {
          v18 = *(_DWORD *)(v15 + v10);
          v19 = v22;
          if ( v18 < v22 )
          {
            v20 = v18 == 0;
            if ( v18 )
            {
              v21 = 3;
            }
            else
            {
              v21 = 2;
              v19 = 3;
            }
            if ( v20 )
              v24 = v19;
            else
              v24 = v21;
            *v8 = v21;
          }
          else
          {
            *v8 = 0;
          }
        }
        else
        {
          *v8 = 0;
          if ( *(_DWORD *)(v15 + v10) < v22 )
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              v25,
              0x1000u,
              0,
              "Chain[%d] ASIC %d error! Only get %d nonce",
              a1[31],
              v7,
              *(_DWORD *)(a1[68] + v10));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
              186,
              "chip_speed_test",
              15,
              67,
              20,
              v25);
            v16 = (_DWORD *)(a1[68] + v10);
          }
        }
        *v16 = 0;
      }
    }
    else
    {
      *v8 = 1;
      v24 = 3;
    }
    ++v8;
  }
  while ( a1[45] > v7 );
  return v24;
}
