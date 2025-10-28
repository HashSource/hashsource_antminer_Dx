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
  int *v16; // r3
  int v17; // r3
  unsigned int v18; // r11
  int v19; // r3
  int v20; // r4
  int v21; // r8
  unsigned int v22; // r2
  int v23; // r7
  unsigned __int8 *v24; // r6
  int v25; // r6
  int v26; // r7
  int *v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r3
  int v33; // r6
  int v34; // r8
  unsigned int v35; // r2
  int v36; // r4
  int v37; // r5
  unsigned __int8 *v38; // r4
  unsigned __int8 *v39; // r7
  unsigned __int8 *v41; // r5
  int v42; // r7
  int v43; // [sp+0h] [bp-10ACh]
  int v44; // [sp+4h] [bp-10A8h]
  int v45; // [sp+8h] [bp-10A4h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-1094h]
  int v47; // [sp+1Ch] [bp-1090h]
  unsigned int v48; // [sp+24h] [bp-1088h]
  int v49; // [sp+28h] [bp-1084h]
  int v51; // [sp+30h] [bp-107Ch]
  int v52; // [sp+34h] [bp-1078h]
  int v53; // [sp+34h] [bp-1078h]
  int v54; // [sp+38h] [bp-1074h]
  __useconds_t useconds; // [sp+40h] [bp-106Ch]
  int v56; // [sp+44h] [bp-1068h]
  int i; // [sp+48h] [bp-1064h]
  int v58; // [sp+4Ch] [bp-1060h]
  int v59; // [sp+50h] [bp-105Ch]
  int v60; // [sp+54h] [bp-1058h]
  _DWORD v61[3]; // [sp+58h] [bp-1054h] BYREF
  __int16 v62; // [sp+64h] [bp-1048h]
  _BYTE v63[4]; // [sp+68h] [bp-1044h] BYREF
  char v64; // [sp+6Ch] [bp-1040h]
  char v65[4100]; // [sp+A8h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v65, 0x1000u, 0, 1560772, "enable_rx_equalizer_tuning");
  pthread_mutex_unlock(&stru_1A8A24);
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
    v65);
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
  v58 = v8;
  if ( a4 != 8 )
    v7 = 55;
  v60 = v9;
  v56 = a3;
  if ( a4 == 8 )
    v11 = 61566;
  else
    v11 = 126;
  sub_BF774(a1, v10, v8, 0xFFBFFFFF);
  sub_BF774(a1, v56, v6, 0);
  sub_BF774(a1, v56, v58, 0xFFBFFFFF);
  sub_BF774(a1, v56, v6, 0x400000u);
  sub_BF774(a1, v56, v58, 0xFFBFFFFF);
  sub_BF774(a1, v56, v6, 0);
  sub_BF774(a1, v56, v58, 0xFFFFF7FF);
  sub_BF774(a1, v56, v7, 0x800u);
  sub_BF774(a1, v56, v58, 0xBFFFFFFF);
  sub_BF774(a1, v56, v11, 0x40000000u);
  sub_BF774(a1, v56, v58, 0xFEFFFFFF);
  sub_BF774(a1, v56, v60, 0);
  sub_BF774(a1, v56, v58, 0xFEFFFFFF);
  sub_BF774(a1, v56, v60, 0x1000000u);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v65, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_1A8A24);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_d54",
          9,
          3422,
          60,
          v65);
  if ( v56 == 255 )
  {
    LOWORD(v16) = -15620;
    HIWORD(v16) = (unsigned int)" = %d.\n" >> 16;
    v59 = 14;
    v12 = *v16;
    v13 = v16[1];
    v14 = v16[2];
    v17 = v16[3];
    v15 = v61;
  }
  else
  {
    LOWORD(v17) = 1;
    v59 = 1;
  }
  if ( v56 == 255 )
  {
    *v15 = v12;
    v15[1] = v13;
    v15[2] = v14;
    *((_WORD *)v15 + 6) = v17;
  }
  v18 = (unsigned __int16)a4;
  v48 = (unsigned __int16)a4;
  v54 = 8 * a4;
  for ( i = 0; i != v59; ++i )
  {
    v19 = v56;
    if ( v56 == 255 )
      v19 = *((unsigned __int8 *)v61 + i);
    v49 = v19;
    v52 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)&stru_18694.st_info);
      if ( !v18 )
        break;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = v22 <= 3 && v49 == 3;
        if ( !v23 )
          break;
        ++v20;
LABEL_21:
        v22 = (unsigned __int16)v20;
        if ( v18 <= (unsigned __int16)v20 )
          goto LABEL_33;
      }
      v47 = sub_C20C4(a1, v49, (unsigned __int16)((_WORD)v22 << 12) | 0x36, (int)v63);
      if ( v47 > 0 )
      {
        if ( (v64 & 8) != 0 )
        {
          v24 = v63;
          while ( 1 )
          {
            ++v23;
            ++v21;
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              v65,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v20,
              *v24,
              v24[1],
              8);
            v41 = v24;
            pthread_mutex_unlock(&stru_1A8A24);
            v24 += 8;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_d54",
              9,
              3452,
              20,
              v65);
            if ( v47 == v23 )
              break;
            if ( (*((_DWORD *)v41 + 3) & 8) == 0 )
            {
              v25 = 8 * v23;
              v26 = 8 * v23 + 4;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v25 = 0;
          v26 = 4;
LABEL_31:
          v21 >>= 3;
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(
            v65,
            0x1000u,
            0,
            1530508,
            v20,
            (unsigned __int8)v63[v25],
            (unsigned __int8)v63[v25 + 1],
            bswap32(*(_DWORD *)&v63[v26]),
            8);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v65);
        }
      }
      ++v20;
      if ( v21 >= 8 * v20 )
        goto LABEL_21;
LABEL_33:
      if ( v21 >= v54 )
        break;
      if ( !--v52 )
        goto LABEL_35;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v65, 0x1000u, 0, 1530408, 8);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v65);
LABEL_35:
    ;
  }
  sub_BF774(a1, v56, v58, 0xFEFFFFFF);
  sub_BF774(a1, v56, v60, 0);
  sub_BF774(a1, v56, v58, 0);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v65, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54",
    9,
    3422,
    60,
    v65);
  if ( v56 == 255 )
  {
    LOWORD(v27) = -15620;
    HIWORD(v27) = (unsigned int)" = %d.\n" >> 16;
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v31 = v27[3];
    v61[0] = v28;
    v61[1] = v29;
    v61[2] = v30;
    v62 = v31;
  }
  useconds = 0;
  do
  {
    v32 = v56;
    if ( v56 == 255 )
      v32 = *((unsigned __int8 *)v61 + useconds);
    v51 = v32;
    v53 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)&stru_18694.st_info);
      if ( v48 )
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = v35 <= 3 && v51 == 3;
          if ( v36 )
          {
            ++v33;
            goto LABEL_44;
          }
          mutex = (pthread_mutex_t *)sub_C20C4(a1, v51, (unsigned __int16)((_WORD)v35 << 12) | 0x36, (int)v63);
          if ( (int)mutex <= 0 )
            goto LABEL_55;
          v37 = v64 & 8;
          if ( (v64 & 8) == 0 )
            break;
          v42 = 4;
LABEL_64:
          pthread_mutex_lock(&stru_1A8A24);
          v34 >>= 3;
          v43 = v33++;
          logfmt_raw(
            v65,
            0x1000u,
            0,
            "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
            v43,
            (unsigned __int8)v63[v36],
            (unsigned __int8)v63[v36 + 1],
            bswap32(*(_DWORD *)&v63[v42]),
            0);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3456,
            100,
            v65);
          if ( v34 < 8 * v33 )
            goto LABEL_56;
LABEL_44:
          v35 = (unsigned __int16)v33;
          if ( (unsigned __int16)v33 >= v48 )
            goto LABEL_56;
        }
        v38 = v63;
        while ( 1 )
        {
          ++v37;
          pthread_mutex_lock(&stru_1A8A24);
          v39 = v38;
          ++v34;
          v45 = v38[1];
          v44 = *v38;
          v38 += 8;
          logfmt_raw(v65, 0x1000u, 0, 1530444, v33, v44, v45, 0);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_d54",
            9,
            3452,
            20,
            v65);
          if ( mutex == (pthread_mutex_t *)v37 )
            break;
          if ( (*((_DWORD *)v39 + 3) & 8) != 0 )
          {
            v36 = 8 * v37;
            v42 = 8 * v37 + 4;
            goto LABEL_64;
          }
        }
LABEL_55:
        ++v33;
        if ( v34 < 8 * v33 )
          goto LABEL_56;
        goto LABEL_44;
      }
      v34 = 0;
LABEL_56:
      if ( v34 >= v54 )
        break;
      if ( !--v53 )
        goto LABEL_58;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v65, 0x1000u, 0, 1530408, 0);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3465,
      20,
      v65);
LABEL_58:
    ++useconds;
  }
  while ( useconds != i );
  return 0;
}
