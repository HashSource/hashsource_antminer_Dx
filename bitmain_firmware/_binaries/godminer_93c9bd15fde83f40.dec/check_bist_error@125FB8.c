int __fastcall check_bist_error(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int *v10; // r12
  int v11; // r3
  int v12; // r3
  int v13; // r10
  unsigned int v14; // r5
  unsigned __int16 v16; // r5
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r4
  int v21; // r0
  int v22; // r3
  int v23; // r4
  int v24; // r0
  int v25; // r3
  int v26; // r4
  _QWORD *v27; // r4
  int v28; // r3
  int v29; // r5
  int v30; // r0
  int v31; // r10
  int i; // r5
  int v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r2
  int v39; // [sp+24h] [bp-16Ch]
  unsigned int v40; // [sp+28h] [bp-168h]
  _QWORD *v41; // [sp+30h] [bp-160h]
  int v42; // [sp+34h] [bp-15Ch]
  int v44; // [sp+3Ch] [bp-154h]
  int v45; // [sp+44h] [bp-14Ch]
  int v46; // [sp+48h] [bp-148h]
  unsigned int v47; // [sp+58h] [bp-138h]
  unsigned int v48; // [sp+5Ch] [bp-134h]
  _DWORD v49[4]; // [sp+60h] [bp-130h] BYREF
  _DWORD s[9]; // [sp+70h] [bp-120h] BYREF
  _DWORD v51[2]; // [sp+94h] [bp-FCh]
  unsigned int v52; // [sp+9Ch] [bp-F4h]
  unsigned int v53; // [sp+A4h] [bp-ECh]
  unsigned int v54; // [sp+ACh] [bp-E4h]
  unsigned int v55; // [sp+B4h] [bp-DCh]
  unsigned int v56; // [sp+BCh] [bp-D4h]
  unsigned int v57; // [sp+C4h] [bp-CCh]
  unsigned int v58; // [sp+CCh] [bp-C4h]
  _BYTE v59[64]; // [sp+D0h] [bp-C0h] BYREF
  _BYTE v60[4]; // [sp+110h] [bp-80h] BYREF
  unsigned int v61; // [sp+114h] [bp-7Ch]
  unsigned int v62; // [sp+11Ch] [bp-74h]
  unsigned int v63; // [sp+124h] [bp-6Ch]
  unsigned int v64; // [sp+12Ch] [bp-64h]
  unsigned int v65; // [sp+134h] [bp-5Ch]
  unsigned int v66; // [sp+13Ch] [bp-54h]
  unsigned int v67; // [sp+144h] [bp-4Ch]
  unsigned int v68; // [sp+14Ch] [bp-44h]
  char v69[12]; // [sp+150h] [bp-40h] BYREF
  _QWORD v70[6]; // [sp+15Ch] [bp-34h] BYREF
  char v71[4100]; // [sp+190h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v71, 0x1000u, 0, "%s...", "check_bist_error");
  pthread_mutex_unlock(&stru_1A8A24);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/backend_eth/backend_eth.c",
         154,
         "check_bist_error",
         16,
         9056,
         60,
         v71);
  v49[0] = 0;
  if ( a3 == 255 )
    v9 = 14;
  v49[1] = 0;
  if ( a3 == 255 )
    v10 = v49;
  v49[2] = 0;
  v49[3] = 0;
  if ( a3 == 255 )
  {
    v45 = v9;
    v7 = 100991489;
    v8 = 235735561;
    v9 = 134677248;
    v11 = 3851;
  }
  else
  {
    v11 = 1;
  }
  if ( a3 == 255 )
  {
    *v10 = v7;
    v10[1] = v8;
    v10[2] = v9;
    *((_WORD *)v10 + 6) = v11;
  }
  else
  {
    v45 = v11;
  }
  v40 = a4;
  v42 = 0;
  do
  {
    v12 = a3;
    if ( a3 == 255 )
      v12 = *((unsigned __int8 *)v49 + v42);
    v39 = v12;
    if ( v40 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        if ( v14 > 3 || v39 != 3 )
        {
          v16 = (_WORD)v14 << 12;
          v17 = sub_C20C4(a1, v39, v16 & 0xF000 | 0x10, (int)v69);
          if ( *(_DWORD *)(a1 + 236) != v17 )
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              v71,
              0x1000u,
              0,
              "%s d'16 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              v17,
              *(_DWORD *)(a1 + 236));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_bist_error",
              16,
              9082,
              100,
              v71);
          }
          v18 = sub_C20C4(a1, v39, v16 & 0xF000 | 0x13, (int)v60);
          v19 = *(_DWORD *)(a1 + 236);
          v20 = v18;
          if ( v19 == v18 )
          {
            if ( v19 > 0 )
            {
              v51[0] = v61 >> 28;
              if ( v19 != 1 )
              {
                v52 = v62 >> 28;
                if ( v19 != 2 )
                {
                  v53 = v63 >> 28;
                  if ( v19 != 3 )
                  {
                    v54 = v64 >> 28;
                    if ( v19 != 4 )
                    {
                      v55 = v65 >> 28;
                      if ( v19 != 5 )
                      {
                        v56 = v66 >> 28;
                        if ( v19 != 6 )
                        {
                          v57 = v67 >> 28;
                          if ( v19 != 7 )
                            v58 = v68 >> 28;
                        }
                      }
                    }
                  }
                }
              }
            }
            v21 = sub_C20C4(a1, v39, v16 & 0xF000 | 0x14, (int)v60);
            v22 = *(_DWORD *)(a1 + 236);
            v23 = v21;
            if ( v22 == v21 )
            {
              if ( v22 > 0 )
              {
                v51[0] |= 16 * v61;
                if ( v22 != 1 )
                {
                  v52 |= 16 * v62;
                  if ( v22 != 2 )
                  {
                    v53 |= 16 * v63;
                    if ( v22 != 3 )
                    {
                      v54 |= 16 * v64;
                      if ( v22 != 4 )
                      {
                        v55 |= 16 * v65;
                        if ( v22 != 5 )
                        {
                          v56 |= 16 * v66;
                          if ( v22 != 6 )
                          {
                            v57 |= 16 * v67;
                            if ( v22 != 7 )
                              v58 |= 16 * v68;
                          }
                        }
                      }
                    }
                  }
                }
              }
              v24 = sub_C20C4(a1, v39, v16 & 0xF000 | 0x15, (int)v59);
              v25 = *(_DWORD *)(a1 + 236);
              v26 = v24;
              if ( v25 == v24 )
              {
                if ( v25 > 0 )
                {
                  v27 = v70;
                  v44 = v13;
                  v41 = &v70[v25];
                  v47 = v16 | 0x16;
                  v48 = v16 | 0x17;
                  do
                  {
                    v28 = *((_DWORD *)v27 - 2);
                    __pld(v27);
                    if ( (v28 & 0xE000000) != 0 )
                    {
                      v29 = *((unsigned __int8 *)v27 - 12);
                      pthread_mutex_lock(&stru_1A8A24);
                      logfmt_raw(
                        v71,
                        0x1000u,
                        0,
                        "chain %d channel %1x, chip_id %02x c_id %02x bist err(%02x) cnt %08x %08x",
                        *(_DWORD *)(a1 + 132),
                        v44,
                        v29,
                        *((unsigned __int8 *)v27 - 11),
                        (*((_DWORD *)v27 - 2) >> 25) & 7,
                        *(_DWORD *)&v59[8 * v29 + 4],
                        v51[2 * v29]);
                      pthread_mutex_unlock(&stru_1A8A24);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/backend/backend_eth/backend_eth.c",
                        154,
                        "check_bist_error",
                        16,
                        9113,
                        100,
                        v71);
                      memset(s, 0, 0x20u);
                      v30 = sub_C20C4(a1, *((unsigned __int8 *)v27 - 11), v47, (int)v60);
                      if ( v30 > 0 )
                      {
                        s[0] = v61 >> 12;
                        if ( v30 != 1 )
                        {
                          s[1] = v62 >> 12;
                          if ( v30 != 2 )
                          {
                            s[2] = v63 >> 12;
                            if ( v30 != 3 )
                            {
                              s[3] = v64 >> 12;
                              if ( v30 != 4 )
                              {
                                s[4] = v65 >> 12;
                                if ( v30 != 5 )
                                {
                                  s[5] = v66 >> 12;
                                  if ( v30 != 6 )
                                  {
                                    s[6] = v67 >> 12;
                                    if ( v30 != 7 )
                                      s[7] = v68 >> 12;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      v31 = sub_C20C4(a1, *((unsigned __int8 *)v27 - 11), v48, (int)v60);
                      if ( v31 > 0 )
                      {
                        for ( i = 0; i != v31; ++i )
                        {
                          v33 = (unsigned __int8)v60[8 * i];
                          v34 = s[i] | (*(_DWORD *)&v60[8 * i + 4] << 20);
                          s[i] = v34;
                          if ( v33 == *((unsigned __int8 *)v27 - 12) )
                          {
                            v46 = v34;
                            pthread_mutex_lock(&stru_1A8A24);
                            logfmt_raw(
                              v71,
                              0x1000u,
                              0,
                              "chain %d channel %1x, chip_id %02x c_id %02x sample_cnt %08x",
                              *(_DWORD *)(a1 + 132),
                              v44,
                              (unsigned __int8)v60[8 * i],
                              (unsigned __int8)v60[8 * i + 1],
                              v46);
                            pthread_mutex_unlock(&stru_1A8A24);
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
                              154,
                              "check_bist_error",
                              16,
                              9128,
                              60,
                              v71);
                          }
                        }
                      }
                    }
                    ++v27;
                  }
                  while ( v27 != v41 );
                  v13 = v44;
                }
                goto LABEL_63;
              }
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw(
                v71,
                0x1000u,
                0,
                "%s d'21 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                v26,
                *(_DWORD *)(a1 + 236));
              pthread_mutex_unlock(&stru_1A8A24);
              v35 = g_zc;
              v36 = 9104;
            }
            else
            {
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw(
                v71,
                0x1000u,
                0,
                "%s d'20 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                v23,
                *(_DWORD *)(a1 + 236));
              pthread_mutex_unlock(&stru_1A8A24);
              v35 = g_zc;
              v36 = 9096;
            }
          }
          else
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              v71,
              0x1000u,
              0,
              "%s d'19 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              v20,
              *(_DWORD *)(a1 + 236));
            pthread_mutex_unlock(&stru_1A8A24);
            v35 = g_zc;
            v36 = 9088;
          }
          zlog(
            v35,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_bist_error",
            16,
            v36,
            100,
            v71);
        }
LABEL_63:
        v14 = (unsigned __int16)++v13;
      }
      while ( (unsigned __int16)v13 < v40 );
    }
  }
  while ( v45 != ++v42 );
  return 0;
}
