int __fastcall get_seedhash_by_block_num(int a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r0
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // kr10_8
  __int64 v8; // kr18_8
  __int64 v9; // kr20_8
  __int64 v10; // kr28_8
  __int64 v11; // kr30_8
  __int64 v12; // kr38_8
  int v13; // r2
  unsigned int v14; // r8
  int v15; // r6
  unsigned __int64 v16; // r4
  int v17; // lr
  unsigned int v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r1
  int v22; // r12
  int v23; // lr
  int v24; // r3
  int v25; // r1
  int v26; // r9
  int v27; // r8
  int v28; // r7
  unsigned int v29; // r3
  unsigned int v30; // r1
  unsigned __int8 *v31; // r0
  unsigned __int8 *v32; // lr
  int v33; // r9
  int v34; // t1
  int v35; // t1
  int v36; // r4
  unsigned int v37; // r7
  unsigned int v38; // r8
  int v39; // r2
  __int64 v40; // r2
  int v41; // r7
  int v42; // r9
  int v43; // lr
  int v44; // r1
  int v45; // r6
  char *v46; // r4
  int v47; // r0
  int v48; // r8
  int v49; // r12
  int v50; // r1
  __int64 v51; // r2
  int v52; // r1
  __int64 v53; // r2
  int v55; // [sp+Ch] [bp-1D8h]
  int v56; // [sp+20h] [bp-1C4h]
  int v57; // [sp+24h] [bp-1C0h]
  int v58; // [sp+28h] [bp-1BCh]
  __int64 v59; // [sp+2Ch] [bp-1B8h]
  int v60; // [sp+30h] [bp-1B4h]
  __int64 v61; // [sp+34h] [bp-1B0h]
  int v62; // [sp+34h] [bp-1B0h]
  __int64 v63; // [sp+40h] [bp-1A4h]
  __int64 v64; // [sp+48h] [bp-19Ch]
  __int64 v65; // [sp+50h] [bp-194h]
  __int64 v66; // [sp+58h] [bp-18Ch]
  __int64 v67; // [sp+60h] [bp-184h]
  __int64 v68; // [sp+68h] [bp-17Ch]
  __int64 v69; // [sp+68h] [bp-17Ch]
  __int64 v70; // [sp+70h] [bp-174h]
  __int64 v71; // [sp+78h] [bp-16Ch]
  __int64 v72; // [sp+80h] [bp-164h]
  __int64 v73; // [sp+9Ch] [bp-148h]
  int v74; // [sp+A8h] [bp-13Ch]
  __int64 v75; // [sp+ACh] [bp-138h]
  int v76; // [sp+B8h] [bp-12Ch]
  unsigned int v77; // [sp+BCh] [bp-128h]
  char *v78; // [sp+C8h] [bp-11Ch]
  int v79; // [sp+CCh] [bp-118h]
  unsigned __int64 v80; // [sp+D0h] [bp-114h]
  unsigned int v81; // [sp+D8h] [bp-10Ch]
  unsigned __int64 v82; // [sp+E8h] [bp-FCh]
  unsigned int v83; // [sp+F0h] [bp-F4h]
  _QWORD s[4]; // [sp+F8h] [bp-ECh] BYREF
  _QWORD v86[25]; // [sp+118h] [bp-CCh] BYREF

  memset(s, 0, sizeof(s));
  LODWORD(v4) = sub_16EB04(a2, 0x7530u);
  v82 = v4;
  if ( v4 )
  {
    v83 = 0;
    do
    {
      memset(v86, 0, sizeof(v86));
      LOBYTE(v86[4]) = 1;
      HIBYTE(v86[16]) = 0x80;
      v68 = v86[4];
      v76 = HIDWORD(s[0]);
      v67 = s[1];
      v79 = HIDWORD(s[2]);
      v80 = s[3];
      v70 = v86[5];
      v71 = v86[6];
      v72 = v86[7];
      v5 = v86[8];
      v6 = v86[9];
      v7 = v86[10];
      v8 = v86[11];
      v9 = v86[12];
      v73 = v86[13];
      v10 = v86[14];
      v78 = (char *)&unk_171CB8;
      v74 = HIDWORD(v86[15]);
      v75 = v86[16];
      v11 = v86[17];
      v59 = v86[18];
      v61 = v86[19];
      v12 = v86[20];
      v63 = v86[21];
      v64 = v86[22];
      v65 = v86[23];
      v57 = s[2];
      v56 = v86[15];
      v66 = v86[24];
      v77 = s[0];
      do
      {
        v13 = v67 ^ v71 ^ v8 ^ v75 ^ v63;
        v81 = v70 ^ v7 ^ v56 ^ v12 ^ v77;
        v14 = HIDWORD(v67) ^ HIDWORD(v71) ^ HIDWORD(v8) ^ HIDWORD(v75) ^ HIDWORD(v63);
        v15 = v80 ^ v5 ^ v73 ^ v59 ^ v65;
        HIDWORD(v16) = v72 ^ v57 ^ v9 ^ v11 ^ v64;
        LODWORD(v16) = v79 ^ HIDWORD(v72) ^ HIDWORD(v9) ^ HIDWORD(v11) ^ HIDWORD(v64);
        v17 = ((2 * v13) | (v14 >> 31)) ^ v68 ^ v6 ^ v10 ^ v61 ^ v66;
        LODWORD(v86[0]) = v77 ^ v17;
        v18 = HIDWORD(v68) ^ HIDWORD(v6) ^ HIDWORD(v10) ^ HIDWORD(v61) ^ HIDWORD(v66);
        LODWORD(v86[5]) = v17 ^ v70;
        LODWORD(v86[10]) = v17 ^ v7;
        v55 = ((v67 ^ v71 ^ v8 ^ v75 ^ v63) >> 31) ^ v18;
        LODWORD(v86[15]) = v56 ^ v17;
        v19 = v13
            ^ ((2 * v15)
             | (((unsigned int)(HIDWORD(v80) ^ HIDWORD(v5)) ^ HIDWORD(v73) ^ HIDWORD(v59) ^ HIDWORD(v65)) >> 31));
        LODWORD(v86[20]) = v17 ^ v12;
        LODWORD(v86[2]) = v57 ^ v19;
        v20 = HIDWORD(v70) ^ HIDWORD(v7) ^ v74 ^ HIDWORD(v12) ^ v76;
        v21 = (2 * (v68 ^ v6 ^ v10 ^ v61 ^ v66)) | (v18 >> 31);
        HIDWORD(v86[0]) = v55 ^ v76;
        v22 = ((__int64)(v80 ^ v5 ^ v73 ^ v59 ^ v65) >> 31) ^ v14;
        v23 = ((2 * v81) | (v20 >> 31)) ^ v15;
        v24 = ((v68 ^ v6 ^ v10 ^ v61 ^ v66) >> 31) ^ v16;
        v25 = v21 ^ HIDWORD(v16);
        v26 = (v16 >> 31) ^ v81;
        v27 = ((2 * v16) | (HIDWORD(v16) >> 31)) ^ v20;
        LODWORD(v86[4]) = v23 ^ v68;
        v28 = ((2 * v20) | (v81 >> 31)) ^ HIDWORD(v80) ^ HIDWORD(v5) ^ HIDWORD(v73) ^ HIDWORD(v59) ^ HIDWORD(v65);
        LODWORD(v86[9]) = v23 ^ v6;
        LODWORD(v86[14]) = v23 ^ v10;
        HIDWORD(v86[7]) = v22 ^ HIDWORD(v72);
        LODWORD(v86[19]) = v23 ^ v61;
        LODWORD(v86[24]) = v23 ^ v66;
        LODWORD(v86[22]) = v19 ^ v64;
        HIDWORD(v86[12]) = v22 ^ HIDWORD(v9);
        HIDWORD(v86[17]) = v22 ^ HIDWORD(v11);
        HIDWORD(v86[5]) = HIDWORD(v70) ^ v55;
        HIDWORD(v86[10]) = HIDWORD(v7) ^ v55;
        HIDWORD(v86[15]) = v74 ^ v55;
        HIDWORD(v86[20]) = v55 ^ HIDWORD(v12);
        LODWORD(v86[3]) = v25 ^ v80;
        LODWORD(v86[8]) = v25 ^ v5;
        HIDWORD(v86[3]) = v24 ^ HIDWORD(v80);
        HIDWORD(v86[8]) = v24 ^ HIDWORD(v5);
        LODWORD(v86[13]) = v25 ^ v73;
        HIDWORD(v86[13]) = v24 ^ HIDWORD(v73);
        LODWORD(v86[18]) = v25 ^ v59;
        HIDWORD(v86[18]) = v24 ^ HIDWORD(v59);
        LODWORD(v86[23]) = v25 ^ v65;
        LODWORD(v86[17]) = v19 ^ v11;
        LODWORD(v86[7]) = v19 ^ v72;
        LODWORD(v86[6]) = v26 ^ v71;
        HIDWORD(v86[23]) = v24 ^ HIDWORD(v65);
        LODWORD(v86[11]) = v26 ^ v8;
        HIDWORD(v86[6]) = v27 ^ HIDWORD(v71);
        LODWORD(v86[16]) = v26 ^ v75;
        v29 = v26 ^ v67;
        LODWORD(v86[12]) = v19 ^ v9;
        HIDWORD(v86[11]) = v27 ^ HIDWORD(v8);
        HIDWORD(v86[2]) = v22 ^ v79;
        HIDWORD(v86[22]) = v22 ^ HIDWORD(v64);
        HIDWORD(v86[16]) = v27 ^ HIDWORD(v75);
        v30 = v27 ^ HIDWORD(v67);
        HIDWORD(v86[4]) = v28 ^ HIDWORD(v68);
        HIDWORD(v86[9]) = v28 ^ HIDWORD(v6);
        HIDWORD(v86[14]) = v28 ^ HIDWORD(v10);
        HIDWORD(v86[19]) = v28 ^ HIDWORD(v61);
        LODWORD(v86[1]) = v26 ^ v67;
        LODWORD(v86[21]) = v26 ^ v63;
        HIDWORD(v86[1]) = v27 ^ HIDWORD(v67);
        HIDWORD(v86[21]) = v27 ^ HIDWORD(v63);
        v31 = (unsigned __int8 *)&unk_171D7F;
        HIDWORD(v86[24]) = v28 ^ HIDWORD(v66);
        v32 = (unsigned __int8 *)&unk_171D97;
        do
        {
          v34 = *++v32;
          v33 = v34;
          v35 = *++v31;
          v36 = -v33 & 0x3F;
          v37 = v86[v35];
          v38 = HIDWORD(v86[v35]);
          v39 = (__PAIR64__(v30, v29) << v33 >> 32) | (v30 >> v36);
          LODWORD(v86[v35]) = (__PAIR64__(v30, v29) >> v36) | (v29 << v33);
          v29 = v37;
          v30 = v38;
          HIDWORD(v86[v35]) = v39;
        }
        while ( v31 != (unsigned __int8 *)&unk_171D97 );
        v40 = v86[0];
        v41 = v86[2];
        v42 = v86[0] & ~LODWORD(v86[4]) ^ LODWORD(v86[3]);
        v69 = v86[4];
        v43 = v86[4] & ~LODWORD(v86[3]) ^ LODWORD(v86[2]);
        v62 = HIDWORD(v86[0]) & ~HIDWORD(v86[4]) ^ HIDWORD(v86[3]);
        v58 = v86[3] & ~LODWORD(v86[2]) ^ LODWORD(v86[1]);
        v44 = HIDWORD(v86[3]) & ~HIDWORD(v86[2]);
        v45 = HIDWORD(v86[2]);
        v46 = v78;
        v47 = v86[1];
        v60 = HIDWORD(v86[4]) & ~HIDWORD(v86[3]) ^ HIDWORD(v86[2]);
        v48 = v58;
        v49 = HIDWORD(v86[1]);
        __pld(v78 + 16);
        LODWORD(v86[1]) = v48;
        v86[3] = __PAIR64__(v62, v42);
        v57 = v43;
        v86[2] = __PAIR64__(v60, v43);
        HIDWORD(v86[1]) = v44 ^ v49;
        v78 = v46 + 8;
        v77 = v41 & ~v47 ^ v40 ^ *((_DWORD *)v46 + 2);
        v76 = v45 & ~v49 ^ HIDWORD(v40) ^ *((_DWORD *)v46 + 3);
        v80 = __PAIR64__(v62, v42);
        LODWORD(v68) = v47 & ~(_DWORD)v40 ^ v69;
        LODWORD(v67) = v58;
        HIDWORD(v67) = v44 ^ v49;
        v79 = v60;
        HIDWORD(v68) = v49 & ~HIDWORD(v40) ^ HIDWORD(v69);
        v86[0] = __PAIR64__(v76, v77);
        v70 = v86[7] & ~v86[6] ^ v86[5];
        v71 = v86[8] & ~v86[7] ^ v86[6];
        v72 = v86[9] & ~v86[8] ^ v86[7];
        v73 = v86[10] & ~v86[14] ^ v86[13];
        v75 = v86[18] & ~v86[17] ^ v86[16];
        v59 = v86[15] & ~v86[19] ^ v86[18];
        v56 = LODWORD(v86[15]) ^ v86[17] & ~LODWORD(v86[16]);
        v61 = v86[16] & ~v86[15] ^ v86[19];
        v74 = HIDWORD(v86[17]) & ~HIDWORD(v86[16]) ^ HIDWORD(v86[15]);
        v63 = v86[23] & ~v86[22] ^ v86[21];
        v65 = v86[20] & ~v86[24] ^ v86[23];
        v66 = v86[21] & ~v86[20] ^ v86[24];
        v64 = v86[24] & ~v86[23] ^ v86[22];
        v5 = v86[5] & ~v86[9] ^ v86[8];
        v6 = v86[6] & ~v86[5] ^ v86[9];
        v7 = v86[12] & ~v86[11] ^ v86[10];
        v8 = v86[13] & ~v86[12] ^ v86[11];
        v9 = v86[14] & ~v86[13] ^ v86[12];
        v10 = v86[11] & ~v86[10] ^ v86[14];
        v11 = v86[19] & ~v86[18] ^ v86[17];
        v12 = v86[22] & ~v86[21] ^ v86[20];
      }
      while ( &unk_171D78 != (_UNKNOWN *)(v46 + 8) );
      ++v83;
      s[0] = v86[0];
      s[1] = v86[1];
      s[2] = v86[2];
      s[3] = v86[3];
    }
    while ( v83 < v82 );
  }
  v50 = HIDWORD(s[0]);
  v51 = s[1];
  *(_DWORD *)a1 = s[0];
  *(_DWORD *)(a1 + 4) = v50;
  *(_QWORD *)(a1 + 8) = v51;
  v52 = HIDWORD(s[2]);
  v53 = s[3];
  *(_DWORD *)(a1 + 16) = s[2];
  *(_DWORD *)(a1 + 20) = v52;
  *(_QWORD *)(a1 + 24) = v53;
  return a1;
}
