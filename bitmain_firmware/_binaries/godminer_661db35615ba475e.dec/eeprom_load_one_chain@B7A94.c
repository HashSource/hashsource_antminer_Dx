int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r8
  int v8; // r9
  size_t v9; // r10
  void *v10; // r0
  void *v11; // r4
  int v12; // r9
  _DWORD *v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r2
  int v21; // r4
  _DWORD *v22; // r0
  _DWORD *v23; // r7
  int v24; // r6
  unsigned int v25; // r5
  int v26; // r9
  int v27; // r5
  int v28; // r3
  int v29; // r5
  int v30; // r3
  size_t v31; // r6
  unsigned int v32; // r4
  int v33; // r3
  int v34; // r1
  bool v35; // zf
  int v36; // r5
  char v37; // r7
  char v38; // r3
  int v39; // r3
  int v40; // r0
  int v41; // r12
  int v42; // r0
  _DWORD *v43; // r4
  int v44; // lr
  int v45; // r12
  int v46; // r2
  _WORD *v47; // r4
  _DWORD *v48; // r4
  int v49; // r1
  int v50; // r2
  int v51; // r3
  bool v52; // cf
  _DWORD *v53; // r4
  int v54; // r1
  _DWORD *v55; // r4
  _WORD *v56; // r4
  float v57; // s14
  _DWORD *v58; // r4
  int v59; // r5
  int v60; // r1
  int v61; // r4
  int v62; // r0
  int v63; // r1
  _DWORD *v64; // r2
  char *v65; // r0
  char *v66; // r4
  int v67; // r0
  int v68; // [sp+4h] [bp-1B50h]
  int v69; // [sp+14h] [bp-1B40h]
  size_t v70; // [sp+18h] [bp-1B3Ch]
  unsigned __int8 *v71; // [sp+1Ch] [bp-1B38h]
  size_t n; // [sp+20h] [bp-1B34h]
  int v74; // [sp+30h] [bp-1B24h]
  int v75; // [sp+3Ch] [bp-1B18h]
  unsigned int v77; // [sp+44h] [bp-1B10h]
  int v78; // [sp+4Ch] [bp-1B08h] BYREF
  _DWORD v79[64]; // [sp+50h] [bp-1B04h] BYREF
  unsigned __int8 s[256]; // [sp+150h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+250h] [bp-1904h] BYREF
  char v82[2048]; // [sp+350h] [bp-1804h] BYREF
  unsigned int v83; // [sp+B50h] [bp-1004h] BYREF
  __int16 v84; // [sp+B54h] [bp-1000h]
  char v85; // [sp+B56h] [bp-FFEh]
  char v86; // [sp+B57h] [bp-FFDh]

  memset(s, 0, sizeof(s));
  memset(v79, 0, sizeof(v79));
  v74 = *(_DWORD *)(a2 + 4 * a1);
  if ( a1 > 0xF )
  {
    snprintf(v82, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v83, 0x1000u, 0, v82);
    v14 = -2147483391;
    V_UNLOCK();
    v15 = g_zc;
    LOWORD(v16) = -27596;
    v68 = 117;
    LOWORD(v17) = 1264;
    goto LABEL_18;
  }
  v77 = 2 * a1;
  v75 = 3;
LABEL_3:
  if ( !dword_197BD8[v77 + 1] )
  {
    v84 = 0;
    v85 = 10;
    v83 = a1;
    v86 = a1;
    v42 = iic_init((int)&v83);
    if ( v42 < 0 )
    {
      v14 = v42;
      snprintf(v82, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v83, 0x1000u, 0, v82);
      pthread_mutex_unlock(&stru_197BB8);
      v15 = g_zc;
      LOWORD(v16) = -27596;
      LOWORD(v17) = 1264;
      v68 = 122;
      goto LABEL_18;
    }
    dword_197BD8[v77 + 1] = 1;
    dword_197BD8[2 * a1] = v42;
  }
  v69 = 0;
  v70 = 0;
  v71 = s;
LABEL_5:
  v4 = dword_197BD8[2 * a1];
  if ( pthread_mutex_lock(&stru_197C58) )
  {
    strcpy(v82, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v83, 0x1000u, 0, v82);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_iic.c",
      164,
      "iic_read_reg",
      12,
      124,
      100,
      &v83);
    goto LABEL_17;
  }
  v78 = v4;
  if ( pthread_mutex_lock(&stru_197C70) )
  {
    strcpy(v82, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v83, 0x1000u, 0, v82);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read_reg",
      12,
      229,
      100,
      &v83);
    pthread_mutex_unlock(&stru_197C58);
    goto LABEL_17;
  }
  if ( !dword_197C88 )
  {
LABEL_15:
    snprintf(v82, 0x800u, "ctx %d not inited\n", v78);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v83, 0x1000u, 0, v82);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read_reg",
      12,
      262,
      100,
      &v83);
    goto LABEL_16;
  }
  v5 = *(_DWORD *)dword_197C88;
  v6 = *(_DWORD *)dword_197C88 + 4;
  v7 = **(_DWORD ***)dword_197C88;
  while ( 1 )
  {
    if ( v7 == (_DWORD *)v6 )
      goto LABEL_15;
    v8 = v7[4];
    v9 = *(_DWORD *)(v8 + 4);
    v10 = malloc(v9);
    v11 = v10;
    if ( v10 )
      memcpy(v10, *(const void **)v8, v9);
    v12 = (*(int (__fastcall **)(int *, void *))(v5 + 36))(&v78, v11);
    free(v11);
    if ( !v12 )
      break;
    v13 = (_DWORD *)*v7;
    v7 = (_DWORD *)v7[1];
    if ( v12 < 0 )
      v7 = v13;
  }
  v21 = v7[5];
  n = *(_DWORD *)(v21 + 4);
  v22 = malloc(n);
  v23 = v22;
  if ( !v22 )
    __und(0);
  memcpy(v22, *(const void **)v21, n);
  v24 = *v23;
  v25 = v23[1];
  snprintf(v82, 0x800u, "i2c read master = %d, slave = %d\n", *v23, v25);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v83, 0x1000u, 0, v82);
  v26 = 601;
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_i2c.c",
    164,
    "i2c_read_reg",
    12,
    236,
    20,
    &v83);
  v27 = v69 | 0x3000000 | (v24 << 26) | (v25 >> 4 << 20) | (v25 << 15) & 0x70000;
  while ( 1 )
  {
    v28 = dword_197C8C;
    if ( *(int *)(dword_197C8C + 48) < 0 )
      break;
    usleep(0x1388u);
    if ( !--v26 )
    {
      strcpy(v82, "iic not ready 4 read1\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v83, 0x1000u, 0, v82);
      pthread_mutex_unlock(&stru_197BB8);
      v40 = g_zc;
      v41 = 243;
      goto LABEL_42;
    }
  }
  *(_DWORD *)(dword_197C8C + 48) = v27;
  v29 = 601;
  while ( 1 )
  {
    v30 = *(_DWORD *)(v28 + 48);
    v31 = (unsigned int)v30 >> 31;
    if ( v30 < 0 )
    {
      *v71++ = v30;
      free(v23);
      ++v70;
      v69 += 256;
      pthread_mutex_unlock(&stru_197C70);
      pthread_mutex_unlock(&stru_197C58);
      if ( v70 != 256 )
        goto LABEL_5;
      usleep(0x7A120u);
      memset(dest, 0, sizeof(dest));
      v32 = s[1] - 2;
      v33 = s[0] & 0xF;
      v34 = s[0] >> 4;
      if ( (unsigned __int8)(s[1] - 2) > 0xFDu )
      {
        snprintf(
          v82,
          0x800u,
          "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
          s[1],
          v32,
          s[1]);
        V_LOCK();
        logfmt_raw((char *)&v83, 0x1000u, 0, v82);
        V_UNLOCK();
        v67 = 239;
      }
      else
      {
        v35 = v34 == 1;
        if ( v34 == 1 )
          v35 = v33 == 1;
        v36 = !v35;
        if ( v35 )
        {
          memcpy(dest, &s[2], s[1] - 2);
          data_dec(dest, v32, v31, v31);
          LOWORD(v79[0]) = *(_WORD *)s;
          v37 = s[0] >> 4;
          memcpy((char *)v79 + 2, dest, v32);
          v38 = *(_BYTE *)v74 & 0xF | (16 * (v37 & 0xF));
          *(_BYTE *)v74 = v38;
          *(_BYTE *)v74 = v38 & 0xF0 | v79[0] & 0xF;
          *(_BYTE *)(v74 + 1) = BYTE1(v79[0]);
          v39 = BYTE2(v79[0]);
          *(_BYTE *)(v74 + 2) = BYTE2(v79[0]);
          if ( v39 == 3 )
          {
            v43 = calloc(0x12u, v31);
            *(_DWORD *)(v74 + 3) = v43;
            if ( !v43 )
            {
              v31 = 0;
              strcpy(v82, "Decode SN OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                392,
                100,
                &v83);
              v43 = *(_DWORD **)(v74 + 3);
            }
            v44 = *(_DWORD *)((char *)&v79[1] + 3);
            v45 = *(_DWORD *)((char *)&v79[2] + 3);
            v46 = *(_DWORD *)((char *)&v79[3] + 3);
            *v43 = *(_DWORD *)((char *)v79 + 3);
            v43[1] = v44;
            v43[2] = v45;
            v43[3] = v46;
            *((_BYTE *)v43 + 16) = HIBYTE(v79[4]);
            v47 = calloc(3u, 1u);
            *(_DWORD *)(v74 + 7) = v47;
            if ( !v47 )
            {
              v31 = 0;
              strcpy(v82, "Decode Chip Die OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                401,
                100,
                &v83);
              v47 = *(_WORD **)(v74 + 7);
            }
            *v47 = v79[5];
            v48 = calloc(0xEu, 1u);
            *(_DWORD *)(v74 + 11) = v48;
            if ( !v48 )
            {
              v31 = 0;
              strcpy(v82, "Decode Chip Marking OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                410,
                100,
                &v83);
              v48 = *(_DWORD **)(v74 + 11);
            }
            v49 = *(_DWORD *)((char *)&v79[6] + 2);
            v50 = *(_DWORD *)((char *)&v79[7] + 2);
            *v48 = *(_DWORD *)((char *)&v79[5] + 2);
            v48[1] = v49;
            v48[2] = v50;
            *((_BYTE *)v48 + 12) = BYTE2(v79[8]);
            v51 = *(unsigned __int8 *)(v74 + 2) - 1;
            v52 = *(_BYTE *)(v74 + 2) != 1;
            *(_BYTE *)(v74 + 15) = HIBYTE(v79[8]);
            if ( v51 != 1 && v52 )
            {
              v53 = calloc(0xAu, 1u);
              *(_DWORD *)(v74 + 16) = v53;
              if ( !v53 )
              {
                v31 = 0;
                strcpy(v82, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v83, 0x1000u, 0, v82);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "eeprom_buf_to_layout",
                  20,
                  436,
                  100,
                  &v83);
                v53 = *(_DWORD **)(v74 + 16);
              }
              v54 = v79[10];
              *v53 = v79[9];
              v53[1] = v54;
              *((_BYTE *)v53 + 8) = v79[11];
            }
            else
            {
              memset(dest, 0, 16);
              v65 = (char *)calloc(0xFu, 1u);
              v66 = v65;
              *(_DWORD *)(v74 + 16) = v65;
              if ( !v65 )
              {
                v31 = 0;
                strcpy(v82, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v83, 0x1000u, 0, v82);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "eeprom_buf_to_layout",
                  20,
                  425,
                  100,
                  &v83);
                v66 = *(char **)(v74 + 16);
              }
              dest[0] = v79[9];
              dest[1] = v79[10];
              LOBYTE(dest[2]) = v79[11];
              snprintf(v66, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v79[9]), BYTE1(v79[9]), BYTE2(v79[9]), HIBYTE(v79[9]));
            }
            *(_BYTE *)(v74 + 20) = *(_BYTE *)(v74 + 20) & 0x80 | BYTE1(v79[11]) & 0x7F;
            *(_BYTE *)(v74 + 20) = *(_BYTE *)(v74 + 20) & 0x7F | (BYTE1(v79[11]) >> 7 << 7);
            v55 = calloc(5u, 1u);
            *(_DWORD *)(v74 + 21) = v55;
            if ( !v55 )
            {
              v31 = 0;
              strcpy(v82, "Decode Chip FT Program Version OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                450,
                100,
                &v83);
              v55 = *(_DWORD **)(v74 + 21);
            }
            *v55 = *(_DWORD *)((char *)&v79[11] + 2);
            *(_BYTE *)(v74 + 25) = *(_BYTE *)(v74 + 25) & 0x80 | BYTE2(v79[12]) & 0x7F;
            *(_BYTE *)(v74 + 25) = *(_BYTE *)(v74 + 25) & 0x7F | (BYTE2(v79[12]) >> 7 << 7);
            *(_BYTE *)(v74 + 26) = HIBYTE(v79[12]);
            *(_DWORD *)(v74 + 27) = v79[13];
            v56 = calloc(3u, 1u);
            *(_DWORD *)(v74 + 31) = v56;
            if ( !v56 )
            {
              v31 = 0;
              strcpy(v82, "Decode Chip Technology OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                474,
                100,
                &v83);
              v56 = *(_WORD **)(v74 + 31);
            }
            *v56 = v79[14];
            *(_WORD *)(v74 + 35) = __rev16(HIWORD(v79[14]));
            *(_WORD *)(v74 + 37) = __rev16(LOWORD(v79[15]));
            v57 = (double)((unsigned __int16)(HIWORD(v79[15]) << 8) | HIBYTE(HIWORD(v79[15]))) * 0.01;
            *(float *)(v74 + 39) = v57;
            *(_DWORD *)(v74 + 43) = v79[16];
            v58 = calloc(9u, 1u);
            *(_DWORD *)(v74 + 47) = v58;
            if ( v58 )
            {
              v59 = BYTE1(v79[20]);
              v60 = v79[18];
              *v58 = v79[17];
              v58[1] = v60;
              *(_BYTE *)(v74 + 55) = v59;
              if ( v31 )
              {
                v61 = *(unsigned __int8 *)(v74 + 1);
                v62 = BM_CRC5((unsigned __int8 *)v79, 8 * (v61 - 1));
                if ( v59 == v62 )
                {
                  *(_BYTE *)(a2 + a1 + 64) = 1;
                  return 0;
                }
                snprintf(
                  v82,
                  0x800u,
                  "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
                  v59,
                  v61,
                  v62);
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw((char *)&v83, 0x1000u, 0, v82);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "_is_fixture_crc_pass",
                  20,
                  211,
                  100,
                  &v83);
              }
            }
            else
            {
              strcpy(v82, "Decode miner_type OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v83, 0x1000u, 0, v82);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                510,
                100,
                &v83);
              v63 = v79[18];
              v64 = *(_DWORD **)(v74 + 47);
              *v64 = v79[17];
              v64[1] = v63;
              *(_BYTE *)(v74 + 55) = BYTE1(v79[20]);
            }
          }
          else
          {
            strcpy(v82, "This FMT is not supported\n");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v83, 0x1000u, v36, v82);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "init_eeprom_fmt_info",
              20,
              331,
              100,
              &v83);
          }
LABEL_39:
          v14 = -1;
          *(_BYTE *)(a2 + a1 + 64) = 0;
          snprintf(v82, 0x800u, "Data load fail for chain %d.\n", a1);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw((char *)&v83, 0x1000u, 0, v82);
          pthread_mutex_unlock(&stru_197BB8);
          v18 = g_zc;
          v19 = 570;
          goto LABEL_19;
        }
        snprintf(
          v82,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v33,
          v34);
        V_LOCK();
        logfmt_raw((char *)&v83, 0x1000u, 0, v82);
        V_UNLOCK();
        v67 = 245;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "decode_eeprom_fixture_info",
        26,
        v67,
        100,
        &v83);
      snprintf(v82, 0x800u, "Data decode fail for chain %d.\n", a1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v83, 0x1000u, 0, v82);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_load_one_chain",
        21,
        553,
        100,
        &v83);
      usleep(0x7A120u);
      if ( !--v75 )
        goto LABEL_39;
      goto LABEL_3;
    }
    usleep(0x1388u);
    if ( !--v29 )
      break;
    v28 = dword_197C8C;
  }
  strcpy(v82, "iic failed to read data\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v83, 0x1000u, 0, v82);
  pthread_mutex_unlock(&stru_197BB8);
  v40 = g_zc;
  v41 = 254;
LABEL_42:
  zlog(
    v40,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_i2c.c",
    164,
    "i2c_read_reg",
    12,
    v41,
    100,
    &v83);
  free(v23);
LABEL_16:
  pthread_mutex_unlock(&stru_197C70);
  pthread_mutex_unlock(&stru_197C58);
LABEL_17:
  v14 = -2147483392;
  snprintf(v82, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v70);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v83, 0x1000u, 0, v82);
  pthread_mutex_unlock(&stru_197BB8);
  v15 = g_zc;
  v68 = 132;
  LOWORD(v16) = (unsigned __int16)"eeprom_read";
  LOWORD(v17) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c";
LABEL_18:
  HIWORD(v16) = (unsigned int)"eeprom_read" >> 16;
  HIWORD(v17) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v15, v17, 163, v16, 11, v68, 100, &v83);
  snprintf(v82, 0x800u, "Read configuration fail for chain %d.\n", a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v83, 0x1000u, 0, v82);
  pthread_mutex_unlock(&stru_197BB8);
  v18 = g_zc;
  v19 = 539;
LABEL_19:
  zlog(
    v18,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_load_one_chain",
    21,
    v19,
    100,
    &v83);
  return v14;
}
