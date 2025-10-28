int __fastcall sub_A4038(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int v6; // r7
  size_t v8; // r8
  void *v9; // r6
  size_t v10; // r8
  void *v11; // r6
  size_t v12; // r8
  void *v13; // r6
  int v14; // r3
  bool v15; // cf
  size_t v16; // r9
  void *v17; // r8
  int v18; // r3
  size_t v19; // r10
  char v20; // r2
  size_t v21; // r0
  void *v22; // r8
  int v23; // r3
  int v24; // r12
  size_t v25; // r10
  char v26; // r2
  int v27; // r0
  char v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r8
  size_t v33; // r2
  _BYTE *v34; // r1
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // r6
  int v38; // lr
  int v39; // r12
  int v40; // r2
  size_t v41; // r8
  size_t v42; // r0
  float v43; // s12
  void *v44; // r6
  int v45; // r3
  size_t v46; // r11
  size_t v47; // r10
  char *v48; // r0
  char *v49; // r8
  unsigned __int16 v50; // [sp+14h] [bp-1850h] BYREF
  unsigned __int16 v51; // [sp+16h] [bp-184Eh] BYREF
  _WORD v52[8]; // [sp+18h] [bp-184Ch] BYREF
  _BYTE v53[7]; // [sp+28h] [bp-183Ch] BYREF
  unsigned __int8 v54; // [sp+2Fh] [bp-1835h]
  unsigned __int8 v55; // [sp+31h] [bp-1833h]
  unsigned __int8 v56; // [sp+32h] [bp-1832h]
  unsigned __int8 v57; // [sp+33h] [bp-1831h]
  unsigned __int8 v58; // [sp+34h] [bp-1830h]
  unsigned __int8 v59; // [sp+35h] [bp-182Fh]
  unsigned __int8 v60; // [sp+36h] [bp-182Eh]
  unsigned __int8 v61; // [sp+37h] [bp-182Dh]
  unsigned __int8 v62; // [sp+38h] [bp-182Ch]
  unsigned __int8 v63; // [sp+39h] [bp-182Bh]
  unsigned __int8 v64; // [sp+3Ah] [bp-182Ah]
  unsigned __int8 v65; // [sp+3Bh] [bp-1829h]
  unsigned __int8 v66; // [sp+3Ch] [bp-1828h]
  unsigned __int8 v67; // [sp+3Dh] [bp-1827h]
  unsigned __int8 v68; // [sp+3Eh] [bp-1826h]
  unsigned __int8 v69; // [sp+3Fh] [bp-1825h]
  unsigned __int8 v70; // [sp+40h] [bp-1824h]
  unsigned __int8 v71; // [sp+41h] [bp-1823h]
  unsigned __int8 v72; // [sp+42h] [bp-1822h]
  unsigned __int8 v73; // [sp+44h] [bp-1820h]
  unsigned __int8 v74; // [sp+48h] [bp-181Ch]
  unsigned __int8 v75; // [sp+49h] [bp-181Bh]
  unsigned __int8 v76; // [sp+4Ah] [bp-181Ah]
  unsigned __int8 v77; // [sp+4Ch] [bp-1818h]
  unsigned __int8 v78; // [sp+4Fh] [bp-1815h]
  unsigned __int8 v79; // [sp+56h] [bp-180Eh]
  unsigned __int8 n; // [sp+57h] [bp-180Dh]
  unsigned __int8 n_1; // [sp+58h] [bp-180Ch]
  unsigned __int8 n_2; // [sp+59h] [bp-180Bh]
  unsigned __int8 v83; // [sp+5Eh] [bp-1806h]
  char v84[2048]; // [sp+60h] [bp-1804h] BYREF
  char v85[4100]; // [sp+860h] [bp-1004h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * (*a1 >> 4));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  v6 = sub_A3CE0((int)v53, v5);
  if ( !v6 )
    return 0;
  v8 = v74;
  v9 = calloc(v74 + 1, 1u);
  *(_DWORD *)(a2 + 3) = v9;
  if ( !v9 )
  {
    v6 = 0;
    strcpy(v84, "Decode SN OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      495,
      100,
      v85);
    v9 = *(void **)(a2 + 3);
    v8 = v74;
  }
  memcpy(v9, &a1[v53[3]], v8);
  v10 = v75;
  v11 = calloc(v75 + 1, 1u);
  *(_DWORD *)(a2 + 7) = v11;
  if ( !v11 )
  {
    v6 = 0;
    strcpy(v84, "Decode Chip Die OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      504,
      100,
      v85);
    v11 = *(void **)(a2 + 7);
    v10 = v75;
  }
  memcpy(v11, &a1[v53[4]], v10);
  v12 = v76;
  v13 = calloc(v76 + 1, 1u);
  *(_DWORD *)(a2 + 11) = v13;
  if ( !v13 )
  {
    v6 = 0;
    strcpy(v84, "Decode Chip Marking OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      513,
      100,
      v85);
    v13 = *(void **)(a2 + 11);
    v12 = v76;
  }
  memcpy(v13, &a1[v53[5]], v12);
  v14 = *(unsigned __int8 *)(a2 + 2) - 1;
  v15 = *(_BYTE *)(a2 + 2) != 1;
  *(_BYTE *)(a2 + 15) = a1[v53[6]];
  if ( v14 != 1 && v15 )
  {
    v16 = v77;
    v17 = calloc(v77 + 1, 1u);
    *(_DWORD *)(a2 + 16) = v17;
    if ( !v17 )
    {
      v6 = 0;
      strcpy(v84, "Decode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v85, 0x1000u, 0, v84);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_buf_to_layout",
        20,
        539,
        100,
        v85);
      v17 = *(void **)(a2 + 16);
      v16 = v77;
    }
    memcpy(v17, &a1[v54], v16);
  }
  else
  {
    v46 = v77;
    v47 = v77 + 6;
    memset(v52, 0, sizeof(v52));
    v48 = (char *)calloc(v47, 1u);
    v49 = v48;
    *(_DWORD *)(a2 + 16) = v48;
    if ( !v48 )
    {
      v6 = 0;
      strcpy(v84, "Decode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v85, 0x1000u, 0, v84);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_buf_to_layout",
        20,
        528,
        100,
        v85);
      v46 = v77;
      v49 = *(char **)(a2 + 16);
      v47 = v77 + 6;
    }
    memcpy(v52, &a1[v54], v46);
    snprintf(v49, v47, "F%dV%02dB%dC%d", LOBYTE(v52[0]), HIBYTE(v52[0]), LOBYTE(v52[1]), HIBYTE(v52[1]));
  }
  v18 = v55;
  v19 = v78;
  v20 = *(_BYTE *)(a2 + 24) & 0x80 | a1[v55] & 0x7F;
  v21 = v78 + 1;
  *(_BYTE *)(a2 + 24) = v20;
  *(_BYTE *)(a2 + 24) = v20 & 0x7F | (a1[v18] >> 7 << 7);
  v22 = calloc(v21, 1u);
  *(_DWORD *)(a2 + 25) = v22;
  if ( !v22 )
  {
    v6 = 0;
    strcpy(v84, "Decode Chip FT Program Version OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      553,
      100,
      v85);
    v22 = *(void **)(a2 + 25);
    v19 = v78;
  }
  memcpy(v22, &a1[v56], v19);
  v23 = v57;
  v24 = v58;
  v25 = v79;
  v26 = *(_BYTE *)(a2 + 29) & 0x80 | a1[v57] & 0x7F;
  v27 = v59;
  *(_BYTE *)(a2 + 29) = v26;
  v28 = v26 & 0x7F | (a1[v23] >> 7 << 7);
  v29 = v60;
  *(_BYTE *)(a2 + 29) = v28;
  *(_BYTE *)(a2 + 30) = a1[v24];
  v30 = v61;
  *(_BYTE *)(a2 + 31) = a1[v27];
  LOBYTE(v27) = a1[v29];
  v31 = v62;
  *(_BYTE *)(a2 + 32) = v27;
  *(_BYTE *)(a2 + 33) = a1[v30];
  *(_BYTE *)(a2 + 34) = a1[v31];
  v32 = calloc(v25 + 1, 1u);
  *(_DWORD *)(a2 + 35) = v32;
  if ( !v32 )
  {
    v6 = 0;
    strcpy(v84, "Decode Chip Technology OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      577,
      100,
      v85);
    v32 = *(void **)(a2 + 35);
    v25 = v79;
  }
  memcpy(v32, &a1[v63], v25);
  memcpy(&v50, &a1[v64], n);
  v33 = n_1;
  v34 = &a1[v65];
  *(_WORD *)(a2 + 39) = HIBYTE(v50) | (v50 << 8);
  memcpy(&v51, v34, v33);
  v35 = n_2;
  v36 = &a1[v66];
  *(_WORD *)(a2 + 41) = HIBYTE(v51) | (v51 << 8);
  memcpy(v52, v36, v35);
  v37 = v67;
  v38 = v68;
  v39 = v69;
  v40 = v70;
  v41 = v83;
  v42 = v83 + 1;
  v43 = (double)(unsigned __int16)__rev16(v52[0]) / 100.0;
  *(float *)(a2 + 43) = v43;
  *(_BYTE *)(a2 + 47) = a1[v37];
  *(_BYTE *)(a2 + 48) = a1[v38];
  *(_BYTE *)(a2 + 49) = a1[v39];
  *(_BYTE *)(a2 + 50) = a1[v40];
  v44 = calloc(v42, 1u);
  *(_DWORD *)(a2 + 51) = v44;
  if ( !v44 )
  {
    v6 = 0;
    strcpy(v84, "Decode miner_type OOM");
    V_LOCK();
    logfmt_raw(v85, 0x1000u, 0, v84);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      613,
      100,
      v85);
    v44 = *(void **)(a2 + 51);
    v41 = v83;
  }
  memcpy(v44, &a1[v71], v41);
  v45 = v73;
  *(_BYTE *)(a2 + 55) = a1[v72];
  *(_BYTE *)(a2 + 60) = a1[v45];
  return v6;
}
