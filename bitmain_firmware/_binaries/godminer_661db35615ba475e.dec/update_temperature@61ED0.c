int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int v7; // r4
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r1
  _DWORD *v12; // r2
  int v13; // r1
  bool v14; // nf
  int v15; // r3
  int v16; // r2
  int v18; // r1
  int v19; // r8
  int v20; // r12
  int v21; // r11
  int v22; // r12
  int v23; // r11
  _DWORD *v24; // r3
  int v25; // r12
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r8
  int v30; // r10
  int v31; // r8
  _DWORD *v32; // r3
  int v33; // r12
  int v34; // r2
  int v35; // r8
  int v36; // r10
  int v37; // r8
  _DWORD *v38; // r3
  int v39; // r12
  int v40; // r8
  _DWORD *v41; // r3
  int v42; // r12
  int v43; // r1
  int v44; // r9
  int v45; // r3
  int v46; // r6
  _DWORD *v47; // r3
  int v48; // r12
  int v49; // r8
  int v50; // r12
  int v51; // r11
  _DWORD *v52; // r3
  int v53; // r12
  int v54; // r3
  int v55; // [sp+2Ch] [bp-10F0h]
  int v56; // [sp+30h] [bp-10ECh]
  unsigned int v57; // [sp+3Ch] [bp-10E0h] BYREF
  int v58; // [sp+40h] [bp-10DCh] BYREF
  int v59; // [sp+44h] [bp-10D8h] BYREF
  int v60; // [sp+48h] [bp-10D4h] BYREF
  int v61; // [sp+4Ch] [bp-10D0h] BYREF
  int v62; // [sp+50h] [bp-10CCh] BYREF
  _DWORD v63[8]; // [sp+54h] [bp-10C8h] BYREF
  int v64; // [sp+74h] [bp-10A8h]
  const char *v65; // [sp+78h] [bp-10A4h]
  int v66; // [sp+7Ch] [bp-10A0h]
  int v67; // [sp+80h] [bp-109Ch]
  int v68; // [sp+84h] [bp-1098h]
  int v69; // [sp+88h] [bp-1094h]
  int v70; // [sp+8Ch] [bp-1090h]
  int v71; // [sp+90h] [bp-108Ch]
  int v72; // [sp+94h] [bp-1088h]
  const char *v73; // [sp+98h] [bp-1084h]
  int v74; // [sp+9Ch] [bp-1080h]
  int v75; // [sp+A0h] [bp-107Ch]
  int v76; // [sp+A4h] [bp-1078h]
  int v77; // [sp+A8h] [bp-1074h]
  int v78; // [sp+ACh] [bp-1070h]
  int v79; // [sp+B0h] [bp-106Ch]
  int v80; // [sp+B4h] [bp-1068h]
  const char *v81; // [sp+B8h] [bp-1064h]
  int v82; // [sp+BCh] [bp-1060h]
  int v83; // [sp+C0h] [bp-105Ch]
  int v84; // [sp+C4h] [bp-1058h]
  int v85; // [sp+C8h] [bp-1054h]
  int v86; // [sp+CCh] [bp-1050h]
  int v87; // [sp+D0h] [bp-104Ch]
  int v88; // [sp+D4h] [bp-1048h]
  const char *v89; // [sp+D8h] [bp-1044h]
  int v90; // [sp+DCh] [bp-1040h]
  int v91; // [sp+E0h] [bp-103Ch]
  int v92; // [sp+E4h] [bp-1038h]
  int v93; // [sp+E8h] [bp-1034h]
  int v94; // [sp+ECh] [bp-1030h]
  int v95; // [sp+F0h] [bp-102Ch]
  int v96; // [sp+F4h] [bp-1028h]
  const char *v97; // [sp+F8h] [bp-1024h]
  int v98; // [sp+FCh] [bp-1020h]
  int v99; // [sp+100h] [bp-101Ch]
  int v100; // [sp+104h] [bp-1018h]
  __int64 v101; // [sp+108h] [bp-1014h]
  int v102; // [sp+110h] [bp-100Ch]
  int v103; // [sp+114h] [bp-1008h]
  char v104[4100]; // [sp+118h] [bp-1004h] BYREF

  if ( *(_BYTE *)(a1 + 130) )
    v3 = 0;
  else
    v3 = 5;
  v56 = v3;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  if ( read_temperature(a1, a2, v63, &v62, &v61, &v60, &v59, &v58, &v57) )
  {
    pthread_mutex_lock(&stru_197BB8);
    v40 = *(_DWORD *)(a1 + 124);
    v63[1] = "chain";
    v63[2] = 5;
    v63[3] = 3;
    v63[5] = v40;
    v63[6] = v40 >> 31;
    v63[7] = 0;
    ++dword_197BD4;
    logfmt_raw(
      v104,
      0x1000u,
      0,
      v64,
      "chain",
      5,
      3,
      v63[4],
      (__int64)v40,
      0,
      v64,
      "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
      v59,
      v58,
      v57);
    pthread_mutex_unlock(&stru_197BB8);
    if ( v56 == 5 )
    {
      LOWORD(v41) = (unsigned __int16)&g_zc;
      v42 = 20;
    }
    else
    {
      LOWORD(v41) = 31696;
      v42 = 120;
    }
    HIWORD(v41) = (unsigned int)&g_zc >> 16;
    zlog(
      *v41,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      265,
      v42,
      v104);
    *(_DWORD *)(a3 + 16) |= 1u;
  }
  LOWORD(v7) = (unsigned __int16)&stru_190E30;
  v8 = 4 * *(_DWORD *)(a1 + 120);
  if ( v59 )
  {
    HIWORD(v7) = (unsigned int)&stru_190E30 >> 16;
    v9 = v62;
    v10 = v7 + v8;
    *(_DWORD *)(v10 + 3556) = v63[0];
    *(_DWORD *)(v10 + 3572) = 0;
    a2[5] = v9;
  }
  else
  {
    HIWORD(v7) = (unsigned int)&stru_190E30 >> 16;
    v34 = *(_DWORD *)(v7 + v8 + 3572) + 1;
    v14 = *(_DWORD *)(v7 + v8 + 3572) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 3572) = v34;
    if ( !(v14 ^ __OFSUB__(v34, 2) | (v34 == 2)) )
    {
      V_LOCK();
      v35 = *(_DWORD *)(a1 + 120);
      v65 = "chain";
      v66 = 5;
      v67 = 3;
      v36 = *(_DWORD *)(v7 + 4 * v35 + 3572);
      v37 = *(_DWORD *)(a1 + 124);
      v71 = 0;
      v69 = v37;
      v70 = v37 >> 31;
      ++dword_197BD4;
      logfmt_raw(
        v104,
        0x1000u,
        0,
        v72,
        "chain",
        5,
        3,
        v68,
        (__int64)v37,
        0,
        v72,
        "read no sensor pcb temp exceed limit! (%d)",
        v36);
      V_UNLOCK();
      if ( v56 == 5 )
      {
        LOWORD(v38) = (unsigned __int16)&g_zc;
        v39 = 20;
      }
      else
      {
        LOWORD(v38) = 31696;
        v39 = 120;
      }
      HIWORD(v38) = (unsigned int)&g_zc >> 16;
      zlog(
        *v38,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        277,
        v39,
        v104);
      v8 = 4 * *(_DWORD *)(a1 + 120);
      *(_DWORD *)(a3 + 16) |= 8u;
    }
  }
  if ( v58 )
  {
    v11 = v61;
    *(_DWORD *)(v7 + v8 + 3588) = 0;
    a2[4] = v11;
  }
  else
  {
    v28 = *(_DWORD *)(v7 + v8 + 3588) + 1;
    v14 = *(_DWORD *)(v7 + v8 + 3588) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 3588) = v28;
    if ( !(v14 ^ __OFSUB__(v28, 2) | (v28 == 2)) )
    {
      V_LOCK();
      v29 = *(_DWORD *)(a1 + 120);
      v73 = "chain";
      v74 = 5;
      v75 = 3;
      v30 = *(_DWORD *)(v7 + 4 * v29 + 3588);
      v31 = *(_DWORD *)(a1 + 124);
      v79 = 0;
      v77 = v31;
      v78 = v31 >> 31;
      ++dword_197BD4;
      logfmt_raw(
        v104,
        0x1000u,
        0,
        v80,
        "chain",
        5,
        3,
        v76,
        (__int64)v31,
        0,
        v80,
        "read no sensor chip temp exceed limit! (%d)",
        v30);
      V_UNLOCK();
      if ( v56 == 5 )
      {
        LOWORD(v32) = (unsigned __int16)&g_zc;
        v33 = 20;
      }
      else
      {
        LOWORD(v32) = 31696;
        v33 = 120;
      }
      HIWORD(v32) = (unsigned int)&g_zc >> 16;
      zlog(
        *v32,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        290,
        v33,
        v104);
      v8 = 4 * *(_DWORD *)(a1 + 120);
      *(_DWORD *)(a3 + 16) |= 8u;
    }
  }
  v12 = *(_DWORD **)(a1 + 196);
  if ( v12[5] >= v57 )
  {
    *(_DWORD *)(v7 + v8 + 3604) = 0;
  }
  else
  {
    v13 = *(_DWORD *)(v7 + v8 + 3604) + 1;
    v14 = *(_DWORD *)(v7 + v8 + 3604) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 3604) = v13;
    if ( !(v14 ^ __OFSUB__(v13, 2) | (v13 == 2)) )
    {
      V_LOCK();
      v49 = *(_DWORD *)(a1 + 124);
      v50 = v7 + 4 * *(_DWORD *)(a1 + 120);
      v81 = "chain";
      v51 = *(_DWORD *)(v50 + 3604);
      v82 = 5;
      v83 = 3;
      v85 = v49;
      v86 = v49 >> 31;
      v87 = 0;
      ++dword_197BD4;
      logfmt_raw(
        v104,
        0x1000u,
        0,
        v88,
        "chain",
        5,
        3,
        v84,
        (__int64)v49,
        0,
        v88,
        "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
        v51,
        v57);
      V_UNLOCK();
      if ( v56 == 5 )
      {
        LOWORD(v52) = (unsigned __int16)&g_zc;
        v53 = 20;
      }
      else
      {
        LOWORD(v52) = 31696;
        v53 = 120;
      }
      HIWORD(v52) = (unsigned int)&g_zc >> 16;
      zlog(
        *v52,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        299,
        v53,
        v104);
      v54 = *(_DWORD *)(a1 + 120);
      v12 = *(_DWORD **)(a1 + 196);
      *(_DWORD *)(a3 + 16) |= 0x10u;
      v8 = 4 * v54;
    }
  }
  if ( a2[4] >= v12[2] || *(_DWORD *)(v7 + v8 + 3556) >= v12[3] )
  {
    v18 = *(_DWORD *)(v7 + v8 + 3620) + 1;
    v14 = *(_DWORD *)(v7 + v8 + 3620) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 3620) = v18;
    if ( !(v14 ^ __OFSUB__(v18, 2) | (v18 == 2)) )
    {
      V_LOCK();
      v19 = *(_DWORD *)(a1 + 124);
      v20 = v7 + 4 * *(_DWORD *)(a1 + 120);
      v89 = "chain";
      v90 = 5;
      v21 = *(_DWORD *)(v20 + 3556);
      v22 = *(_DWORD *)(v20 + 3620);
      v91 = 3;
      v55 = v21;
      v23 = a2[4];
      v93 = v19;
      v94 = v19 >> 31;
      v95 = 0;
      ++dword_197BD4;
      logfmt_raw(
        v104,
        0x1000u,
        0,
        v96,
        "chain",
        5,
        3,
        v92,
        (__int64)v19,
        0,
        v96,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        v22,
        v23,
        v55);
      V_UNLOCK();
      if ( v56 == 5 )
      {
        LOWORD(v24) = (unsigned __int16)&g_zc;
        v25 = 20;
      }
      else
      {
        LOWORD(v24) = 31696;
        v25 = 120;
      }
      HIWORD(v24) = (unsigned int)&g_zc >> 16;
      zlog(
        *v24,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        310,
        v25,
        v104);
      v26 = *(_DWORD *)(a1 + 196);
      v27 = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(a3 + 16) |= 2u;
      v8 = 4 * v27;
      if ( a2[5] <= *(_DWORD *)(v26 + 16) )
        goto LABEL_17;
LABEL_25:
      *(_DWORD *)(v7 + v8 + 3636) = 0;
      return a3 + 16;
    }
  }
  else
  {
    *(_DWORD *)(v7 + v8 + 3620) = 0;
  }
  if ( a2[5] > v12[4] )
    goto LABEL_25;
LABEL_17:
  v15 = v7 + v8;
  v16 = *(_DWORD *)(v15 + 3636) + 1;
  v14 = *(_DWORD *)(v15 + 3636) - 1 < 0;
  *(_DWORD *)(v15 + 3636) = v16;
  if ( v14 ^ __OFSUB__(v16, 2) | (v16 == 2) )
    return a3 + 16;
  V_LOCK();
  v43 = *(_DWORD *)(a1 + 124);
  v44 = a2[5];
  v45 = v7 + 4 * *(_DWORD *)(a1 + 120);
  v98 = 5;
  v97 = "chain";
  v46 = *(_DWORD *)(v45 + 3636);
  v99 = 3;
  v101 = v43;
  v102 = 0;
  ++dword_197BD4;
  logfmt_raw(
    v104,
    0x1000u,
    0,
    v103,
    "chain",
    5,
    3,
    v100,
    (__int64)v43,
    0,
    v103,
    "low temp exceed limit (%d), min_chip_temp = %d!",
    v46,
    v44);
  V_UNLOCK();
  if ( v56 == 5 )
  {
    LOWORD(v47) = (unsigned __int16)&g_zc;
    v48 = 20;
  }
  else
  {
    LOWORD(v47) = 31696;
    v48 = 120;
  }
  HIWORD(v47) = (unsigned int)&g_zc >> 16;
  zlog(
    *v47,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/miner_monitor/update_miner_status/update_temperature.c",
    186,
    "update_temperature",
    18,
    321,
    v48,
    v104);
  *(_DWORD *)(a3 + 16) |= 4u;
  return a3 + 16;
}
