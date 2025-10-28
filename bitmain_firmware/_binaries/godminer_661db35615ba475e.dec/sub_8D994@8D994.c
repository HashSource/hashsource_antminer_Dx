int __fastcall sub_8D994(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  unsigned __int8 v7; // r4
  __int64 v9; // r4
  char v10; // r0
  char v11; // r12
  char v12; // r7
  char v13; // lr
  char v14; // r0
  int v15; // r2
  int v16; // r2
  int v17; // lr
  int v18; // r8
  int v19; // r7
  int v20; // r6
  int v21; // r4
  int v22; // r12
  int v23; // r0
  unsigned int v24; // r1
  unsigned __int8 *v25; // r10
  int v26; // r9
  int v27; // r5
  int v28; // r3
  int v29; // r2
  int v30; // r2
  int v31; // r1
  int v32; // r12
  unsigned __int8 v33; // r2
  int v34; // lr
  int v35; // r3
  char v36; // r0
  int v37; // r3
  int v39; // [sp+10h] [bp-48h]
  int v40; // [sp+14h] [bp-44h]
  int v42; // [sp+20h] [bp-38h]
  int v43; // [sp+24h] [bp-34h]
  pthread_mutex_t *v44; // [sp+28h] [bp-30h]
  unsigned int v46; // [sp+34h] [bp-24h]
  __int16 v47; // [sp+36h] [bp-22h]
  int v48[2]; // [sp+38h] [bp-20h] BYREF
  char v49[2]; // [sp+40h] [bp-18h] BYREF
  _BYTE v50[4]; // [sp+42h] [bp-16h] BYREF
  unsigned __int8 v51; // [sp+46h] [bp-12h]
  unsigned __int8 v52; // [sp+47h] [bp-11h]
  char v53; // [sp+48h] [bp-10h]
  _BYTE v54[2]; // [sp+4Ch] [bp-Ch] BYREF
  _DWORD v55[2]; // [sp+4Eh] [bp-Ah] BYREF
  char v56; // [sp+56h] [bp-2h]
  char v57[4100]; // [sp+58h] [bp+0h] BYREF

  v7 = *(_BYTE *)(a2 + 12);
  HIDWORD(v9) = *(unsigned __int8 *)(a2 + 14);
  LOBYTE(v47) = v47 & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  v55[0] = 0;
  v40 = 0;
  v10 = v47 & 0xF | (16 * v7);
  LOWORD(v46) = 0;
  v11 = ((unsigned __int16)(v47 & 0xF00F | (16 * v7)) >> 8) & 0x8F;
  LODWORD(v9) = *(unsigned __int8 *)(a2 + 8);
  BYTE2(v46) = v10;
  HIBYTE(v46) = v11 & 0x7F | ((BYTE4(v9) & 1) << 7);
  v12 = *(_BYTE *)(a2 + 9);
  v13 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v54[0] = 85;
  v54[1] = -86;
  BYTE1(v55[0]) = 9;
  BYTE2(v55[0]) = v12;
  v56 = v13;
  v55[1] = bswap32(v46);
  LOBYTE(v55[0]) = (16 * (v9 & 1)) & 0x1E | 0x41;
  v44 = (pthread_mutex_t *)(a1 + 660);
  HIBYTE(v55[0]) = 60;
  v42 = 0;
  v14 = BM_CRC5((unsigned __int8 *)v55, 64);
  if ( !v9 )
    a3 = 1;
  v43 = a3;
  v56 = v56 & 0xE0 | v14 & 0x1F;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  queue_clear(*(_DWORD *)(a1 + 636));
  send_command_packet(a1, v54, 0xBu);
  sub_15DCAC(a6, 0x3E8u);
  v48[1] = 1000000 * v15;
  v48[0] = sub_15DCAC(a6, 0x3E8u);
  while ( 1 )
  {
    v16 = v42;
    if ( v43 <= v42 )
      break;
LABEL_5:
    if ( sub_1361FC(*(_DWORD *)(a1 + 636), v49, v48) == 110 )
    {
      v16 = v42;
      v40 = 3;
      break;
    }
    if ( (unsigned __int8)v49[0] != 170 || v49[1] != 85 || (v53 & 0xE0) != 0xC0 )
    {
      v16 = v42;
      v40 = 1;
      break;
    }
    if ( (v52 & 0x10) != 0 )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v57, 0x1000u, 0, "core %d get parity", v51);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_reg_io_ltc.c",
        158,
        "sync_get_core_reg_ltc",
        21,
        370,
        100,
        v57);
    }
    v17 = 1;
    v18 = 1;
    v19 = 1;
    v20 = 1;
    v21 = 1;
    v22 = 51;
    v39 = v53 & 0x1F;
    v23 = 0;
    v24 = 128;
    v25 = v50;
    v26 = v50[0];
    while ( 1 )
    {
      ++v23;
      v27 = (v26 & v24) != 0;
      v28 = (unsigned __int8)(v27 ^ v21);
      v24 >>= 1;
      v29 = (unsigned __int8)(v28 ^ v20);
      if ( v23 == 8 )
        break;
      if ( !--v22 )
        goto LABEL_17;
LABEL_13:
      v21 = v17;
      v20 = v19;
      v17 = v18;
      v19 = v28;
      v18 = v29;
    }
    --v22;
    v23 = 0;
    v24 = 128;
    ++v25;
    if ( v22 )
    {
      v26 = *v25;
      goto LABEL_13;
    }
LABEL_17:
    if ( v17 )
      v30 = 24;
    else
      v30 = 8;
    if ( v17 )
      v17 = 16;
    if ( !v18 )
      v30 = v17;
    if ( v28 != v20 )
      v30 = (unsigned __int8)v30 | 4;
    if ( v19 )
      v30 = (unsigned __int8)v30 | 2;
    if ( v27 == v21 )
    {
      if ( v39 == v30 )
        goto LABEL_32;
LABEL_30:
      v40 = 2;
      goto LABEL_5;
    }
    if ( v39 != ((unsigned __int8)v30 | 1) )
      goto LABEL_30;
LABEL_32:
    v31 = v50[2];
    v32 = v50[1];
    ++v42;
    v33 = v52;
    v34 = a4;
    v35 = (v50[0] << 16) | (((v52 >> 5) & 1) << 24);
    v36 = v50[3];
    __pld((void *)(a4 + 30));
    v37 = v35 | v31;
    LOBYTE(v31) = v51;
    *(_BYTE *)(v34 + 4) = v36;
    *(_DWORD *)v34 = v37 | (v32 << 8);
    *(_WORD *)(v34 + 6) = v33 & 0xF;
    *(_BYTE *)(v34 + 9) = v33 >> 6;
    *(_BYTE *)(v34 + 8) = v31;
    a4 = v34 + 12;
  }
  *a5 = v16;
  pthread_mutex_unlock(v44);
  return v40;
}
