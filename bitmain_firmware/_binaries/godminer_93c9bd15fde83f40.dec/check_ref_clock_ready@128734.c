int __fastcall check_ref_clock_ready(int a1, int a2, int a3)
{
  void (__fastcall *v5)(int, _DWORD *); // r3
  int v6; // r3
  char *v7; // r0
  unsigned int v8; // r3
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r5
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r3
  int v16; // r0
  char *v17; // r4
  int v18; // r5
  int v19; // r0
  int v20; // r12
  int v21; // r2
  int v22; // r0
  int v23; // r5
  _DWORD *v24; // r4
  int v25; // r10
  int v26; // r7
  char *v27; // r4
  int v28; // r2
  int v29; // r1
  int v30; // r0
  int v31; // r0
  int v32; // r5
  _DWORD *v33; // r4
  int v34; // r10
  int v35; // r7
  char *v36; // r4
  int v37; // r2
  int v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r5
  _DWORD *v42; // r4
  int v43; // r10
  int v44; // r7
  char *v45; // r4
  int v46; // r2
  int v47; // r1
  int v48; // r0
  int v49; // r0
  int v50; // r5
  _DWORD *v51; // r4
  int v52; // r10
  int v53; // r7
  char *v54; // r4
  int v55; // r2
  int v56; // r1
  int v57; // r0
  int v59; // [sp+0h] [bp-48h]
  int v60; // [sp+0h] [bp-48h]
  int v61; // [sp+0h] [bp-48h]
  int v62; // [sp+0h] [bp-48h]
  int v63; // [sp+4h] [bp-44h]
  int v64; // [sp+4h] [bp-44h]
  int v65; // [sp+4h] [bp-44h]
  int v66; // [sp+4h] [bp-44h]
  int v67; // [sp+8h] [bp-40h]
  int v68; // [sp+8h] [bp-40h]
  int v69; // [sp+8h] [bp-40h]
  int v70; // [sp+8h] [bp-40h]
  int v71; // [sp+Ch] [bp-3Ch]
  int v72; // [sp+Ch] [bp-3Ch]
  int v73; // [sp+Ch] [bp-3Ch]
  int v74; // [sp+Ch] [bp-3Ch]
  char *ptr; // [sp+1Ch] [bp-2Ch]
  int v77; // [sp+24h] [bp-24h]
  unsigned int v78; // [sp+24h] [bp-24h]
  unsigned int v79; // [sp+28h] [bp-20h]
  unsigned int v80; // [sp+28h] [bp-20h]
  unsigned int v81; // [sp+28h] [bp-20h]
  int v82; // [sp+28h] [bp-20h]
  char v83; // [sp+2Ch] [bp-1Ch]
  int v84; // [sp+30h] [bp-18h]
  int v85; // [sp+30h] [bp-18h]
  int v86; // [sp+30h] [bp-18h]
  unsigned int v87; // [sp+34h] [bp-14h]
  int v89; // [sp+40h] [bp-8h]
  _DWORD v90[3]; // [sp+48h] [bp+0h] BYREF
  int v91; // [sp+54h] [bp+Ch]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v90, 0x1000u, 0, "write 0x70: 0 to clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready",
    21,
    8468,
    60,
    v90);
  v91 = 0;
  v90[2] = 7340033;
  v90[1] = 0;
  v90[0] = 0;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v91) = -1;
  v89 = 0;
  v5(a1, v90);
  usleep((__useconds_t)&stru_18694.st_info);
  if ( a3 == 255 )
    v6 = 16;
  else
    v6 = 1;
  v87 = v6;
  do
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v90, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready", v89);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready",
      21,
      8475,
      60,
      v90);
    v7 = (char *)malloc(0x600u);
    LOWORD(v8) = 0;
    ptr = v7;
    do
    {
      if ( a3 != 255 )
        LOWORD(v8) = a3;
      v83 = v8;
      v77 = (unsigned __int16)v8;
      v9 = sub_DF23C(a1, (unsigned __int16)v8, 112, ptr);
      if ( v9 > 0 )
      {
        v10 = ptr + 28;
        v11 = (int)&ptr[12 * v9 + 28];
        do
        {
          v15 = *(v10 - 7);
          __pld(v10);
          if ( (v15 & 0x9000000) == 0x9000000 )
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_1A8A24);
            v12 = g_zc;
            v13 = 20;
            v14 = 8483;
          }
          else
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_1A8A24);
            v12 = g_zc;
            v13 = 100;
            v14 = 8485;
          }
          v10 += 3;
          zlog(
            v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v14,
            v13,
            v90);
        }
        while ( v10 != (_DWORD *)v11 );
      }
      v16 = sub_DF23C(a1, v77, 113, ptr);
      if ( v16 > 0 )
      {
        v17 = ptr + 28;
        v18 = (int)&ptr[12 * v16 + 28];
        do
        {
          if ( *((_DWORD *)v17 - 7) == -1 )
          {
            __pld(v17);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              (unsigned __int8)*(v17 - 24),
              (unsigned __int8)*(v17 - 20),
              113,
              *((_DWORD *)v17 - 7));
            pthread_mutex_unlock(&stru_1A8A24);
            v19 = g_zc;
            v20 = 20;
            v21 = 8494;
          }
          else
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
              (unsigned __int8)*(v17 - 24),
              (unsigned __int8)*(v17 - 20),
              113,
              *((_DWORD *)v17 - 7));
            pthread_mutex_unlock(&stru_1A8A24);
            v19 = g_zc;
            v20 = 100;
            v21 = 8492;
          }
          v17 += 12;
          zlog(
            v19,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v21,
            v20,
            v90);
        }
        while ( v17 != (char *)v18 );
      }
      v22 = sub_DF23C(a1, v77, 114, ptr);
      v84 = v22;
      if ( v22 > 0 )
      {
        if ( v22 <= 2 )
        {
          v26 = 0;
          v25 = v22;
        }
        else
        {
          v23 = 0;
          v24 = ptr + 40;
          v79 = ((v22 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_1A8A24);
            v23 += 2;
            v63 = *((unsigned __int8 *)v24 - 32);
            v59 = *((unsigned __int8 *)v24 - 36);
            v71 = *(v24 - 10);
            v67 = 114;
            __pld(v24);
            v24 += 6;
            logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v59, v63, v67, v71);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v90);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v24 - 48),
              *((unsigned __int8 *)v24 - 44),
              114,
              *(v24 - 13));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v90);
          }
          while ( v23 != v79 );
          v25 = v84;
          v26 = v23;
        }
        v27 = &ptr[12 * v26];
        do
        {
          pthread_mutex_lock(&stru_1A8A24);
          v28 = *(_DWORD *)v27;
          v29 = (unsigned __int8)v27[8];
          v30 = (unsigned __int8)v27[4];
          ++v26;
          v27 += 12;
          logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v30, v29, 114, v28);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8500,
            100,
            v90);
        }
        while ( v25 > v26 );
      }
      v31 = sub_DF23C(a1, v77, 115, ptr);
      v85 = v31;
      if ( v31 > 0 )
      {
        if ( v31 <= 2 )
        {
          v35 = 0;
          v34 = v31;
        }
        else
        {
          v32 = 0;
          v33 = ptr + 40;
          v80 = ((v31 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_1A8A24);
            v32 += 2;
            v64 = *((unsigned __int8 *)v33 - 32);
            v60 = *((unsigned __int8 *)v33 - 36);
            v72 = *(v33 - 10);
            v68 = 115;
            __pld(v33);
            v33 += 6;
            logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v60, v64, v68, v72);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v90);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v33 - 48),
              *((unsigned __int8 *)v33 - 44),
              115,
              *(v33 - 13));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v90);
          }
          while ( v32 != v80 );
          v34 = v85;
          v35 = v32;
        }
        v36 = &ptr[12 * v35];
        do
        {
          pthread_mutex_lock(&stru_1A8A24);
          v37 = *(_DWORD *)v36;
          v38 = (unsigned __int8)v36[8];
          v39 = (unsigned __int8)v36[4];
          ++v35;
          v36 += 12;
          logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v39, v38, 115, v37);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8505,
            100,
            v90);
        }
        while ( v34 > v35 );
      }
      v40 = sub_DF23C(a1, v77, 116, ptr);
      v86 = v40;
      if ( v40 > 0 )
      {
        if ( v40 <= 2 )
        {
          v44 = 0;
          v43 = v40;
        }
        else
        {
          v41 = 0;
          v42 = ptr + 40;
          v81 = ((v40 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_1A8A24);
            v41 += 2;
            v65 = *((unsigned __int8 *)v42 - 32);
            v61 = *((unsigned __int8 *)v42 - 36);
            v73 = *(v42 - 10);
            v69 = 116;
            __pld(v42);
            v42 += 6;
            logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v61, v65, v69, v73);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v90);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v42 - 48),
              *((unsigned __int8 *)v42 - 44),
              116,
              *(v42 - 13));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v90);
          }
          while ( v41 != v81 );
          v43 = v86;
          v44 = v41;
        }
        v45 = &ptr[12 * v44];
        do
        {
          pthread_mutex_lock(&stru_1A8A24);
          v46 = *(_DWORD *)v45;
          v47 = (unsigned __int8)v45[8];
          v48 = (unsigned __int8)v45[4];
          ++v44;
          v45 += 12;
          logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v48, v47, 116, v46);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8510,
            100,
            v90);
        }
        while ( v43 > v44 );
      }
      v49 = sub_DF23C(a1, v77, 117, ptr);
      v82 = v49;
      if ( v49 > 0 )
      {
        if ( v49 <= 2 )
        {
          v53 = 0;
          v52 = v49;
        }
        else
        {
          v50 = 0;
          v51 = ptr + 40;
          v78 = ((v49 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_1A8A24);
            v50 += 2;
            v66 = *((unsigned __int8 *)v51 - 32);
            v62 = *((unsigned __int8 *)v51 - 36);
            v74 = *(v51 - 10);
            v70 = 117;
            __pld(v51);
            v51 += 6;
            logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v62, v66, v70, v74);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v90);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v90,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v51 - 48),
              *((unsigned __int8 *)v51 - 44),
              117,
              *(v51 - 13));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v90);
          }
          while ( v50 != v78 );
          v52 = v82;
          v53 = v50;
        }
        v54 = &ptr[12 * v53];
        do
        {
          pthread_mutex_lock(&stru_1A8A24);
          v55 = *(_DWORD *)v54;
          v56 = (unsigned __int8)v54[8];
          v57 = (unsigned __int8)v54[4];
          ++v53;
          v54 += 12;
          logfmt_raw((char *)v90, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v57, v56, 117, v55);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8515,
            100,
            v90);
        }
        while ( v52 > v53 );
      }
      v8 = (unsigned __int8)(v83 + 1);
    }
    while ( v87 > v8 );
    ++v89;
    free(ptr);
  }
  while ( v89 != 3 );
  return 0;
}
