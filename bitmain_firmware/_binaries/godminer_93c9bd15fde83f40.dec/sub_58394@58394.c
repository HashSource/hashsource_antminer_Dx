int __fastcall sub_58394(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  unsigned __int8 v7; // r4
  __int64 v8; // r4
  char v10; // r0
  char v11; // r12
  char v12; // r7
  char v13; // lr
  char v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // lr
  int v19; // r8
  int v20; // r7
  int v21; // r6
  int v22; // r4
  int v23; // r12
  int v24; // r0
  unsigned int v25; // r1
  unsigned __int8 *v26; // r10
  int v27; // r9
  int v28; // r5
  int v29; // r3
  int v30; // r2
  int v31; // r2
  int v32; // r1
  int v33; // r12
  unsigned __int8 v34; // r2
  int v35; // lr
  int v36; // r3
  char v37; // r0
  int v38; // r3
  int v40; // [sp+10h] [bp-50h]
  int v41; // [sp+14h] [bp-4Ch]
  int v43; // [sp+24h] [bp-3Ch]
  int v44; // [sp+2Ch] [bp-34h]
  pthread_mutex_t *v45; // [sp+30h] [bp-30h]
  unsigned int v47; // [sp+3Ch] [bp-24h]
  __int16 v48; // [sp+3Eh] [bp-22h]
  int v49[2]; // [sp+40h] [bp-20h] BYREF
  char v50[2]; // [sp+48h] [bp-18h] BYREF
  _BYTE v51[4]; // [sp+4Ah] [bp-16h] BYREF
  unsigned __int8 v52; // [sp+4Eh] [bp-12h]
  unsigned __int8 v53; // [sp+4Fh] [bp-11h]
  char v54; // [sp+50h] [bp-10h]
  _BYTE v55[2]; // [sp+54h] [bp-Ch] BYREF
  _DWORD v56[2]; // [sp+56h] [bp-Ah] BYREF
  char v57; // [sp+5Eh] [bp-2h]
  char _60[4128]; // [sp+60h] [bp+0h] BYREF

  v7 = *(_BYTE *)(a2 + 12);
  HIDWORD(v8) = *(unsigned __int8 *)(a2 + 14);
  LOBYTE(v48) = v48 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v56[0] = 0;
  v41 = 0;
  v10 = v48 & 0xF | (16 * v7);
  LOWORD(v47) = 0;
  v11 = ((unsigned __int16)(v48 & 0xF00F | (16 * v7)) >> 8) & 0x8F;
  LODWORD(v8) = *(unsigned __int8 *)(a2 + 8);
  BYTE2(v47) = v10;
  HIBYTE(v47) = v11 & 0x7F | ((BYTE4(v8) & 1) << 7);
  v12 = *(_BYTE *)(a2 + 9);
  v13 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v55[0] = 85;
  v55[1] = -86;
  BYTE1(v56[0]) = 9;
  BYTE2(v56[0]) = v12;
  v57 = v13;
  v56[1] = bswap32(v47);
  LOBYTE(v56[0]) = (16 * (v8 & 1)) & 0x1E | 0x41;
  HIBYTE(v56[0]) = 60;
  v45 = (pthread_mutex_t *)(a1 + 688);
  v14 = BM_CRC5((unsigned __int8 *)v56, 64);
  if ( !v8 )
    a3 = 1;
  v44 = a3;
  v57 = v57 & 0xE0 | v14 & 0x1F;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, v55, 0xBu);
  sub_16EB04(a6, 0x3E8u);
  v43 = 0;
  v49[1] = (_DWORD)&loc_F4240 * v15;
  v16 = sub_16EB04(a6, 0x3E8u);
  v17 = 0;
  v49[0] = v16;
  while ( v44 > v17 )
  {
LABEL_5:
    if ( sub_C40DC(*(_DWORD *)(a1 + 664), v50, v49) == 110 )
    {
      v17 = v43;
      v41 = 3;
      break;
    }
    if ( (unsigned __int8)v50[0] != 170 || v50[1] != 85 || (v54 & 0xE0) != 0xC0 )
    {
      v17 = v43;
      v41 = 1;
      break;
    }
    if ( (v53 & 0x10) != 0 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(_60, 0x1000u, 0, "core %d get parity", v52);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_reg_io_ltc.c",
        158,
        "sync_get_core_reg_ltc",
        21,
        370,
        100,
        _60);
    }
    v18 = 1;
    v19 = 1;
    v20 = 1;
    v21 = 1;
    v22 = 1;
    v23 = 51;
    v40 = v54 & 0x1F;
    v24 = 0;
    v25 = 128;
    v26 = v51;
    v27 = v51[0];
    while ( 1 )
    {
      ++v24;
      v28 = (v27 & v25) != 0;
      v29 = (unsigned __int8)(v28 ^ v22);
      v25 >>= 1;
      v30 = (unsigned __int8)(v29 ^ v21);
      if ( v24 == 8 )
        break;
      if ( !--v23 )
        goto LABEL_17;
LABEL_13:
      v22 = v18;
      v21 = v20;
      v18 = v19;
      v20 = v29;
      v19 = v30;
    }
    --v23;
    v24 = 0;
    v25 = 128;
    ++v26;
    if ( v23 )
    {
      v27 = *v26;
      goto LABEL_13;
    }
LABEL_17:
    if ( v18 )
      v31 = 24;
    else
      v31 = 8;
    if ( v18 )
      v18 = 16;
    if ( !v19 )
      v31 = v18;
    if ( v29 != v21 )
      v31 = (unsigned __int8)v31 | 4;
    if ( v20 )
      v31 = (unsigned __int8)v31 | 2;
    if ( v28 == v22 )
    {
      if ( v40 == v31 )
        goto LABEL_32;
LABEL_30:
      v41 = 2;
      goto LABEL_5;
    }
    if ( v40 != ((unsigned __int8)v31 | 1) )
      goto LABEL_30;
LABEL_32:
    v32 = v51[2];
    v33 = v51[1];
    ++v43;
    v34 = v53;
    v35 = a4;
    v36 = (v51[0] << 16) | (((v53 >> 5) & 1) << 24);
    v37 = v51[3];
    __pld((void *)(a4 + 30));
    v38 = v36 | v32;
    LOBYTE(v32) = v52;
    *(_BYTE *)(v35 + 4) = v37;
    *(_DWORD *)v35 = v38 | (v33 << 8);
    *(_BYTE *)(v35 + 9) = v34 >> 6;
    *(_WORD *)(v35 + 6) = v34 & 0xF;
    *(_BYTE *)(v35 + 8) = v32;
    a4 = v35 + 12;
    v17 = v43;
  }
  *a5 = v17;
  pthread_mutex_unlock(v45);
  return v41;
}
