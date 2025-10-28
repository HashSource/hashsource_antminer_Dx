int __fastcall check_bist_error_one_lane(_DWORD *a1, int a2, int a3, int a4)
{
  __int16 v6; // r8
  int v7; // r0
  int v8; // r8
  int v9; // r4
  int v10; // r4
  unsigned int v11; // r2
  int v12; // r4
  int v13; // r2
  char *v14; // r4
  unsigned int v15; // r5
  int v16; // r9
  int v17; // r0
  int v18; // r2
  int v19; // r2
  int v20; // r0
  int v21; // r0
  int *v22; // r5
  int *v23; // r9
  char *v24; // r4
  int v25; // t1
  int v26; // r7
  int v27; // r0
  int v28; // t1
  int v30; // [sp+0h] [bp-1154h]
  int v31; // [sp+4h] [bp-1150h]
  int v32; // [sp+8h] [bp-114Ch]
  int v33; // [sp+Ch] [bp-1148h]
  int v34; // [sp+10h] [bp-1144h]
  int v35; // [sp+14h] [bp-1140h]
  __int16 v37; // [sp+20h] [bp-1134h]
  _DWORD *v38; // [sp+28h] [bp-112Ch]
  _DWORD v39[10]; // [sp+2Ch] [bp-1128h] BYREF
  unsigned int v40; // [sp+54h] [bp-1100h]
  unsigned int v41; // [sp+5Ch] [bp-10F8h]
  unsigned int v42; // [sp+64h] [bp-10F0h]
  unsigned int v43; // [sp+6Ch] [bp-10E8h]
  unsigned int v44; // [sp+74h] [bp-10E0h]
  unsigned int v45; // [sp+7Ch] [bp-10D8h]
  unsigned int v46; // [sp+84h] [bp-10D0h]
  unsigned int v47; // [sp+8Ch] [bp-10C8h]
  char v48[64]; // [sp+90h] [bp-10C4h] BYREF
  char v49[4]; // [sp+D0h] [bp-1084h] BYREF
  unsigned int v50; // [sp+D4h] [bp-1080h]
  unsigned int v51; // [sp+DCh] [bp-1078h]
  unsigned int v52; // [sp+E4h] [bp-1070h]
  unsigned int v53; // [sp+ECh] [bp-1068h]
  unsigned int v54; // [sp+F4h] [bp-1060h]
  unsigned int v55; // [sp+FCh] [bp-1058h]
  unsigned int v56; // [sp+104h] [bp-1050h]
  unsigned int v57; // [sp+10Ch] [bp-1048h]
  char v58[20]; // [sp+110h] [bp-1044h] BYREF
  char v59; // [sp+124h] [bp-1030h] BYREF
  char v60[4100]; // [sp+150h] [bp-1004h] BYREF

  v6 = a4;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v60, 0x1000u, 0, "%s...", "check_bist_error_one_lane");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_bist_error_one_lane",
    25,
    9141,
    60,
    v60);
  v37 = v6 << 12;
  v7 = sub_D47F8(a1, a3, (unsigned __int16)(v6 << 12) | 0x10, (int)v58);
  if ( a1[55] != v7 )
  {
    v8 = v7;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v60,
      0x1000u,
      0,
      "%s d'16 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v8,
      a1[55]);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_bist_error_one_lane",
      25,
      9149,
      100,
      v60);
  }
  v9 = sub_D47F8(a1, a3, v37 & 0xF000 | 0x13, (int)v49);
  if ( a1[55] != v9 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v60,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v9,
      a1[55]);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_bist_error_one_lane",
      25,
      9155,
      100,
      v60);
  }
  if ( v9 > 0 )
  {
    v40 = v50 >> 28;
    if ( v9 != 1 )
    {
      v41 = v51 >> 28;
      if ( v9 != 2 )
      {
        v42 = v52 >> 28;
        if ( v9 != 3 )
        {
          v43 = v53 >> 28;
          if ( v9 != 4 )
          {
            v44 = v54 >> 28;
            if ( v9 != 5 )
            {
              v45 = v55 >> 28;
              if ( v9 != 6 )
              {
                v46 = v56 >> 28;
                if ( v9 != 7 )
                  v47 = v57 >> 28;
              }
            }
          }
        }
      }
    }
  }
  v10 = sub_D47F8(a1, a3, v37 & 0xF000 | 0x14, (int)v49);
  if ( a1[55] != v10 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v60,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v10,
      a1[55]);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_bist_error_one_lane",
      25,
      9161,
      100,
      v60);
  }
  if ( v10 > 0 )
  {
    v40 |= 16 * v50;
    if ( v10 != 1 )
    {
      v41 |= 16 * v51;
      if ( v10 != 2 )
      {
        v42 |= 16 * v52;
        if ( v10 != 3 )
        {
          v43 |= 16 * v53;
          if ( v10 != 4 )
          {
            v44 |= 16 * v54;
            if ( v10 != 5 )
            {
              v45 |= 16 * v55;
              if ( v10 != 6 )
              {
                v11 = v56;
                if ( v10 != 7 )
                  v11 = v57;
                v46 |= 16 * v56;
                if ( v10 != 7 )
                  v47 |= 16 * v11;
              }
            }
          }
        }
      }
    }
  }
  v12 = sub_D47F8(a1, a3, v37 & 0xF000 | 0x15, (int)v48);
  if ( a1[55] != v12 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v60,
      0x1000u,
      0,
      "%s d'19 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v12,
      a1[55]);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_bist_error_one_lane",
      25,
      9167,
      100,
      v60);
  }
  if ( v12 > 0 )
  {
    v38 = a1;
    v13 = 8 * v12 + 4;
    v14 = &v59;
    v15 = 4;
    v16 = v13;
    v39[0] = a3;
    do
    {
      v19 = *((_DWORD *)v14 - 4);
      __pld(v14);
      if ( (v19 & 0xE000000) != 0 )
      {
        pthread_mutex_lock(&stru_3B526C);
        v35 = v39[v15 / 4 + 9];
        v33 = (*((_DWORD *)v14 - 4) >> 25) & 7;
        v30 = a4;
        v32 = (unsigned __int8)*(v14 - 19);
        v31 = (unsigned __int8)*(v14 - 20);
        v34 = *(_DWORD *)&v48[v15];
        __pld(&v48[v15 + 16]);
        logfmt_raw(
          v60,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x bist err(%02x) cnt %08x %08x",
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        pthread_mutex_unlock(&stru_3B526C);
        v17 = g_zc;
        v18 = 9172;
      }
      else
      {
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          v60,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x bist ok",
          a4,
          (unsigned __int8)*(v14 - 20),
          (unsigned __int8)*(v14 - 19));
        pthread_mutex_unlock(&stru_3B526C);
        v17 = g_zc;
        v18 = 9175;
      }
      v15 += 8;
      v14 += 8;
      zlog(
        v17,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "check_bist_error_one_lane",
        25,
        v18,
        60,
        v60);
    }
    while ( v15 != v16 );
    a1 = v38;
    a3 = v39[0];
  }
  memset(&v39[1], 0, 0x20u);
  v20 = sub_D47F8(a1, a3, v37 & 0xF000 | 0x16, (int)v49);
  if ( v20 > 0 )
  {
    v39[1] = v50 >> 12;
    if ( v20 != 1 )
    {
      v39[2] = v51 >> 12;
      if ( v20 != 2 )
      {
        v39[3] = v52 >> 12;
        if ( v20 != 3 )
        {
          v39[4] = v53 >> 12;
          if ( v20 != 4 )
          {
            v39[5] = v54 >> 12;
            if ( v20 != 5 )
            {
              v39[6] = v55 >> 12;
              if ( v20 != 6 )
              {
                v39[7] = v56 >> 12;
                if ( v20 != 7 )
                  v39[8] = v57 >> 12;
              }
            }
          }
        }
      }
    }
  }
  v21 = sub_D47F8(a1, a3, v37 & 0xF000 | 0x17, (int)v49);
  if ( v21 > 0 )
  {
    v22 = v39;
    v23 = &v39[v21];
    v24 = v49;
    do
    {
      v25 = v22[1];
      ++v22;
      v26 = v25 | (*((_DWORD *)v24 + 1) << 20);
      *v22 = v26;
      pthread_mutex_lock(&stru_3B526C);
      v27 = (unsigned __int8)v24[1];
      v28 = (unsigned __int8)*v24;
      v24 += 8;
      logfmt_raw(v60, 0x1000u, 0, "channel %1x, chip_id %02x core_id %02x sample_cnt %08x", a4, v28, v27, v26);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "check_bist_error_one_lane",
        25,
        9187,
        60,
        v60);
    }
    while ( v22 != v23 );
  }
  return 0;
}
