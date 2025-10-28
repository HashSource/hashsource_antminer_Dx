int __fastcall check_bist_error(_DWORD *a1, int a2, int a3, unsigned __int16 a4)
{
  char *v5; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3
  unsigned int v13; // r5
  int v14; // r6
  unsigned __int16 v16; // r5
  int v17; // r9
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
  _QWORD *v28; // r9
  int v29; // r3
  int v30; // r5
  int v31; // r0
  int v32; // r6
  int v33; // r5
  unsigned __int8 *v34; // r9
  int v35; // r0
  int v36; // r1
  int v37; // lr
  int v40; // r0
  int v41; // r2
  int v42; // [sp+24h] [bp-16Ch]
  unsigned int v43; // [sp+2Ch] [bp-164h]
  int v44; // [sp+34h] [bp-15Ch]
  int v46; // [sp+3Ch] [bp-154h]
  int v47; // [sp+44h] [bp-14Ch]
  int v48; // [sp+48h] [bp-148h]
  unsigned int v49; // [sp+54h] [bp-13Ch]
  unsigned int v50; // [sp+58h] [bp-138h]
  _QWORD *v51; // [sp+5Ch] [bp-134h]
  _DWORD v52[4]; // [sp+60h] [bp-130h] BYREF
  _DWORD v53[9]; // [sp+70h] [bp-120h] BYREF
  unsigned int v54; // [sp+94h] [bp-FCh]
  unsigned int v55; // [sp+9Ch] [bp-F4h]
  unsigned int v56; // [sp+A4h] [bp-ECh]
  unsigned int v57; // [sp+ACh] [bp-E4h]
  unsigned int v58; // [sp+B4h] [bp-DCh]
  unsigned int v59; // [sp+BCh] [bp-D4h]
  unsigned int v60; // [sp+C4h] [bp-CCh]
  unsigned int v61; // [sp+CCh] [bp-C4h]
  _QWORD v62[8]; // [sp+D0h] [bp-C0h] BYREF
  _BYTE v63[4]; // [sp+110h] [bp-80h] BYREF
  unsigned int v64; // [sp+114h] [bp-7Ch]
  unsigned int v65; // [sp+11Ch] [bp-74h]
  unsigned int v66; // [sp+124h] [bp-6Ch]
  unsigned int v67; // [sp+12Ch] [bp-64h]
  unsigned int v68; // [sp+134h] [bp-5Ch]
  unsigned int v69; // [sp+13Ch] [bp-54h]
  unsigned int v70; // [sp+144h] [bp-4Ch]
  unsigned int v71; // [sp+14Ch] [bp-44h]
  char v72[12]; // [sp+150h] [bp-40h] BYREF
  _QWORD v73[6]; // [sp+15Ch] [bp-34h] BYREF
  char v74[4100]; // [sp+190h] [bp+0h] BYREF

  v5 = "check_bist_error";
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v74, 0x1000u, 0, "%s...", "check_bist_error");
  pthread_mutex_unlock(&stru_3B526C);
  v8 = zlog(
         g_zc,
         "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
         71,
         "check_bist_error",
         16,
         9056,
         60,
         v74);
  v52[1] = 0;
  v52[2] = 0;
  if ( a3 == 255 )
    v10 = 14;
  v52[3] = 0;
  if ( a3 == 255 )
    v5 = (char *)v52;
  v52[0] = 0;
  if ( a3 == 255 )
  {
    v47 = v10;
    v8 = 100991489;
    v9 = 235735561;
    v10 = 134677248;
    v11 = 3851;
  }
  else
  {
    v11 = 1;
  }
  if ( a3 == 255 )
  {
    *(_DWORD *)v5 = v8;
    *((_DWORD *)v5 + 1) = v9;
    *((_DWORD *)v5 + 2) = v10;
    *((_WORD *)v5 + 6) = v11;
  }
  else
  {
    v47 = v11;
  }
  v43 = a4;
  v44 = 0;
  do
  {
    v12 = a3;
    if ( a3 == 255 )
      v12 = *((unsigned __int8 *)v52 + v44);
    v42 = v12;
    if ( v43 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        while ( v13 <= 3 && v42 == 3 )
        {
LABEL_63:
          v13 = (unsigned __int16)++v14;
          if ( (unsigned __int16)v14 >= v43 )
            goto LABEL_64;
        }
        v16 = (_WORD)v13 << 12;
        v17 = sub_D47F8(a1, v42, v16 & 0xF000 | 0x10, (int)v72);
        if ( a1[55] != v17 )
        {
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v74,
            0x1000u,
            0,
            "%s d'16 resp_num is not enough(%d<%d), bist err",
            "check_bist_error",
            v17,
            a1[55]);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_bist_error",
            16,
            9082,
            100,
            v74);
        }
        v18 = sub_D47F8(a1, v42, v16 & 0xF000 | 0x13, (int)v63);
        v19 = a1[55];
        v20 = v18;
        if ( v19 == v18 )
        {
          if ( v19 > 0 )
          {
            v54 = v64 >> 28;
            if ( v19 != 1 )
            {
              v55 = v65 >> 28;
              if ( v19 != 2 )
              {
                v56 = v66 >> 28;
                if ( v19 != 3 )
                {
                  v57 = v67 >> 28;
                  if ( v19 != 4 )
                  {
                    v58 = v68 >> 28;
                    if ( v19 != 5 )
                    {
                      v59 = v69 >> 28;
                      if ( v19 != 6 )
                      {
                        v60 = v70 >> 28;
                        if ( v19 != 7 )
                          v61 = v71 >> 28;
                      }
                    }
                  }
                }
              }
            }
          }
          v21 = sub_D47F8(a1, v42, v16 & 0xF000 | 0x14, (int)v63);
          v22 = a1[55];
          v23 = v21;
          if ( v22 == v21 )
          {
            if ( v22 > 0 )
            {
              v54 |= 16 * v64;
              if ( v22 != 1 )
              {
                v55 |= 16 * v65;
                if ( v22 != 2 )
                {
                  v56 |= 16 * v66;
                  if ( v22 != 3 )
                  {
                    v57 |= 16 * v67;
                    if ( v22 != 4 )
                    {
                      v58 |= 16 * v68;
                      if ( v22 != 5 )
                      {
                        v59 |= 16 * v69;
                        if ( v22 != 6 )
                        {
                          v60 |= 16 * v70;
                          if ( v22 != 7 )
                            v61 |= 16 * v71;
                        }
                      }
                    }
                  }
                }
              }
            }
            v24 = sub_D47F8(a1, v42, v16 & 0xF000 | 0x15, (int)v62);
            v25 = a1[55];
            v26 = v24;
            if ( v25 == v24 )
            {
              if ( v25 > 0 )
              {
                v27 = v73;
                v46 = v14;
                v49 = v16 | 0x16;
                v28 = &v73[v25];
                v50 = v16 | 0x17;
                do
                {
                  while ( 1 )
                  {
                    v29 = *((_DWORD *)v27 - 2);
                    __pld(v27);
                    if ( (v29 & 0xE000000) != 0 )
                    {
                      v30 = *((unsigned __int8 *)v27 - 12);
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(
                        v74,
                        0x1000u,
                        0,
                        "chain %d channel %1x, chip_id %02x c_id %02x bist err(%02x) cnt %08x %08x",
                        a1[30],
                        v46,
                        v30,
                        *((unsigned __int8 *)v27 - 11),
                        (*((_DWORD *)v27 - 2) >> 25) & 7,
                        HIDWORD(v62[v30]),
                        v53[2 * v30 + 9]);
                      pthread_mutex_unlock(&stru_3B526C);
                      zlog(
                        g_zc,
                        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
                        71,
                        "check_bist_error",
                        16,
                        9113,
                        100,
                        v74);
                      memset(v53, 0, 0x20u);
                      v31 = sub_D47F8(a1, *((unsigned __int8 *)v27 - 11), v49, (int)v63);
                      if ( v31 > 0 )
                      {
                        v53[0] = v64 >> 12;
                        if ( v31 != 1 )
                        {
                          v53[1] = v65 >> 12;
                          if ( v31 != 2 )
                          {
                            v53[2] = v66 >> 12;
                            if ( v31 != 3 )
                            {
                              v53[3] = v67 >> 12;
                              if ( v31 != 4 )
                              {
                                v53[4] = v68 >> 12;
                                if ( v31 != 5 )
                                {
                                  v53[5] = v69 >> 12;
                                  if ( v31 != 6 )
                                  {
                                    v53[6] = v70 >> 12;
                                    if ( v31 != 7 )
                                      v53[7] = v71 >> 12;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      v32 = sub_D47F8(a1, *((unsigned __int8 *)v27 - 11), v50, (int)v63);
                      if ( v32 > 0 )
                        break;
                    }
                    if ( ++v27 == v28 )
                      goto LABEL_62;
                  }
                  v33 = 0;
                  v51 = v28;
                  do
                  {
                    while ( 1 )
                    {
                      v34 = &v63[8 * v33];
                      v35 = *v34;
                      v36 = v53[v33] | (*((_DWORD *)v34 + 1) << 20);
                      v53[v33] = v36;
                      if ( v35 == *((unsigned __int8 *)v27 - 12) )
                        break;
                      if ( v32 == ++v33 )
                        goto LABEL_61;
                    }
                    v48 = v36;
                    pthread_mutex_lock(&stru_3B526C);
                    v37 = (unsigned __int8)v63[8 * v33++];
                    logfmt_raw(
                      v74,
                      0x1000u,
                      0,
                      "chain %d channel %1x, chip_id %02x c_id %02x sample_cnt %08x",
                      a1[30],
                      v46,
                      v37,
                      v34[1],
                      v48);
                    pthread_mutex_unlock(&stru_3B526C);
                    zlog(
                      g_zc,
                      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
                      71,
                      "check_bist_error",
                      16,
                      9128,
                      60,
                      v74);
                  }
                  while ( v32 != v33 );
LABEL_61:
                  v28 = v51;
                  ++v27;
                }
                while ( v27 != v51 );
LABEL_62:
                v14 = v46;
              }
              goto LABEL_63;
            }
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v74,
              0x1000u,
              0,
              "%s d'21 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              v26,
              a1[55]);
            pthread_mutex_unlock(&stru_3B526C);
            v40 = g_zc;
            v41 = 9104;
          }
          else
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              v74,
              0x1000u,
              0,
              "%s d'20 resp_num is not enough(%d<%d), bist err",
              "check_bist_error",
              v23,
              a1[55]);
            pthread_mutex_unlock(&stru_3B526C);
            v40 = g_zc;
            v41 = 9096;
          }
        }
        else
        {
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            v74,
            0x1000u,
            0,
            "%s d'19 resp_num is not enough(%d<%d), bist err",
            "check_bist_error",
            v20,
            a1[55]);
          pthread_mutex_unlock(&stru_3B526C);
          v40 = g_zc;
          v41 = 9088;
        }
        v13 = (unsigned __int16)++v14;
        zlog(
          v40,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "check_bist_error",
          16,
          v41,
          100,
          v74);
      }
      while ( (unsigned __int16)v14 < v43 );
    }
LABEL_64:
    ;
  }
  while ( v47 != ++v44 );
  return 0;
}
