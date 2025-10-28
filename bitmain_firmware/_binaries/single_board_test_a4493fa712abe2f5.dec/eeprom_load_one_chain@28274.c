int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r11
  int v5; // r5
  int v6; // r7
  int v7; // r6
  __int64 *v8; // r8
  int v9; // r5
  size_t v10; // r9
  void *v11; // r0
  void *v12; // r4
  int v13; // r5
  __int64 v14; // kr00_8
  int v15; // r4
  int v16; // r2
  int v17; // r1
  int v18; // r0
  int v20; // r4
  _DWORD *v21; // r0
  _DWORD *v22; // r8
  int v23; // r10
  unsigned int v24; // r4
  int v25; // r3
  int v26; // r10
  int v27; // r4
  int v28; // r3
  int v29; // r4
  int v30; // r3
  size_t v31; // r10
  unsigned int v32; // r4
  int v33; // r3
  int v34; // r1
  bool v35; // zf
  int v36; // r5
  char v37; // r7
  char v38; // r3
  void *v39; // r7
  int v40; // r4
  int v41; // r0
  int v42; // r0
  _DWORD *v43; // r5
  _DWORD *v44; // r4
  int v45; // r12
  int v46; // r7
  int v47; // r2
  _WORD *v48; // r5
  _DWORD *v49; // r5
  int v50; // r1
  int v51; // r2
  int v52; // r3
  bool v53; // cf
  _DWORD *v54; // r5
  int v55; // r1
  _DWORD *v56; // r5
  _WORD *v57; // r5
  float v58; // s14
  _DWORD *v59; // r5
  int v60; // r7
  int v61; // r1
  int v62; // r4
  int v63; // r0
  int v64; // r1
  _DWORD *v65; // r2
  char *v66; // r0
  char *v67; // r5
  int v68; // r0
  size_t v69; // [sp+10h] [bp-1B3Ch]
  _BYTE *v70; // [sp+14h] [bp-1B38h]
  size_t n; // [sp+18h] [bp-1B34h]
  int v73; // [sp+28h] [bp-1B24h]
  int v74; // [sp+34h] [bp-1B18h]
  unsigned int v76; // [sp+3Ch] [bp-1B10h]
  int v77; // [sp+44h] [bp-1B08h] BYREF
  _DWORD v78[64]; // [sp+48h] [bp-1B04h] BYREF
  _WORD s[128]; // [sp+148h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+248h] [bp-1904h] BYREF
  char v81[2048]; // [sp+348h] [bp-1804h] BYREF
  unsigned int v82; // [sp+B48h] [bp-1004h] BYREF
  __int16 v83; // [sp+B4Ch] [bp-1000h]
  char v84; // [sp+B4Eh] [bp-FFEh]
  char v85; // [sp+B4Fh] [bp-FFDh]

  memset(s, 0, sizeof(s));
  memset(v78, 0, sizeof(v78));
  v73 = *(_DWORD *)(a2 + 4 * a1);
  if ( a1 > 0xF )
  {
    snprintf(v81, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v82, 0x1000u, 0, v81);
    V_UNLOCK();
    v15 = -2147483391;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "eeprom_read",
      11,
      117,
      100,
      &v82);
    goto LABEL_19;
  }
  v76 = 2 * a1;
  v74 = 3;
LABEL_3:
  if ( !dword_12C11C[v76 + 1] )
  {
    v83 = 0;
    v82 = a1;
    v85 = a1;
    v84 = 10;
    v42 = iic_init((int)&v82);
    if ( v42 < 0 )
    {
      v15 = v42;
      snprintf(v81, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v82, 0x1000u, 0, v81);
      pthread_mutex_unlock(&stru_3B526C);
      v18 = g_zc;
      v16 = 122;
      LOWORD(v17) = -31776;
      goto LABEL_18;
    }
    dword_12C11C[v76 + 1] = 1;
    dword_12C11C[2 * a1] = v42;
  }
  v4 = 0;
  v69 = 0;
  v70 = s;
LABEL_5:
  v5 = dword_12C11C[2 * a1];
  if ( pthread_mutex_lock(&stru_3B5254) )
  {
    strcpy(v81, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v82, 0x1000u, 0, v81);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
      81,
      "iic_read_reg",
      12,
      124,
      100,
      &v82);
    goto LABEL_17;
  }
  v77 = v5;
  if ( pthread_mutex_lock(&stru_3B5288) )
  {
    strcpy(v81, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v82, 0x1000u, 0, v81);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_read_reg",
      12,
      229,
      100,
      &v82);
    pthread_mutex_unlock(&stru_3B5254);
    goto LABEL_17;
  }
  if ( !dword_3B52A0 )
  {
LABEL_15:
    snprintf(v81, 0x800u, "ctx %d not inited\n", v77);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v82, 0x1000u, 0, v81);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_read_reg",
      12,
      262,
      100,
      &v82);
    goto LABEL_16;
  }
  v6 = *(_DWORD *)dword_3B52A0;
  v7 = *(_DWORD *)dword_3B52A0 + 4;
  v8 = **(__int64 ***)dword_3B52A0;
  while ( 1 )
  {
    if ( v8 == (__int64 *)v7 )
      goto LABEL_15;
    v9 = *((_DWORD *)v8 + 4);
    v10 = *(_DWORD *)(v9 + 4);
    v11 = malloc(v10);
    v12 = v11;
    if ( v11 )
      memcpy(v11, *(const void **)v9, v10);
    v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v77, v12);
    free(v12);
    if ( !v13 )
      break;
    v14 = *v8;
    v8 = (__int64 *)*((_DWORD *)v8 + 1);
    if ( v13 < 0 )
      v8 = (__int64 *)v14;
  }
  v20 = *((_DWORD *)v8 + 5);
  n = *(_DWORD *)(v20 + 4);
  v21 = malloc(n);
  v22 = v21;
  if ( !v21 )
    __und(0xFFu);
  memcpy(v21, *(const void **)v20, n);
  v23 = *v22;
  v24 = v22[1];
  snprintf(v81, 0x800u, "i2c read master = %d, slave = %d\n", *v22, v24);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v82, 0x1000u, 0, v81);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
    81,
    "i2c_read_reg",
    12,
    236,
    20,
    &v82);
  v25 = v4 | 0x3000000 | (v23 << 26) | (v24 >> 4 << 20);
  v26 = 601;
  v27 = (v24 << 15) & 0x70000 | v25;
  while ( 1 )
  {
    v28 = dword_3B52A4;
    if ( *(int *)(dword_3B52A4 + 48) < 0 )
      break;
    usleep(0x1388u);
    if ( !--v26 )
    {
      v39 = v22;
      strcpy(v81, "iic not ready 4 read1\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v82, 0x1000u, 0, v81);
      v40 = 243;
      pthread_mutex_unlock(&stru_3B526C);
      v41 = g_zc;
      goto LABEL_42;
    }
  }
  *(_DWORD *)(dword_3B52A4 + 48) = v27;
  v29 = 601;
  while ( 1 )
  {
    v30 = *(_DWORD *)(v28 + 48);
    v31 = (unsigned int)v30 >> 31;
    if ( v30 < 0 )
    {
      v4 += 256;
      *v70++ = v30;
      free(v22);
      ++v69;
      pthread_mutex_unlock(&stru_3B5288);
      pthread_mutex_unlock(&stru_3B5254);
      if ( v69 != 256 )
        goto LABEL_5;
      usleep((__useconds_t)&loc_7A120);
      memset(dest, 0, sizeof(dest));
      v32 = HIBYTE(s[0]) - 2;
      v33 = s[0] & 0xF;
      v34 = LOBYTE(s[0]) >> 4;
      if ( (unsigned __int8)v32 > 0xFDu )
      {
        snprintf(
          v81,
          0x800u,
          "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
          HIBYTE(s[0]),
          HIBYTE(s[0]) - 2,
          HIBYTE(s[0]));
        V_LOCK();
        logfmt_raw((char *)&v82, 0x1000u, 0, v81);
        V_UNLOCK();
        v68 = 239;
      }
      else
      {
        v35 = v34 == 1;
        if ( v34 == 1 )
          v35 = v33 == 1;
        v36 = !v35;
        if ( v35 )
        {
          memcpy(dest, &s[1], HIBYTE(s[0]) - 2);
          data_dec(dest, v32, v31, v31);
          LOWORD(v78[0]) = s[0];
          v37 = LOBYTE(s[0]) >> 4;
          memcpy((char *)v78 + 2, dest, v32);
          v38 = *(_BYTE *)v73 & 0xF | (16 * (v37 & 0xF));
          *(_BYTE *)v73 = v38;
          *(_BYTE *)v73 = v38 & 0xF0 | v78[0] & 0xF;
          *(_BYTE *)(v73 + 1) = BYTE1(v78[0]);
          v35 = BYTE2(v78[0]) == 3;
          *(_BYTE *)(v73 + 2) = BYTE2(v78[0]);
          if ( v35 )
          {
            v43 = calloc(0x12u, v31);
            v44 = v43;
            *(_DWORD *)(v73 + 3) = v43;
            if ( v43 )
            {
              v44 = (_DWORD *)v31;
            }
            else
            {
              strcpy(v81, "Decode SN OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                392,
                100,
                &v82);
              v43 = *(_DWORD **)(v73 + 3);
            }
            v45 = *(_DWORD *)((char *)&v78[1] + 3);
            v46 = *(_DWORD *)((char *)&v78[2] + 3);
            v47 = *(_DWORD *)((char *)&v78[3] + 3);
            *v43 = *(_DWORD *)((char *)v78 + 3);
            v43[1] = v45;
            v43[2] = v46;
            v43[3] = v47;
            *((_BYTE *)v43 + 16) = HIBYTE(v78[4]);
            v48 = calloc(3u, 1u);
            *(_DWORD *)(v73 + 7) = v48;
            if ( !v48 )
            {
              v44 = 0;
              strcpy(v81, "Decode Chip Die OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                401,
                100,
                &v82);
              v48 = *(_WORD **)(v73 + 7);
            }
            *v48 = v78[5];
            v49 = calloc(0xEu, 1u);
            *(_DWORD *)(v73 + 11) = v49;
            if ( !v49 )
            {
              v44 = 0;
              strcpy(v81, "Decode Chip Marking OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                410,
                100,
                &v82);
              v49 = *(_DWORD **)(v73 + 11);
            }
            v50 = *(_DWORD *)((char *)&v78[6] + 2);
            v51 = *(_DWORD *)((char *)&v78[7] + 2);
            *v49 = *(_DWORD *)((char *)&v78[5] + 2);
            v49[1] = v50;
            v49[2] = v51;
            *((_BYTE *)v49 + 12) = BYTE2(v78[8]);
            v52 = *(unsigned __int8 *)(v73 + 2) - 1;
            v53 = *(_BYTE *)(v73 + 2) != 1;
            *(_BYTE *)(v73 + 15) = HIBYTE(v78[8]);
            if ( v52 != 1 && v53 )
            {
              v54 = calloc(0xAu, 1u);
              *(_DWORD *)(v73 + 16) = v54;
              if ( !v54 )
              {
                v44 = 0;
                strcpy(v81, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v82, 0x1000u, 0, v81);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                  80,
                  "eeprom_buf_to_layout",
                  20,
                  436,
                  100,
                  &v82);
                v54 = *(_DWORD **)(v73 + 16);
              }
              v55 = v78[10];
              *v54 = v78[9];
              v54[1] = v55;
              *((_BYTE *)v54 + 8) = v78[11];
            }
            else
            {
              memset(dest, 0, 16);
              v66 = (char *)calloc(0xFu, 1u);
              v67 = v66;
              *(_DWORD *)(v73 + 16) = v66;
              if ( !v66 )
              {
                v44 = 0;
                strcpy(v81, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v82, 0x1000u, 0, v81);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                  80,
                  "eeprom_buf_to_layout",
                  20,
                  425,
                  100,
                  &v82);
                v67 = *(char **)(v73 + 16);
              }
              dest[0] = v78[9];
              dest[1] = v78[10];
              LOBYTE(dest[2]) = v78[11];
              snprintf(v67, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v78[9]), BYTE1(v78[9]), BYTE2(v78[9]), HIBYTE(v78[9]));
            }
            *(_BYTE *)(v73 + 20) = *(_BYTE *)(v73 + 20) & 0x80 | BYTE1(v78[11]) & 0x7F;
            *(_BYTE *)(v73 + 20) = *(_BYTE *)(v73 + 20) & 0x7F | (BYTE1(v78[11]) >> 7 << 7);
            v56 = calloc(5u, 1u);
            *(_DWORD *)(v73 + 21) = v56;
            if ( !v56 )
            {
              v44 = 0;
              strcpy(v81, "Decode Chip FT Program Version OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                450,
                100,
                &v82);
              v56 = *(_DWORD **)(v73 + 21);
            }
            *v56 = *(_DWORD *)((char *)&v78[11] + 2);
            *(_BYTE *)(v73 + 25) = *(_BYTE *)(v73 + 25) & 0x80 | BYTE2(v78[12]) & 0x7F;
            *(_BYTE *)(v73 + 25) = *(_BYTE *)(v73 + 25) & 0x7F | (BYTE2(v78[12]) >> 7 << 7);
            *(_BYTE *)(v73 + 26) = HIBYTE(v78[12]);
            *(_DWORD *)(v73 + 27) = v78[13];
            v57 = calloc(3u, 1u);
            *(_DWORD *)(v73 + 31) = v57;
            if ( !v57 )
            {
              v44 = 0;
              strcpy(v81, "Decode Chip Technology OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                474,
                100,
                &v82);
              v57 = *(_WORD **)(v73 + 31);
            }
            *v57 = v78[14];
            *(_WORD *)(v73 + 35) = __rev16(HIWORD(v78[14]));
            *(_WORD *)(v73 + 37) = __rev16(LOWORD(v78[15]));
            v58 = (double)((unsigned __int16)(HIWORD(v78[15]) << 8) | HIBYTE(HIWORD(v78[15]))) * 0.01;
            *(float *)(v73 + 39) = v58;
            *(_DWORD *)(v73 + 43) = v78[16];
            v59 = calloc(9u, 1u);
            *(_DWORD *)(v73 + 47) = v59;
            if ( v59 )
            {
              v60 = BYTE1(v78[20]);
              v61 = v78[18];
              *v59 = v78[17];
              v59[1] = v61;
              *(_BYTE *)(v73 + 55) = v60;
              if ( v44 )
              {
                v62 = *(unsigned __int8 *)(v73 + 1);
                v63 = CRC5_long((unsigned __int8 *)v78, 8 * (v62 - 1));
                if ( v60 == v63 )
                {
                  *(_BYTE *)(a2 + a1 + 64) = 1;
                  return 0;
                }
                snprintf(
                  v81,
                  0x800u,
                  "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
                  v60,
                  v62,
                  v63);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw((char *)&v82, 0x1000u, 0, v81);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                  80,
                  "_is_fixture_crc_pass",
                  20,
                  211,
                  100,
                  &v82);
              }
            }
            else
            {
              strcpy(v81, "Decode miner_type OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v82, 0x1000u, 0, v81);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
                80,
                "eeprom_buf_to_layout",
                20,
                510,
                100,
                &v82);
              v64 = v78[18];
              v65 = *(_DWORD **)(v73 + 47);
              *v65 = v78[17];
              v65[1] = v64;
              *(_BYTE *)(v73 + 55) = BYTE1(v78[20]);
            }
          }
          else
          {
            strcpy(v81, "This FMT is not supported\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v82, 0x1000u, v36, v81);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
              80,
              "init_eeprom_fmt_info",
              20,
              331,
              100,
              &v82);
          }
LABEL_39:
          *(_BYTE *)(a2 + a1 + 64) = 0;
          snprintf(v81, 0x800u, "Data load fail for chain %d.\n", a1);
          V_LOCK();
          logfmt_raw((char *)&v82, 0x1000u, 0, v81);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
            80,
            "eeprom_load_one_chain",
            21,
            570,
            100,
            &v82);
          return -1;
        }
        snprintf(
          v81,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v33,
          LOBYTE(s[0]) >> 4);
        V_LOCK();
        logfmt_raw((char *)&v82, 0x1000u, 0, v81);
        V_UNLOCK();
        v68 = 245;
      }
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        80,
        "decode_eeprom_fixture_info",
        26,
        v68,
        100,
        &v82);
      snprintf(v81, 0x800u, "Data decode fail for chain %d.\n", a1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v82, 0x1000u, 0, v81);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
        80,
        "eeprom_load_one_chain",
        21,
        553,
        100,
        &v82);
      usleep(0x7A120u);
      if ( !--v74 )
        goto LABEL_39;
      goto LABEL_3;
    }
    usleep(0x1388u);
    if ( !--v29 )
      break;
    v28 = dword_3B52A4;
  }
  v39 = v22;
  strcpy(v81, "iic failed to read data\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v82, 0x1000u, 0, v81);
  v40 = 254;
  pthread_mutex_unlock(&stru_3B526C);
  v41 = g_zc;
LABEL_42:
  zlog(
    v41,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
    81,
    "i2c_read_reg",
    12,
    v40,
    100,
    &v82);
  free(v39);
LABEL_16:
  pthread_mutex_unlock(&stru_3B5288);
  pthread_mutex_unlock(&stru_3B5254);
LABEL_17:
  v15 = -2147483392;
  snprintf(v81, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v69);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v82, 0x1000u, 0, v81);
  pthread_mutex_unlock(&stru_3B526C);
  v16 = 132;
  LOWORD(v17) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c";
  v18 = g_zc;
LABEL_18:
  HIWORD(v17) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v18, v17, 80, "eeprom_read", 11, v16, 100, &v82);
LABEL_19:
  snprintf(v81, 0x800u, "Read configuration fail for chain %d.\n", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v82, 0x1000u, 0, v81);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "eeprom_load_one_chain",
    21,
    539,
    100,
    &v82);
  return v15;
}
