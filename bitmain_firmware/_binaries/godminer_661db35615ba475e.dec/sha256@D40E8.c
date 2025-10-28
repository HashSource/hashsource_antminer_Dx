int __fastcall sha256(char *src, size_t a2, int *a3)
{
  size_t v3; // r5
  size_t v5; // r11
  int v6; // r3
  int v7; // r2
  size_t v8; // r2
  int v9; // r4
  int v10; // r10
  int v11; // r5
  int v12; // r7
  int v13; // r8
  int v14; // r9
  int v15; // r8
  __int16 v16; // r7
  int v17; // r5
  int v18; // r6
  int v19; // r4
  unsigned __int8 v20; // r1
  int v21; // lr
  unsigned __int8 v22; // r2
  unsigned __int8 v23; // r3
  unsigned __int8 v24; // r11
  unsigned __int8 v25; // r9
  int v26; // r12
  int result; // r0
  char *v28; // r8
  int v29; // r9
  unsigned int v30; // r10
  unsigned int v31; // lr
  unsigned int v32; // r3
  unsigned int v33; // r5
  unsigned int v34; // r7
  unsigned int v35; // r4
  unsigned int v36; // r6
  int v37; // r0
  unsigned int v38; // r2
  int v39; // r7
  unsigned int v40; // r2
  unsigned int v41; // r3
  int v42; // r1
  int v43; // r0
  unsigned int v44; // r2
  unsigned int v45; // r10
  unsigned int v46; // r4
  int v47; // r11
  unsigned int v48; // r1
  int v49; // r0
  int v50; // lr
  int v51; // r0
  int v52; // r12
  unsigned int v53; // r0
  unsigned int v54; // r6
  unsigned int v55; // r12
  int v56; // r7
  unsigned int v57; // r6
  int v58; // r4
  unsigned int *v59; // r8
  unsigned int v60; // r2
  unsigned int v61; // r1
  unsigned int v62; // r3
  int v63; // r5
  int v64; // r6
  unsigned __int64 v65; // kr08_8
  int v66; // r4
  int v67; // r11
  int v68; // r10
  int v69; // r9
  int v70; // r3
  int v71; // r8
  int v72; // lr
  int v73; // r0
  int v74; // r3
  int v75; // lr
  int v76; // r0
  size_t v77; // [sp+0h] [bp-1DCh]
  unsigned int v78; // [sp+4h] [bp-1D8h]
  unsigned int *v79; // [sp+8h] [bp-1D4h]
  int v81; // [sp+30h] [bp-1ACh] BYREF
  size_t v82; // [sp+34h] [bp-1A8h]
  unsigned int dest[32]; // [sp+38h] [bp-1A4h] BYREF
  int v84; // [sp+B8h] [bp-124h]
  __int64 v85; // [sp+BCh] [bp-120h]
  __int64 v86; // [sp+C4h] [bp-118h]
  int v87; // [sp+CCh] [bp-110h]
  int v88; // [sp+D0h] [bp-10Ch]
  int v89; // [sp+D4h] [bp-108h]
  _DWORD v90[27]; // [sp+D8h] [bp-104h]
  char v91; // [sp+144h] [bp-98h] BYREF
  int v92; // [sp+190h] [bp-4Ch]
  unsigned int v93; // [sp+194h] [bp-48h]
  unsigned int v94; // [sp+198h] [bp-44h]
  int v95; // [sp+1B4h] [bp-28h]
  int v96; // [sp+1B8h] [bp-24h] BYREF
  unsigned int v97; // [sp+1C8h] [bp-14h]
  unsigned int v98; // [sp+1CCh] [bp-10h]
  int v99; // [sp+1D0h] [bp-Ch]
  int v100; // [sp+1D4h] [bp-8h]

  if ( a2 < 0x40 )
    v3 = a2;
  v5 = a2;
  if ( a2 >= 0x40 )
    v3 = 64;
  v82 = 0;
  v81 = 0;
  v84 = sha256_h0;
  v85 = qword_190650;
  v86 = qword_190658;
  v87 = dword_190660;
  v88 = dword_190664;
  v89 = dword_190668;
  memcpy(dest, src, v3);
  if ( v5 > 0x3F )
  {
    v77 = v5 - v3;
    v28 = &v91;
    v78 = (v5 - v3) >> 6;
    v79 = (unsigned int *)&src[v3];
    v29 = 16;
    v90[1] = bswap32(dest[1]);
    v90[3] = bswap32(dest[3]);
    v90[4] = bswap32(dest[4]);
    v90[5] = bswap32(dest[5]);
    v30 = bswap32(dest[0]);
    v90[6] = bswap32(dest[6]);
    v90[7] = bswap32(dest[7]);
    v90[8] = bswap32(dest[8]);
    v90[2] = bswap32(dest[2]);
    v90[0] = v30;
    v90[9] = bswap32(dest[9]);
    v90[10] = bswap32(dest[10]);
    v31 = bswap32(dest[14]);
    v90[11] = bswap32(dest[11]);
    v90[12] = bswap32(dest[12]);
    v90[13] = bswap32(dest[13]);
    v32 = bswap32(dest[15]);
    v90[14] = v31;
    v90[15] = v32;
    do
    {
      v33 = *((_DWORD *)v28 - 25);
      v34 = *((_DWORD *)v28 - 26);
      v35 = *((_DWORD *)v28 - 24);
      v36 = *((_DWORD *)v28 - 23);
      v37 = __ROR4__(v34, 18) ^ __ROR4__(v34, 7) ^ (v34 >> 3);
      v38 = (__ROR4__(v32, 19) ^ __ROR4__(v32, 17) ^ (v32 >> 10)) + *((_DWORD *)v28 - 17) + v34;
      v39 = *((_DWORD *)v28 - 16);
      v40 = v38 + (__ROR4__(v33, 18) ^ __ROR4__(v33, 7) ^ (v33 >> 3));
      v41 = (__ROR4__(v31, 19) ^ __ROR4__(v31, 17) ^ (v31 >> 10)) + v30 + *((_DWORD *)v28 - 18) + v37;
      *((_DWORD *)v28 - 10) = v40;
      v42 = (__ROR4__(v35, 7) ^ __ROR4__(v35, 18) ^ (v35 >> 3)) + v33 + v39;
      v43 = __ROR4__(v40, 17) ^ __ROR4__(v40, 19) ^ (v40 >> 10);
      v44 = *((_DWORD *)v28 - 21);
      v45 = *((_DWORD *)v28 - 22);
      v46 = (__ROR4__(v36, 7) ^ __ROR4__(v36, 18) ^ (v36 >> 3)) + v35 + *((_DWORD *)v28 - 15) + v43;
      v47 = *((_DWORD *)v28 - 14);
      *((_DWORD *)v28 - 8) = v46;
      v48 = v42 + (__ROR4__(v41, 17) ^ __ROR4__(v41, 19) ^ (v41 >> 10));
      v49 = *((_DWORD *)v28 - 13);
      v50 = __ROR4__(v45, 7) ^ __ROR4__(v45, 18) ^ (v45 >> 3);
      *((_DWORD *)v28 - 9) = v48;
      v51 = (__ROR4__(v44, 7) ^ __ROR4__(v44, 18) ^ (v44 >> 3)) + v45 + v49;
      v30 = *((_DWORD *)v28 - 19);
      v52 = v36 + v47;
      v53 = v51 + (__ROR4__(v46, 17) ^ __ROR4__(v46, 19) ^ (v46 >> 10));
      v54 = *((_DWORD *)v28 - 20);
      v55 = v50 + v52 + (__ROR4__(v48, 17) ^ __ROR4__(v48, 19) ^ (v48 >> 10));
      *((_DWORD *)v28 - 6) = v53;
      v56 = *((_DWORD *)v28 - 12);
      *((_DWORD *)v28 - 11) = v41;
      v29 += 8;
      __pld(v28 - 28);
      v32 = (__ROR4__(v30, 7) ^ __ROR4__(v30, 18) ^ (v30 >> 3))
          + v41
          + v54
          + (__ROR4__(v53, 17) ^ __ROR4__(v53, 19) ^ (v53 >> 10));
      v31 = (__ROR4__(v54, 7) ^ __ROR4__(v54, 18) ^ (v54 >> 3))
          + v44
          + v56
          + (__ROR4__(v55, 17) ^ __ROR4__(v55, 19) ^ (v55 >> 10));
      __pld(v28);
      *((_DWORD *)v28 - 7) = v55;
      v28 += 32;
      *((_DWORD *)v28 - 12) = v32;
      *((_DWORD *)v28 - 13) = v31;
    }
    while ( v29 != 56 );
    v57 = v32;
    v58 = 6;
    v59 = (unsigned int *)&v96;
    while ( 1 )
    {
      v60 = *(v59 - 15);
      v61 = (__ROR4__(v31, 19) ^ __ROR4__(v31, 17) ^ (v31 >> 10)) + v30;
      v30 = *(v59 - 14);
      v29 += 2;
      v62 = (__ROR4__(v57, 17) ^ __ROR4__(v57, 19) ^ (v57 >> 10)) + *(v59 - 6) + v60;
      v31 = v61 + *(v59 - 7) + (__ROR4__(v60, 18) ^ __ROR4__(v60, 7) ^ (v60 >> 3));
      *v59 = v31;
      v59 += 2;
      v57 = v62 + (__ROR4__(v30, 7) ^ __ROR4__(v30, 18) ^ (v30 >> 3));
      *(v59 - 1) = v57;
      if ( v29 == 62 )
        break;
      v58 -= 2;
    }
    v99 = v92
        + v95
        + (__ROR4__(v97, 17) ^ __ROR4__(v97, 19) ^ (v97 >> 10))
        + (__ROR4__(v93, 7) ^ __ROR4__(v93, 18) ^ (v93 >> 3));
    if ( v58 != 1 )
      v100 = (__ROR4__(v98, 19) ^ __ROR4__(v98, 17) ^ (v98 >> 10))
           + v96
           + v93
           + (__ROR4__(v94, 18) ^ __ROR4__(v94, 7) ^ (v94 >> 3));
    v63 = v84;
    v64 = 0;
    v65 = v85;
    v66 = HIDWORD(v86);
    v67 = v86;
    v68 = v87;
    v69 = v88;
    v70 = v89;
    while ( 1 )
    {
      v72 = v90[v64];
      v73 = sha256_k[v64++];
      v74 = (__ROR4__(v66, 11) ^ __ROR4__(v66, 6) ^ __ROR4__(v66, 25)) + (v69 & ~v66 ^ v68 & v66) + v72 + v73 + v70;
      v75 = v67 + v74;
      v76 = (__ROR4__(v63, 13) ^ __ROR4__(v63, 2) ^ __ROR4__(v63, 22))
          + (HIDWORD(v65) & v65 ^ (HIDWORD(v65) ^ v65) & v63)
          + v74;
      v67 = HIDWORD(v65);
      v70 = v69;
      if ( v64 == 64 )
        break;
      v69 = v68;
      v68 = v66;
      v71 = v63;
      v66 = v75;
      v63 = v76;
      v65 = __PAIR64__(v65, v71);
    }
    v84 += v76;
    LODWORD(v85) = v63 + v85;
    HIDWORD(v85) += v65;
    LODWORD(v86) = HIDWORD(v65) + v86;
    HIDWORD(v86) += v75;
    v87 += v66;
    v88 += v68;
    v89 += v69;
    v5 = v77 & 0x3F;
    sha256_transf((int)&v81, v79, v78);
    memcpy(dest, (char *)v79 + (v77 & 0xFFFFFFC0), v5);
    v82 = v5;
    v6 = v81 + ((v78 + 1) << 6);
    v81 = v6;
  }
  else
  {
    v6 = 0;
    v82 = v5;
  }
  if ( v5 >= 0x38 )
    v7 = 128;
  else
    v7 = 64;
  v8 = v7 - v5;
  v9 = 8 * (v6 + v5);
  if ( v5 >= 0x38 )
    v10 = 2;
  else
    v10 = 1;
  if ( v5 >= 0x38 )
    v11 = 31;
  else
    v11 = 15;
  if ( v5 >= 0x38 )
    v12 = 125;
  else
    v12 = 61;
  if ( v5 >= 0x38 )
    v13 = 126;
  else
    v13 = 62;
  if ( v5 >= 0x38 )
    v14 = 127;
  else
    v14 = 63;
  memset((char *)dest + v5, 0, v8);
  *((_BYTE *)dest + v82) = 0x80;
  *((_BYTE *)dest + v14) = v9;
  *((_BYTE *)dest + v13) = BYTE1(v9);
  *((_BYTE *)dest + v12) = BYTE2(v9);
  LOBYTE(dest[v11]) = HIBYTE(v9);
  sha256_transf((int)&v81, dest, v10);
  v15 = v85;
  v16 = WORD2(v85);
  v17 = HIDWORD(v86);
  v18 = v86;
  v19 = v87;
  v20 = BYTE3(v85);
  v21 = v88;
  v22 = HIBYTE(v85);
  v23 = BYTE3(v86);
  v24 = HIBYTE(v86);
  v25 = BYTE6(v85);
  *a3 = HIBYTE(v84) | (unsigned __int16)(BYTE2(v84) << 8) | (BYTE1(v84) << 16) & 0xFFFFFF | ((unsigned __int8)v84 << 24);
  v26 = v89;
  a3[1] = v20 | (unsigned __int16)(BYTE2(v15) << 8) | (BYTE1(v15) << 16) & 0xFFFFFF | ((unsigned __int8)v15 << 24);
  a3[2] = (unsigned __int16)(v22 | (v25 << 8)) | (HIBYTE(v16) << 16) & 0xFFFFFF | ((unsigned __int8)v16 << 24);
  result = v24 | (unsigned __int16)(BYTE2(v17) << 8) | (BYTE1(v17) << 16) & 0xFFFFFF | ((unsigned __int8)v17 << 24);
  a3[3] = v23 | (unsigned __int16)(BYTE2(v18) << 8) | (BYTE1(v18) << 16) & 0xFFFFFF | ((unsigned __int8)v18 << 24);
  a3[4] = result;
  a3[5] = HIBYTE(v19)
        | (unsigned __int16)(BYTE2(v19) << 8)
        | (BYTE1(v19) << 16) & 0xFFFFFF
        | ((unsigned __int8)v19 << 24);
  a3[6] = HIBYTE(v21)
        | (unsigned __int16)(BYTE2(v21) << 8)
        | (BYTE1(v21) << 16) & 0xFFFFFF
        | ((unsigned __int8)v21 << 24);
  a3[7] = HIBYTE(v26)
        | (unsigned __int16)(BYTE2(v26) << 8)
        | (BYTE1(v26) << 16) & 0xFFFFFF
        | ((unsigned __int8)v26 << 24);
  return result;
}
