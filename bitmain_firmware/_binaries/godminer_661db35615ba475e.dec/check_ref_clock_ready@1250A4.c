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
  int v13; // r2
  int v14; // r3
  int v15; // r0
  char *v16; // r4
  int v17; // r5
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r5
  _DWORD *v22; // r4
  int v23; // r10
  int v24; // r7
  char *v25; // r4
  int v26; // r2
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r5
  _DWORD *v31; // r4
  int v32; // r10
  int v33; // r7
  char *v34; // r4
  int v35; // r2
  int v36; // r1
  int v37; // r0
  int v38; // r0
  int v39; // r5
  _DWORD *v40; // r4
  int v41; // r10
  int v42; // r7
  char *v43; // r4
  int v44; // r2
  int v45; // r1
  int v46; // r0
  int v47; // r0
  int v48; // r5
  _DWORD *v49; // r4
  int v50; // r10
  int v51; // r7
  char *v52; // r4
  int v53; // r2
  int v54; // r1
  int v55; // r0
  int v57; // [sp+0h] [bp-48h]
  int v58; // [sp+0h] [bp-48h]
  int v59; // [sp+0h] [bp-48h]
  int v60; // [sp+0h] [bp-48h]
  int v61; // [sp+4h] [bp-44h]
  int v62; // [sp+4h] [bp-44h]
  int v63; // [sp+4h] [bp-44h]
  int v64; // [sp+4h] [bp-44h]
  int v65; // [sp+8h] [bp-40h]
  int v66; // [sp+8h] [bp-40h]
  int v67; // [sp+8h] [bp-40h]
  int v68; // [sp+8h] [bp-40h]
  int v69; // [sp+Ch] [bp-3Ch]
  int v70; // [sp+Ch] [bp-3Ch]
  int v71; // [sp+Ch] [bp-3Ch]
  int v72; // [sp+Ch] [bp-3Ch]
  char *ptr; // [sp+1Ch] [bp-2Ch]
  int v75; // [sp+24h] [bp-24h]
  unsigned int v76; // [sp+24h] [bp-24h]
  unsigned int v77; // [sp+28h] [bp-20h]
  unsigned int v78; // [sp+28h] [bp-20h]
  unsigned int v79; // [sp+28h] [bp-20h]
  int v80; // [sp+28h] [bp-20h]
  char v81; // [sp+2Ch] [bp-1Ch]
  int v82; // [sp+30h] [bp-18h]
  int v83; // [sp+30h] [bp-18h]
  int v84; // [sp+30h] [bp-18h]
  unsigned int v85; // [sp+34h] [bp-14h]
  int v87; // [sp+40h] [bp-8h]
  _DWORD v88[3]; // [sp+48h] [bp+0h] BYREF
  int v89; // [sp+54h] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v88, 0x1000u, 0, "write 0x70: 0 to clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready",
    21,
    8468,
    60,
    v88);
  v89 = 0;
  v88[2] = 7340033;
  v88[1] = 0;
  v88[0] = 0;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v89) = -1;
  v87 = 0;
  v5(a1, v88);
  usleep((__useconds_t)"ead_unregister_cancel");
  if ( a3 == 255 )
    v6 = 16;
  else
    v6 = 1;
  v85 = v6;
  do
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v88, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready", v87);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready",
      21,
      8475,
      60,
      v88);
    v7 = (char *)malloc(0x600u);
    LOWORD(v8) = 0;
    ptr = v7;
    do
    {
      if ( a3 != 255 )
        LOWORD(v8) = a3;
      v81 = v8;
      v75 = (unsigned __int16)v8;
      v9 = sub_93DE0(a1, (unsigned __int16)v8, 112, ptr);
      if ( v9 > 0 )
      {
        v10 = ptr + 28;
        v11 = (int)&ptr[12 * v9 + 28];
        do
        {
          v14 = *(v10 - 7);
          __pld(v10);
          if ( (v14 & 0x9000000) == 0x9000000 )
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_197BB8);
            v12 = g_zc;
            v13 = 8483;
          }
          else
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_197BB8);
            v12 = g_zc;
            v13 = 8485;
          }
          v10 += 3;
          zlog(
            v12,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v13,
            100,
            v88);
        }
        while ( v10 != (_DWORD *)v11 );
      }
      v15 = sub_93DE0(a1, v75, 113, ptr);
      if ( v15 > 0 )
      {
        v16 = ptr + 28;
        v17 = (int)&ptr[12 * v15 + 28];
        do
        {
          if ( *((_DWORD *)v16 - 7) == -1 )
          {
            __pld(v16);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              (unsigned __int8)*(v16 - 24),
              (unsigned __int8)*(v16 - 20),
              113,
              *((_DWORD *)v16 - 7));
            pthread_mutex_unlock(&stru_197BB8);
            v18 = g_zc;
            v19 = 8494;
          }
          else
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
              (unsigned __int8)*(v16 - 24),
              (unsigned __int8)*(v16 - 20),
              113,
              *((_DWORD *)v16 - 7));
            pthread_mutex_unlock(&stru_197BB8);
            v18 = g_zc;
            v19 = 8492;
          }
          v16 += 12;
          zlog(
            v18,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            v19,
            100,
            v88);
        }
        while ( v16 != (char *)v17 );
      }
      v20 = sub_93DE0(a1, v75, 114, ptr);
      v82 = v20;
      if ( v20 > 0 )
      {
        if ( v20 <= 2 )
        {
          v24 = 0;
          v23 = v20;
        }
        else
        {
          v21 = 0;
          v22 = ptr + 40;
          v77 = ((v20 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_197BB8);
            v21 += 2;
            v61 = *((unsigned __int8 *)v22 - 32);
            v57 = *((unsigned __int8 *)v22 - 36);
            v69 = *(v22 - 10);
            v65 = 114;
            __pld(v22);
            v22 += 6;
            logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v57, v61, v65, v69);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v88);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v22 - 48),
              *((unsigned __int8 *)v22 - 44),
              114,
              *(v22 - 13));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v88);
          }
          while ( v21 != v77 );
          v23 = v82;
          v24 = v21;
        }
        v25 = &ptr[12 * v24];
        do
        {
          pthread_mutex_lock(&stru_197BB8);
          v26 = *(_DWORD *)v25;
          v27 = (unsigned __int8)v25[8];
          v28 = (unsigned __int8)v25[4];
          ++v24;
          v25 += 12;
          logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v28, v27, 114, v26);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8500,
            100,
            v88);
        }
        while ( v23 > v24 );
      }
      v29 = sub_93DE0(a1, v75, 115, ptr);
      v83 = v29;
      if ( v29 > 0 )
      {
        if ( v29 <= 2 )
        {
          v33 = 0;
          v32 = v29;
        }
        else
        {
          v30 = 0;
          v31 = ptr + 40;
          v78 = ((v29 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_197BB8);
            v30 += 2;
            v62 = *((unsigned __int8 *)v31 - 32);
            v58 = *((unsigned __int8 *)v31 - 36);
            v70 = *(v31 - 10);
            v66 = 115;
            __pld(v31);
            v31 += 6;
            logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v58, v62, v66, v70);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v88);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v31 - 48),
              *((unsigned __int8 *)v31 - 44),
              115,
              *(v31 - 13));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v88);
          }
          while ( v30 != v78 );
          v32 = v83;
          v33 = v30;
        }
        v34 = &ptr[12 * v33];
        do
        {
          pthread_mutex_lock(&stru_197BB8);
          v35 = *(_DWORD *)v34;
          v36 = (unsigned __int8)v34[8];
          v37 = (unsigned __int8)v34[4];
          ++v33;
          v34 += 12;
          logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v37, v36, 115, v35);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8505,
            100,
            v88);
        }
        while ( v32 > v33 );
      }
      v38 = sub_93DE0(a1, v75, 116, ptr);
      v84 = v38;
      if ( v38 > 0 )
      {
        if ( v38 <= 2 )
        {
          v42 = 0;
          v41 = v38;
        }
        else
        {
          v39 = 0;
          v40 = ptr + 40;
          v79 = ((v38 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_197BB8);
            v39 += 2;
            v63 = *((unsigned __int8 *)v40 - 32);
            v59 = *((unsigned __int8 *)v40 - 36);
            v71 = *(v40 - 10);
            v67 = 116;
            __pld(v40);
            v40 += 6;
            logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v59, v63, v67, v71);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v88);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v40 - 48),
              *((unsigned __int8 *)v40 - 44),
              116,
              *(v40 - 13));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v88);
          }
          while ( v39 != v79 );
          v41 = v84;
          v42 = v39;
        }
        v43 = &ptr[12 * v42];
        do
        {
          pthread_mutex_lock(&stru_197BB8);
          v44 = *(_DWORD *)v43;
          v45 = (unsigned __int8)v43[8];
          v46 = (unsigned __int8)v43[4];
          ++v42;
          v43 += 12;
          logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v46, v45, 116, v44);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8510,
            100,
            v88);
        }
        while ( v41 > v42 );
      }
      v47 = sub_93DE0(a1, v75, 117, ptr);
      v80 = v47;
      if ( v47 > 0 )
      {
        if ( v47 <= 2 )
        {
          v51 = 0;
          v50 = v47;
        }
        else
        {
          v48 = 0;
          v49 = ptr + 40;
          v76 = ((v47 - 3) & 0xFFFFFFFE) + 2;
          do
          {
            pthread_mutex_lock(&stru_197BB8);
            v48 += 2;
            v64 = *((unsigned __int8 *)v49 - 32);
            v60 = *((unsigned __int8 *)v49 - 36);
            v72 = *(v49 - 10);
            v68 = 117;
            __pld(v49);
            v49 += 6;
            logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v60, v64, v68, v72);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v88);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v88,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              *((unsigned __int8 *)v49 - 48),
              *((unsigned __int8 *)v49 - 44),
              117,
              *(v49 - 13));
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v88);
          }
          while ( v48 != v76 );
          v50 = v80;
          v51 = v48;
        }
        v52 = &ptr[12 * v51];
        do
        {
          pthread_mutex_lock(&stru_197BB8);
          v53 = *(_DWORD *)v52;
          v54 = (unsigned __int8)v52[8];
          v55 = (unsigned __int8)v52[4];
          ++v51;
          v52 += 12;
          logfmt_raw((char *)v88, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v55, v54, 117, v53);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready",
            21,
            8515,
            100,
            v88);
        }
        while ( v50 > v51 );
      }
      v8 = (unsigned __int8)(v81 + 1);
    }
    while ( v85 > v8 );
    ++v87;
    free(ptr);
  }
  while ( v87 != 3 );
  return 0;
}
