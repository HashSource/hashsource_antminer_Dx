int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r2
  int v8; // r8
  int v9; // r4
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int v14; // r8
  int v15; // r9
  _DWORD *v16; // r10
  int v17; // r5
  size_t v18; // r8
  void *v19; // r0
  void *v20; // r4
  int v21; // r8
  __int64 v22; // kr00_8
  int v23; // r0
  int v24; // r2
  int v25; // r6
  int v26; // r7
  int v27; // r6
  __int64 *v28; // r8
  int v29; // r4
  size_t v30; // r9
  void *v31; // r0
  void *v32; // r5
  int v33; // r4
  __int64 v34; // kr08_8
  int v35; // r0
  int v36; // r2
  int v37; // r5
  size_t v38; // r6
  _DWORD *v39; // r0
  _DWORD *v40; // r7
  int v41; // r5
  unsigned int v42; // r8
  int v43; // r9
  int v44; // r2
  int v45; // r3
  int *v46; // r8
  int v47; // r5
  int v48; // r9
  int v49; // r9
  int v50; // r2
  int v51; // r4
  int v52; // r8
  int v53; // r4
  size_t v54; // r5
  int *v55; // r0
  int *v56; // r9
  int v57; // r5
  unsigned int v58; // r9
  int *v59; // r8
  int v60; // r3
  int v61; // r5
  int v62; // r9
  int v63; // r9
  int v64; // r2
  int v65; // r4
  int v66; // r8
  int v67; // [sp+24h] [bp-1880h]
  int v68; // [sp+30h] [bp-1874h]
  int v69; // [sp+34h] [bp-1870h]
  int v70; // [sp+3Ch] [bp-1868h]
  _DWORD *ptr; // [sp+40h] [bp-1864h]
  void *ptra; // [sp+40h] [bp-1864h]
  int *ptrb; // [sp+40h] [bp-1864h]
  unsigned int v74; // [sp+44h] [bp-1860h]
  char v75; // [sp+48h] [bp-185Ch]
  unsigned int v76; // [sp+4Ch] [bp-1858h]
  char v77; // [sp+54h] [bp-1850h]
  char v78; // [sp+58h] [bp-184Ch]
  char *v80; // [sp+68h] [bp-183Ch]
  unsigned int v82; // [sp+70h] [bp-1834h]
  int v83; // [sp+74h] [bp-1830h]
  int v84; // [sp+78h] [bp-182Ch] BYREF
  int v85; // [sp+7Ch] [bp-1828h] BYREF
  int v86; // [sp+80h] [bp-1824h] BYREF
  int v87; // [sp+84h] [bp-1820h] BYREF
  int v88; // [sp+88h] [bp-181Ch]
  int v89; // [sp+8Ch] [bp-1818h]
  int v90; // [sp+90h] [bp-1814h] BYREF
  int v91; // [sp+94h] [bp-1810h]
  int v92; // [sp+98h] [bp-180Ch]
  int v93; // [sp+9Ch] [bp-1808h]
  char s[2048]; // [sp+A0h] [bp-1804h] BYREF
  char v95[4100]; // [sp+8A0h] [bp-1004h] BYREF

  v2 = a2;
  v82 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v2 = 900;
  v67 = a1;
  v69 = v2;
  v77 = BYTE1(v2);
  v83 = (v2 >> 8) + (unsigned __int8)v2;
  v80 = "PQT";
  v78 = v2;
  do
  {
    v70 = (unsigned __int8)*v80++;
    if ( v82 > 0xB4 )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v95, 0x1000u, 0, "illegal voltage [%d, %d], set default voltage %d", 810, 990, 900);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
        75,
        "ISL_set_voltage_dynamic",
        23,
        154,
        60,
        v95);
    }
    v3 = (unsigned __int8)(2 * v70);
    v76 = (unsigned int)(v3 + 312) >> 8;
    v74 = (unsigned int)(v83 + 91 + v3) >> 8;
    v75 = v83 + 91 + v3;
    LOBYTE(v68) = 4;
    do
    {
      v86 = 255;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      pthread_mutex_lock(&i2c_mutex_all);
      v90 = 839363157;
      *(_WORD *)((char *)&v91 + 1) = -256;
      LOBYTE(v91) = 2 * v70;
      HIBYTE(v91) = v76;
      LOBYTE(v92) = 2 * v70 + 56;
      v4 = g_bitmain_pic_state[2 * v67];
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_write",
          9,
          103,
          100,
          v95);
LABEL_9:
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, "%s write iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_3B526C);
        v6 = g_zc;
        v7 = 61;
        goto LABEL_10;
      }
      v5 = i2c_write(v4, (int)&v90, 9);
      pthread_mutex_unlock(&stru_3B5254);
      if ( v5 != 9 )
        goto LABEL_9;
      usleep(0x30D40u);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v25 = g_bitmain_pic_state[2 * v67];
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_read",
          8,
          83,
          100,
          v95);
      }
      else
      {
        v84 = v25;
        if ( pthread_mutex_lock(&stru_3B5288) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v95, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read",
            8,
            127,
            100,
            v95);
          pthread_mutex_unlock(&stru_3B5254);
        }
        else
        {
          if ( dword_3B52A0 )
          {
            v26 = *(_DWORD *)dword_3B52A0;
            v27 = *(_DWORD *)dword_3B52A0 + 4;
            v28 = **(__int64 ***)dword_3B52A0;
            while ( (__int64 *)v27 != v28 )
            {
              v29 = *((_DWORD *)v28 + 4);
              v30 = *(_DWORD *)(v29 + 4);
              v31 = malloc(v30);
              v32 = v31;
              if ( v31 )
                memcpy(v31, *(const void **)v29, v30);
              v33 = (*(int (__fastcall **)(int *, void *))(v26 + 36))(&v84, v32);
              free(v32);
              if ( !v33 )
              {
                v37 = *((_DWORD *)v28 + 5);
                v38 = *(_DWORD *)(v37 + 4);
                v39 = malloc(v38);
                v40 = v39;
                ptra = v39;
                if ( !v39 )
                  __und(0xFFu);
                memcpy(v39, *(const void **)v37, v38);
                v41 = *v40;
                v42 = v40[1];
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v40, v42);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v95, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_read",
                  8,
                  134,
                  20,
                  v95);
                v43 = (v41 << 26) | 0x2000000 | (v42 >> 4 << 20);
                v44 = (v42 << 15) & 0x70000;
                v45 = dword_3B52A4;
                v46 = &v86;
                v47 = v43 | v44;
                while ( 2 )
                {
                  v48 = 601;
                  while ( *(int *)(v45 + 48) >= 0 )
                  {
                    usleep(0x1388u);
                    if ( !--v48 )
                    {
                      free(ptra);
                      strcpy(s, "iic not ready 4 read1\n");
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(v95, 0x1000u, 0, s);
                      pthread_mutex_unlock(&stru_3B526C);
                      v35 = g_zc;
                      v36 = 141;
                      goto LABEL_44;
                    }
                    v45 = dword_3B52A4;
                  }
                  *(_DWORD *)(v45 + 48) = v47;
                  v49 = 601;
                  while ( 1 )
                  {
                    v50 = *(_DWORD *)(v45 + 48);
                    if ( v50 < 0 )
                      break;
                    usleep(0x1388u);
                    if ( !--v49 )
                    {
                      free(ptra);
                      strcpy(s, "iic not ready 4 read2\n");
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(v95, 0x1000u, 0, s);
                      pthread_mutex_unlock(&stru_3B526C);
                      v35 = g_zc;
                      v36 = 152;
                      goto LABEL_44;
                    }
                    v45 = dword_3B52A4;
                  }
                  *(_BYTE *)v46 = v50;
                  v46 = (int *)((char *)v46 + 1);
                  if ( (int *)((char *)&v87 + 1) != v46 )
                    continue;
                  break;
                }
                free(ptra);
                pthread_mutex_unlock(&stru_3B5288);
                pthread_mutex_unlock(&stru_3B5254);
                v51 = BYTE1(v86);
                v52 = BYTE2(v86);
                if ( BYTE1(v86) != 50 || BYTE2(v86) != 1 )
                {
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(
                    v95,
                    0x1000u,
                    0,
                    "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, r"
                    "ead_back_data[3] = 0x%02x",
                    "write_dc_dc",
                    (unsigned __int8)v86,
                    v51,
                    v52,
                    HIBYTE(v86));
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
                    75,
                    "write_dc_dc",
                    11,
                    75,
                    100,
                    v95);
                }
                goto LABEL_11;
              }
              v34 = *v28;
              v28 = (__int64 *)*((_DWORD *)v28 + 1);
              if ( v33 < 0 )
                v28 = (__int64 *)v34;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v84);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v95, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          v35 = g_zc;
          v36 = 159;
LABEL_44:
          zlog(
            v35,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read",
            8,
            v36,
            100,
            v95);
          pthread_mutex_unlock(&stru_3B5288);
          pthread_mutex_unlock(&stru_3B5254);
        }
      }
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v95, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      pthread_mutex_unlock(&stru_3B526C);
      v6 = g_zc;
      v7 = 68;
LABEL_10:
      zlog(
        v6,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
        75,
        "write_dc_dc",
        11,
        v7,
        100,
        v95);
LABEL_11:
      pthread_mutex_unlock(&i2c_mutex_all);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v86 = 255;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      pthread_mutex_lock(&i2c_mutex_all);
      BYTE1(v91) = 33;
      v90 = 839428693;
      LOBYTE(v91) = 2 * v70;
      BYTE2(v91) = v78;
      HIBYTE(v91) = v77;
      LOBYTE(v92) = v74;
      BYTE1(v92) = v75;
      v8 = g_bitmain_pic_state[2 * v67];
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_write",
          9,
          103,
          100,
          v95);
LABEL_13:
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, "%s write iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_3B526C);
        v10 = g_zc;
        v11 = 61;
        goto LABEL_14;
      }
      v9 = i2c_write(v8, (int)&v90, 10);
      pthread_mutex_unlock(&stru_3B5254);
      if ( v9 != 10 )
        goto LABEL_13;
      usleep(0x30D40u);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v14 = g_bitmain_pic_state[2 * v67];
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v95, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_read",
          8,
          83,
          100,
          v95);
      }
      else
      {
        v85 = v14;
        if ( pthread_mutex_lock(&stru_3B5288) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v95, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read",
            8,
            127,
            100,
            v95);
          pthread_mutex_unlock(&stru_3B5254);
        }
        else
        {
          if ( dword_3B52A0 )
          {
            v15 = *(_DWORD *)dword_3B52A0;
            v16 = **(_DWORD ***)dword_3B52A0;
            ptr = (_DWORD *)(*(_DWORD *)dword_3B52A0 + 4);
            while ( v16 != ptr )
            {
              v17 = v16[4];
              v18 = *(_DWORD *)(v17 + 4);
              v19 = malloc(v18);
              v20 = v19;
              if ( v19 )
                memcpy(v19, *(const void **)v17, v18);
              v21 = (*(int (__fastcall **)(int *, void *))(v15 + 36))(&v85, v20);
              free(v20);
              if ( !v21 )
              {
                v53 = v16[5];
                v54 = *(_DWORD *)(v53 + 4);
                v55 = (int *)malloc(v54);
                v56 = v55;
                ptrb = v55;
                if ( !v55 )
                  __und(0xFFu);
                memcpy(v55, *(const void **)v53, v54);
                v57 = *v56;
                v58 = v56[1];
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", v57, v58);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v95, 0x1000u, 0, s);
                v59 = &v86;
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_read",
                  8,
                  134,
                  20,
                  v95);
                v60 = dword_3B52A4;
                v61 = (v57 << 26) | 0x2000000 | (v58 >> 4 << 20) | (v58 << 15) & 0x70000;
                while ( 2 )
                {
                  v62 = 601;
                  while ( *(int *)(v60 + 48) >= 0 )
                  {
                    usleep(0x1388u);
                    if ( !--v62 )
                    {
                      free(ptrb);
                      strcpy(s, "iic not ready 4 read1\n");
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(v95, 0x1000u, 0, s);
                      pthread_mutex_unlock(&stru_3B526C);
                      v23 = g_zc;
                      v24 = 141;
                      goto LABEL_31;
                    }
                    v60 = dword_3B52A4;
                  }
                  *(_DWORD *)(v60 + 48) = v61;
                  v63 = 601;
                  while ( 1 )
                  {
                    v64 = *(_DWORD *)(v60 + 48);
                    if ( v64 < 0 )
                      break;
                    usleep(0x1388u);
                    if ( !--v63 )
                    {
                      free(ptrb);
                      strcpy(s, "iic not ready 4 read2\n");
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(v95, 0x1000u, 0, s);
                      pthread_mutex_unlock(&stru_3B526C);
                      v23 = g_zc;
                      v24 = 152;
                      goto LABEL_31;
                    }
                    v60 = dword_3B52A4;
                  }
                  *(_BYTE *)v59 = v64;
                  v59 = (int *)((char *)v59 + 1);
                  if ( (int *)((char *)&v87 + 1) != v59 )
                    continue;
                  break;
                }
                free(ptrb);
                pthread_mutex_unlock(&stru_3B5288);
                pthread_mutex_unlock(&stru_3B5254);
                v65 = BYTE1(v86);
                v66 = BYTE2(v86);
                if ( BYTE1(v86) != 50 || BYTE2(v86) != 1 )
                {
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(
                    v95,
                    0x1000u,
                    0,
                    "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, r"
                    "ead_back_data[3] = 0x%02x",
                    "write_dc_dc",
                    (unsigned __int8)v86,
                    v65,
                    v66,
                    HIBYTE(v86));
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
                    75,
                    "write_dc_dc",
                    11,
                    75,
                    100,
                    v95);
                }
                goto LABEL_15;
              }
              v22 = *(_QWORD *)v16;
              v16 = (_DWORD *)v16[1];
              if ( v21 < 0 )
                v16 = (_DWORD *)v22;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v85);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v95, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          v23 = g_zc;
          v24 = 159;
LABEL_31:
          zlog(
            v23,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read",
            8,
            v24,
            100,
            v95);
          pthread_mutex_unlock(&stru_3B5288);
          pthread_mutex_unlock(&stru_3B5254);
        }
      }
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v95, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      pthread_mutex_unlock(&stru_3B526C);
      v10 = g_zc;
      v11 = 68;
LABEL_14:
      zlog(
        v10,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
        75,
        "write_dc_dc",
        11,
        v11,
        100,
        v95);
LABEL_15:
      pthread_mutex_unlock(&i2c_mutex_all);
      usleep(0x30D40u);
      *(_WORD *)v95 = 0;
      sub_BE40C(a1, v70, v95);
      v12 = (unsigned __int8)v95[0] | ((unsigned __int8)v95[1] << 8);
      if ( v69 - 9 <= v12 && v12 <= v69 + 9 )
        break;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v95, 0x1000u, 0, "set vol %d,  %d, set again!", v69, v12);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
        75,
        "ISL_set_voltage_dynamic",
        23,
        181,
        60,
        v95);
      usleep(0x30D40u);
      v68 = (unsigned __int8)(v68 - 1);
    }
    while ( v68 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v95, 0x1000u, 0, "Set one chain ISL: domain addr = %x set vol %d, get vol %d", v70, a2, v12);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/isl68127.c",
      75,
      "set_chain_isl_voltage",
      21,
      215,
      60,
      v95);
  }
  while ( v80 != "" );
  return 1;
}
