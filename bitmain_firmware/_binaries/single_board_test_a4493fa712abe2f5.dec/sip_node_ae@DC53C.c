int __fastcall sip_node_ae(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  _DWORD *v8; // r5
  int v9; // r4
  unsigned int v10; // r1
  unsigned int v11; // r6
  unsigned int v12; // r8
  unsigned int v13; // r3
  unsigned int v14; // lr
  __int64 v15; // kr20_8
  unsigned int v16; // r9
  int v17; // r11
  int v18; // r0
  bool v19; // cf
  unsigned int v20; // r2
  int v21; // r8
  unsigned int v22; // r3
  unsigned int v23; // r11
  unsigned __int64 v24; // kr28_8
  unsigned int v25; // r10
  unsigned int v26; // r7
  unsigned int v27; // r8
  int v28; // r12
  unsigned int v29; // lr
  int v30; // r11
  __int64 v31; // r8
  int v32; // r6
  unsigned int v33; // kr0C_4
  unsigned int v34; // r1
  unsigned int v35; // r3
  unsigned int v36; // r0
  __int64 v37; // r10
  int v38; // r7
  unsigned int v39; // r2
  int v40; // r12
  int v41; // r0
  unsigned int v42; // kr38_4
  unsigned int v43; // r7
  __int64 v44; // kr40_8
  unsigned int v45; // r2
  unsigned int v46; // r12
  int v47; // r4
  int v48; // r1
  int v49; // r6
  int v50; // r4
  unsigned int v51; // r0
  __int64 v52; // r2
  unsigned int v53; // kr48_4
  unsigned int v54; // r1
  unsigned int v55; // r6
  int v56; // r7
  unsigned int v57; // r12
  int v58; // lr
  __int64 v59; // r2
  unsigned int v60; // r6
  int v61; // r1
  unsigned int v62; // lr
  int v63; // r0
  unsigned int v64; // r4
  unsigned int v65; // r12
  int v66; // r1
  unsigned int v67; // r4
  unsigned int v68; // lr
  unsigned int v69; // r0
  unsigned int v70; // r12
  __int64 v71; // r6
  unsigned int v72; // r0
  unsigned int v73; // lr
  __int64 v74; // r8
  unsigned int v75; // lr
  unsigned int v76; // r1
  unsigned __int64 v77; // kr18_8
  unsigned int v78; // r12
  unsigned int v79; // r4
  int v80; // r0
  unsigned __int64 v81; // kr30_8
  unsigned int v82; // r4
  unsigned int v83; // r12
  unsigned int v84; // kr58_4
  unsigned int v85; // lr
  unsigned int v86; // r4
  unsigned __int64 v87; // kr60_8
  int v88; // kr14_4
  unsigned int v89; // r12
  int v90; // r4

  v8 = &qword_3B5480[a1];
  v9 = a7 | (2 * a6);
  v10 = (unsigned __int64)(a3 + a2) >> 32;
  v11 = a3 + a2;
  v12 = (((_DWORD)a3 << 13) | (HIDWORD(a3) >> 19)) ^ (a3 + a2);
  v13 = (a3 >> 19) ^ v10;
  v14 = (((v9 ^ (unsigned int)a5) << 16) | HIWORD(HIDWORD(a5))) ^ ((v9 ^ a5) + a4);
  v15 = (a5 ^ (unsigned int)v9) + a4;
  v16 = ((HIDWORD(a5) << 16) | ((v9 ^ (unsigned int)a5) >> 16)) ^ HIDWORD(v15);
  v17 = (v12 << 17) | (v13 >> 15);
  v18 = (v16 << 21) | (v14 >> 11);
  v19 = __CFADD__((_DWORD)v15, v12);
  v20 = v15 + v12;
  v21 = (v13 << 17) | (v12 >> 15);
  v22 = v13 + v19 + HIDWORD(v15);
  v23 = v17 ^ v20;
  v24 = __PAIR64__(v11, v10) + __PAIR64__(v16, v14);
  v25 = ((v14 << 21) | (v16 >> 11)) ^ (v10 + v14);
  v26 = v18 ^ ((__PAIR64__(v11, v10) + __PAIR64__(v16, v14)) >> 32);
  v27 = v21 ^ v22;
  v28 = (v23 << 13) | (v27 >> 19);
  v19 = __CFADD__(v10 + v14, v23);
  v29 = v10 + v14 + v23;
  v30 = (v27 << 13) | (v23 >> 19);
  LODWORD(v31) = v27 + v19 + HIDWORD(v24);
  v32 = ((v18 ^ HIDWORD(v24)) << 16) | HIWORD(v25);
  v33 = v22;
  v34 = v28 ^ v29;
  v35 = ((v25 << 16) | HIWORD(v26)) ^ (v22 + v25);
  v36 = (__PAIR64__(v20, v33) + __PAIR64__(v26, v25)) >> 32;
  LODWORD(v37) = v33 + v25;
  HIDWORD(v37) = v30 ^ v31;
  HIDWORD(v31) = v32 ^ v36;
  v38 = (v28 ^ v29) << 17;
  v39 = (v35 << 21) | ((v32 ^ v36) >> 11);
  v40 = ((v32 ^ v36) << 21) | (v35 >> 11);
  v42 = v37 + v34;
  v41 = (v37 + __PAIR64__(v36, v34)) >> 32;
  v43 = (v38 | (HIDWORD(v37) >> 15)) ^ (v37 + v34);
  v44 = v31 + __PAIR64__(v29, v35);
  v45 = v39 ^ (v31 + v35);
  v46 = v40 ^ ((v31 + __PAIR64__(v29, v35)) >> 32);
  HIDWORD(v37) = ((HIDWORD(v37) << 17) | (v34 >> 15)) ^ v41;
  v47 = v9 ^ (v31 + v35);
  v48 = (v43 << 13) | (HIDWORD(v37) >> 19);
  HIDWORD(v31) = (v45 << 16) | HIWORD(v46);
  LODWORD(v31) = (HIDWORD(v37) << 13) | (v43 >> 19);
  v49 = (v46 << 16) | HIWORD(v45);
  v19 = __CFADD__(v47, v43);
  v50 = v47 + v43;
  HIDWORD(v37) += v19 + HIDWORD(v44);
  v53 = (v41 ^ 0xFF) + v45;
  v51 = (__PAIR64__(v42, v41 ^ 0xFFu) + __PAIR64__(v46, v45)) >> 32;
  LODWORD(v52) = v53;
  v54 = v48 ^ v50;
  HIDWORD(v31) ^= v53;
  HIDWORD(v52) = v31 ^ HIDWORD(v37);
  v55 = v49 ^ v51;
  LODWORD(v37) = (v54 << 17) | (((unsigned int)v31 ^ HIDWORD(v37)) >> 15);
  v56 = (HIDWORD(v31) << 21) | (v55 >> 11);
  v57 = (((unsigned int)v31 ^ HIDWORD(v37)) << 17) | (v54 >> 15);
  v58 = (v55 << 21) | (HIDWORD(v31) >> 11);
  v59 = v52 + __PAIR64__(v51, v54);
  v19 = __CFADD__(HIDWORD(v37), HIDWORD(v31));
  HIDWORD(v31) += HIDWORD(v37);
  HIDWORD(v37) = v56 ^ HIDWORD(v31);
  LODWORD(v37) = v37 ^ v59;
  v60 = v55 + v19 + v50;
  v61 = v57 ^ HIDWORD(v59);
  v62 = v58 ^ v60;
  v63 = (v57 ^ HIDWORD(v59)) << 13;
  v64 = ((_DWORD)v37 << 13) | ((v57 ^ HIDWORD(v59)) >> 19);
  LODWORD(v31) = ((v56 ^ HIDWORD(v31)) << 16) | HIWORD(v62);
  v65 = (v62 << 16) | (((unsigned int)v56 ^ HIDWORD(v31)) >> 16);
  v19 = __CFADD__(HIDWORD(v31), (_DWORD)v37);
  HIDWORD(v31) += v37;
  v66 = v61 + v19 + v60;
  v19 = __CFADD__(HIDWORD(v59), HIDWORD(v37));
  HIDWORD(v59) += HIDWORD(v37);
  v67 = v64 ^ HIDWORD(v31);
  v68 = v62 + v19 + (_DWORD)v59;
  LODWORD(v31) = v31 ^ HIDWORD(v59);
  v69 = (v63 | ((unsigned int)v37 >> 19)) ^ v66;
  v70 = v65 ^ v68;
  HIDWORD(v71) = HIDWORD(v59) + v67;
  LODWORD(v37) = (v67 << 17) | (v69 >> 15);
  LODWORD(v59) = (v69 << 17) | (v67 >> 15);
  v72 = v69 + __CFADD__(HIDWORD(v59), v67) + v68;
  v73 = (v70 << 21) | ((unsigned int)v31 >> 11);
  LODWORD(v37) = v37 ^ (HIDWORD(v59) + v67);
  LODWORD(v71) = (((_DWORD)v31 << 21) | (v70 >> 11)) ^ (v66 + v31);
  v74 = __PAIR64__(v70, v66) + v31;
  v75 = v73 ^ HIDWORD(v74);
  v76 = (((unsigned int)v59 ^ v72) << 13) | ((unsigned int)v37 >> 19);
  v77 = v74 + __PAIR64__((unsigned int)v59 ^ v72, v37);
  HIDWORD(v59) = HIDWORD(v77);
  LODWORD(v74) = v77;
  v78 = (((_DWORD)v37 << 13) | (((unsigned int)v59 ^ v72) >> 19)) ^ v74;
  v79 = (((_DWORD)v71 << 16) | HIWORD(v75)) ^ (v72 + v71);
  HIDWORD(v37) = ((v75 << 16) | WORD1(v71)) ^ ((__PAIR64__(v75, v72) + v71) >> 32);
  HIDWORD(v74) = (v79 << 21) | (HIDWORD(v37) >> 11);
  LODWORD(v37) = (HIDWORD(v37) << 21) | (v79 >> 11);
  v81 = __PAIR64__(v75, v72) + v71 + __PAIR64__(v76 ^ HIDWORD(v59), v78);
  LODWORD(v59) = HIDWORD(v81);
  v80 = v81;
  v19 = __CFADD__(HIDWORD(v59), v79);
  v82 = HIDWORD(v59) + v79;
  HIDWORD(v71) = ((v78 << 17) | ((v76 ^ HIDWORD(v59)) >> 15)) ^ v80;
  HIDWORD(v74) ^= v82;
  HIDWORD(v37) += v19 + (_DWORD)v74;
  LODWORD(v71) = (((v76 ^ HIDWORD(v59)) << 17) | (v78 >> 15)) ^ v59;
  LODWORD(v37) = v37 ^ HIDWORD(v37);
  v83 = (HIDWORD(v74) << 16) | WORD1(v37);
  LODWORD(v74) = ((_DWORD)v37 << 16) | HIWORD(HIDWORD(v74));
  v84 = v82 + HIDWORD(v71);
  HIDWORD(v37) = (__PAIR64__(HIDWORD(v37), v82) + __PAIR64__(v71, HIDWORD(v71))) >> 32;
  v19 = __CFADD__((_DWORD)v59, HIDWORD(v74));
  HIDWORD(v74) += v59;
  v85 = (v71 >> 19) ^ (v82 + HIDWORD(v71));
  v86 = (((_DWORD)v71 << 13) | (HIDWORD(v71) >> 19)) ^ HIDWORD(v37);
  LODWORD(v37) = v37 + v19 + v80;
  LODWORD(v74) = v74 ^ v37;
  v87 = __PAIR64__(v37, HIDWORD(v74)) + __PAIR64__(v86, v85);
  v88 = v83 ^ HIDWORD(v74);
  HIDWORD(v71) = ((v85 << 17) | (v86 >> 15)) ^ (HIDWORD(v74) + v85);
  LODWORD(v71) = ((_DWORD)v74 << 21) | ((v83 ^ HIDWORD(v74)) >> 11);
  v89 = ((v88 << 21) | ((unsigned int)v74 >> 11)) ^ (HIDWORD(v37) + v88);
  v8[25] = HIDWORD(v74) + v85;
  LODWORD(v71) = v71 ^ ((__PAIR64__(v84, HIDWORD(v37)) + __PAIR64__(v74, v88)) >> 32);
  v90 = ((v86 << 17) | (v85 >> 15)) ^ ((__PAIR64__(v37, HIDWORD(v74)) + __PAIR64__(v86, v85)) >> 32);
  v8[24] = HIDWORD(v87);
  v8[16] = v89;
  v8[17] = v71;
  v8[1] = (__PAIR64__(v84, HIDWORD(v37)) + __PAIR64__(v74, v88)) >> 32;
  v8[9] = v90;
  *v8 = HIDWORD(v37) + v88;
  v8[8] = HIDWORD(v71);
  return (((HIDWORD(v71) ^ v89 ^ (HIDWORD(v37) + v88) ^ HIDWORD(v87)) << 17)
        | ((v90 ^ (unsigned int)v71 ^ ((__PAIR64__(v84, HIDWORD(v37)) + __PAIR64__(v74, v88)) >> 32) ^ (unsigned int)v87) >> 15))
       & 0x1FFFFFFF;
}
