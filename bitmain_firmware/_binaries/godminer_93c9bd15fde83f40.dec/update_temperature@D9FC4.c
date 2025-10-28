int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  int v4; // r7
  int v7; // r5
  int v8; // r3
  int v9; // r2
  bool v10; // nf
  int v11; // r1
  _DWORD *v12; // r2
  int v13; // r1
  int v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v19; // r9
  int v20; // r6
  int v22; // r12
  int v23; // r2
  bool v24; // zf
  int v25; // r2
  int v26; // r8
  int v27; // r10
  int v28; // r8
  int v29; // r8
  int v30; // r8
  int v31; // r12
  int v32; // r11
  int v33; // r12
  int v34; // r11
  int v35; // r8
  int v36; // r12
  int v37; // r11
  int v38; // r8
  int v39; // r10
  int v40; // r8
  int v41; // [sp+2Ch] [bp-10F0h]
  int v43; // [sp+34h] [bp-10E8h]
  unsigned int v44; // [sp+3Ch] [bp-10E0h] BYREF
  int v45; // [sp+40h] [bp-10DCh] BYREF
  int v46; // [sp+44h] [bp-10D8h] BYREF
  int v47; // [sp+48h] [bp-10D4h] BYREF
  int v48; // [sp+4Ch] [bp-10D0h] BYREF
  int v49; // [sp+50h] [bp-10CCh] BYREF
  _DWORD v50[5]; // [sp+54h] [bp-10C8h] BYREF
  __int64 v51; // [sp+68h] [bp-10B4h]
  int v52; // [sp+70h] [bp-10ACh]
  int v53; // [sp+74h] [bp-10A8h]
  const char *v54; // [sp+78h] [bp-10A4h]
  int v55; // [sp+7Ch] [bp-10A0h]
  int v56; // [sp+80h] [bp-109Ch]
  int v57; // [sp+84h] [bp-1098h]
  int v58; // [sp+88h] [bp-1094h]
  int v59; // [sp+8Ch] [bp-1090h]
  int v60; // [sp+90h] [bp-108Ch]
  int v61; // [sp+94h] [bp-1088h]
  const char *v62; // [sp+98h] [bp-1084h]
  int v63; // [sp+9Ch] [bp-1080h]
  int v64; // [sp+A0h] [bp-107Ch]
  int v65; // [sp+A4h] [bp-1078h]
  int v66; // [sp+A8h] [bp-1074h]
  int v67; // [sp+ACh] [bp-1070h]
  int v68; // [sp+B0h] [bp-106Ch]
  int v69; // [sp+B4h] [bp-1068h]
  const char *v70; // [sp+B8h] [bp-1064h]
  int v71; // [sp+BCh] [bp-1060h]
  int v72; // [sp+C0h] [bp-105Ch]
  int v73; // [sp+C4h] [bp-1058h]
  __int64 v74; // [sp+C8h] [bp-1054h]
  int v75; // [sp+D0h] [bp-104Ch]
  int v76; // [sp+D4h] [bp-1048h]
  const char *v77; // [sp+D8h] [bp-1044h]
  int v78; // [sp+DCh] [bp-1040h]
  int v79; // [sp+E0h] [bp-103Ch]
  int v80; // [sp+E4h] [bp-1038h]
  __int64 v81; // [sp+E8h] [bp-1034h]
  int v82; // [sp+F0h] [bp-102Ch]
  int v83; // [sp+F4h] [bp-1028h]
  const char *v84; // [sp+F8h] [bp-1024h]
  int v85; // [sp+FCh] [bp-1020h]
  int v86; // [sp+100h] [bp-101Ch]
  int v87; // [sp+104h] [bp-1018h]
  __int64 v88; // [sp+108h] [bp-1014h]
  int v89; // [sp+110h] [bp-100Ch]
  int v90; // [sp+114h] [bp-1008h]
  char v91[4100]; // [sp+118h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 142);
  v4 = a3 + 16;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  if ( !v3 )
    return v4;
  if ( read_temperature(a1, a2, v50, &v49, &v48, &v47, &v46, &v45, &v44) )
  {
    V_LOCK();
    v29 = *(_DWORD *)(a1 + 136);
    v50[1] = "chain";
    v50[2] = 5;
    v50[3] = 3;
    v51 = v29;
    v52 = 0;
    ++dword_1A8A20[0];
    logfmt_raw(
      v91,
      0x1000u,
      0,
      v53,
      "chain",
      5,
      3,
      v50[4],
      (__int64)v29,
      0,
      v53,
      "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
      v46,
      v45,
      v44);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      269,
      120,
      v91);
    *(_DWORD *)(a3 + 16) |= 1u;
  }
  LOWORD(v7) = (unsigned __int16)&stru_1A9B48;
  v8 = 4 * *(_DWORD *)(a1 + 132);
  if ( v46 )
  {
    v22 = v50[0];
    HIWORD(v7) = (unsigned int)&stru_1A9B48 >> 16;
    v23 = v7 + v8;
    *(_DWORD *)(v23 + 2092) = 0;
    *(_DWORD *)(v23 + 2076) = v22;
    v24 = v45 == 0;
    v43 = v45;
    a2[5] = v49;
    if ( !v24 )
    {
LABEL_8:
      v11 = v48;
      *(_DWORD *)(v7 + v8 + 2108) = 0;
      a2[4] = v11;
      goto LABEL_9;
    }
  }
  else
  {
    HIWORD(v7) = (unsigned int)&stru_1A9B48 >> 16;
    v9 = *(_DWORD *)(v7 + v8 + 2092) + 1;
    v10 = *(_DWORD *)(v7 + v8 + 2092) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 2092) = v9;
    if ( !(v10 ^ __OFSUB__(v9, 2) | (v9 == 2)) )
    {
      V_LOCK();
      v38 = *(_DWORD *)(a1 + 132);
      v54 = "chain";
      v55 = 5;
      v56 = 3;
      v39 = *(_DWORD *)(v7 + 4 * v38 + 2092);
      v40 = *(_DWORD *)(a1 + 136);
      v60 = 0;
      v58 = v40;
      v59 = v40 >> 31;
      ++dword_1A8A20[0];
      logfmt_raw(
        v91,
        0x1000u,
        0,
        v61,
        "chain",
        5,
        3,
        v57,
        (__int64)v40,
        0,
        v61,
        "read no sensor pcb temp exceed limit! (%d)",
        v39);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        281,
        120,
        v91);
      v8 = 4 * *(_DWORD *)(a1 + 132);
      *(_DWORD *)(a3 + 16) |= 8u;
    }
    v43 = v45;
    if ( v45 )
      goto LABEL_8;
  }
  v25 = *(_DWORD *)(v7 + v8 + 2108) + 1;
  v10 = *(_DWORD *)(v7 + v8 + 2108) - 1 < 0;
  *(_DWORD *)(v7 + v8 + 2108) = v25;
  if ( !(v10 ^ __OFSUB__(v25, 2) | (v25 == 2)) )
  {
    V_LOCK();
    v26 = *(_DWORD *)(a1 + 132);
    v62 = "chain";
    v63 = 5;
    v64 = 3;
    v27 = *(_DWORD *)(v7 + 4 * v26 + 2108);
    v28 = *(_DWORD *)(a1 + 136);
    v68 = v43;
    v66 = v28;
    v67 = v28 >> 31;
    ++dword_1A8A20[0];
    logfmt_raw(
      v91,
      0x1000u,
      v43,
      v69,
      "chain",
      5,
      3,
      v65,
      (__int64)v28,
      v43,
      v69,
      "read no sensor chip temp exceed limit! (%d)",
      v27);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      294,
      120,
      v91);
    v8 = 4 * *(_DWORD *)(a1 + 132);
    *(_DWORD *)(a3 + 16) |= 8u;
  }
LABEL_9:
  v12 = *(_DWORD **)(a1 + 208);
  if ( v12[5] >= v44 )
  {
    *(_DWORD *)(v7 + v8 + 2124) = 0;
  }
  else
  {
    v13 = *(_DWORD *)(v7 + v8 + 2124) + 1;
    v10 = *(_DWORD *)(v7 + v8 + 2124) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 2124) = v13;
    if ( !(v10 ^ __OFSUB__(v13, 2) | (v13 == 2)) )
    {
      V_LOCK();
      v35 = *(_DWORD *)(a1 + 136);
      v36 = v7 + 4 * *(_DWORD *)(a1 + 132);
      v70 = "chain";
      v37 = *(_DWORD *)(v36 + 2124);
      v71 = 5;
      v72 = 3;
      v74 = v35;
      v75 = 0;
      ++dword_1A8A20[0];
      logfmt_raw(
        v91,
        0x1000u,
        0,
        v76,
        "chain",
        5,
        3,
        v73,
        (__int64)v35,
        0,
        v76,
        "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
        v37,
        v44);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        303,
        120,
        v91);
      v12 = *(_DWORD **)(a1 + 208);
      v8 = 4 * *(_DWORD *)(a1 + 132);
      *(_DWORD *)(a3 + 16) |= 0x10u;
    }
  }
  if ( a2[4] >= v12[2] || *(_DWORD *)(v7 + v8 + 2076) >= v12[3] )
  {
    v14 = *(_DWORD *)(v7 + v8 + 2140) + 1;
    v10 = *(_DWORD *)(v7 + v8 + 2140) - 1 < 0;
    *(_DWORD *)(v7 + v8 + 2140) = v14;
    if ( !(v10 ^ __OFSUB__(v14, 2) | (v14 == 2)) )
    {
      V_LOCK();
      v30 = *(_DWORD *)(a1 + 136);
      v31 = v7 + 4 * *(_DWORD *)(a1 + 132);
      v77 = "chain";
      v78 = 5;
      v32 = *(_DWORD *)(v31 + 2076);
      v33 = *(_DWORD *)(v31 + 2140);
      v79 = 3;
      v41 = v32;
      v34 = a2[4];
      v81 = v30;
      v82 = 0;
      ++dword_1A8A20[0];
      logfmt_raw(
        v91,
        0x1000u,
        0,
        v83,
        "chain",
        5,
        3,
        v80,
        (__int64)v30,
        0,
        v83,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        v33,
        v34,
        v41);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        314,
        120,
        v91);
      v12 = *(_DWORD **)(a1 + 208);
      v8 = 4 * *(_DWORD *)(a1 + 132);
      *(_DWORD *)(a3 + 16) |= 2u;
    }
  }
  else
  {
    *(_DWORD *)(v7 + v8 + 2140) = 0;
  }
  if ( a2[5] <= v12[4] )
  {
    v15 = v7 + v8;
    v16 = *(_DWORD *)(v15 + 2156) + 1;
    v10 = *(_DWORD *)(v15 + 2156) - 1 < 0;
    *(_DWORD *)(v15 + 2156) = v16;
    if ( !(v10 ^ __OFSUB__(v16, 2) | (v16 == 2)) )
    {
      V_LOCK();
      v17 = *(_DWORD *)(a1 + 132);
      v18 = *(_DWORD *)(a1 + 136);
      v19 = a2[5];
      v84 = "chain";
      v85 = 5;
      v20 = *(_DWORD *)(v7 + 4 * v17 + 2156);
      v86 = 3;
      v88 = v18;
      v89 = 0;
      ++dword_1A8A20[0];
      logfmt_raw(
        v91,
        0x1000u,
        0,
        v90,
        "chain",
        5,
        3,
        v87,
        (__int64)v18,
        0,
        v90,
        "low temp exceed limit (%d), min_chip_temp = %d!",
        v20,
        v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        325,
        120,
        v91);
      *(_DWORD *)(a3 + 16) |= 4u;
    }
    return v4;
  }
  *(_DWORD *)(v7 + v8 + 2156) = 0;
  return v4;
}
