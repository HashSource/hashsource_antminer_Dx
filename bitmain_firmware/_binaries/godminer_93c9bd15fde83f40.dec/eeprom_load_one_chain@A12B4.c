int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r0
  int v5; // r11
  int v6; // r4
  int v7; // r6
  int v8; // r5
  _DWORD *v9; // r8
  int v10; // r9
  size_t v11; // r10
  void *v12; // r0
  void *v13; // r4
  int v14; // r10
  _DWORD *v15; // r3
  int v16; // r4
  int v17; // r0
  int v18; // r3
  int v19; // r1
  int v20; // r0
  int v21; // r2
  int v23; // r4
  _DWORD *v24; // r0
  _DWORD *v25; // r8
  int v26; // r7
  unsigned int v27; // r5
  unsigned int v28; // r2
  int v29; // r3
  int v30; // r5
  int v31; // r7
  int v32; // r3
  int v33; // r5
  int v34; // r3
  size_t v35; // r10
  unsigned int v36; // r4
  int v37; // r3
  int v38; // r1
  bool v39; // zf
  int v40; // r5
  unsigned __int8 v41; // r7
  char v42; // r3
  int v43; // r0
  int v44; // r12
  _DWORD *v45; // r4
  int v46; // lr
  int v47; // r12
  int v48; // r2
  _WORD *v49; // r4
  _DWORD *v50; // r4
  int v51; // r1
  int v52; // r2
  int v53; // r3
  bool v54; // cf
  _DWORD *v55; // r4
  int v56; // r1
  _DWORD *v57; // r4
  _WORD *v58; // r4
  float v59; // s14
  _DWORD *v60; // r4
  int v61; // r5
  int v62; // r1
  int v63; // r4
  int v64; // r0
  int v65; // r1
  _DWORD *v66; // r2
  char *v67; // r0
  char *v68; // r4
  int v69; // r0
  int v70; // [sp+4h] [bp-1B50h]
  size_t v71; // [sp+14h] [bp-1B40h]
  _BYTE *v72; // [sp+18h] [bp-1B3Ch]
  size_t n; // [sp+24h] [bp-1B30h]
  int v75; // [sp+2Ch] [bp-1B28h]
  int v76; // [sp+38h] [bp-1B1Ch]
  unsigned int v78; // [sp+40h] [bp-1B14h]
  int v79; // [sp+4Ch] [bp-1B08h] BYREF
  _DWORD v80[64]; // [sp+50h] [bp-1B04h] BYREF
  _WORD s[128]; // [sp+150h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+250h] [bp-1904h] BYREF
  char v83[2048]; // [sp+350h] [bp-1804h] BYREF
  unsigned int v84; // [sp+B50h] [bp-1004h] BYREF
  __int16 v85; // [sp+B54h] [bp-1000h]
  char v86; // [sp+B56h] [bp-FFEh]
  char v87; // [sp+B57h] [bp-FFDh]

  memset(s, 0, sizeof(s));
  memset(v80, 0, sizeof(v80));
  v75 = *(_DWORD *)(a2 + 4 * a1);
  if ( a1 > 0xF )
  {
    snprintf(v83, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v84, 0x1000u, 0, v83);
    v16 = -2147483391;
    V_UNLOCK();
    v17 = g_zc;
    LOWORD(v18) = -15508;
    v70 = 131;
    LOWORD(v19) = 5008;
    goto LABEL_20;
  }
  v78 = 2 * a1;
  v76 = 3;
LABEL_3:
  if ( !dword_1A8A90[v78 + 1] )
  {
    v85 = 0;
    v84 = a1;
    v87 = a1;
    v86 = 10;
    v4 = iic_init((int)&v84);
    if ( v4 < 0 )
    {
      v16 = v4;
      snprintf(v83, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v84, 0x1000u, 0, v83);
      pthread_mutex_unlock(&stru_1A8A24);
      v17 = g_zc;
      LOWORD(v18) = -15508;
      LOWORD(v19) = 5008;
      v70 = 136;
      goto LABEL_20;
    }
    dword_1A8A90[2 * a1] = v4;
    dword_1A8A90[v78 + 1] = 1;
  }
  v5 = 0;
  v71 = 0;
  v72 = s;
  puts("no use at24c512c!");
LABEL_7:
  v6 = dword_1A8A90[2 * a1];
  if ( pthread_mutex_lock(&stru_1A8A58) )
  {
    strcpy(v83, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v84, 0x1000u, 0, v83);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_iic.c",
      164,
      "iic_read_reg",
      12,
      124,
      100,
      &v84);
    goto LABEL_19;
  }
  v79 = v6;
  if ( pthread_mutex_lock(&stru_1A8A70) )
  {
    strcpy(v83, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v84, 0x1000u, 0, v83);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read_reg",
      12,
      229,
      100,
      &v84);
    pthread_mutex_unlock(&stru_1A8A58);
    goto LABEL_19;
  }
  if ( !dword_1A8A88 )
  {
LABEL_17:
    snprintf(v83, 0x800u, "ctx %d not inited\n", v79);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v84, 0x1000u, 0, v83);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read_reg",
      12,
      262,
      100,
      &v84);
    goto LABEL_18;
  }
  v7 = *(_DWORD *)dword_1A8A88;
  v8 = *(_DWORD *)dword_1A8A88 + 4;
  v9 = **(_DWORD ***)dword_1A8A88;
  while ( 1 )
  {
    if ( v9 == (_DWORD *)v8 )
      goto LABEL_17;
    v10 = v9[4];
    v11 = *(_DWORD *)(v10 + 4);
    v12 = malloc(v11);
    v13 = v12;
    if ( v12 )
      memcpy(v12, *(const void **)v10, v11);
    v14 = (*(int (__fastcall **)(int *, void *))(v7 + 36))(&v79, v13);
    free(v13);
    if ( !v14 )
      break;
    v15 = (_DWORD *)*v9;
    v9 = (_DWORD *)v9[1];
    if ( v14 < 0 )
      v9 = v15;
  }
  v23 = v9[5];
  n = *(_DWORD *)(v23 + 4);
  v24 = malloc(n);
  v25 = v24;
  if ( !v24 )
    __und(0);
  memcpy(v24, *(const void **)v23, n);
  v26 = *v25;
  v27 = v25[1];
  snprintf(v83, 0x800u, "i2c read master = %d, slave = %d\n", *v25, v27);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v84, 0x1000u, 0, v83);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_i2c.c",
    164,
    "i2c_read_reg",
    12,
    236,
    20,
    &v84);
  v28 = v27 >> 4;
  v29 = (v27 << 15) & 0x70000;
  v30 = 601;
  v31 = v5 | 0x3000000 | (v26 << 26) | (v28 << 20) | v29;
  while ( 1 )
  {
    v32 = dword_1A8A8C;
    if ( *(int *)(dword_1A8A8C + 48) < 0 )
      break;
    usleep(0x1388u);
    if ( !--v30 )
    {
      strcpy(v83, "iic not ready 4 read1\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v84, 0x1000u, 0, v83);
      pthread_mutex_unlock(&stru_1A8A24);
      v43 = g_zc;
      v44 = 243;
      goto LABEL_44;
    }
  }
  *(_DWORD *)(dword_1A8A8C + 48) = v31;
  v33 = 601;
  while ( 1 )
  {
    v34 = *(_DWORD *)(v32 + 48);
    v35 = (unsigned int)v34 >> 31;
    if ( v34 < 0 )
    {
      v5 += 256;
      *v72++ = v34;
      free(v25);
      ++v71;
      pthread_mutex_unlock(&stru_1A8A70);
      pthread_mutex_unlock(&stru_1A8A58);
      if ( v71 != 256 )
        goto LABEL_7;
      usleep(0x7A120u);
      memset(dest, 0, sizeof(dest));
      v36 = HIBYTE(s[0]) - 2;
      v37 = s[0] & 0xF;
      v38 = LOBYTE(s[0]) >> 4;
      if ( (unsigned __int8)v36 > 0xFDu )
      {
        snprintf(
          v83,
          0x800u,
          "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
          HIBYTE(s[0]),
          HIBYTE(s[0]) - 2,
          HIBYTE(s[0]));
        V_LOCK();
        logfmt_raw((char *)&v84, 0x1000u, 0, v83);
        V_UNLOCK();
        v69 = 265;
      }
      else
      {
        v39 = v38 == 1;
        if ( v38 == 1 )
          v39 = v37 == 1;
        v40 = !v39;
        if ( v39 )
        {
          memcpy(dest, &s[1], HIBYTE(s[0]) - 2);
          data_dec(dest, v36, v35, v35);
          v41 = s[0];
          LOWORD(v80[0]) = s[0];
          memcpy((char *)v80 + 2, dest, v36);
          v42 = *(_BYTE *)v75 & 0xF | (16 * (v41 >> 4));
          *(_BYTE *)v75 = v42;
          *(_BYTE *)v75 = v42 & 0xF0 | v80[0] & 0xF;
          *(_BYTE *)(v75 + 1) = BYTE1(v80[0]);
          v39 = BYTE2(v80[0]) == 3;
          *(_BYTE *)(v75 + 2) = BYTE2(v80[0]);
          if ( v39 )
          {
            v45 = calloc(0x12u, v35);
            *(_DWORD *)(v75 + 3) = v45;
            if ( !v45 )
            {
              v35 = 0;
              strcpy(v83, "Decode SN OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                418,
                100,
                &v84);
              v45 = *(_DWORD **)(v75 + 3);
            }
            v46 = *(_DWORD *)((char *)&v80[1] + 3);
            v47 = *(_DWORD *)((char *)&v80[2] + 3);
            v48 = *(_DWORD *)((char *)&v80[3] + 3);
            *v45 = *(_DWORD *)((char *)v80 + 3);
            v45[1] = v46;
            v45[2] = v47;
            v45[3] = v48;
            *((_BYTE *)v45 + 16) = HIBYTE(v80[4]);
            v49 = calloc(3u, 1u);
            *(_DWORD *)(v75 + 7) = v49;
            if ( !v49 )
            {
              v35 = 0;
              strcpy(v83, "Decode Chip Die OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                427,
                100,
                &v84);
              v49 = *(_WORD **)(v75 + 7);
            }
            *v49 = v80[5];
            v50 = calloc(0xEu, 1u);
            *(_DWORD *)(v75 + 11) = v50;
            if ( !v50 )
            {
              v35 = 0;
              strcpy(v83, "Decode Chip Marking OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                436,
                100,
                &v84);
              v50 = *(_DWORD **)(v75 + 11);
            }
            v51 = *(_DWORD *)((char *)&v80[6] + 2);
            v52 = *(_DWORD *)((char *)&v80[7] + 2);
            *v50 = *(_DWORD *)((char *)&v80[5] + 2);
            v50[1] = v51;
            v50[2] = v52;
            *((_BYTE *)v50 + 12) = BYTE2(v80[8]);
            v53 = *(unsigned __int8 *)(v75 + 2) - 1;
            v54 = *(_BYTE *)(v75 + 2) != 1;
            *(_BYTE *)(v75 + 15) = HIBYTE(v80[8]);
            if ( v53 != 1 && v54 )
            {
              v55 = calloc(0xAu, 1u);
              *(_DWORD *)(v75 + 16) = v55;
              if ( !v55 )
              {
                v35 = 0;
                strcpy(v83, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v84, 0x1000u, 0, v83);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "eeprom_buf_to_layout",
                  20,
                  462,
                  100,
                  &v84);
                v55 = *(_DWORD **)(v75 + 16);
              }
              v56 = v80[10];
              *v55 = v80[9];
              v55[1] = v56;
              *((_BYTE *)v55 + 8) = v80[11];
            }
            else
            {
              memset(dest, 0, 16);
              v67 = (char *)calloc(0xFu, 1u);
              v68 = v67;
              *(_DWORD *)(v75 + 16) = v67;
              if ( !v67 )
              {
                v35 = 0;
                strcpy(v83, "Decode Chip FT Program Version OOM\n");
                V_LOCK();
                logfmt_raw((char *)&v84, 0x1000u, 0, v83);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "eeprom_buf_to_layout",
                  20,
                  451,
                  100,
                  &v84);
                v68 = *(char **)(v75 + 16);
              }
              dest[0] = v80[9];
              dest[1] = v80[10];
              LOBYTE(dest[2]) = v80[11];
              snprintf(v68, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v80[9]), BYTE1(v80[9]), BYTE2(v80[9]), HIBYTE(v80[9]));
            }
            *(_BYTE *)(v75 + 20) = *(_BYTE *)(v75 + 20) & 0x80 | BYTE1(v80[11]) & 0x7F;
            *(_BYTE *)(v75 + 20) = *(_BYTE *)(v75 + 20) & 0x7F | (BYTE1(v80[11]) >> 7 << 7);
            v57 = calloc(5u, 1u);
            *(_DWORD *)(v75 + 21) = v57;
            if ( !v57 )
            {
              v35 = 0;
              strcpy(v83, "Decode Chip FT Program Version OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                476,
                100,
                &v84);
              v57 = *(_DWORD **)(v75 + 21);
            }
            *v57 = *(_DWORD *)((char *)&v80[11] + 2);
            *(_BYTE *)(v75 + 25) = *(_BYTE *)(v75 + 25) & 0x80 | BYTE2(v80[12]) & 0x7F;
            *(_BYTE *)(v75 + 25) = *(_BYTE *)(v75 + 25) & 0x7F | (BYTE2(v80[12]) >> 7 << 7);
            *(_BYTE *)(v75 + 26) = HIBYTE(v80[12]);
            *(_DWORD *)(v75 + 27) = v80[13];
            v58 = calloc(3u, 1u);
            *(_DWORD *)(v75 + 31) = v58;
            if ( !v58 )
            {
              v35 = 0;
              strcpy(v83, "Decode Chip Technology OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                500,
                100,
                &v84);
              v58 = *(_WORD **)(v75 + 31);
            }
            *v58 = v80[14];
            *(_WORD *)(v75 + 35) = __rev16(HIWORD(v80[14]));
            *(_WORD *)(v75 + 37) = __rev16(LOWORD(v80[15]));
            v59 = (double)((unsigned __int16)(HIWORD(v80[15]) << 8) | HIBYTE(HIWORD(v80[15]))) * 0.01;
            *(float *)(v75 + 39) = v59;
            *(_DWORD *)(v75 + 43) = v80[16];
            v60 = calloc(9u, 1u);
            *(_DWORD *)(v75 + 47) = v60;
            if ( v60 )
            {
              v61 = BYTE1(v80[20]);
              v62 = v80[18];
              *v60 = v80[17];
              v60[1] = v62;
              *(_BYTE *)(v75 + 55) = v61;
              if ( v35 )
              {
                v63 = *(unsigned __int8 *)(v75 + 1);
                v64 = BM_CRC5((unsigned __int8 *)v80, 8 * (v63 - 1));
                if ( v61 == v64 )
                {
                  *(_BYTE *)(a2 + a1 + 64) = 1;
                  return 0;
                }
                snprintf(
                  v83,
                  0x800u,
                  "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
                  v61,
                  v63,
                  v64);
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw((char *)&v84, 0x1000u, 0, v83);
                pthread_mutex_unlock(&stru_1A8A24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                  163,
                  "_is_fixture_crc_pass",
                  20,
                  237,
                  100,
                  &v84);
              }
            }
            else
            {
              strcpy(v83, "Decode miner_type OOM\n");
              V_LOCK();
              logfmt_raw((char *)&v84, 0x1000u, 0, v83);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
                163,
                "eeprom_buf_to_layout",
                20,
                536,
                100,
                &v84);
              v65 = v80[18];
              v66 = *(_DWORD **)(v75 + 47);
              *v66 = v80[17];
              v66[1] = v65;
              *(_BYTE *)(v75 + 55) = BYTE1(v80[20]);
            }
          }
          else
          {
            strcpy(v83, "This FMT is not supported\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v84, 0x1000u, v40, v83);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "init_eeprom_fmt_info",
              20,
              357,
              100,
              &v84);
          }
LABEL_41:
          v16 = -1;
          *(_BYTE *)(a2 + a1 + 64) = 0;
          snprintf(v83, 0x800u, "Data load fail for chain %d.\n", a1);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw((char *)&v84, 0x1000u, 0, v83);
          pthread_mutex_unlock(&stru_1A8A24);
          v20 = g_zc;
          v21 = 596;
          goto LABEL_21;
        }
        snprintf(
          v83,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v37,
          LOBYTE(s[0]) >> 4);
        V_LOCK();
        logfmt_raw((char *)&v84, 0x1000u, 0, v83);
        V_UNLOCK();
        v69 = 271;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "decode_eeprom_fixture_info",
        26,
        v69,
        100,
        &v84);
      snprintf(v83, 0x800u, "Data decode fail for chain %d.\n", a1);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v84, 0x1000u, 0, v83);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_load_one_chain",
        21,
        579,
        100,
        &v84);
      usleep(0x7A120u);
      if ( !--v76 )
        goto LABEL_41;
      goto LABEL_3;
    }
    usleep(0x1388u);
    if ( !--v33 )
      break;
    v32 = dword_1A8A8C;
  }
  strcpy(v83, "iic failed to read data\n");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v84, 0x1000u, 0, v83);
  pthread_mutex_unlock(&stru_1A8A24);
  v43 = g_zc;
  v44 = 254;
LABEL_44:
  zlog(
    v43,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_i2c.c",
    164,
    "i2c_read_reg",
    12,
    v44,
    100,
    &v84);
  free(v25);
LABEL_18:
  pthread_mutex_unlock(&stru_1A8A70);
  pthread_mutex_unlock(&stru_1A8A58);
LABEL_19:
  v16 = -2147483392;
  snprintf(v83, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v71);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v84, 0x1000u, 0, v83);
  pthread_mutex_unlock(&stru_1A8A24);
  v17 = g_zc;
  v70 = 158;
  LOWORD(v18) = (unsigned __int16)"eeprom_read";
  LOWORD(v19) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c";
LABEL_20:
  HIWORD(v18) = (unsigned int)"eeprom_read" >> 16;
  HIWORD(v19) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v17, v19, 163, v18, 11, v70, 100, &v84);
  snprintf(v83, 0x800u, "Read configuration fail for chain %d.\n", a1);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v84, 0x1000u, 0, v83);
  pthread_mutex_unlock(&stru_1A8A24);
  v20 = g_zc;
  v21 = 565;
LABEL_21:
  zlog(
    v20,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_load_one_chain",
    21,
    v21,
    100,
    &v84);
  return v16;
}
