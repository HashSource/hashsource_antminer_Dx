int __fastcall get_seedhash_by_block_num(int a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r0
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // kr08_8
  int v7; // r10
  __int64 v8; // kr10_8
  __int64 v9; // kr18_8
  __int64 v10; // kr20_8
  __int64 v11; // kr28_8
  __int64 v12; // kr30_8
  __int64 v13; // kr38_8
  __int64 v14; // kr40_8
  int v15; // r2
  int v16; // r11
  int v17; // r9
  unsigned int v18; // lr
  int v19; // r8
  unsigned int v20; // r12
  int v21; // r0
  unsigned int v22; // r6
  unsigned int v23; // r5
  int v24; // r4
  unsigned int v25; // r3
  int v26; // r10
  int v27; // r1
  unsigned int v28; // r4
  int v29; // r2
  int v30; // r12
  int v31; // r0
  int v32; // r3
  int v33; // r4
  int v34; // lr
  int v35; // r12
  int v36; // r0
  int v37; // r8
  unsigned __int8 *v38; // r6
  int v39; // r8
  int v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r4
  char *v43; // r3
  char v44; // r1
  char v45; // t1
  int v46; // t1
  char v47; // r5
  unsigned int v48; // r0
  unsigned int v49; // r7
  unsigned int v50; // r10
  unsigned int v51; // r9
  unsigned int v52; // r5
  int *v53; // lr
  int v54; // r7
  int v55; // r10
  __int64 v56; // r0
  int v57; // r8
  int v58; // lr
  int v59; // r7
  int v60; // r6
  int v61; // r11
  int v62; // r3
  int v63; // r2
  unsigned int v64; // r11
  int v65; // r1
  __int64 v66; // r2
  int v67; // r1
  __int64 v68; // r2
  __int64 v70; // [sp+Ch] [bp-1C0h]
  __int64 v71; // [sp+14h] [bp-1B8h]
  int v72; // [sp+24h] [bp-1A8h]
  int v73; // [sp+28h] [bp-1A4h]
  int v74; // [sp+28h] [bp-1A4h]
  int v75; // [sp+2Ch] [bp-1A0h]
  int v76; // [sp+2Ch] [bp-1A0h]
  __int64 v77; // [sp+38h] [bp-194h]
  int v78; // [sp+3Ch] [bp-190h]
  int v79; // [sp+40h] [bp-18Ch]
  int v80; // [sp+48h] [bp-184h]
  __int64 v81; // [sp+4Ch] [bp-180h]
  int v82; // [sp+4Ch] [bp-180h]
  int v83; // [sp+54h] [bp-178h]
  int v84; // [sp+58h] [bp-174h]
  _DWORD *v85; // [sp+5Ch] [bp-170h]
  __int64 v86; // [sp+60h] [bp-16Ch]
  __int64 v87; // [sp+68h] [bp-164h]
  __int64 v88; // [sp+70h] [bp-15Ch]
  __int64 v89; // [sp+7Ch] [bp-150h]
  __int64 v90; // [sp+84h] [bp-148h]
  int v91; // [sp+90h] [bp-13Ch]
  __int64 v92; // [sp+98h] [bp-134h]
  int v93; // [sp+A8h] [bp-124h]
  int v94; // [sp+A8h] [bp-124h]
  int v95; // [sp+ACh] [bp-120h]
  __int64 v96; // [sp+B4h] [bp-118h]
  unsigned int v97; // [sp+C4h] [bp-108h]
  unsigned __int64 v98; // [sp+D0h] [bp-FCh]
  unsigned int v99; // [sp+D8h] [bp-F4h]
  _QWORD s[4]; // [sp+E0h] [bp-ECh] BYREF
  _QWORD v102[25]; // [sp+100h] [bp-CCh] BYREF

  memset(s, 0, sizeof(s));
  LODWORD(v4) = sub_F7A2C(a2, 0x7530u);
  v98 = v4;
  if ( v4 )
  {
    v99 = 0;
    do
    {
      memset(v102, 0, sizeof(v102));
      LOBYTE(v102[4]) = 1;
      HIBYTE(v102[16]) = 0x80;
      v96 = s[0];
      v93 = v102[4];
      v5 = s[1];
      v84 = HIDWORD(s[2]);
      v6 = s[3];
      v75 = HIDWORD(v102[4]);
      v95 = HIDWORD(v102[5]);
      v7 = v102[5];
      v8 = v102[6];
      v86 = v102[7];
      v9 = v102[8];
      v70 = v102[9];
      v87 = v102[10];
      v71 = v102[11];
      v88 = v102[12];
      v10 = v102[13];
      v77 = v102[14];
      v85 = &unk_FC578;
      v79 = HIDWORD(v102[15]);
      v11 = v102[16];
      v89 = v102[17];
      v90 = v102[18];
      v12 = v102[19];
      v91 = HIDWORD(v102[20]);
      v13 = v102[21];
      v92 = v102[22];
      v14 = v102[23];
      v81 = v102[24];
      v15 = s[2];
      v16 = v102[20];
      v17 = v102[15];
      do
      {
        v18 = HIDWORD(v5) ^ HIDWORD(v8) ^ HIDWORD(v71) ^ HIDWORD(v11) ^ HIDWORD(v13);
        v97 = v7 ^ v87 ^ v17 ^ v16 ^ v96;
        v19 = v5 ^ v8 ^ v71 ^ v11 ^ v13;
        v20 = v93 ^ v70 ^ v77 ^ v12 ^ v81;
        v21 = ((2 * v19) | (v18 >> 31)) ^ v20;
        LODWORD(v102[5]) = v21 ^ v7;
        LODWORD(v102[15]) = v21 ^ v17;
        v22 = v15 ^ v86 ^ v88 ^ v89 ^ v92;
        v23 = v84 ^ HIDWORD(v86) ^ HIDWORD(v88) ^ HIDWORD(v89) ^ HIDWORD(v92);
        v24 = v96;
        LODWORD(v96) = HIDWORD(v6) ^ HIDWORD(v9) ^ HIDWORD(v10) ^ HIDWORD(v90) ^ HIDWORD(v14);
        LODWORD(v102[0]) = v24 ^ v21;
        v25 = v75 ^ HIDWORD(v70) ^ HIDWORD(v77) ^ HIDWORD(v12) ^ HIDWORD(v81);
        LODWORD(v102[10]) = v87 ^ v21;
        LODWORD(v102[20]) = v21 ^ v16;
        v26 = ((__int64)(v5 ^ v8 ^ v71 ^ v11 ^ v13) >> 31) ^ v25;
        v27 = ((2 * (v6 ^ v9 ^ v10 ^ v90 ^ v14)) | ((unsigned int)v96 >> 31)) ^ v19;
        v28 = v95 ^ HIDWORD(v87) ^ v79 ^ v91 ^ HIDWORD(v96);
        LODWORD(v102[2]) = v15 ^ v27;
        HIDWORD(v102[0]) = v26 ^ HIDWORD(v96);
        v29 = ((2 * v20) | (v25 >> 31)) ^ v22;
        v30 = (2 * v25) | (v20 >> 31);
        v31 = (2 * v97) | (v28 >> 31);
        v32 = (2 * v28) | (v97 >> 31);
        v33 = ((2 * v22) | (v23 >> 31)) ^ v97;
        v34 = ((2 * v96)
             | (((unsigned int)v6 ^ (unsigned int)v9 ^ (unsigned int)v10 ^ (unsigned int)v90 ^ (unsigned int)v14) >> 31))
            ^ v18;
        v35 = v30 ^ v23;
        v36 = v31 ^ v6 ^ v9 ^ v10 ^ v90 ^ v14;
        v37 = (2 * v23) | (v22 >> 31);
        v38 = (unsigned __int8 *)&unk_FC63F;
        LODWORD(v102[4]) = v36 ^ v93;
        v39 = v37 ^ v95 ^ HIDWORD(v87) ^ v79 ^ v91 ^ HIDWORD(v96);
        v40 = v32 ^ v96;
        LODWORD(v102[9]) = v36 ^ v70;
        LODWORD(v102[14]) = v36 ^ v77;
        LODWORD(v102[19]) = v36 ^ v12;
        LODWORD(v102[24]) = v36 ^ v81;
        HIDWORD(v102[7]) = v34 ^ HIDWORD(v86);
        HIDWORD(v102[12]) = v34 ^ HIDWORD(v88);
        HIDWORD(v102[17]) = v34 ^ HIDWORD(v89);
        HIDWORD(v102[5]) = v26 ^ v95;
        HIDWORD(v102[10]) = v26 ^ HIDWORD(v87);
        HIDWORD(v102[15]) = v26 ^ v79;
        LODWORD(v102[3]) = v6 ^ v29;
        LODWORD(v102[8]) = v9 ^ v29;
        HIDWORD(v102[3]) = v35 ^ HIDWORD(v6);
        HIDWORD(v102[8]) = v35 ^ HIDWORD(v9);
        LODWORD(v102[13]) = v10 ^ v29;
        HIDWORD(v102[13]) = v35 ^ HIDWORD(v10);
        LODWORD(v102[18]) = v90 ^ v29;
        HIDWORD(v102[18]) = v35 ^ HIDWORD(v90);
        LODWORD(v102[23]) = v29 ^ v14;
        LODWORD(v102[6]) = v8 ^ v33;
        LODWORD(v102[11]) = v71 ^ v33;
        v41 = v5 ^ v33;
        LODWORD(v102[16]) = v11 ^ v33;
        LODWORD(v102[21]) = v33 ^ v13;
        HIDWORD(v102[6]) = v39 ^ HIDWORD(v8);
        v42 = v39 ^ HIDWORD(v5);
        HIDWORD(v102[11]) = v39 ^ HIDWORD(v71);
        LODWORD(v102[7]) = v27 ^ v86;
        LODWORD(v102[12]) = v88 ^ v27;
        LODWORD(v102[17]) = v27 ^ v89;
        HIDWORD(v102[16]) = v39 ^ HIDWORD(v11);
        LODWORD(v102[22]) = v27 ^ v92;
        HIDWORD(v102[2]) = v34 ^ v84;
        HIDWORD(v102[22]) = v34 ^ HIDWORD(v92);
        HIDWORD(v102[20]) = v26 ^ v91;
        LODWORD(v102[1]) = v41;
        HIDWORD(v102[1]) = v39 ^ HIDWORD(v5);
        HIDWORD(v102[4]) = v75 ^ v40;
        HIDWORD(v102[21]) = v39 ^ HIDWORD(v13);
        HIDWORD(v102[23]) = v35 ^ HIDWORD(v14);
        HIDWORD(v102[9]) = HIDWORD(v70) ^ v40;
        HIDWORD(v102[14]) = HIDWORD(v77) ^ v40;
        HIDWORD(v102[19]) = HIDWORD(v12) ^ v40;
        HIDWORD(v102[24]) = v40 ^ HIDWORD(v81);
        v43 = (char *)&unk_FC657;
        do
        {
          v45 = *++v43;
          v44 = v45;
          v46 = *++v38;
          v47 = -v44 & 0x3F;
          v48 = v42 << v44;
          v49 = v41 >> v47;
          v50 = v42 << (32 - v47);
          v51 = v42 >> (v47 - 32);
          v52 = v42 >> v47;
          v53 = (int *)&v102[v46];
          v54 = v49 | v50 | v51;
          v55 = *v53;
          v42 = v53[1];
          *v53 = (v41 << v44) | v54;
          v53[1] = v48 | (v41 << (v44 - 32)) | (v41 >> (32 - v44)) | v52;
          v41 = v55;
        }
        while ( v38 != (unsigned __int8 *)&unk_FC657 );
        v56 = v102[0];
        v76 = HIDWORD(v102[4]);
        v57 = v102[0] & ~LODWORD(v102[4]) ^ LODWORD(v102[3]);
        v94 = v102[4];
        v83 = v102[1];
        v58 = v102[4] & ~LODWORD(v102[3]) ^ LODWORD(v102[2]);
        v82 = HIDWORD(v102[0]) & ~HIDWORD(v102[4]) ^ HIDWORD(v102[3]);
        v59 = HIDWORD(v102[1]);
        v72 = LODWORD(v102[1]) ^ v102[3] & ~LODWORD(v102[2]);
        v60 = v72;
        v61 = HIDWORD(v102[2]);
        v73 = HIDWORD(v102[4]) & ~HIDWORD(v102[3]) ^ HIDWORD(v102[2]);
        v80 = HIDWORD(v102[3]) & ~HIDWORD(v102[2]) ^ HIDWORD(v102[1]);
        v62 = v102[2];
        __pld(v85 + 4);
        v102[3] = __PAIR64__(v82, v57);
        v102[2] = __PAIR64__(v73, v58);
        v102[1] = __PAIR64__(v80, v60);
        v78 = v61 & ~v59 ^ HIDWORD(v56);
        v63 = v85[2];
        v85 += 2;
        v64 = v62 & ~v83 ^ v56 ^ v63;
        v15 = v58;
        LODWORD(v96) = v64;
        HIDWORD(v96) = v78 ^ v85[1];
        v93 = v83 & ~(_DWORD)v56 ^ v94;
        v84 = v73;
        v74 = v82;
        v75 = v59 & ~HIDWORD(v56) ^ v76;
        v7 = v102[7] & ~LODWORD(v102[6]) ^ LODWORD(v102[5]);
        v86 = v102[9] & ~v102[8] ^ v102[7];
        v102[0] = __PAIR64__(HIDWORD(v96), v64);
        v70 = v102[6] & ~v102[5] ^ v102[9];
        v95 = HIDWORD(v102[7]) & ~HIDWORD(v102[6]) ^ HIDWORD(v102[5]);
        v87 = v102[12] & ~v102[11] ^ v102[10];
        v71 = v102[13] & ~v102[12] ^ v102[11];
        v88 = v102[14] & ~v102[13] ^ v102[12];
        v77 = v102[11] & ~v102[10] ^ v102[14];
        v17 = v102[17] & ~LODWORD(v102[16]) ^ LODWORD(v102[15]);
        v90 = v102[15] & ~v102[19] ^ v102[18];
        v79 = HIDWORD(v102[17]) & ~HIDWORD(v102[16]) ^ HIDWORD(v102[15]);
        v89 = v102[17] ^ v102[19] & ~v102[18];
        v16 = v102[22] & ~LODWORD(v102[21]) ^ LODWORD(v102[20]);
        v92 = v102[24] & ~v102[23] ^ v102[22];
        v81 = v102[21] & ~v102[20] ^ v102[24];
        v91 = HIDWORD(v102[22]) & ~HIDWORD(v102[21]) ^ HIDWORD(v102[20]);
        v5 = __PAIR64__(v80, v72);
        v6 = __PAIR64__(v74, v57);
        v8 = v102[8] & ~v102[7] ^ v102[6];
        v9 = v102[5] & ~v102[9] ^ v102[8];
        v10 = v102[10] & ~v102[14] ^ v102[13];
        v11 = v102[18] & ~v102[17] ^ v102[16];
        v12 = v102[16] & ~v102[15] ^ v102[19];
        v13 = v102[23] & ~v102[22] ^ v102[21];
        v14 = v102[20] & ~v102[24] ^ v102[23];
      }
      while ( &unk_FC638 != (_UNKNOWN *)v85 );
      s[0] = v102[0];
      s[1] = v102[1];
      ++v99;
      s[2] = v102[2];
      s[3] = v102[3];
    }
    while ( v99 < v98 );
  }
  v65 = HIDWORD(s[0]);
  v66 = s[1];
  *(_DWORD *)a1 = s[0];
  *(_DWORD *)(a1 + 4) = v65;
  *(_QWORD *)(a1 + 8) = v66;
  v67 = HIDWORD(s[2]);
  v68 = s[3];
  *(_DWORD *)(a1 + 16) = s[2];
  *(_DWORD *)(a1 + 20) = v67;
  *(_QWORD *)(a1 + 24) = v68;
  return a1;
}
