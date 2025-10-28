int __fastcall enable_rx_equalizer_tuning(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // lr
  char v10; // r1
  int v11; // r11
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int *v15; // r12
  __int16 v16; // r3
  unsigned int v17; // r11
  int v18; // r3
  int v19; // r4
  int v20; // r8
  unsigned int v21; // r2
  int v22; // r7
  unsigned __int8 *v23; // r6
  int v24; // r6
  int v25; // r7
  int v26; // r3
  int v27; // r6
  int v28; // r8
  unsigned int v29; // r2
  int v30; // r4
  int v31; // r5
  unsigned __int8 *v32; // r4
  unsigned __int8 *v33; // r7
  unsigned __int8 *v35; // r5
  int v36; // r7
  int v37; // [sp+0h] [bp-10ACh]
  int v38; // [sp+4h] [bp-10A8h]
  int v39; // [sp+8h] [bp-10A4h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-1094h]
  int v41; // [sp+1Ch] [bp-1090h]
  unsigned int v42; // [sp+24h] [bp-1088h]
  int v43; // [sp+28h] [bp-1084h]
  int v45; // [sp+30h] [bp-107Ch]
  int v46; // [sp+34h] [bp-1078h]
  int v47; // [sp+34h] [bp-1078h]
  int v48; // [sp+38h] [bp-1074h]
  __useconds_t useconds; // [sp+40h] [bp-106Ch]
  int v50; // [sp+44h] [bp-1068h]
  int i; // [sp+48h] [bp-1064h]
  int v52; // [sp+4Ch] [bp-1060h]
  int v53; // [sp+50h] [bp-105Ch]
  int v54; // [sp+54h] [bp-1058h]
  _DWORD v55[3]; // [sp+58h] [bp-1054h] BYREF
  __int16 v56; // [sp+64h] [bp-1048h]
  _BYTE v57[4]; // [sp+68h] [bp-1044h] BYREF
  char v58; // [sp+6Ch] [bp-1040h]
  char v59[4100]; // [sp+A8h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v59, 0x1000u, 0, "%s...", "enable_rx_equalizer_tuning");
  pthread_mutex_unlock(&stru_197BB8);
  v6 = 61487;
  v7 = 61495;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning",
    26,
    3500,
    60,
    v59);
  v8 = 61441;
  if ( a4 != 8 )
  {
    v8 = 1;
    v6 = 47;
  }
  v9 = 61592;
  if ( a4 != 8 )
    v9 = 152;
  v10 = a3;
  v52 = v8;
  if ( a4 != 8 )
    v7 = 55;
  v54 = v9;
  v50 = a3;
  if ( a4 == 8 )
    v11 = 61566;
  else
    v11 = 126;
  sub_1325F4(a1, v10, v8, 0xFFBFFFFF);
  sub_1325F4(a1, v50, v6, 0);
  sub_1325F4(a1, v50, v52, 0xFFBFFFFF);
  sub_1325F4(a1, v50, v6, 0x400000u);
  sub_1325F4(a1, v50, v52, 0xFFBFFFFF);
  sub_1325F4(a1, v50, v6, 0);
  sub_1325F4(a1, v50, v52, 0xFFFFF7FF);
  sub_1325F4(a1, v50, v7, 0x800u);
  sub_1325F4(a1, v50, v52, 0xBFFFFFFF);
  sub_1325F4(a1, v50, v11, 0x40000000u);
  sub_1325F4(a1, v50, v52, 0xFEFFFFFF);
  sub_1325F4(a1, v50, v54, 0);
  sub_1325F4(a1, v50, v52, 0xFEFFFFFF);
  sub_1325F4(a1, v50, v54, 0x1000000u);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v59, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_197BB8);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_d54",
          9,
          3422,
          60,
          v59);
  if ( v50 == 255 )
  {
    v53 = 14;
    v12 = 100991489;
    v13 = 235735561;
    v14 = 134677248;
    v16 = 3851;
    v15 = v55;
  }
  else
  {
    v16 = 1;
    v53 = 1;
  }
  if ( v50 == 255 )
  {
    *v15 = v12;
    v15[1] = v13;
    v15[2] = v14;
    *((_WORD *)v15 + 6) = v16;
  }
  v17 = (unsigned __int16)a4;
  v42 = (unsigned __int16)a4;
  v48 = 8 * a4;
  for ( i = 0; i != v53; ++i )
  {
    v18 = v50;
    if ( v50 == 255 )
      v18 = *((unsigned __int8 *)v55 + i);
    v43 = v18;
    v46 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ead_unregister_cancel");
      if ( !v17 )
        break;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v22 = v21 <= 3 && v43 == 3;
        if ( !v22 )
          break;
        ++v19;
LABEL_21:
        v21 = (unsigned __int16)v19;
        if ( v17 <= (unsigned __int16)v19 )
          goto LABEL_33;
      }
      v41 = sub_13415C(a1, v43, (unsigned __int16)((_WORD)v21 << 12) | 0x36, (int)v57);
      if ( v41 > 0 )
      {
        if ( (v58 & 8) != 0 )
        {
          v23 = v57;
          while ( 1 )
          {
            ++v22;
            ++v20;
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              v59,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v19,
              *v23,
              v23[1],
              8);
            v35 = v23;
            pthread_mutex_unlock(&stru_197BB8);
            v23 += 8;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v59);
            if ( v41 == v22 )
              break;
            if ( (*((_DWORD *)v35 + 3) & 8) == 0 )
            {
              v24 = 8 * v22;
              v25 = 8 * v22 + 4;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v24 = 0;
          v25 = 4;
LABEL_31:
          v20 >>= 3;
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            v59,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v19,
            (unsigned __int8)v57[v24],
            (unsigned __int8)v57[v24 + 1],
            bswap32(*(_DWORD *)&v57[v25]),
            8);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v59);
        }
      }
      ++v19;
      if ( v20 >= 8 * v19 )
        goto LABEL_21;
LABEL_33:
      if ( v20 >= v48 )
        break;
      if ( !--v46 )
        goto LABEL_35;
    }
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v59, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", 8);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v59);
LABEL_35:
    ;
  }
  sub_1325F4(a1, v50, v52, 0xFEFFFFFF);
  sub_1325F4(a1, v50, v54, 0);
  sub_1325F4(a1, v50, v52, 0);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v59, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54",
    9,
    3422,
    60,
    v59);
  if ( v50 == 255 )
  {
    v55[0] = 100991489;
    v55[1] = 235735561;
    v55[2] = 134677248;
    v56 = 3851;
  }
  useconds = 0;
  do
  {
    v26 = v50;
    if ( v50 == 255 )
      v26 = *((unsigned __int8 *)v55 + useconds);
    v45 = v26;
    v47 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ead_unregister_cancel");
      if ( v42 )
      {
        v27 = 0;
        v28 = 0;
        v29 = 0;
        while ( 1 )
        {
          v30 = v29 <= 3 && v45 == 3;
          if ( v30 )
          {
            ++v27;
            goto LABEL_44;
          }
          mutex = (pthread_mutex_t *)sub_13415C(a1, v45, (unsigned __int16)((_WORD)v29 << 12) | 0x36, (int)v57);
          if ( (int)mutex <= 0 )
            goto LABEL_55;
          v31 = v58 & 8;
          if ( (v58 & 8) == 0 )
            break;
          v36 = 4;
LABEL_64:
          pthread_mutex_lock(&stru_197BB8);
          v28 >>= 3;
          v37 = v27++;
          logfmt_raw(
            v59,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v37,
            (unsigned __int8)v57[v30],
            (unsigned __int8)v57[v30 + 1],
            bswap32(*(_DWORD *)&v57[v36]),
            0);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v59);
          if ( v28 < 8 * v27 )
            goto LABEL_56;
LABEL_44:
          v29 = (unsigned __int16)v27;
          if ( (unsigned __int16)v27 >= v42 )
            goto LABEL_56;
        }
        v32 = v57;
        while ( 1 )
        {
          ++v31;
          pthread_mutex_lock(&stru_197BB8);
          v33 = v32;
          ++v28;
          v39 = v32[1];
          v38 = *v32;
          v32 += 8;
          logfmt_raw(
            v59,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
            v27,
            v38,
            v39,
            0);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3452,
            20,
            v59);
          if ( mutex == (pthread_mutex_t *)v31 )
            break;
          if ( (*((_DWORD *)v33 + 3) & 8) != 0 )
          {
            v30 = 8 * v31;
            v36 = 8 * v31 + 4;
            goto LABEL_64;
          }
        }
LABEL_55:
        ++v27;
        if ( v28 < 8 * v27 )
          goto LABEL_56;
        goto LABEL_44;
      }
      v28 = 0;
LABEL_56:
      if ( v28 >= v48 )
        break;
      if ( !--v47 )
        goto LABEL_58;
    }
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v59, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", 0);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v59);
LABEL_58:
    ++useconds;
  }
  while ( useconds != i );
  return 0;
}
