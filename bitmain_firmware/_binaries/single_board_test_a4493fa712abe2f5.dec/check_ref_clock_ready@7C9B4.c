int __fastcall check_ref_clock_ready(_DWORD *a1, int a2, int a3)
{
  int *v5; // r9
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
  int *v21; // r3
  char *v22; // r4
  int v23; // r9
  int *v24; // r7
  int v25; // r6
  int v26; // r5
  int v27; // r0
  int v28; // r6
  int *v29; // r3
  int v30; // r7
  char *v31; // r4
  int v32; // r2
  int v33; // r1
  int v34; // r0
  int v35; // r0
  int *v36; // r3
  char *v37; // r4
  int v38; // r9
  int *v39; // r7
  int v40; // r6
  int v41; // r5
  int v42; // r0
  int v43; // r6
  int *v44; // r3
  int v45; // r7
  char *v46; // r4
  int v47; // r2
  int v48; // r1
  int v49; // r0
  int v50; // r0
  int *v51; // r3
  char *v52; // r4
  int v53; // r9
  int *v54; // r7
  int v55; // r6
  int v56; // r5
  int v57; // r0
  int v58; // r6
  int *v59; // r3
  int v60; // r7
  char *v61; // r4
  int v62; // r2
  int v63; // r1
  int v64; // r0
  int v65; // r0
  int *v66; // r3
  char *v67; // r4
  int v68; // r9
  int *v69; // r7
  int v70; // r6
  int v71; // r5
  int v72; // r0
  int v73; // r6
  int *v74; // r3
  int v75; // r7
  char *v76; // r4
  int v77; // r2
  int v78; // r1
  int v79; // r0
  char *ptr; // [sp+1Ch] [bp-1030h]
  int v83; // [sp+24h] [bp-1028h]
  unsigned int v84; // [sp+24h] [bp-1028h]
  unsigned int v85; // [sp+28h] [bp-1024h]
  unsigned int v86; // [sp+28h] [bp-1024h]
  unsigned int v87; // [sp+28h] [bp-1024h]
  int v88; // [sp+28h] [bp-1024h]
  char v89; // [sp+2Ch] [bp-1020h]
  int v90; // [sp+30h] [bp-101Ch]
  int v91; // [sp+30h] [bp-101Ch]
  int v92; // [sp+30h] [bp-101Ch]
  unsigned int v93; // [sp+34h] [bp-1018h]
  int i; // [sp+40h] [bp-100Ch]
  char v96[4100]; // [sp+48h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  v5 = &g_zc;
  logfmt_raw(v96, 0x1000u, 0, "write 0x70: 0 to clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_ref_clock_ready",
    21,
    8468,
    60,
    v96);
  sub_70478((int)a1, 112, 0);
  if ( a3 == 255 )
    v6 = 16;
  else
    v6 = 1;
  v93 = v6;
  for ( i = 0; i != 3; ++i )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v96, 0x1000u, 0, "%s round:%d", "check_ref_clock_ready", i);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      *v5,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_ref_clock_ready",
      21,
      8475,
      60,
      v96);
    v7 = (char *)malloc(0x600u);
    LOWORD(v8) = 0;
    ptr = v7;
    do
    {
      if ( a3 != 255 )
        LOWORD(v8) = a3;
      v89 = v8;
      v83 = (unsigned __int16)v8;
      v9 = sub_73570(a1, (unsigned __int16)v8, 112, ptr);
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
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn locked",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_3B526C);
            v12 = *v5;
            v13 = 8483;
          }
          else
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              *((unsigned __int8 *)v10 - 24),
              *((unsigned __int8 *)v10 - 20),
              112,
              *(v10 - 7));
            pthread_mutex_unlock(&stru_3B526C);
            v12 = *v5;
            v13 = 8485;
          }
          v10 += 3;
          zlog(
            v12,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            v13,
            100,
            v96);
        }
        while ( v10 != (_DWORD *)v11 );
      }
      v15 = sub_73570(a1, v83, 113, ptr);
      if ( v15 > 0 )
      {
        v16 = ptr + 28;
        v17 = (int)&ptr[12 * v15 + 28];
        do
        {
          if ( *((_DWORD *)v16 - 7) == -1 )
          {
            __pld(v16);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              (unsigned __int8)*(v16 - 24),
              (unsigned __int8)*(v16 - 20),
              113,
              *((_DWORD *)v16 - 7));
            pthread_mutex_unlock(&stru_3B526C);
            v18 = *v5;
            v19 = 8494;
          }
          else
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
              (unsigned __int8)*(v16 - 24),
              (unsigned __int8)*(v16 - 20),
              113,
              *((_DWORD *)v16 - 7));
            pthread_mutex_unlock(&stru_3B526C);
            v18 = *v5;
            v19 = 8492;
          }
          v16 += 12;
          zlog(
            v18,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            v19,
            100,
            v96);
        }
        while ( v16 != (char *)v17 );
      }
      v20 = sub_73570(a1, v83, 114, ptr);
      v90 = v20;
      if ( v20 > 0 )
      {
        if ( v20 <= 2 )
        {
          v30 = 0;
          v28 = v20;
        }
        else
        {
          v85 = ((v20 - 3) & 0xFFFFFFFE) + 2;
          v21 = v5;
          v22 = ptr + 40;
          v23 = 0;
          v24 = v21;
          do
          {
            __pld(v22);
            pthread_mutex_lock(&stru_3B526C);
            v25 = (unsigned __int8)*(v22 - 32);
            v26 = (unsigned __int8)*(v22 - 36);
            v27 = *((_DWORD *)v22 - 10);
            v23 += 2;
            v22 += 24;
            logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v26, v25, 114, v27);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v24,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v96);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              (unsigned __int8)*(v22 - 48),
              (unsigned __int8)*(v22 - 44),
              114,
              *((_DWORD *)v22 - 13));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v24,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8500,
              100,
              v96);
          }
          while ( v23 != v85 );
          v28 = v90;
          v29 = v24;
          v30 = v23;
          v5 = v29;
        }
        v31 = &ptr[12 * v30];
        do
        {
          pthread_mutex_lock(&stru_3B526C);
          v32 = *(_DWORD *)v31;
          v33 = (unsigned __int8)v31[8];
          v34 = (unsigned __int8)v31[4];
          ++v30;
          v31 += 12;
          logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v34, v33, 114, v32);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            *v5,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            8500,
            100,
            v96);
        }
        while ( v28 > v30 );
      }
      v35 = sub_73570(a1, v83, 115, ptr);
      v91 = v35;
      if ( v35 > 0 )
      {
        if ( v35 <= 2 )
        {
          v45 = 0;
          v43 = v35;
        }
        else
        {
          v86 = ((v35 - 3) & 0xFFFFFFFE) + 2;
          v36 = v5;
          v37 = ptr + 40;
          v38 = 0;
          v39 = v36;
          do
          {
            __pld(v37);
            pthread_mutex_lock(&stru_3B526C);
            v40 = (unsigned __int8)*(v37 - 32);
            v41 = (unsigned __int8)*(v37 - 36);
            v42 = *((_DWORD *)v37 - 10);
            v38 += 2;
            v37 += 24;
            logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v41, v40, 115, v42);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v39,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v96);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              (unsigned __int8)*(v37 - 48),
              (unsigned __int8)*(v37 - 44),
              115,
              *((_DWORD *)v37 - 13));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v39,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8505,
              100,
              v96);
          }
          while ( v38 != v86 );
          v43 = v91;
          v44 = v39;
          v45 = v38;
          v5 = v44;
        }
        v46 = &ptr[12 * v45];
        do
        {
          pthread_mutex_lock(&stru_3B526C);
          v47 = *(_DWORD *)v46;
          v48 = (unsigned __int8)v46[8];
          v49 = (unsigned __int8)v46[4];
          ++v45;
          v46 += 12;
          logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v49, v48, 115, v47);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            *v5,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            8505,
            100,
            v96);
        }
        while ( v43 > v45 );
      }
      v50 = sub_73570(a1, v83, 116, ptr);
      v92 = v50;
      if ( v50 > 0 )
      {
        if ( v50 <= 2 )
        {
          v60 = 0;
          v58 = v50;
        }
        else
        {
          v87 = ((v50 - 3) & 0xFFFFFFFE) + 2;
          v51 = v5;
          v52 = ptr + 40;
          v53 = 0;
          v54 = v51;
          do
          {
            __pld(v52);
            pthread_mutex_lock(&stru_3B526C);
            v55 = (unsigned __int8)*(v52 - 32);
            v56 = (unsigned __int8)*(v52 - 36);
            v57 = *((_DWORD *)v52 - 10);
            v53 += 2;
            v52 += 24;
            logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v56, v55, 116, v57);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v54,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v96);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              (unsigned __int8)*(v52 - 48),
              (unsigned __int8)*(v52 - 44),
              116,
              *((_DWORD *)v52 - 13));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v54,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8510,
              100,
              v96);
          }
          while ( v53 != v87 );
          v58 = v92;
          v59 = v54;
          v60 = v53;
          v5 = v59;
        }
        v61 = &ptr[12 * v60];
        do
        {
          pthread_mutex_lock(&stru_3B526C);
          v62 = *(_DWORD *)v61;
          v63 = (unsigned __int8)v61[8];
          v64 = (unsigned __int8)v61[4];
          ++v60;
          v61 += 12;
          logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v64, v63, 116, v62);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            *v5,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            8510,
            100,
            v96);
        }
        while ( v58 > v60 );
      }
      v65 = sub_73570(a1, v83, 117, ptr);
      v88 = v65;
      if ( v65 > 0 )
      {
        if ( v65 <= 2 )
        {
          v75 = 0;
          v73 = v65;
        }
        else
        {
          v84 = ((v65 - 3) & 0xFFFFFFFE) + 2;
          v66 = v5;
          v67 = ptr + 40;
          v68 = 0;
          v69 = v66;
          do
          {
            __pld(v67);
            pthread_mutex_lock(&stru_3B526C);
            v70 = (unsigned __int8)*(v67 - 32);
            v71 = (unsigned __int8)*(v67 - 36);
            v72 = *((_DWORD *)v67 - 10);
            v68 += 2;
            v67 += 24;
            logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v71, v70, 117, v72);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v69,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v96);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v96,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x",
              (unsigned __int8)*(v67 - 48),
              (unsigned __int8)*(v67 - 44),
              117,
              *((_DWORD *)v67 - 13));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v69,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_ref_clock_ready",
              21,
              8515,
              100,
              v96);
          }
          while ( v68 != v84 );
          v73 = v88;
          v74 = v69;
          v75 = v68;
          v5 = v74;
        }
        v76 = &ptr[12 * v75];
        do
        {
          pthread_mutex_lock(&stru_3B526C);
          v77 = *(_DWORD *)v76;
          v78 = (unsigned __int8)v76[8];
          v79 = (unsigned __int8)v76[4];
          ++v75;
          v76 += 12;
          logfmt_raw(v96, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x", v79, v78, 117, v77);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            *v5,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_ref_clock_ready",
            21,
            8515,
            100,
            v96);
        }
        while ( v73 > v75 );
      }
      v8 = (unsigned __int8)(v89 + 1);
    }
    while ( v93 > v8 );
    free(ptr);
  }
  return 0;
}
