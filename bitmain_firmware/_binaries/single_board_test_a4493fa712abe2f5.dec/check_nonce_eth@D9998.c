int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r8
  int v4; // r0
  _DWORD *v5; // r7
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // t1
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // r3
  int *v21; // r0
  int v22; // r1
  int v23; // t1
  int v24; // t1
  int v25; // r3
  int v26; // r12
  unsigned int v27; // r5
  int v28; // r1
  unsigned int v29; // r9
  int v30; // r2
  unsigned int v31; // lr
  unsigned int v32; // r0
  int v33; // r6
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r12
  int v37; // r7
  int v38; // r6
  int v39; // r4
  int v40; // r2
  int v41; // r4
  int v42; // r0
  int v43; // r10
  int v44; // r1
  int v45; // r2
  int v46; // r9
  int v47; // r8
  int v48; // lr
  unsigned int v49; // r5
  unsigned int v50; // r7
  int v51; // r1
  unsigned __int8 *v52; // r2
  char *v53; // r1
  char v54; // r0
  char v55; // t1
  int v56; // t1
  char v57; // r4
  unsigned int v58; // r12
  unsigned int v59; // r9
  char v60; // r10
  unsigned int v61; // r4
  int v62; // r12
  int v63; // r6
  unsigned int v64; // r9
  int v65; // r0
  int v66; // r10
  int v67; // r5
  int v68; // r8
  int v69; // r2
  int v70; // r1
  int v71; // lr
  int v72; // r4
  int v73; // r12
  int v74; // r5
  int v75; // r8
  int v76; // lr
  int v77; // r3
  int v78; // r7
  int v79; // r0
  int v80; // r2
  int v81; // r10
  int v82; // r12
  int v83; // r2
  int v84; // r0
  int v85; // r6
  int v86; // r7
  int v87; // r10
  int v88; // r0
  int v89; // r0
  int v90; // r4
  int v91; // r2
  int v92; // r1
  int v93; // r3
  int v94; // r4
  int v95; // r6
  int v96; // r7
  __int64 v97; // r0
  int v98; // lr
  int v99; // r8
  int v100; // r3
  int v101; // r4
  int v102; // r12
  int v103; // r2
  int v104; // r6
  int v105; // r5
  int v106; // r7
  int v107; // r5
  int v108; // r3
  int v109; // r2
  bool v110; // zf
  int *v111; // r7
  unsigned int v112; // r4
  char v113; // r3
  unsigned int v114; // t1
  unsigned int v115; // r8
  _DWORD *v117; // [sp+10h] [bp-E8h]
  int v118; // [sp+14h] [bp-E4h]
  int v119; // [sp+14h] [bp-E4h]
  int v120; // [sp+18h] [bp-E0h]
  int v121; // [sp+18h] [bp-E0h]
  unsigned int v122; // [sp+1Ch] [bp-DCh]
  int v124; // [sp+2Ch] [bp-CCh]
  int v125; // [sp+30h] [bp-C8h]
  int v126; // [sp+34h] [bp-C4h]
  _QWORD v127[4]; // [sp+38h] [bp-C0h] BYREF
  int v128; // [sp+58h] [bp-A0h] BYREF
  int v129; // [sp+5Ch] [bp-9Ch]
  int v130; // [sp+60h] [bp-98h]
  int v131; // [sp+64h] [bp-94h]
  int v132; // [sp+68h] [bp-90h]
  int v133; // [sp+6Ch] [bp-8Ch]
  int v134; // [sp+70h] [bp-88h]
  int v135; // [sp+74h] [bp-84h]
  int v136; // [sp+78h] [bp-80h]
  int v137; // [sp+7Ch] [bp-7Ch]
  int v138; // [sp+80h] [bp-78h]
  int v139; // [sp+84h] [bp-74h]
  int v140; // [sp+88h] [bp-70h]
  int v141; // [sp+8Ch] [bp-6Ch]
  int v142; // [sp+90h] [bp-68h]
  int v143; // [sp+94h] [bp-64h]
  int v144[23]; // [sp+98h] [bp-60h] BYREF
  int v145; // [sp+F4h] [bp-4h] BYREF
  _QWORD v146[512]; // [sp+F8h] [bp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 600);
  v3 = (_DWORD *)a2;
  v5 = (_DWORD *)(a2 + 34);
  v4 = *(_DWORD *)(a2 + 34);
  v124 = v2;
  v7 = *(_DWORD *)(a2 + 38);
  v8 = v5[2];
  v9 = v5[3];
  v136 = v4;
  v137 = v7;
  v138 = v8;
  v139 = v9;
  v10 = v5[5];
  v11 = v5[6];
  v12 = v5[7];
  v140 = v5[4];
  v141 = v10;
  v142 = v11;
  v143 = v12;
  v13 = *(_DWORD *)((char *)v3 + 98);
  v3 = (_DWORD *)((char *)v3 + 98);
  v14 = v3[1];
  v15 = v3[2];
  v16 = v3[3];
  v128 = v13;
  v129 = v14;
  v130 = v15;
  v131 = v16;
  v17 = v3[5];
  v18 = v3[6];
  v19 = v3[7];
  v132 = v3[4];
  v133 = v17;
  v134 = v18;
  v135 = v19;
  v125 = *(_DWORD *)(a2 + 26);
  v126 = *(_DWORD *)(a2 + 30);
  v144[0] = v4;
  v144[1] = v137;
  v144[2] = v138;
  v144[3] = v139;
  v144[4] = v140;
  v144[5] = v141;
  v144[6] = v142;
  v144[7] = v143;
  v144[8] = v125;
  v144[9] = v126;
  eth_sha3_512(v144, 0x40u, v144, 0x28u);
  v144[16] = v13;
  v144[17] = v129;
  v144[18] = v130;
  v144[19] = v131;
  v144[20] = v132;
  v144[21] = v133;
  v144[22] = v134;
  v145 = v135;
  memset(v146, 0, 0xC8u);
  v20 = v144;
  v21 = &v145;
  LOBYTE(v146[12]) = 1;
  HIBYTE(v146[16]) = 0x80;
  do
  {
    v23 = *v20++;
    v22 = v23;
    v24 = v21[1];
    *++v21 = v24 ^ v22;
  }
  while ( v20 != (int *)v146 );
  v117 = &unk_FC578;
  v118 = HIDWORD(v146[0]);
  v25 = v146[0];
  do
  {
    v122 = LODWORD(v146[5]) ^ LODWORD(v146[10]) ^ LODWORD(v146[15]) ^ LODWORD(v146[20]) ^ v25;
    v26 = LODWORD(v146[1]) ^ LODWORD(v146[6]) ^ LODWORD(v146[11]) ^ LODWORD(v146[16]) ^ LODWORD(v146[21]);
    v27 = HIDWORD(v146[1]) ^ HIDWORD(v146[6]) ^ HIDWORD(v146[11]) ^ HIDWORD(v146[16]) ^ HIDWORD(v146[21]);
    v28 = LODWORD(v146[2]) ^ LODWORD(v146[7]) ^ LODWORD(v146[12]) ^ LODWORD(v146[17]) ^ LODWORD(v146[22]);
    v29 = LODWORD(v146[4]) ^ LODWORD(v146[9]) ^ LODWORD(v146[14]) ^ LODWORD(v146[19]) ^ LODWORD(v146[24]);
    v30 = ((2 * v26) | (v27 >> 31)) ^ v29;
    LODWORD(v146[0]) = v25 ^ v30;
    LODWORD(v146[5]) ^= v30;
    LODWORD(v146[15]) ^= v30;
    LODWORD(v146[10]) ^= v30;
    LODWORD(v146[20]) ^= v30;
    v31 = HIDWORD(v146[2]) ^ HIDWORD(v146[7]) ^ HIDWORD(v146[12]) ^ HIDWORD(v146[17]) ^ HIDWORD(v146[22]);
    v32 = HIDWORD(v146[3]) ^ HIDWORD(v146[8]) ^ HIDWORD(v146[13]) ^ HIDWORD(v146[18]) ^ HIDWORD(v146[23]);
    v33 = LODWORD(v146[3]) ^ LODWORD(v146[8]) ^ LODWORD(v146[13]) ^ LODWORD(v146[18]) ^ LODWORD(v146[23]);
    v34 = ((2 * v122)
         | ((HIDWORD(v146[5]) ^ HIDWORD(v146[10]) ^ HIDWORD(v146[15]) ^ HIDWORD(v146[20]) ^ (unsigned int)v118) >> 31))
        ^ v33;
    v35 = HIDWORD(v146[9]) ^ HIDWORD(v146[4]) ^ HIDWORD(v146[14]) ^ HIDWORD(v146[19]) ^ HIDWORD(v146[24]);
    v36 = ((2 * v33) | (v32 >> 31)) ^ v26;
    LODWORD(v146[4]) ^= v34;
    v37 = ((__int64)(v146[1] ^ v146[6] ^ v146[11] ^ v146[16] ^ v146[21]) >> 31) ^ v35;
    LODWORD(v146[9]) ^= v34;
    v120 = ((__int64)(v146[3] ^ v146[8] ^ v146[13] ^ v146[18] ^ v146[23]) >> 31) ^ v27;
    LODWORD(v146[14]) ^= v34;
    v38 = ((2 * v28) | (v31 >> 31)) ^ v122;
    LODWORD(v146[19]) ^= v34;
    v39 = LODWORD(v146[24]) ^ v34;
    v40 = HIDWORD(v146[5]) ^ HIDWORD(v146[10]) ^ HIDWORD(v146[15]) ^ HIDWORD(v146[20]) ^ v118;
    LODWORD(v146[24]) = v39;
    v41 = ((__int64)(v146[2] ^ v146[7] ^ v146[12] ^ v146[17] ^ v146[22]) >> 31) ^ v40;
    v42 = ((2 * v40) | (v122 >> 31)) ^ v32;
    v43 = v37 ^ v118;
    v44 = ((2 * v29) | (v35 >> 31)) ^ v28;
    v45 = ((2 * v35) | (v29 >> 31)) ^ v31;
    LODWORD(v146[6]) ^= v38;
    v46 = v37 ^ HIDWORD(v146[5]);
    v47 = v37 ^ HIDWORD(v146[10]);
    LODWORD(v146[11]) ^= v38;
    v48 = v37 ^ HIDWORD(v146[15]);
    LODWORD(v146[16]) ^= v38;
    LODWORD(v146[2]) ^= v36;
    LODWORD(v146[7]) ^= v36;
    LODWORD(v146[12]) ^= v36;
    LODWORD(v146[17]) ^= v36;
    HIDWORD(v146[2]) ^= v120;
    HIDWORD(v146[7]) ^= v120;
    HIDWORD(v146[12]) ^= v120;
    HIDWORD(v146[17]) ^= v120;
    HIDWORD(v146[22]) ^= v120;
    HIDWORD(v146[6]) ^= v41;
    v49 = HIDWORD(v146[1]) ^ v41;
    HIDWORD(v146[11]) ^= v41;
    HIDWORD(v146[16]) ^= v41;
    HIDWORD(v146[4]) ^= v42;
    HIDWORD(v146[9]) ^= v42;
    HIDWORD(v146[14]) ^= v42;
    HIDWORD(v146[19]) ^= v42;
    LODWORD(v146[3]) ^= v44;
    LODWORD(v146[8]) ^= v44;
    HIDWORD(v146[20]) ^= v37;
    v50 = LODWORD(v146[1]) ^ v38;
    HIDWORD(v146[0]) = v43;
    HIDWORD(v146[5]) = v46;
    LODWORD(v146[13]) ^= v44;
    HIDWORD(v146[10]) = v47;
    HIDWORD(v146[15]) = v48;
    LODWORD(v146[1]) ^= v38;
    HIDWORD(v146[1]) ^= v41;
    LODWORD(v146[18]) ^= v44;
    HIDWORD(v146[21]) ^= v41;
    LODWORD(v146[22]) ^= v36;
    HIDWORD(v146[24]) ^= v42;
    LODWORD(v146[23]) ^= v44;
    HIDWORD(v146[3]) ^= v45;
    LODWORD(v146[21]) ^= v38;
    HIDWORD(v146[8]) ^= v45;
    HIDWORD(v146[13]) ^= v45;
    HIDWORD(v146[18]) ^= v45;
    v51 = HIDWORD(v146[23]) ^ v45;
    v52 = (unsigned __int8 *)&unk_FC63F;
    HIDWORD(v146[23]) = v51;
    v53 = (char *)&unk_FC657;
    do
    {
      v55 = *++v53;
      v54 = v55;
      v56 = *++v52;
      v57 = -v54 & 0x3F;
      v58 = v50 >> v57;
      v59 = v49 << (32 - v57);
      v60 = v57 - 32;
      v61 = v49 >> v57;
      v62 = v58 | v59;
      v63 = (v49 << v54) | (v50 << (v54 - 32));
      v64 = v50 >> (32 - v54);
      v65 = (v50 << v54) | v62 | (v49 >> v60);
      v49 = HIDWORD(v146[v56]);
      v50 = v146[v56];
      LODWORD(v146[v56]) = v65;
      HIDWORD(v146[v56]) = v63 | v64 | v61;
    }
    while ( &unk_FC657 != (_UNKNOWN *)v52 );
    v66 = v146[1];
    v67 = v146[4];
    LODWORD(v146[4]) ^= v146[1] & ~LODWORD(v146[0]);
    v68 = v146[0] & ~v67;
    v69 = HIDWORD(v146[3]);
    v70 = HIDWORD(v146[2]);
    v71 = v67 & ~LODWORD(v146[3]);
    LODWORD(v146[1]) ^= v146[3] & ~LODWORD(v146[2]);
    v72 = HIDWORD(v146[1]);
    HIDWORD(v146[3]) ^= HIDWORD(v146[0]) & ~HIDWORD(v146[4]);
    v73 = v69 & ~HIDWORD(v146[2]);
    v74 = v146[7];
    v75 = v68 ^ LODWORD(v146[3]);
    HIDWORD(v146[2]) ^= HIDWORD(v146[4]) & ~v69;
    v76 = v71 ^ LODWORD(v146[2]);
    v77 = v146[6];
    v78 = v146[5];
    v79 = v146[2] & ~v66 ^ LODWORD(v146[0]);
    v80 = HIDWORD(v146[1]) & ~HIDWORD(v146[0]);
    HIDWORD(v146[1]) ^= v73;
    v81 = v146[9];
    HIDWORD(v146[4]) ^= v80;
    v82 = v146[7] & ~LODWORD(v146[6]) ^ LODWORD(v146[5]);
    v83 = HIDWORD(v146[5]);
    v119 = v79;
    __pld(v117 + 4);
    v84 = HIDWORD(v146[6]);
    LODWORD(v146[3]) = v75;
    LODWORD(v146[2]) = v76;
    LODWORD(v146[5]) = v82;
    LODWORD(v146[6]) = v146[8] & ~v74 ^ v77;
    LODWORD(v146[7]) = v74 ^ v81 & ~LODWORD(v146[8]);
    v121 = HIDWORD(v146[0]) ^ v70 & ~v72;
    HIDWORD(v146[5]) = HIDWORD(v146[7]) & ~HIDWORD(v146[6]) ^ v83;
    HIDWORD(v146[6]) ^= HIDWORD(v146[8]) & ~HIDWORD(v146[7]);
    v85 = v77 & ~v78 ^ v81;
    v86 = v78 & ~v81 ^ LODWORD(v146[8]);
    v87 = v84 & ~v83 ^ HIDWORD(v146[9]);
    v88 = HIDWORD(v146[7]) ^ HIDWORD(v146[9]) & ~HIDWORD(v146[8]);
    LODWORD(v146[8]) = v86;
    HIDWORD(v146[8]) ^= v83 & ~HIDWORD(v146[9]);
    v146[9] = __PAIR64__(v87, v85);
    HIDWORD(v146[7]) = v88;
    v89 = v146[13] & ~LODWORD(v146[12]);
    v90 = v146[14] & ~LODWORD(v146[13]) ^ LODWORD(v146[12]);
    LODWORD(v146[13]) ^= v146[10] & ~LODWORD(v146[14]);
    v91 = v146[12] & ~LODWORD(v146[11]);
    LODWORD(v146[12]) = v90;
    v92 = v146[11] & ~LODWORD(v146[10]) ^ LODWORD(v146[14]);
    v93 = HIDWORD(v146[14]) & ~HIDWORD(v146[13]) ^ HIDWORD(v146[12]);
    v94 = HIDWORD(v146[13]) & ~HIDWORD(v146[12]) ^ HIDWORD(v146[11]);
    v95 = HIDWORD(v146[11]) & ~HIDWORD(v146[10]) ^ HIDWORD(v146[14]);
    v96 = HIDWORD(v146[12]) & ~HIDWORD(v146[11]) ^ HIDWORD(v146[10]);
    LODWORD(v146[11]) ^= v89;
    LODWORD(v146[14]) = v92;
    LODWORD(v146[10]) ^= v91;
    HIDWORD(v146[13]) ^= HIDWORD(v146[10]) & ~HIDWORD(v146[14]);
    HIDWORD(v146[12]) = v93;
    HIDWORD(v146[11]) = v94;
    HIDWORD(v146[14]) = v95;
    v97 = v146[18];
    HIDWORD(v146[10]) = v96;
    v98 = v146[16] & ~LODWORD(v146[15]) ^ LODWORD(v146[19]);
    LODWORD(v146[18]) ^= v146[15] & ~LODWORD(v146[19]);
    v99 = v146[19] & ~(_DWORD)v97;
    v100 = HIDWORD(v97) & ~HIDWORD(v146[17]) ^ HIDWORD(v146[16]);
    LODWORD(v146[15]) ^= v146[17] & ~LODWORD(v146[16]);
    v101 = HIDWORD(v146[17]) & ~HIDWORD(v146[16]) ^ HIDWORD(v146[15]);
    LODWORD(v146[16]) ^= v97 & ~LODWORD(v146[17]);
    LODWORD(v97) = v146[22];
    v102 = HIDWORD(v146[16]) & ~HIDWORD(v146[15]) ^ HIDWORD(v146[19]);
    LODWORD(v146[19]) = v98;
    LODWORD(v146[17]) ^= v99;
    v103 = HIDWORD(v146[22]);
    HIDWORD(v146[17]) ^= HIDWORD(v146[19]) & ~HIDWORD(v97);
    HIDWORD(v146[18]) = HIDWORD(v146[15]) & ~HIDWORD(v146[19]) ^ HIDWORD(v97);
    v104 = v146[23] & ~LODWORD(v146[22]);
    v105 = v146[24] & ~LODWORD(v146[23]) ^ LODWORD(v146[22]);
    HIDWORD(v146[15]) = v101;
    HIDWORD(v146[16]) = v100;
    HIDWORD(v146[19]) = v102;
    LODWORD(v146[23]) ^= v146[20] & ~LODWORD(v146[24]);
    v106 = HIDWORD(v146[20]) & ~HIDWORD(v146[24]) ^ HIDWORD(v146[23]);
    LODWORD(v146[22]) = v105;
    v107 = HIDWORD(v146[23]) & ~HIDWORD(v146[22]) ^ HIDWORD(v146[21]);
    HIDWORD(v146[22]) ^= HIDWORD(v146[24]) & ~HIDWORD(v146[23]);
    v108 = v117[2];
    v146[24] ^= v146[21] & ~v146[20];
    HIDWORD(v146[20]) ^= v103 & ~HIDWORD(v146[21]);
    v109 = v117[3];
    LODWORD(v146[20]) ^= v97 & ~LODWORD(v146[21]);
    LODWORD(v97) = v119;
    LODWORD(v146[21]) ^= v104;
    v118 = v109 ^ v121;
    HIDWORD(v146[0]) = v109 ^ v121;
    v25 = v108 ^ v97;
    HIDWORD(v146[23]) = v106;
    HIDWORD(v146[21]) = v107;
    v110 = v117 + 2 == (_DWORD *)&unk_FC638;
    v117 += 2;
    LODWORD(v146[0]) = v25;
  }
  while ( !v110 );
  v111 = (int *)v127;
  v112 = 0;
  v127[0] = v146[0];
  v127[1] = v146[1];
  v127[2] = v146[2];
  v127[3] = v146[3];
  do
  {
    v114 = *(unsigned __int8 *)v111;
    v111 = (int *)((char *)v111 + 1);
    v113 = v114;
    if ( v114 >> 7 )
      break;
    if ( (v113 & 0x40) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 1);
      break;
    }
    if ( (v113 & 0x20) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 2);
      break;
    }
    if ( (v113 & 0x10) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 3);
      break;
    }
    if ( (v113 & 8) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 4);
      break;
    }
    if ( (v113 & 4) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 5);
      break;
    }
    if ( (v113 & 2) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 6);
      break;
    }
    if ( (v113 & 1) != 0 )
    {
      v112 = (unsigned __int8)(v112 + 7);
      break;
    }
    v112 = (unsigned __int8)(v112 + 8);
  }
  while ( &v128 != v111 );
  v115 = *(unsigned __int8 *)(v124 + *(unsigned __int8 *)(a2 + 16) + 34816);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v146, 0x1000u, 0, "check_nonce_eth, diff:%d", v112);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_nonce_eth",
    15,
    12721,
    20,
    v146);
  if ( v112 <= 0x1C )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      (char *)v146,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v112,
      *(unsigned __int8 *)(a2 + 17),
      29);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_nonce_eth",
      15,
      12751,
      20,
      v146);
    return 2;
  }
  else if ( v115 > v112 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)v146, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v112, v115);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_nonce_eth",
      15,
      12756,
      20,
      v146);
    return 1;
  }
  else
  {
    return 0;
  }
}
