int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r5
  int v4; // r0
  _DWORD *v5; // r4
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
  _QWORD *v20; // r3
  int *v21; // r0
  int v22; // r1
  int v23; // t1
  int v24; // t1
  int v25; // r8
  int v26; // r5
  unsigned int v27; // lr
  unsigned int v28; // r12
  int v29; // r9
  int v30; // r2
  unsigned int v31; // r6
  unsigned int v32; // r1
  int v33; // r4
  int v34; // r8
  unsigned int v35; // r3
  int v36; // r7
  int v37; // r5
  int v38; // lr
  int v39; // r4
  int v40; // r2
  int v41; // r1
  int v42; // r12
  int v43; // r6
  int v44; // r5
  unsigned int v45; // lr
  unsigned __int8 *v46; // r3
  unsigned __int8 *v47; // r1
  int v48; // r9
  int v49; // t1
  int v50; // t1
  int v51; // r12
  unsigned int v52; // r8
  int v53; // r7
  int v54; // r2
  int v55; // r8
  int v56; // r9
  int v57; // r3
  int v58; // r2
  int v59; // r5
  int v60; // r6
  int v61; // r4
  int v62; // r0
  int v63; // r9
  int v64; // r5
  int v65; // r6
  int v66; // r10
  int v67; // r3
  int v68; // lr
  int v69; // r12
  int v70; // r3
  int v71; // r9
  int v72; // r1
  int v73; // r12
  int v74; // r12
  int v75; // r2
  int v76; // r1
  int v77; // r3
  int v78; // r0
  int v79; // r8
  int v80; // lr
  int v81; // lr
  int v82; // r6
  int v83; // r2
  int v84; // r12
  int v85; // r8
  int v86; // r3
  int v87; // r7
  int v88; // r3
  int v89; // lr
  int v90; // r5
  int v91; // r4
  int v92; // r6
  int v93; // r0
  int v94; // r9
  bool v95; // zf
  int *v96; // r5
  unsigned int v97; // r4
  char v98; // r3
  unsigned int v99; // t1
  unsigned int v100; // r8
  _DWORD *v102; // [sp+14h] [bp-E4h]
  int v103; // [sp+18h] [bp-E0h]
  int v104; // [sp+18h] [bp-E0h]
  unsigned int v105; // [sp+1Ch] [bp-DCh]
  unsigned int v106; // [sp+20h] [bp-D8h]
  int v108; // [sp+2Ch] [bp-CCh]
  int v109; // [sp+30h] [bp-C8h]
  int v110; // [sp+34h] [bp-C4h]
  _QWORD v111[4]; // [sp+38h] [bp-C0h] BYREF
  int v112; // [sp+58h] [bp-A0h] BYREF
  int v113; // [sp+5Ch] [bp-9Ch]
  int v114; // [sp+60h] [bp-98h]
  int v115; // [sp+64h] [bp-94h]
  int v116; // [sp+68h] [bp-90h]
  int v117; // [sp+6Ch] [bp-8Ch]
  int v118; // [sp+70h] [bp-88h]
  int v119; // [sp+74h] [bp-84h]
  int v120; // [sp+78h] [bp-80h]
  int v121; // [sp+7Ch] [bp-7Ch]
  int v122; // [sp+80h] [bp-78h]
  int v123; // [sp+84h] [bp-74h]
  int v124; // [sp+88h] [bp-70h]
  int v125; // [sp+8Ch] [bp-6Ch]
  int v126; // [sp+90h] [bp-68h]
  int v127; // [sp+94h] [bp-64h]
  _DWORD v128[23]; // [sp+98h] [bp-60h] BYREF
  int v129; // [sp+F4h] [bp-4h] BYREF
  _QWORD v130[512]; // [sp+F8h] [bp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 600);
  v3 = (_DWORD *)a2;
  v5 = (_DWORD *)(a2 + 34);
  v4 = *(_DWORD *)(a2 + 34);
  v108 = v2;
  v7 = *(_DWORD *)(a2 + 38);
  v8 = v5[2];
  v9 = v5[3];
  v120 = v4;
  v121 = v7;
  v122 = v8;
  v123 = v9;
  v10 = v5[5];
  v11 = v5[6];
  v12 = v5[7];
  v124 = v5[4];
  v125 = v10;
  v126 = v11;
  v127 = v12;
  v13 = *(_DWORD *)((char *)v3 + 98);
  v3 = (_DWORD *)((char *)v3 + 98);
  v14 = v3[1];
  v15 = v3[2];
  v16 = v3[3];
  v112 = v13;
  v113 = v14;
  v114 = v15;
  v115 = v16;
  v17 = v3[5];
  v18 = v3[6];
  v19 = v3[7];
  v116 = v3[4];
  v117 = v17;
  v118 = v18;
  v119 = v19;
  v109 = *(_DWORD *)(a2 + 26);
  v110 = *(_DWORD *)(a2 + 30);
  v128[0] = v4;
  v128[1] = v121;
  v128[2] = v122;
  v128[3] = v123;
  v128[4] = v124;
  v128[5] = v125;
  v128[6] = v126;
  v128[7] = v127;
  v128[8] = v109;
  v128[9] = v110;
  eth_sha3_512(v128, 0x40u, (int)v128, 0x28u);
  v128[16] = v13;
  v128[17] = v113;
  v128[18] = v114;
  v128[19] = v115;
  v128[20] = v116;
  v128[21] = v117;
  v128[22] = v118;
  v129 = v119;
  memset(v130, 0, 0xC8u);
  v20 = v128;
  v21 = &v129;
  LOBYTE(v130[12]) = 1;
  HIBYTE(v130[16]) = 0x80;
  do
  {
    v23 = *(_DWORD *)v20;
    v20 = (_QWORD *)((char *)v20 + 4);
    v22 = v23;
    v24 = v21[1];
    *++v21 = v24 ^ v22;
  }
  while ( v20 != v130 );
  v25 = v130[0];
  v102 = &unk_161888;
  v103 = HIDWORD(v130[0]);
  do
  {
    v105 = LODWORD(v130[5]) ^ LODWORD(v130[10]) ^ LODWORD(v130[15]) ^ LODWORD(v130[20]) ^ v25;
    v26 = LODWORD(v130[1]) ^ LODWORD(v130[6]) ^ LODWORD(v130[11]) ^ LODWORD(v130[16]) ^ LODWORD(v130[21]);
    v27 = HIDWORD(v130[1]) ^ HIDWORD(v130[6]) ^ HIDWORD(v130[11]) ^ HIDWORD(v130[16]) ^ HIDWORD(v130[21]);
    v28 = HIDWORD(v130[5]) ^ HIDWORD(v130[10]) ^ HIDWORD(v130[15]) ^ HIDWORD(v130[20]) ^ v103;
    v29 = LODWORD(v130[2]) ^ LODWORD(v130[7]) ^ LODWORD(v130[12]) ^ LODWORD(v130[17]) ^ LODWORD(v130[22]);
    v30 = ((2 * v26) | (v27 >> 31))
        ^ LODWORD(v130[4])
        ^ LODWORD(v130[9])
        ^ LODWORD(v130[14])
        ^ LODWORD(v130[19])
        ^ LODWORD(v130[24]);
    v106 = LODWORD(v130[4]) ^ LODWORD(v130[9]) ^ LODWORD(v130[14]) ^ LODWORD(v130[19]) ^ LODWORD(v130[24]);
    LODWORD(v130[15]) ^= v30;
    LODWORD(v130[0]) = v30 ^ v25;
    LODWORD(v130[5]) ^= v30;
    LODWORD(v130[10]) ^= v30;
    LODWORD(v130[20]) ^= v30;
    v31 = HIDWORD(v130[2]) ^ HIDWORD(v130[7]) ^ HIDWORD(v130[12]) ^ HIDWORD(v130[17]) ^ HIDWORD(v130[22]);
    v32 = HIDWORD(v130[3]) ^ HIDWORD(v130[8]) ^ HIDWORD(v130[13]) ^ HIDWORD(v130[18]) ^ HIDWORD(v130[23]);
    v33 = LODWORD(v130[3]) ^ LODWORD(v130[8]) ^ LODWORD(v130[13]) ^ LODWORD(v130[18]) ^ LODWORD(v130[23]);
    v34 = ((2 * v105) | (v28 >> 31)) ^ v33;
    v35 = HIDWORD(v130[4]) ^ HIDWORD(v130[9]) ^ HIDWORD(v130[14]) ^ HIDWORD(v130[19]) ^ HIDWORD(v130[24]);
    LODWORD(v130[4]) ^= v34;
    v36 = ((__int64)(v130[1] ^ v130[6] ^ v130[11] ^ v130[16] ^ v130[21]) >> 31) ^ v35;
    v37 = v26 ^ ((2 * v33) | (v32 >> 31));
    LODWORD(v130[9]) ^= v34;
    v38 = v27 ^ ((__int64)(v130[3] ^ v130[8] ^ v130[13] ^ v130[18] ^ v130[23]) >> 31);
    LODWORD(v130[14]) ^= v34;
    v39 = ((2 * v29) | (v31 >> 31)) ^ v105;
    v40 = ((__int64)(v130[2] ^ v130[7] ^ v130[12] ^ v130[17] ^ v130[22]) >> 31) ^ v28;
    LODWORD(v130[19]) ^= v34;
    LODWORD(v130[24]) ^= v34;
    v41 = v32 ^ ((2 * v28) | (v105 >> 31));
    v42 = ((2 * v106) | (v35 >> 31)) ^ v29;
    v43 = v31 ^ ((2 * v35) | (v106 >> 31));
    LODWORD(v130[2]) ^= v37;
    LODWORD(v130[7]) ^= v37;
    LODWORD(v130[12]) ^= v37;
    LODWORD(v130[17]) ^= v37;
    LODWORD(v130[22]) ^= v37;
    v44 = v39 ^ LODWORD(v130[1]);
    LODWORD(v130[6]) ^= v39;
    LODWORD(v130[11]) ^= v39;
    LODWORD(v130[16]) ^= v39;
    HIDWORD(v130[2]) ^= v38;
    HIDWORD(v130[7]) ^= v38;
    HIDWORD(v130[12]) ^= v38;
    HIDWORD(v130[17]) ^= v38;
    HIDWORD(v130[22]) ^= v38;
    v45 = v40 ^ HIDWORD(v130[1]);
    HIDWORD(v130[6]) ^= v40;
    HIDWORD(v130[11]) ^= v40;
    HIDWORD(v130[16]) ^= v40;
    HIDWORD(v130[4]) ^= v41;
    HIDWORD(v130[9]) ^= v41;
    HIDWORD(v130[14]) ^= v41;
    HIDWORD(v130[19]) ^= v41;
    HIDWORD(v130[24]) ^= v41;
    LODWORD(v130[3]) ^= v42;
    LODWORD(v130[8]) ^= v42;
    LODWORD(v130[13]) ^= v42;
    HIDWORD(v130[15]) ^= v36;
    v46 = (unsigned __int8 *)&unk_16194F;
    HIDWORD(v130[0]) = v36 ^ v103;
    LODWORD(v130[18]) ^= v42;
    HIDWORD(v130[5]) ^= v36;
    HIDWORD(v130[10]) ^= v36;
    HIDWORD(v130[20]) ^= v36;
    LODWORD(v130[1]) ^= v39;
    HIDWORD(v130[1]) ^= v40;
    HIDWORD(v130[3]) ^= v43;
    LODWORD(v130[21]) ^= v39;
    HIDWORD(v130[21]) ^= v40;
    LODWORD(v130[23]) ^= v42;
    HIDWORD(v130[8]) ^= v43;
    HIDWORD(v130[13]) ^= v43;
    HIDWORD(v130[18]) ^= v43;
    v47 = (unsigned __int8 *)&unk_161967;
    HIDWORD(v130[23]) ^= v43;
    do
    {
      v49 = *++v47;
      v48 = v49;
      v50 = *++v46;
      v51 = -v48 & 0x3F;
      v52 = HIDWORD(v130[v50]);
      v53 = v130[v50];
      v54 = (__PAIR64__(v45, v44) << v48 >> 32) | (v45 >> v51);
      LODWORD(v130[v50]) = (__PAIR64__(v45, v44) >> v51) | (v44 << v48);
      v45 = v52;
      v44 = v53;
      HIDWORD(v130[v50]) = v54;
    }
    while ( &unk_161967 != (_UNKNOWN *)v46 );
    v55 = v130[1];
    v56 = v130[4];
    LODWORD(v130[4]) ^= v130[1] & ~LODWORD(v130[0]);
    v57 = HIDWORD(v130[3]);
    v58 = HIDWORD(v130[2]);
    v59 = v56 & ~LODWORD(v130[3]);
    LODWORD(v130[1]) ^= v130[3] & ~LODWORD(v130[2]);
    v60 = v130[0] & ~v56 ^ LODWORD(v130[3]);
    HIDWORD(v130[3]) ^= HIDWORD(v130[0]) & ~HIDWORD(v130[4]);
    v61 = v57 & ~HIDWORD(v130[2]);
    v62 = HIDWORD(v130[1]);
    v63 = v130[7];
    HIDWORD(v130[2]) ^= HIDWORD(v130[4]) & ~v57;
    v64 = v59 ^ LODWORD(v130[2]);
    LODWORD(v130[3]) = v60;
    v65 = v130[8];
    v66 = v130[2] & ~v55 ^ LODWORD(v130[0]);
    HIDWORD(v130[1]) ^= v61;
    HIDWORD(v130[4]) ^= v62 & ~HIDWORD(v130[0]);
    v67 = v130[6];
    v68 = v130[5];
    __pld(v102 + 4);
    v69 = HIDWORD(v130[5]);
    LODWORD(v130[2]) = v64;
    LODWORD(v130[5]) = v63 & ~v67 ^ v68;
    v70 = v130[6] & ~v68;
    LODWORD(v130[6]) ^= v65 & ~v63;
    LODWORD(v130[7]) = v63 ^ v130[9] & ~LODWORD(v130[8]);
    HIDWORD(v130[5]) ^= HIDWORD(v130[7]) & ~HIDWORD(v130[6]);
    v71 = v69 & ~HIDWORD(v130[9]);
    v72 = HIDWORD(v130[6]) & ~v69;
    HIDWORD(v130[6]) ^= HIDWORD(v130[8]) & ~HIDWORD(v130[7]);
    v104 = v58 & ~v62 ^ HIDWORD(v130[0]);
    v73 = HIDWORD(v130[9]) & ~HIDWORD(v130[8]) ^ HIDWORD(v130[7]);
    HIDWORD(v130[9]) ^= v72;
    HIDWORD(v130[7]) = v73;
    v74 = v130[13] & ~LODWORD(v130[12]) ^ LODWORD(v130[11]);
    v75 = v130[12] & ~LODWORD(v130[11]) ^ LODWORD(v130[10]);
    v76 = v130[11] & ~LODWORD(v130[10]) ^ LODWORD(v130[14]);
    LODWORD(v130[8]) ^= v68 & ~LODWORD(v130[9]);
    LODWORD(v130[9]) ^= v70;
    LODWORD(v130[12]) ^= v130[14] & ~LODWORD(v130[13]);
    HIDWORD(v130[8]) ^= v71;
    v77 = HIDWORD(v130[14]) & ~HIDWORD(v130[13]) ^ HIDWORD(v130[12]);
    v78 = HIDWORD(v130[13]) & ~HIDWORD(v130[12]) ^ HIDWORD(v130[11]);
    v79 = HIDWORD(v130[11]) & ~HIDWORD(v130[10]) ^ HIDWORD(v130[14]);
    v80 = HIDWORD(v130[12]) & ~HIDWORD(v130[11]) ^ HIDWORD(v130[10]);
    v130[13] ^= v130[10] & ~v130[14];
    v130[11] = __PAIR64__(v78, v74);
    v130[14] = __PAIR64__(v79, v76);
    v130[10] = __PAIR64__(v80, v75);
    HIDWORD(v130[12]) = v77;
    v81 = v130[18];
    v82 = v130[16] & ~LODWORD(v130[15]);
    v83 = HIDWORD(v130[19]);
    LODWORD(v130[18]) ^= v130[15] & ~LODWORD(v130[19]);
    LODWORD(v130[15]) ^= v130[17] & ~LODWORD(v130[16]);
    HIDWORD(v130[19]) ^= HIDWORD(v130[16]) & ~HIDWORD(v130[15]);
    v84 = v130[19] & ~v81 ^ LODWORD(v130[17]);
    v85 = v130[23];
    v86 = HIDWORD(v130[15]) & ~v83;
    LODWORD(v130[16]) ^= v81 & ~LODWORD(v130[17]);
    HIDWORD(v130[15]) ^= HIDWORD(v130[17]) & ~HIDWORD(v130[16]);
    v87 = v130[21];
    LODWORD(v130[19]) ^= v82;
    LODWORD(v130[17]) = v84;
    HIDWORD(v130[16]) ^= HIDWORD(v130[18]) & ~HIDWORD(v130[17]);
    HIDWORD(v130[17]) ^= v83 & ~HIDWORD(v130[18]);
    HIDWORD(v130[18]) ^= v86;
    v88 = v130[23] & ~LODWORD(v130[22]);
    LODWORD(v130[23]) ^= v130[20] & ~LODWORD(v130[24]);
    v89 = v130[22] & ~LODWORD(v130[21]);
    LODWORD(v130[21]) ^= v88;
    v90 = HIDWORD(v130[23]) & ~HIDWORD(v130[22]) ^ HIDWORD(v130[21]);
    v91 = HIDWORD(v130[24]) & ~HIDWORD(v130[23]) ^ HIDWORD(v130[22]);
    v92 = v102[2];
    HIDWORD(v130[23]) ^= HIDWORD(v130[20]) & ~HIDWORD(v130[24]);
    v93 = HIDWORD(v130[21]) & ~HIDWORD(v130[20]) ^ HIDWORD(v130[24]);
    HIDWORD(v130[20]) ^= HIDWORD(v130[22]) & ~HIDWORD(v130[21]);
    v94 = v102[3];
    v95 = v102 + 2 == (_DWORD *)&unk_161948;
    LODWORD(v130[22]) ^= v130[24] & ~v85;
    v25 = v66 ^ v92;
    v102 += 2;
    LODWORD(v130[24]) ^= v87 & ~LODWORD(v130[20]);
    LODWORD(v130[20]) ^= v89;
    HIDWORD(v130[22]) = v91;
    HIDWORD(v130[21]) = v90;
    HIDWORD(v130[24]) = v93;
    LODWORD(v130[0]) = v66 ^ v92;
    v103 = v104 ^ v94;
    HIDWORD(v130[0]) = v103;
  }
  while ( !v95 );
  v96 = (int *)v111;
  v97 = 0;
  v111[0] = v130[0];
  v111[1] = v130[1];
  v111[2] = v130[2];
  v111[3] = v130[3];
  do
  {
    v99 = *(unsigned __int8 *)v96;
    v96 = (int *)((char *)v96 + 1);
    v98 = v99;
    if ( v99 >> 7 )
      break;
    if ( (v98 & 0x40) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 1);
      break;
    }
    if ( (v98 & 0x20) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 2);
      break;
    }
    if ( (v98 & 0x10) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 3);
      break;
    }
    if ( (v98 & 8) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 4);
      break;
    }
    if ( (v98 & 4) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 5);
      break;
    }
    if ( (v98 & 2) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 6);
      break;
    }
    if ( (v98 & 1) != 0 )
    {
      v97 = (unsigned __int8)(v97 + 7);
      break;
    }
    v97 = (unsigned __int8)(v97 + 8);
  }
  while ( &v112 != v96 );
  v100 = *(unsigned __int8 *)(v108 + *(unsigned __int8 *)(a2 + 16) + 34816);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v130, 0x1000u, 0, "check_nonce_eth, diff:%d", v97);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_nonce_eth",
    15,
    12721,
    20,
    v130);
  if ( v97 <= 0x1C )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      (char *)v130,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v97,
      *(unsigned __int8 *)(a2 + 17),
      29);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_nonce_eth",
      15,
      12751,
      20,
      v130);
    return 2;
  }
  else if ( v100 > v97 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v130, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v97, v100);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_nonce_eth",
      15,
      12756,
      20,
      v130);
    return 1;
  }
  else
  {
    return 0;
  }
}
