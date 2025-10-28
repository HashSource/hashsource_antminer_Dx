int __fastcall sub_90970(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  unsigned __int8 v7; // r5
  __int64 v8; // r4
  char v9; // r7
  char v10; // r7
  char v11; // r2
  char v12; // r7
  char v13; // r1
  pthread_mutex_t *v14; // r6
  char v16; // r0
  int v17; // r2
  int v18; // r2
  int v19; // r0
  int v20; // r2
  int v21; // r5
  int v22; // r8
  int v23; // lr
  int v24; // r12
  int v25; // r6
  int v26; // r11
  int v27; // r4
  int v28; // r0
  unsigned int v29; // r1
  unsigned __int8 *v30; // r10
  int v31; // r9
  int v32; // r7
  int v33; // r3
  int v34; // r2
  int v35; // r2
  int v36; // r1
  int v37; // r1
  int v38; // r4
  unsigned __int8 v39; // r2
  int v40; // r5
  int v41; // r3
  char v42; // r0
  int v43; // r3
  int v45; // [sp+14h] [bp-1050h]
  int v47; // [sp+24h] [bp-1040h]
  int v48; // [sp+2Ch] [bp-1038h]
  pthread_mutex_t *v49; // [sp+30h] [bp-1034h]
  unsigned int v51; // [sp+3Ch] [bp-1028h]
  __int16 v52; // [sp+3Eh] [bp-1026h]
  int v53[2]; // [sp+40h] [bp-1024h] BYREF
  char v54[2]; // [sp+48h] [bp-101Ch] BYREF
  _BYTE v55[4]; // [sp+4Ah] [bp-101Ah] BYREF
  unsigned __int8 v56; // [sp+4Eh] [bp-1016h]
  unsigned __int8 v57; // [sp+4Fh] [bp-1015h]
  char v58; // [sp+50h] [bp-1014h]
  _BYTE v59[2]; // [sp+54h] [bp-1010h] BYREF
  _DWORD v60[2]; // [sp+56h] [bp-100Eh] BYREF
  char v61; // [sp+5Eh] [bp-1006h]
  char var1004[4128]; // [sp+60h] [bp-1004h] BYREF

  v7 = *(_BYTE *)(a2 + 12);
  LODWORD(v8) = *(unsigned __int8 *)(a2 + 14);
  v9 = v52 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v60[0] = 0;
  LOBYTE(v52) = v9;
  v10 = v9 & 0xF | (16 * v7);
  LOWORD(v51) = 0;
  v11 = (unsigned __int16)(v52 & 0xF00F | (16 * v7)) >> 8;
  HIDWORD(v8) = *(unsigned __int8 *)(a2 + 8);
  BYTE2(v51) = v10;
  HIBYTE(v51) = v11 & 0xF | ((v8 & 1) << 7);
  v12 = *(_BYTE *)(a2 + 15);
  v45 = 0;
  v13 = *(_BYTE *)(a2 + 9);
  v60[1] = bswap32(v51);
  v59[1] = -86;
  LOBYTE(v60[0]) = (16 * (BYTE4(v8) & 1)) & 0x1E | 0x41;
  BYTE2(v60[0]) = v13;
  v61 = 32 * (v12 & 3);
  v14 = (pthread_mutex_t *)(a1 + 660);
  BYTE1(v60[0]) = 9;
  v59[0] = 85;
  HIBYTE(v60[0]) = 60;
  v49 = (pthread_mutex_t *)(a1 + 660);
  v16 = CRC5_long((unsigned __int8 *)v60, 64);
  if ( v8 )
    v17 = a3;
  else
    v17 = 1;
  v48 = v17;
  v61 = v61 & 0xE0 | v16 & 0x1F;
  pthread_mutex_lock(v14);
  queue_clear(*(_DWORD *)(a1 + 636));
  send_command_packet(a1, v59, 0xBu);
  sub_F7A2C(a6, 0x3E8u);
  v47 = 0;
  v53[1] = (_DWORD)&loc_F4240 * v18;
  v19 = sub_F7A2C(a6, 0x3E8u);
  v20 = 0;
  v53[0] = v19;
  while ( v48 > v20 )
  {
LABEL_6:
    if ( sub_D3038(*(_DWORD *)(a1 + 636), v54, v53) == 110 )
    {
      v45 = 3;
      break;
    }
    if ( (unsigned __int8)v54[0] != 170 || v54[1] != 85 || (v58 & 0xE0) != 0xC0 )
    {
      v45 = 1;
      break;
    }
    if ( (v57 & 0x10) != 0 )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(var1004, 0x1000u, 0, "core %d get parity", v56);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_reg_io_ltc.c",
        75,
        "sync_get_core_reg_ltc",
        21,
        370,
        100,
        var1004);
    }
    v21 = 1;
    v22 = 1;
    v23 = 1;
    v24 = 1;
    v25 = 1;
    v26 = v58 & 0x1F;
    v27 = 51;
    v28 = 0;
    v29 = 128;
    v30 = v55;
    v31 = v55[0];
    while ( 1 )
    {
      ++v28;
      v32 = (v31 & v29) != 0;
      v33 = (unsigned __int8)(v32 ^ v25);
      v29 >>= 1;
      v34 = (unsigned __int8)(v33 ^ v24);
      if ( v28 == 8 )
        break;
      if ( !--v27 )
        goto LABEL_18;
LABEL_14:
      v25 = v21;
      v24 = v23;
      v21 = v22;
      v23 = v33;
      v22 = v34;
    }
    --v27;
    ++v30;
    v28 = 0;
    v29 = 128;
    if ( v27 )
    {
      v31 = *v30;
      goto LABEL_14;
    }
LABEL_18:
    if ( v21 )
      v35 = 24;
    else
      v35 = 8;
    if ( v21 )
      v36 = 16;
    else
      v36 = 0;
    if ( !v22 )
      v35 = v36;
    if ( v33 != v24 )
      v35 |= 4u;
    if ( v23 )
      v35 |= 2u;
    if ( v32 == v25 )
    {
      if ( v26 == v35 )
        goto LABEL_34;
LABEL_32:
      v45 = 2;
      goto LABEL_6;
    }
    if ( v26 != (v35 | 1) )
      goto LABEL_32;
LABEL_34:
    v37 = v55[2];
    v38 = v55[1];
    ++v47;
    v39 = v57;
    v40 = a4;
    v41 = (v55[0] << 16) | (((v57 >> 5) & 1) << 24);
    v42 = v55[3];
    __pld((void *)(a4 + 30));
    v43 = v41 | v37;
    LOBYTE(v37) = v56;
    *(_BYTE *)(v40 + 4) = v42;
    *(_DWORD *)v40 = v43 | (v38 << 8);
    *(_BYTE *)(v40 + 9) = v39 >> 6;
    *(_WORD *)(v40 + 6) = v39 & 0xF;
    *(_BYTE *)(v40 + 8) = v37;
    a4 = v40 + 12;
    v20 = v47;
  }
  *a5 = v47;
  pthread_mutex_unlock(v49);
  return v45;
}
