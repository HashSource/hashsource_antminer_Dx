int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r8
  int v7; // r7
  int v8; // r7
  unsigned __int8 v9; // r3
  unsigned __int8 v10; // lr
  unsigned __int8 v11; // r12
  __int16 v12; // r2
  int v13; // r1
  const void *v14; // r8
  const void *v15; // r7
  const void *v16; // r7
  const void *v17; // r7
  const void *v18; // r7
  int v19; // r0
  int v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  const void *v24; // r7
  int v25; // r1
  int v26; // r2
  int v27; // r3
  const void *v28; // r7
  int v29; // r7
  unsigned int v30; // r7
  int v31; // r3
  int v32; // r1
  bool v33; // zf
  char v34; // r10
  int v35; // r8
  int v36; // r0
  int v37; // r2
  int v38; // r1
  int v40; // r0
  int v41; // r2
  int v43; // [sp+10h] [bp-1C24h]
  int v44; // [sp+14h] [bp-1C20h]
  __int16 src; // [sp+2Ah] [bp-1C0Ah] BYREF
  __int16 v48; // [sp+2Ch] [bp-1C08h] BYREF
  __int16 v49; // [sp+2Eh] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+30h] [bp-1C04h] BYREF
  unsigned __int8 v51[256]; // [sp+130h] [bp-1B04h] BYREF
  _WORD v52[128]; // [sp+230h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+330h] [bp-1904h] BYREF
  char v54[2048]; // [sp+430h] [bp-1804h] BYREF
  _DWORD v55[1025]; // [sp+C30h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  v6 = 3;
  v44 = *(_DWORD *)(a2 + 4 * a1);
  while ( 1 )
  {
    v7 = eeprom_read(a1, 0, (int)s, 256);
    if ( v7 )
    {
      snprintf(v54, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_rewrite_one_chain",
        24,
        833,
        100,
        v55);
      return v7;
    }
    if ( !sub_A3EC4(s, v51) )
      break;
    snprintf(v54, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw((char *)v55, 0x1000u, 0, v54);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_rewrite_one_chain",
      24,
      847,
      100,
      v55);
    usleep(0x7A120u);
    if ( !--v6 )
      goto LABEL_6;
  }
  if ( !sub_A4038(v51, v44) || !sub_A4D6C(v51, (unsigned __int8 *)(v44 + 1), (unsigned __int8 *)(v44 + 60)) )
  {
LABEL_6:
    v8 = -1;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v54, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw((char *)v55, 0x1000u, 0, v54);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_rewrite_one_chain",
      24,
      864,
      100,
      v55);
    return v8;
  }
  v43 = a2 + a1;
  *(_BYTE *)(v43 + 64) = 1;
  snprintf(
    v54,
    0x800u,
    "chain[%d], modify voltage from %d to %d, freq from %d to %d",
    a1,
    *(unsigned __int16 *)(v44 + 39),
    *(unsigned __int16 *)(v44 + 39) + a3,
    *(unsigned __int16 *)(v44 + 41),
    *(unsigned __int16 *)(v44 + 41) + a4);
  V_LOCK();
  logfmt_raw((char *)v55, 0x1000u, 0, v54);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_rewrite_one_chain",
    24,
    870,
    100,
    v55);
  v9 = *(_BYTE *)v44;
  v10 = *(_BYTE *)(v44 + 2);
  v11 = *(_BYTE *)(v44 + 1);
  v12 = *(_WORD *)(v44 + 41) + a4;
  *(_WORD *)(v44 + 39) += a3;
  v51[2] = v10;
  *(_WORD *)(v44 + 41) = v12;
  v13 = *(unsigned __int8 *)(v44 + 2);
  v51[0] = v9;
  v51[1] = v11;
  if ( sub_A3CE0((int)dest, v13) )
  {
    v14 = *(const void **)(v44 + 3);
    if ( !v14 )
    {
      strcpy(v54, "encode serial_number OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        652,
        100,
        v55);
      v14 = *(const void **)(v44 + 3);
    }
    memcpy(&v51[HIBYTE(dest[0])], v14, LOBYTE(dest[8]));
    v15 = *(const void **)(v44 + 7);
    if ( !v15 )
    {
      strcpy(v54, "encode chip_die OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        659,
        100,
        v55);
      v15 = *(const void **)(v44 + 7);
    }
    memcpy(&v51[LOBYTE(dest[1])], v15, BYTE1(dest[8]));
    v16 = *(const void **)(v44 + 11);
    if ( !v16 )
    {
      strcpy(v54, "encode chip_marking OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        666,
        100,
        v55);
      v16 = *(const void **)(v44 + 11);
    }
    memcpy(&v51[BYTE1(dest[1])], v16, BYTE2(dest[8]));
    v51[BYTE2(dest[1])] = *(_BYTE *)(v44 + 15);
    v17 = *(const void **)(v44 + 16);
    if ( !v17 )
    {
      strcpy(v54, "encode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        676,
        100,
        v55);
      v17 = *(const void **)(v44 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v44 + 2) - 1 <= 1 )
    {
      memset(v55, 0, 16);
      _isoc99_sscanf(v17, "F%dV%02dB%dC%d", v55, (char *)v55 + 1, (char *)v55 + 2, (char *)v55 + 3);
      memcpy(&v51[HIBYTE(dest[1])], v55, LOBYTE(dest[9]));
    }
    else
    {
      memcpy(&v51[HIBYTE(dest[1])], v17, LOBYTE(dest[9]));
    }
    v51[BYTE1(dest[2])] = *(_BYTE *)(v44 + 24);
    v18 = *(const void **)(v44 + 25);
    if ( !v18 )
    {
      strcpy(v54, "Decode asic_sensor_addr OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        696,
        100,
        v55);
      v18 = *(const void **)(v44 + 25);
    }
    memcpy(&v51[BYTE2(dest[2])], v18, HIBYTE(dest[9]));
    v19 = LOBYTE(dest[3]);
    v20 = BYTE1(dest[3]);
    v51[HIBYTE(dest[2])] = *(_BYTE *)(v44 + 29);
    v21 = BYTE2(dest[3]);
    v22 = HIBYTE(dest[3]);
    v51[v19] = *(_BYTE *)(v44 + 30);
    v51[v20] = *(_BYTE *)(v44 + 31);
    v23 = LOBYTE(dest[4]);
    v51[v21] = *(_BYTE *)(v44 + 32);
    v51[v22] = *(_BYTE *)(v44 + 33);
    v51[v23] = *(_BYTE *)(v44 + 34);
    v24 = *(const void **)(v44 + 35);
    if ( !v24 )
    {
      strcpy(v54, "Decode Chip Technology OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        718,
        100,
        v55);
      v24 = *(const void **)(v44 + 35);
    }
    memcpy(&v51[BYTE1(dest[4])], v24, BYTE2(dest[11]));
    src = HIBYTE(*(_WORD *)(v44 + 39)) | (*(_WORD *)(v44 + 39) << 8);
    memcpy(&v51[BYTE2(dest[4])], &src, HIBYTE(dest[11]));
    v48 = HIBYTE(*(_WORD *)(v44 + 41)) | (*(_WORD *)(v44 + 41) << 8);
    memcpy(&v51[HIBYTE(dest[4])], &v48, LOBYTE(dest[12]));
    v49 = (unsigned int)(float)(*(float *)(v44 + 43) * 100.0);
    memcpy(&v51[LOBYTE(dest[5])], &v49, BYTE1(dest[12]));
    v25 = BYTE2(dest[5]);
    v26 = HIBYTE(dest[5]);
    v51[BYTE1(dest[5])] = *(_BYTE *)(v44 + 47);
    v27 = LOBYTE(dest[6]);
    v51[v25] = *(_BYTE *)(v44 + 48);
    v51[v26] = *(_BYTE *)(v44 + 49);
    v51[v27] = *(_BYTE *)(v44 + 50);
    v28 = *(const void **)(v44 + 51);
    if ( !v28 )
    {
      strcpy(v54, "Decode miner_type OOM");
      V_LOCK();
      logfmt_raw((char *)v55, 0x1000u, 0, v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        750,
        100,
        v55);
      v28 = *(const void **)(v44 + 51);
    }
    memcpy(&v51[BYTE1(dest[6])], v28, BYTE2(dest[13]));
    v29 = LOBYTE(dest[7]);
    v51[BYTE2(dest[6])] = *(_BYTE *)(v44 + 55);
    v51[v29] = BM_CRC5(v51, 8 * (*(unsigned __int8 *)(v44 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v30 = v51[1] - 2;
  v31 = v51[0] & 0xF;
  v32 = v51[0] >> 4;
  if ( (unsigned __int8)(v51[1] - 2) > 0xFDu )
  {
    v8 = -1;
    snprintf(
      v54,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      v51[1],
      v51[1] - 2,
      v51[1]);
    V_LOCK();
    logfmt_raw((char *)v55, 0x1000u, 0, v54);
    V_UNLOCK();
    v40 = g_zc;
    v41 = 307;
    goto LABEL_49;
  }
  v33 = v32 == 1;
  if ( v32 == 1 )
    v33 = v31 == 1;
  v34 = !v33;
  if ( v33 )
  {
    memcpy(dest, &v51[2], v51[1] - 2);
    data_enc(dest, v30, 1, 1);
    v35 = 3;
    v52[0] = *(_WORD *)v51;
    memcpy(&v52[1], dest, v30);
    while ( 1 )
    {
      eeprom_write(a1, 0, (int)v52, *(unsigned __int8 *)(v44 + 1));
      memset(s, 0, sizeof(s));
      v8 = eeprom_read(a1, 0, (int)s, 256);
      if ( v8 )
      {
        snprintf(v54, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw((char *)v55, 0x1000u, 0, v54);
        V_UNLOCK();
        v36 = g_zc;
        v37 = 888;
        LOWORD(v38) = 30976;
      }
      else
      {
        if ( sub_A3EC4(s, v51) )
        {
          snprintf(v54, 0x800u, "Data decode fail for chain %d.", a1);
          V_LOCK();
          logfmt_raw((char *)v55, 0x1000u, 0, v54);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
            169,
            "eeprom_rewrite_one_chain",
            24,
            902,
            100,
            v55);
          usleep(0x7A120u);
          goto LABEL_43;
        }
        if ( sub_A4038(v51, v44) && sub_A4D6C(v51, (unsigned __int8 *)(v44 + 1), (unsigned __int8 *)(v44 + 60)) )
        {
          *(_BYTE *)(v43 + 64) = 1;
          return v8;
        }
        v8 = -1;
        *(_BYTE *)(v43 + 64) = v34;
        snprintf(v54, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw((char *)v55, 0x1000u, 0, v54);
        V_UNLOCK();
        v36 = g_zc;
        v37 = 917;
        LOWORD(v38) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/"
                                        "tmp/release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
      }
      HIWORD(v38) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v36, v38, 169, "eeprom_rewrite_one_chain", 24, v37, 100, v55);
LABEL_43:
      if ( !--v35 )
        return v8;
    }
  }
  v8 = -1;
  snprintf(
    v54,
    0x800u,
    "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
    v31,
    v51[0] >> 4);
  V_LOCK();
  logfmt_raw((char *)v55, 0x1000u, 0, v54);
  V_UNLOCK();
  v40 = g_zc;
  v41 = 313;
LABEL_49:
  zlog(
    v40,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "encode_eeprom_fixture_info",
    26,
    v41,
    100,
    v55);
  return v8;
}
