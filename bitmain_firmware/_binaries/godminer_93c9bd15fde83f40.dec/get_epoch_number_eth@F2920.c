int __fastcall get_epoch_number_eth(const void *a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned __int64 v2; // kr08_8
  unsigned __int64 v3; // kr10_8
  unsigned __int64 v4; // kr18_8
  unsigned __int64 v5; // kr20_8
  unsigned __int64 v6; // kr28_8
  int v7; // r7
  unsigned __int64 v8; // kr30_8
  unsigned __int64 v9; // kr38_8
  unsigned __int64 v10; // kr40_8
  unsigned __int64 v11; // kr48_8
  int v12; // r12
  unsigned __int64 v13; // kr50_8
  unsigned __int64 v14; // kr58_8
  int v15; // r3
  __int64 v16; // r0
  unsigned int v17; // r11
  unsigned int v18; // r6
  int v19; // r9
  unsigned int v20; // r5
  unsigned int v21; // r2
  int v22; // lr
  int v23; // r4
  int v24; // r7
  unsigned int v25; // r5
  int v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r4
  int v29; // r9
  int v30; // r8
  int v31; // r3
  int v32; // r2
  unsigned int v33; // r3
  int v34; // r11
  unsigned int v35; // r0
  unsigned __int8 *v36; // r12
  unsigned __int8 *v37; // r1
  int v38; // r9
  int v39; // t1
  int v40; // t1
  int v41; // r4
  unsigned int v42; // r8
  unsigned int v43; // r7
  int v44; // r2
  int v45; // r7
  int v46; // r9
  int v47; // r3
  int v48; // r5
  int v49; // r6
  int v50; // r2
  int v51; // r4
  int v52; // r8
  int v53; // r1
  int v54; // r11
  int v55; // r12
  int v56; // r0
  int v57; // r7
  int v58; // r6
  int v59; // r9
  int v60; // lr
  int v61; // r8
  int v62; // r5
  int v63; // r7
  int v64; // r4
  int v65; // r1
  int v66; // r0
  int v67; // r3
  char *v68; // r2
  unsigned int v69; // r11
  unsigned int v70; // r8
  unsigned int v71; // r11
  unsigned int v72; // r2
  char *v73; // r6
  int v74; // r8
  int v76; // [sp+4h] [bp-1E8h]
  unsigned int v77; // [sp+8h] [bp-1E4h]
  int v78; // [sp+Ch] [bp-1E0h]
  __int64 v79; // [sp+10h] [bp-1DCh]
  int v80; // [sp+18h] [bp-1D4h]
  int v81; // [sp+1Ch] [bp-1D0h]
  int v82; // [sp+20h] [bp-1CCh]
  int v83; // [sp+24h] [bp-1C8h]
  int v84; // [sp+28h] [bp-1C4h]
  int v85; // [sp+28h] [bp-1C4h]
  int v86; // [sp+2Ch] [bp-1C0h]
  int v87; // [sp+30h] [bp-1BCh]
  unsigned int v88; // [sp+34h] [bp-1B8h]
  int v89; // [sp+38h] [bp-1B4h]
  int v90; // [sp+38h] [bp-1B4h]
  int v91; // [sp+3Ch] [bp-1B0h]
  int v92; // [sp+3Ch] [bp-1B0h]
  int v93; // [sp+40h] [bp-1ACh]
  __int64 v94; // [sp+44h] [bp-1A8h]
  __int64 v95; // [sp+44h] [bp-1A8h]
  __int64 v96; // [sp+4Ch] [bp-1A0h]
  int v97; // [sp+54h] [bp-198h]
  int v98; // [sp+54h] [bp-198h]
  int v99; // [sp+58h] [bp-194h]
  int v100; // [sp+58h] [bp-194h]
  int v101; // [sp+5Ch] [bp-190h]
  unsigned __int64 v102; // [sp+60h] [bp-18Ch]
  int v103; // [sp+60h] [bp-18Ch]
  int v104; // [sp+60h] [bp-18Ch]
  unsigned __int64 v105; // [sp+68h] [bp-184h]
  int v106; // [sp+70h] [bp-17Ch]
  int v107; // [sp+74h] [bp-178h]
  int v108; // [sp+78h] [bp-174h]
  unsigned int v109; // [sp+7Ch] [bp-170h]
  unsigned int v110; // [sp+80h] [bp-16Ch]
  int v111; // [sp+84h] [bp-168h]
  __int64 v112; // [sp+88h] [bp-164h]
  int v113; // [sp+94h] [bp-158h]
  int v114; // [sp+98h] [bp-154h]
  int v115; // [sp+98h] [bp-154h]
  unsigned int v116; // [sp+9Ch] [bp-150h]
  int v117; // [sp+A0h] [bp-14Ch]
  int v118; // [sp+A0h] [bp-14Ch]
  __int64 v119; // [sp+A4h] [bp-148h]
  unsigned __int64 v120; // [sp+ACh] [bp-140h]
  unsigned __int64 v121; // [sp+B4h] [bp-138h]
  unsigned __int64 v122; // [sp+C0h] [bp-12Ch]
  int v123; // [sp+C8h] [bp-124h]
  unsigned int v124; // [sp+CCh] [bp-120h]
  int v125; // [sp+CCh] [bp-120h]
  char *v126; // [sp+D0h] [bp-11Ch]
  int v127; // [sp+D4h] [bp-118h]
  int v128; // [sp+D8h] [bp-114h]
  _QWORD s[4]; // [sp+100h] [bp-ECh] BYREF
  _QWORD v131[25]; // [sp+120h] [bp-CCh] BYREF

  v128 = 1;
  memset(s, 0, sizeof(s));
  while ( 1 )
  {
    memset(v131, 0, sizeof(v131));
    LOBYTE(v131[4]) = 1;
    HIBYTE(v131[16]) = 0x80;
    v1 = s[0];
    v82 = v131[4];
    v122 = s[1];
    v2 = s[2];
    v3 = s[3];
    v108 = HIDWORD(v131[4]);
    v4 = v131[5];
    v5 = v131[6];
    v6 = v131[7];
    v7 = v131[10];
    v8 = v131[8];
    v9 = v131[9];
    v117 = HIDWORD(v131[10]);
    v119 = v131[11];
    v10 = v131[12];
    v79 = v131[13];
    v11 = v131[14];
    v126 = (char *)&unk_171CB8;
    v120 = v131[15];
    v121 = v131[16];
    v12 = HIDWORD(v131[23]);
    v94 = v131[17];
    v96 = v131[18];
    v13 = v131[19];
    v99 = HIDWORD(v131[20]);
    v14 = v131[21];
    v102 = v131[22];
    v105 = v131[24];
    v15 = v131[20];
    v111 = v131[23];
    do
    {
      v16 = v122 ^ v5 ^ v119 ^ v121 ^ v14;
      v17 = v82 ^ v9 ^ v11 ^ v13 ^ v105;
      v124 = v4 ^ v7 ^ v120 ^ v15 ^ v1;
      v18 = v2 ^ v6 ^ v10 ^ v94 ^ v102;
      v19 = ((2 * v16) | (HIDWORD(v16) >> 31)) ^ v17;
      LODWORD(v131[0]) = v1 ^ v19;
      LODWORD(v131[10]) = v7 ^ v19;
      v20 = HIDWORD(v3) ^ HIDWORD(v8) ^ HIDWORD(v79) ^ HIDWORD(v96) ^ v12;
      LODWORD(v131[20]) = v15 ^ v19;
      v21 = v108 ^ HIDWORD(v9) ^ HIDWORD(v11) ^ HIDWORD(v13) ^ HIDWORD(v105);
      v22 = (v16 >> 31) ^ v21;
      LODWORD(v131[5]) = v19 ^ v4;
      LODWORD(v131[15]) = v19 ^ v120;
      v23 = 2 * v20;
      v24 = ((2 * (v3 ^ v8 ^ v79 ^ v96 ^ v111)) | (v20 >> 31)) ^ v16;
      LODWORD(v131[2]) = v24 ^ v2;
      v25 = HIDWORD(v4) ^ v117 ^ HIDWORD(v120) ^ v99 ^ HIDWORD(v1);
      LODWORD(v16) = (2 * v17) | (v21 >> 31);
      HIDWORD(v131[0]) = v22 ^ HIDWORD(v1);
      v26 = 2 * v21;
      v27 = HIDWORD(v2) ^ HIDWORD(v6) ^ HIDWORD(v10) ^ HIDWORD(v94) ^ HIDWORD(v102);
      v28 = (v23 | (((unsigned int)v3 ^ (unsigned int)v8 ^ (unsigned int)v79 ^ (unsigned int)v96 ^ v111) >> 31))
          ^ HIDWORD(v16);
      LODWORD(v16) = v16 ^ v18;
      v29 = ((2 * v18) | (v27 >> 31)) ^ v124;
      v30 = ((2 * v124) | (v25 >> 31)) ^ v3 ^ v8 ^ v79 ^ v96 ^ v111;
      HIDWORD(v16) = ((2 * v27) | (v18 >> 31)) ^ v25;
      v31 = (v26 | (v17 >> 31)) ^ v27;
      LODWORD(v131[4]) = v30 ^ v82;
      v32 = ((2 * v25) | (v124 >> 31)) ^ HIDWORD(v3) ^ HIDWORD(v8) ^ HIDWORD(v79) ^ HIDWORD(v96) ^ v12;
      LODWORD(v131[9]) = v30 ^ v9;
      LODWORD(v131[14]) = v30 ^ v11;
      LODWORD(v131[19]) = v30 ^ v13;
      LODWORD(v131[7]) = v24 ^ v6;
      LODWORD(v131[17]) = v24 ^ v94;
      HIDWORD(v131[2]) = v28 ^ HIDWORD(v2);
      HIDWORD(v131[7]) = v28 ^ HIDWORD(v6);
      HIDWORD(v131[12]) = v28 ^ HIDWORD(v10);
      HIDWORD(v131[17]) = v28 ^ HIDWORD(v94);
      HIDWORD(v131[23]) = v31 ^ v12;
      HIDWORD(v131[5]) = v22 ^ HIDWORD(v4);
      HIDWORD(v131[10]) = v22 ^ v117;
      HIDWORD(v131[15]) = v22 ^ HIDWORD(v120);
      LODWORD(v131[3]) = v16 ^ v3;
      LODWORD(v131[8]) = v16 ^ v8;
      HIDWORD(v131[3]) = v31 ^ HIDWORD(v3);
      HIDWORD(v131[8]) = v31 ^ HIDWORD(v8);
      LODWORD(v131[13]) = v16 ^ v79;
      HIDWORD(v131[13]) = v31 ^ HIDWORD(v79);
      LODWORD(v131[18]) = v16 ^ v96;
      HIDWORD(v131[18]) = v31 ^ HIDWORD(v96);
      v33 = v29 ^ v122;
      v34 = v111 ^ v16;
      LODWORD(v131[11]) = v29 ^ v119;
      LODWORD(v131[16]) = v29 ^ v121;
      LODWORD(v131[6]) = v29 ^ v5;
      v35 = HIDWORD(v16) ^ HIDWORD(v122);
      v36 = (unsigned __int8 *)&unk_171D97;
      LODWORD(v131[12]) = v24 ^ v10;
      HIDWORD(v131[6]) = HIDWORD(v16) ^ HIDWORD(v5);
      LODWORD(v131[22]) = v24 ^ v102;
      HIDWORD(v131[22]) = v28 ^ HIDWORD(v102);
      HIDWORD(v131[20]) = v22 ^ v99;
      HIDWORD(v131[11]) = HIDWORD(v16) ^ HIDWORD(v119);
      LODWORD(v131[1]) = v29 ^ v122;
      LODWORD(v131[21]) = v29 ^ v14;
      HIDWORD(v131[1]) = HIDWORD(v16) ^ HIDWORD(v122);
      HIDWORD(v131[16]) = HIDWORD(v16) ^ HIDWORD(v121);
      LODWORD(v131[23]) = v34;
      LODWORD(v131[24]) = v30 ^ v105;
      HIDWORD(v131[21]) = HIDWORD(v16) ^ HIDWORD(v14);
      v37 = (unsigned __int8 *)&unk_171D7F;
      HIDWORD(v131[4]) = v32 ^ v108;
      HIDWORD(v131[9]) = v32 ^ HIDWORD(v9);
      HIDWORD(v131[14]) = v32 ^ HIDWORD(v11);
      HIDWORD(v131[19]) = v32 ^ HIDWORD(v13);
      HIDWORD(v131[24]) = v32 ^ HIDWORD(v105);
      do
      {
        v39 = *++v36;
        v38 = v39;
        v40 = *++v37;
        v41 = -v38 & 0x3F;
        v42 = HIDWORD(v131[v40]);
        v43 = v131[v40];
        v44 = (__PAIR64__(v35, v33) << v38 >> 32) | (v35 >> v41);
        LODWORD(v131[v40]) = (__PAIR64__(v35, v33) >> v41) | (v33 << v38);
        v35 = v42;
        v33 = v43;
        HIDWORD(v131[v40]) = v44;
      }
      while ( v37 != (unsigned __int8 *)&unk_171D97 );
      v45 = HIDWORD(v131[1]);
      v84 = v131[3] & ~LODWORD(v131[2]) ^ LODWORD(v131[1]);
      v82 = v131[1] & ~LODWORD(v131[0]) ^ LODWORD(v131[4]);
      v46 = v131[4] & ~LODWORD(v131[3]) ^ LODWORD(v131[2]);
      v47 = v131[0] & ~LODWORD(v131[4]) ^ LODWORD(v131[3]);
      v48 = HIDWORD(v131[4]) & ~HIDWORD(v131[3]) ^ HIDWORD(v131[2]);
      v49 = HIDWORD(v131[1]) & ~HIDWORD(v131[0]) ^ HIDWORD(v131[4]);
      v81 = HIDWORD(v131[0]) & ~HIDWORD(v131[4]) ^ HIDWORD(v131[3]);
      v83 = v131[7] & ~LODWORD(v131[6]) ^ LODWORD(v131[5]);
      v86 = HIDWORD(v131[8]) & ~HIDWORD(v131[7]) ^ HIDWORD(v131[6]);
      v131[4] = __PAIR64__(v49, v82);
      v50 = HIDWORD(v131[5]);
      LODWORD(v131[3]) = v47;
      HIDWORD(v131[1]) ^= HIDWORD(v131[3]) & ~HIDWORD(v131[2]);
      v97 = HIDWORD(v131[6]) & ~HIDWORD(v131[5]);
      v100 = v131[6] & ~LODWORD(v131[5]) ^ LODWORD(v131[9]);
      v51 = v131[1];
      v52 = v131[5] & ~LODWORD(v131[9]) ^ LODWORD(v131[8]);
      HIDWORD(v131[5]) ^= HIDWORD(v131[7]) & ~HIDWORD(v131[6]);
      v53 = HIDWORD(v131[2]) & ~v45;
      LODWORD(v131[1]) = v84;
      LODWORD(v131[5]) = v83;
      v54 = v131[2] & ~v51 ^ LODWORD(v131[0]);
      v131[2] = __PAIR64__(v48, v46);
      HIDWORD(v131[3]) = v81;
      LODWORD(v131[6]) ^= v131[8] & ~LODWORD(v131[7]);
      HIDWORD(v131[6]) = v86;
      v125 = v54;
      LODWORD(v131[7]) ^= v131[9] & ~LODWORD(v131[8]);
      v89 = v50 & ~HIDWORD(v131[9]);
      v127 = v53 ^ HIDWORD(v131[0]);
      LODWORD(v131[8]) = v52;
      v55 = HIDWORD(v131[9]) & ~HIDWORD(v131[8]) ^ HIDWORD(v131[7]);
      v112 = v131[12] & ~v131[11] ^ v131[10];
      v56 = v131[11] & ~LODWORD(v131[10]) ^ LODWORD(v131[14]);
      v79 = v131[10] & ~v131[14] ^ v131[13];
      v57 = v131[14] & ~LODWORD(v131[13]) ^ LODWORD(v131[12]);
      v80 = HIDWORD(v131[11]) & ~HIDWORD(v131[10]) ^ HIDWORD(v131[14]);
      v78 = HIDWORD(v131[14]) & ~HIDWORD(v131[13]) ^ HIDWORD(v131[12]);
      v122 = __PAIR64__(HIDWORD(v131[1]), v84);
      HIDWORD(v131[9]) ^= v97;
      v91 = v131[13] & ~LODWORD(v131[12]) ^ LODWORD(v131[11]);
      v131[11] = __PAIR64__(HIDWORD(v131[13]) & (unsigned int)~HIDWORD(v131[12]) ^ HIDWORD(v131[11]), v91);
      v123 = v46;
      v93 = v56;
      v131[14] = __PAIR64__(v80, v56);
      v106 = v48;
      v110 = v131[6];
      v109 = HIDWORD(v131[5]);
      LODWORD(v131[9]) = v100;
      HIDWORD(v131[8]) ^= v89;
      v107 = v47;
      HIDWORD(v131[7]) = v55;
      v131[10] = v112;
      v108 = v49;
      v131[13] = v79;
      v118 = v57;
      v131[12] = __PAIR64__(v78, v57);
      v90 = v52;
      v77 = HIDWORD(v131[8]);
      v76 = v55;
      v87 = v100;
      v88 = v131[7];
      v116 = HIDWORD(v131[9]);
      v58 = HIDWORD(v131[17]) & ~HIDWORD(v131[16]) ^ HIDWORD(v131[15]);
      v113 = v131[17] & ~LODWORD(v131[16]) ^ LODWORD(v131[15]);
      v96 = v131[15] & ~v131[19] ^ v131[18];
      v85 = v131[16] & ~LODWORD(v131[15]) ^ LODWORD(v131[19]);
      v59 = v131[19] & ~LODWORD(v131[18]) ^ LODWORD(v131[17]);
      v95 = v131[18] & ~v131[17] ^ v131[16];
      v98 = HIDWORD(v131[16]) & ~HIDWORD(v131[15]) ^ HIDWORD(v131[19]);
      v114 = HIDWORD(v131[19]) & ~HIDWORD(v131[18]) ^ HIDWORD(v131[17]);
      v103 = v131[22] & ~LODWORD(v131[21]) ^ LODWORD(v131[20]);
      v60 = v131[20] & ~LODWORD(v131[24]) ^ LODWORD(v131[23]);
      v101 = v131[21] & ~LODWORD(v131[20]) ^ LODWORD(v131[24]);
      v61 = v131[23] & ~LODWORD(v131[22]) ^ LODWORD(v131[21]);
      v62 = v131[24] & ~LODWORD(v131[23]) ^ LODWORD(v131[22]);
      v63 = v113;
      v99 = HIDWORD(v131[22]) & ~HIDWORD(v131[21]) ^ HIDWORD(v131[20]);
      v64 = HIDWORD(v131[21]) & ~HIDWORD(v131[20]) ^ HIDWORD(v131[24]);
      v12 = HIDWORD(v131[23]) ^ HIDWORD(v131[20]) & ~HIDWORD(v131[24]);
      v65 = HIDWORD(v131[23]) & ~HIDWORD(v131[22]) ^ HIDWORD(v131[21]);
      v66 = HIDWORD(v131[24]) & ~HIDWORD(v131[23]) ^ HIDWORD(v131[22]);
      v67 = v85;
      v68 = v126;
      v69 = v96;
      __pld(v126 + 16);
      v131[19] = __PAIR64__(v98, v67);
      v131[15] = __PAIR64__(v58, v63);
      v131[18] = __PAIR64__(HIDWORD(v96), v69);
      v119 = v131[11];
      v131[17] = __PAIR64__(v114, v59);
      v131[16] = v95;
      v7 = v112;
      v92 = v118;
      v117 = HIDWORD(v112);
      v15 = v103;
      v131[21] = __PAIR64__(v65, v61);
      v104 = v61;
      v70 = v95;
      v120 = __PAIR64__(v58, v113);
      LODWORD(v94) = v59;
      v131[24] = __PAIR64__(v64, v101);
      v71 = HIDWORD(v95);
      HIDWORD(v94) = v114;
      v73 = v68 + 8;
      v72 = *((_DWORD *)v68 + 2);
      v131[23] = __PAIR64__(v12, v60);
      v121 = __PAIR64__(v71, v70);
      v111 = v60;
      v131[20] = __PAIR64__(v99, v15);
      v131[22] = __PAIR64__(v66, v62);
      v126 = v73;
      v105 = __PAIR64__(v64, v101);
      v74 = v104;
      v102 = __PAIR64__(v66, v62);
      v115 = v127 ^ *((_DWORD *)v73 + 1);
      LODWORD(v131[0]) = v125 ^ v72;
      HIDWORD(v131[0]) = v115;
      v1 = __PAIR64__(v115, v125 ^ v72);
      v2 = __PAIR64__(v106, v123);
      v3 = __PAIR64__(v81, v107);
      v4 = __PAIR64__(v109, v83);
      v5 = __PAIR64__(v86, v110);
      v6 = __PAIR64__(v76, v88);
      v8 = __PAIR64__(v77, v90);
      v9 = __PAIR64__(v116, v87);
      v10 = __PAIR64__(v78, v92);
      v11 = __PAIR64__(v80, v93);
      v13 = __PAIR64__(v98, v85);
      v14 = __PAIR64__(v65, v74);
    }
    while ( &unk_171D78 != (_UNKNOWN *)v73 );
    s[0] = v131[0];
    s[1] = v131[1];
    s[2] = v131[2];
    s[3] = v131[3];
    if ( !memcmp(s, a1, 0x20u) )
      break;
    if ( ++v128 == 2048 )
      return 0;
  }
  return v128;
}
