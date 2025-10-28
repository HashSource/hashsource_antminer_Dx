int __fastcall enable_rx_equalizer_tuning(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r3
  int v6; // r12
  int v7; // r2
  int v8; // r3
  int v9; // r7
  int v10; // r6
  int v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r2
  __int16 v15; // r3
  unsigned int v16; // r11
  int v17; // r3
  unsigned int v18; // r7
  int v19; // r4
  int v20; // r11
  unsigned int v21; // r2
  _BOOL4 v22; // r3
  int v23; // r5
  int v24; // r0
  unsigned __int8 *v25; // r8
  int v26; // r6
  int v27; // r9
  int v28; // r8
  int v29; // r3
  int v30; // r6
  int v31; // r8
  unsigned int v32; // r2
  int v34; // r5
  unsigned __int8 *v35; // r4
  unsigned __int8 *v36; // r7
  unsigned __int8 *v38; // r9
  int v39; // r7
  int v40; // r4
  int v41; // [sp+18h] [bp-1094h]
  int v42; // [sp+18h] [bp-1094h]
  unsigned int v43; // [sp+24h] [bp-1088h]
  int v44; // [sp+28h] [bp-1084h]
  int v46; // [sp+30h] [bp-107Ch]
  int v47; // [sp+34h] [bp-1078h]
  int v48; // [sp+34h] [bp-1078h]
  int v49; // [sp+38h] [bp-1074h]
  __useconds_t useconds; // [sp+40h] [bp-106Ch]
  int i; // [sp+48h] [bp-1064h]
  int v53; // [sp+4Ch] [bp-1060h]
  int v54; // [sp+50h] [bp-105Ch]
  int v55; // [sp+54h] [bp-1058h]
  _DWORD v56[3]; // [sp+58h] [bp-1054h] BYREF
  __int16 v57; // [sp+64h] [bp-1048h]
  _BYTE v58[4]; // [sp+68h] [bp-1044h] BYREF
  char v59; // [sp+6Ch] [bp-1040h]
  char v60[4100]; // [sp+A8h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v60, 0x1000u, 0, "%s...", "enable_rx_equalizer_tuning");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_rx_equalizer_tuning",
    26,
    3500,
    60,
    v60);
  v5 = 61441;
  if ( a4 != 8 )
    v5 = 1;
  v6 = 61592;
  v7 = v5;
  v53 = v5;
  if ( a4 == 8 )
  {
    v8 = 61487;
  }
  else
  {
    v8 = 47;
    v6 = 152;
  }
  v41 = v8;
  v9 = 61566;
  v55 = v6;
  if ( a4 != 8 )
    v9 = 126;
  v10 = 61495;
  if ( a4 != 8 )
    v10 = 55;
  sub_D19C4((int)a1, a3, v7, 0xFFBFFFFF);
  sub_D19C4((int)a1, a3, v41, 0);
  sub_D19C4((int)a1, a3, v53, 0xFFBFFFFF);
  sub_D19C4((int)a1, a3, v41, 0x400000u);
  sub_D19C4((int)a1, a3, v53, 0xFFBFFFFF);
  sub_D19C4((int)a1, a3, v41, 0);
  sub_D19C4((int)a1, a3, v53, 0xFFFFF7FF);
  sub_D19C4((int)a1, a3, v10, 0x800u);
  sub_D19C4((int)a1, a3, v53, 0xBFFFFFFF);
  sub_D19C4((int)a1, a3, v9, 0x40000000u);
  sub_D19C4((int)a1, a3, v53, 0xFEFFFFFF);
  sub_D19C4((int)a1, a3, v55, 0);
  sub_D19C4((int)a1, a3, v53, 0xFEFFFFFF);
  sub_D19C4((int)a1, a3, v55, 0x1000000u);
  v11 = 3422;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v60, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_3B526C);
  v12 = zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "check_d54",
          9,
          3422,
          60,
          v60);
  if ( a3 == 255 )
  {
    v54 = 14;
    v12 = 100991489;
    v13 = 235735561;
    v14 = 134677248;
    v15 = 3851;
    v11 = (int)v56;
  }
  else
  {
    v15 = 1;
    v54 = 1;
  }
  if ( a3 == 255 )
  {
    *(_DWORD *)v11 = v12;
    *(_DWORD *)(v11 + 4) = v13;
    *(_DWORD *)(v11 + 8) = v14;
    *(_WORD *)(v11 + 12) = v15;
  }
  v16 = (unsigned __int16)a4;
  v43 = (unsigned __int16)a4;
  v49 = 8 * a4;
  for ( i = 0; i != v54; ++i )
  {
    v17 = a3;
    v18 = v16;
    if ( a3 == 255 )
      v17 = *((unsigned __int8 *)v56 + i);
    v44 = v17;
    v47 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      if ( !v18 )
        break;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v22 = v21 <= 3 && v44 == 3;
        v23 = v22;
        if ( !v22 )
          break;
        ++v19;
LABEL_22:
        v21 = (unsigned __int16)v19;
        if ( v18 <= (unsigned __int16)v19 )
          goto LABEL_33;
      }
      v24 = sub_D47F8(a1, v44, (unsigned __int16)((_WORD)v21 << 12) | 0x36, (int)v58);
      if ( v24 > 0 )
      {
        if ( (v59 & 8) != 0 )
        {
          v25 = v58;
          v26 = v24;
          while ( 1 )
          {
            ++v23;
            ++v20;
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v60,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v19,
              *v25,
              v25[1],
              8);
            v38 = v25;
            pthread_mutex_unlock(&stru_3B526C);
            v25 += 8;
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_d54",
              9,
              3452,
              20,
              v60);
            if ( v26 == v23 )
              break;
            if ( (*((_DWORD *)v38 + 3) & 8) == 0 )
            {
              v28 = 8 * v23;
              v27 = 8 * v23 + 4;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v23 = 0;
          v27 = 4;
          v28 = 0;
LABEL_31:
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v60,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v19,
            (unsigned __int8)v58[8 * v23],
            (unsigned __int8)v58[v28 + 1],
            bswap32(*(_DWORD *)&v58[v27]),
            8);
          v20 >>= 3;
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_d54",
            9,
            3456,
            100,
            v60);
        }
      }
      ++v19;
      if ( v20 >= 8 * v19 )
        goto LABEL_22;
LABEL_33:
      if ( v20 >= v49 )
        break;
      if ( !--v47 )
      {
        v16 = v18;
        goto LABEL_36;
      }
    }
    v16 = v18;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v60, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", 8);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_d54",
      9,
      3465,
      20,
      v60);
LABEL_36:
    ;
  }
  sub_D19C4((int)a1, a3, v53, 0xFEFFFFFF);
  sub_D19C4((int)a1, a3, v55, 0);
  sub_D19C4((int)a1, a3, v53, 0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v60, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_d54",
    9,
    3422,
    60,
    v60);
  if ( a3 == 255 )
  {
    v56[0] = 100991489;
    v56[1] = 235735561;
    v56[2] = 134677248;
    v57 = 3851;
  }
  useconds = 0;
  do
  {
    v29 = a3;
    if ( a3 == 255 )
      v29 = *((unsigned __int8 *)v56 + useconds);
    v46 = v29;
    v48 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      if ( v43 )
      {
        v30 = 0;
        v31 = 0;
        v32 = 0;
        while ( 1 )
        {
          if ( v32 <= 3 && v46 == 3 )
          {
            ++v30;
            goto LABEL_46;
          }
          v42 = sub_D47F8(a1, v46, (unsigned __int16)((_WORD)v32 << 12) | 0x36, (int)v58);
          if ( v42 <= 0 )
            goto LABEL_56;
          v34 = v59 & 8;
          if ( (v59 & 8) == 0 )
            break;
          v34 = 0;
          v40 = 4;
          v39 = 0;
LABEL_65:
          v31 >>= 3;
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v60,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v30++,
            (unsigned __int8)v58[8 * v34],
            (unsigned __int8)v58[v39 + 1],
            bswap32(*(_DWORD *)&v58[v40]),
            0);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_d54",
            9,
            3456,
            100,
            v60);
          if ( v31 < 8 * v30 )
            goto LABEL_57;
LABEL_46:
          v32 = (unsigned __int16)v30;
          if ( (unsigned __int16)v30 >= v43 )
            goto LABEL_57;
        }
        v35 = v58;
        while ( 1 )
        {
          pthread_mutex_lock(&stru_3B526C);
          ++v34;
          ++v31;
          logfmt_raw(
            v60,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
            v30,
            *v35,
            v35[1],
            0);
          pthread_mutex_unlock(&stru_3B526C);
          v36 = v35;
          v35 += 8;
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_d54",
            9,
            3452,
            20,
            v60);
          if ( v42 == v34 )
            break;
          if ( (*((_DWORD *)v36 + 3) & 8) != 0 )
          {
            v39 = 8 * v34;
            v40 = 8 * v34 + 4;
            goto LABEL_65;
          }
        }
LABEL_56:
        ++v30;
        if ( v31 < 8 * v30 )
          goto LABEL_57;
        goto LABEL_46;
      }
      v31 = 0;
LABEL_57:
      if ( v31 >= v49 )
        break;
      if ( !--v48 )
        goto LABEL_59;
    }
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v60, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", 0);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_d54",
      9,
      3465,
      20,
      v60);
LABEL_59:
    ++useconds;
  }
  while ( useconds != i );
  return 0;
}
