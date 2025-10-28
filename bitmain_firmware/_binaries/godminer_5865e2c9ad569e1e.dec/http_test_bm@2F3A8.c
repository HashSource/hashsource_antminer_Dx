int __fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  const char *v5; // r1
  char *v7; // r4
  const char *v8; // r1
  const char *v9; // r1
  int v10; // r3
  int v11; // r1
  const char *v12; // r1
  const char *v14; // r1
  const char *v15; // r1
  int v16; // r3
  int v17; // r3
  int v18; // r1
  int theory_hashrate; // r0
  int v20; // r3
  int v21; // r3
  int v22; // r1
  int miner_sale_hashrate; // r0
  int v24; // r3
  int v25; // r3
  int v26; // r1
  int v27; // r0
  const char *v28; // r1
  const char *v29; // r1
  size_t v30; // r0
  int v31; // r3
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r3
  int v36; // r1
  const char *v37; // r1
  const char *v38; // r1
  int v39; // r3
  int v40; // r3
  int v41; // r1
  char *v42; // r12
  int *v43; // lr
  int *v44; // r6
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  __int16 v49; // r2
  char v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r1
  int v54; // r1
  FILE *v55; // r0
  FILE *v56; // r6
  const char *v57; // r2
  int v58; // [sp+14h] [bp-1020h] BYREF
  int v59; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v60[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v61; // [sp+2Ch] [bp-1008h]
  char v62[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  LOWORD(v5) = 6720;
  HIWORD(v5) = (unsigned int)"e" >> 16;
  v58 = -1;
  v59 = -1;
  v7 = strstr((const char *)(a1 + 4), v5);
  if ( v7 )
  {
    V_LOCK();
    LOWORD(v20) = 6728;
    HIWORD(v20) = (unsigned int)": get max rate" >> 16;
    v7 = 0;
    logfmt_raw(v62, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 6536;
    LOWORD(v22) = 6744;
    HIWORD(v22) = (unsigned int)"/miner_status" >> 16;
    HIWORD(v21) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    zlog(g_zc, v22, 138, v21, 12, 477, 20, v62);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_2EC40(a2, a3, miner_sale_hashrate);
    return (int)v7;
  }
  LOWORD(v8) = 6884;
  HIWORD(v8) = (unsigned int)"/set_sn" >> 16;
  if ( strstr(v4, v8) )
  {
    LOWORD(v9) = 6892;
    HIWORD(v9) = (unsigned int)"cmd : set miner sn, doesn't spport" >> 16;
    _isoc99_sscanf(v4, v9, &v58, &v59);
    V_LOCK();
    logfmt_raw(v62, 0x1000u, 0, "cmd : get test = %d", v58);
    V_UNLOCK();
    LOWORD(v10) = 6536;
    LOWORD(v11) = 6744;
    HIWORD(v10) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
    HIWORD(v11) = (unsigned int)"/miner_status" >> 16;
    zlog(g_zc, v11, 138, v10, 12, 484, 20, v62);
    if ( v58 != 523 )
    {
      LOWORD(v12) = 6924;
      HIWORD(v12) = (unsigned int)"rt" >> 16;
      sprintf(a2, v12);
      return 0;
    }
    get_miner_info(a2);
    return (int)v7;
  }
  LOWORD(v14) = 6940;
  HIWORD(v14) = (unsigned int)"ort sn set in Release mode" >> 16;
  v7 = strstr(v4, v14);
  if ( !v7 )
  {
    LOWORD(v15) = 6976;
    HIWORD(v15) = (unsigned int)"eason_history_update" >> 16;
    if ( strstr(v4, v15) )
    {
      V_LOCK();
      LOWORD(v16) = 6988;
      HIWORD(v16) = (unsigned int)"y_update" >> 16;
      logfmt_raw(v62, 0x1000u, 0, v16);
      V_UNLOCK();
      LOWORD(v17) = 6536;
      LOWORD(v18) = 6744;
      HIWORD(v17) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
      HIWORD(v18) = (unsigned int)"/miner_status" >> 16;
      zlog(g_zc, v18, 138, v17, 12, 504, 20, v62);
      theory_hashrate = get_theory_hashrate();
      sub_2EC40(a2, a3, 102 * theory_hashrate / 100);
    }
    else
    {
      LOWORD(v28) = 7008;
      HIWORD(v28) = (unsigned int)"l" >> 16;
      if ( strstr(v4, v28) )
      {
        V_LOCK();
        LOWORD(v34) = 7024;
        HIWORD(v34) = (unsigned int)"stratum_threads" >> 16;
        v7 = 0;
        logfmt_raw(v62, 0x1000u, 0, v34);
        V_UNLOCK();
        LOWORD(v35) = 6536;
        LOWORD(v36) = 6744;
        HIWORD(v35) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
        HIWORD(v36) = (unsigned int)"/miner_status" >> 16;
        zlog(g_zc, v36, 138, v35, 12, 510, 20, v62);
      }
      else
      {
        LOWORD(v29) = 7048;
        HIWORD(v29) = (unsigned int)"" >> 16;
        if ( strstr(v4, v29) )
        {
          v7 = 0;
          V_LOCK();
          v30 = strlen(g_miner_type);
          LOWORD(v31) = 7064;
          HIWORD(v31) = (unsigned int)"" >> 16;
          logfmt_raw(v62, 0x1000u, 0, v31, v30, g_miner_type);
          V_UNLOCK();
          LOWORD(v32) = 6536;
          LOWORD(v33) = 6744;
          HIWORD(v32) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
          HIWORD(v33) = (unsigned int)"/miner_status" >> 16;
          zlog(g_zc, v33, 138, v32, 12, 515, 20, v62);
          strcpy(a2, g_miner_type);
        }
        else
        {
          LOWORD(v37) = 7092;
          HIWORD(v37) = (unsigned int)"d" >> 16;
          v7 = (char *)strncmp(v4, v37, 7u);
          if ( v7 )
          {
            LOWORD(v38) = 7148;
            HIWORD(v38) = (unsigned int)"tion" >> 16;
            v7 = (char *)strncmp(v4, v38, 7u);
            if ( v7 )
            {
              return -1;
            }
            else
            {
              V_LOCK();
              LOWORD(v39) = 7156;
              HIWORD(v39) = (unsigned int)"judge_load_config" >> 16;
              logfmt_raw(v62, 0x1000u, 0, v39);
              V_UNLOCK();
              LOWORD(v40) = 6536;
              LOWORD(v41) = 6744;
              HIWORD(v40) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
              HIWORD(v41) = (unsigned int)"/miner_status" >> 16;
              zlog(g_zc, v41, 138, v40, 12, 597, 80, v62);
              LOWORD(v43) = 7192;
              v42 = a2;
              HIWORD(v43) = (unsigned int)" support %d reject reasons" >> 16;
              v44 = v43 + 8;
              do
              {
                v42 += 16;
                v45 = *v43;
                v46 = v43[1];
                v47 = v43[2];
                v48 = v43[3];
                v43 += 4;
                *((_DWORD *)v42 - 4) = v45;
                *((_DWORD *)v42 - 3) = v46;
                *((_DWORD *)v42 - 2) = v47;
                *((_DWORD *)v42 - 1) = v48;
              }
              while ( v43 != v44 );
              v49 = *((_WORD *)v43 + 2);
              v50 = *((_BYTE *)v43 + 6);
              *(_DWORD *)v42 = *v43;
              *((_WORD *)v42 + 2) = v49;
              v42[6] = v50;
            }
          }
          else
          {
            memset(v60, 0, sizeof(v60));
            v61 = 0;
            V_LOCK();
            LOWORD(v51) = 7100;
            HIWORD(v51) = (unsigned int)"k_pool_worker" >> 16;
            logfmt_raw(v62, 0x1000u, 0, v51);
            V_UNLOCK();
            LOWORD(v52) = 6536;
            LOWORD(v53) = 6744;
            HIWORD(v52) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
            HIWORD(v53) = (unsigned int)"/miner_status" >> 16;
            zlog(g_zc, v53, 138, v52, 12, 523, 20, v62);
            LOWORD(v54) = -8740;
            HIWORD(v54) = (unsigned int)"%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r" >> 16;
            v55 = (FILE *)fopen64(g_miner_sn_file_path, v54);
            v56 = v55;
            if ( v55 && (fread(v60, 0x11u, 1u, v55), fclose(v56), LOBYTE(v60[0])) )
            {
              LOWORD(v57) = -25124;
              HIWORD(v57) = (unsigned int)"core_little_core_num failed" >> 16;
              snprintf(a2, 0x12u, v57, v60);
            }
            else
            {
              strcpy(a2, "no miner sn stored on board");
            }
          }
        }
      }
    }
    return (int)v7;
  }
  V_LOCK();
  LOWORD(v24) = 6952;
  HIWORD(v24) = (unsigned int)"n Release mode" >> 16;
  logfmt_raw(v62, 0x1000u, 0, v24);
  V_UNLOCK();
  LOWORD(v25) = 6536;
  LOWORD(v26) = 6744;
  HIWORD(v25) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/http_test.c" >> 16;
  HIWORD(v26) = (unsigned int)"/miner_status" >> 16;
  zlog(g_zc, v26, 138, v25, 12, 498, 20, v62);
  v27 = get_theory_hashrate();
  sub_2EC40(a2, a3, v27);
  return 0;
}
